#pragma once

#include <variant>
#include <iostream>

#include "../Template_Utils/Get_Type_Location_In_Pack.h"
#include "../Template_Utils/Choose_Integer_Type_From_Size.h"
#include "Dependencies/My_Union.h"
#include "../Template_Utils/Get_Type_From_Index.h"
#include "Dependencies/Jump_Table_Array.h"
#include "../Template_Utils/Pack_Contains_Type.h"
#include "Dependencies/Bad_Tagged_Union_Access.h"
#include "../Template_Utils/All_Types_Have_Attribute.h"

template<typename...Ts>
class Tagged_Union {
    template<typename Tagged_Union_T, typename Func_Wrapper, std::size_t N, std::size_t I, Jump_Table_Mode mode, typename...Arg_Ts>
    friend class ::Jump_Table_Array; // Why aren't my friend declarations working?

    template<typename Tagged_Union_T, typename Func_Wrapper, Jump_Table_Mode mode, typename...Arg_Ts>
    friend class ::Jump_Table_Array_Base;

    friend class Bad_Tagged_Union_Access;

    using uint_type = Choose_Integer_Type_From_Size<sizeof...(Ts)>; // use the smallest possible uint type for tag


    template<typename func_wrapper, typename...Arg_Ts>
    static constexpr auto member_function_jump_table = Jump_Table_Array<Tagged_Union, func_wrapper, sizeof...(Ts), 0, MEMBER_FUNCTION, Arg_Ts...>();

    template<typename var_wrapper>
    static constexpr auto member_variable_jump_table = Jump_Table_Array<Tagged_Union, var_wrapper, sizeof...(Ts), 0, MEMBER_VARIABLE>(); // Note: omitted Arg_Ts... because we dont' need them*/

    template<typename func_wrapper, typename...Arg_Ts>
    static constexpr auto free_function_jump_table = Jump_Table_Array<Tagged_Union, func_wrapper, sizeof...(Ts), 0, FREE_FUNCTION, Arg_Ts...>();


    uint_type tag;
    My_Union<Ts...> m_union;

    template<typename func_wrapper, uint_type index, typename...Arg_Ts> // TODO rename to execute_member_func...
    auto get_member_func_from_index_internal(Arg_Ts...args) { // TODO make this return auto&, in case function returns reference
        using U = get_type_from_index<index, Ts...>;
        return ((m_union.template get<U>()).*(func_wrapper::template member<U>))(args...);
    }

    template<typename var_wrapper, uint_type index>
    auto& get_member_var_from_index_internal() {
        using U = get_type_from_index<index, Ts...>;
        return ((m_union.template get<U>()).*(var_wrapper::template member<U>));
    }

    template<typename func_wrapper, uint_type index, typename...Arg_Ts>
    auto get_free_func_from_index_internal(Arg_Ts...args) {
        using U = get_type_from_index<index, Ts...>;
        return func_wrapper::execute((m_union.template get<U>()), args...);
    }

    template<typename func, uint_type index, typename U, typename...Us, typename...Arg_Ts>
    void execute_member_func__if_statement_impl_internal(Arg_Ts&&...args) {
        if(index == tag) {
            ((m_union.template get<U>()).*(func::template member<U>))(args...);
            return;
        }
        if constexpr(sizeof...(Us) != 0) {
            execute_member_func__if_statement_impl_internal<func, index + 1, Us...>(args...);
        }
    }

public:
    template<typename func, typename...Arg_Ts>
    auto execute_member_func__if_statement_impl(Arg_Ts&&...args) {
        return execute_member_func__if_statement_impl_internal<func, 0, Ts...>(args...);
    }

    template<typename var_wrapper>
    auto get_member_var() {
        static_assert(all_tagged_union_member_vars_have_same_type<var_wrapper, Ts...>, "Not all member variables of var_wrapper have the same type");
        return (this->*(member_variable_jump_table<var_wrapper>[tag]))();
    }

    //returns a mutable reference to var_wrapper
    template<typename var_wrapper>
    auto& get_member_var_ref() {
        static_assert(all_tagged_union_member_vars_have_same_type<var_wrapper, Ts...>, "Not all member variables of var_wrapper have the same type");
        return (this->*(member_variable_jump_table<var_wrapper>[tag]))();
    }

    template<typename func_wrapper, typename...Arg_Ts>
    auto execute_member_func(Arg_Ts&&...args) {
        static_assert(all_tagged_union_funcs_have_same_signature_v<func_wrapper, Ts...>, "Not all functions of func_wrapper have the same signature"); // TODO: discard the const so that the user can use const and non const functions interchangeably??
        return (this->*(member_function_jump_table<func_wrapper, Arg_Ts...>[tag]))(args...);
    }

    //expects a family of functions that have identical signatures except for their first parameter, which must be a different type in Ts... .
    template<typename func_wrapper, typename...Arg_Ts>
    auto execute_free_func(Arg_Ts&&...args) {
        return (this->*(free_function_jump_table<func_wrapper, Arg_Ts...>[tag]))(args...);
    }

    template<typename T>
    Tagged_Union(T t) {
        static_assert(pack_contains_type_v<T, Ts...>, "Attemping to assign to union from type it doesn't contain");
        tag = (uint_type)get_type_location_in_pack<T, Ts...>;
        m_union = t;
    }

    template<typename T>
    T get() {
        static_assert(pack_contains_type_v<T, Ts...>, "Union does not contain requested type");
        if(get_type_location_in_pack<T, Ts...> != tag) {
            throw Bad_Tagged_Union_Access(get_type_location_in_pack<T, Ts...>, tag);
        }

        return m_union.template get<T>();
    }

    template<std::size_t I>
    auto get() {
        static_assert(I < sizeof...(Ts), "Tagged union get index out of bounds");
        if(I != tag) {
            throw Bad_Tagged_Union_Access(I, tag);
        }

        return m_union.template get<I>();
    }

    template<typename T>
    T unsafe_get() {
        static_assert(pack_contains_type_v<T, Ts...>, "Union does not contain requested type");
        return m_union.template get<T>();
    }

    template<std::size_t I>
    auto unsafe_get() {
        static_assert(I < sizeof...(Ts), "Tagged union get index out of bounds");
        return m_union.template get<I>();
    }

    Tagged_Union() = default;
};

/** Enables usage of a member variable or function called MEMBER_NAME.
 * It works by defining a struct, so keep that in mind when deciding where to place this.
 */
#define TAGGED_UNION_ENABLE_MEMBER(MEMBER_NAME)                      \
                                                                     \
struct MEMBER_NAME {                                                 \
        template<typename T>                                         \
        static constexpr auto member = &T::MEMBER_NAME;              \
    };

/** Enables usage of a free function called FUNCTION_NAME. However, unlike member functions, free function can't share a name with a class in the same namespace, so the macro defines the class is the namespace Tagged_Union_Free_Functions
 *
 */
#define TAGGED_UNION_ENABLE_FREE_FUNCTION(FUNCTION_NAME)                                \
namespace Tagged_Union_Free_Functions {                                                 \
    struct FUNCTION_NAME {                                                              \
        template<typename first_arg_t, typename...rest_arg_ts>                      \
        static auto execute(first_arg_t&& first_arg, rest_arg_ts&&...rest_args) {   \
            return ::FUNCTION_NAME(first_arg, rest_args...);                        \
        }                                                                           \
    };                                                                                  \
}
