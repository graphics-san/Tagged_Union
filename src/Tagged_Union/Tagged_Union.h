#pragma once

#include <variant>
#include <iostream>

#include "../Template_Utils/Get_Type_Location_In_Pack.h"
#include "../Template_Utils/Choose_Integer_Type_From_Size.h"
#include "Dependencies/My_Union.h"
#include "../Template_Utils/Get_Type_From_Index.h"
#include "Dependencies/Jump_Table_Array.h"
#include "../Template_Utils/Pack_Contains_Type.h"

#define TAGGED_UNION_ENABLE_MEMBER_FUNC(FUNC_NAME) struct FUNC_NAME { \
        template<typename T> \
        static constexpr auto m_func = &T::FUNC_NAME; \
    };

#define TAGGED_UNION_ENABLE_MEMBER_VAR(VAR_NAME) struct VAR_NAME { \
        template<typename T> \
        static constexpr auto m_var = &T::VAR_NAME; \
    };

template<typename...Ts>
class Tagged_Union {
private:

    template<typename T, typename U, std::size_t N,std::size_t I, Jump_Table_Mode mode,  typename...Arg_Ts>
    friend class Jump_Table_Array;

    template<typename Tagged_Union_T, typename Func_Wrapper, Jump_Table_Mode mode, typename...Arg_Ts>
    friend class Jump_Table_Array_Base;


    using uint_type = Choose_Integer_Type_From_Size<sizeof...(Ts)>; // use the smallest possible uint type for tag

    template<typename func_wrapper, typename...Arg_Ts>
    static constexpr auto member_function_jump_table = Jump_Table_Array<Tagged_Union, func_wrapper, sizeof...(Ts), 0, MEMBER_FUNCTION, Arg_Ts...>();

    template<typename var_wrapper> // TODO: implement. Will require changes to Jump_Table_Array
    static constexpr auto member_variable_jump_table = Jump_Table_Array<Tagged_Union, var_wrapper, sizeof...(Ts), 0, MEMBER_VARIABLE>(); // Note, omitted Arg_Ts...

    uint_type tag;
    My_Union<Ts...> m_union;

    template<typename func, uint_type index, typename U, typename...Us, typename...Arg_Ts>
    void execute_func_internal(Arg_Ts...args) {
        if(index == tag) {
            ((m_union.template get<U>()).*(func::template m_func<U>))(args...);
            return;
        }
        if constexpr(sizeof...(Us) != 0) {
            execute_func_internal<func, index+1, Us...>(args...);
        }
    }


public:
    template<typename func, typename...Arg_Ts>
    auto execute_func(Arg_Ts...args) { // Todo: enable pass by reference
        return execute_func_internal<func, 0, Ts...>(args...);
    }

    template<typename var>
    auto get_member_var() {
        //TODO
    }

    template<typename func_wrapper, typename...Arg_Ts>
    auto execute_func_jump_table(Arg_Ts...args) {
        return (this->*(member_function_jump_table<func_wrapper, Arg_Ts...>[tag]))(args...);
    }

    template<typename T>
    requires pack_contains_type_v<T, Ts...>
    Tagged_Union(T t) {
        tag = (uint_type)get_type_location_in_pack<T, Ts...>;
        m_union = t;
    }

    Tagged_Union() = default;

private:
    template<typename func_wrapper, uint_type index, typename...Arg_Ts>
    auto execute_func_from_index_internal(Arg_Ts...args) {
        using U = Get_Type_From_Index<index, Ts...>;
        return ((m_union.template get<U>()).*(func_wrapper::template m_func<U>))(args...);
    }

    template<typename var_wrapper, uint_type index>
    auto get_member_var_from_index_internal() {
        using U = Get_Type_From_Index<index, Ts...>;
        return ((m_union.template get<U>()).*(var_wrapper::template m_func<U>));
    }
};
