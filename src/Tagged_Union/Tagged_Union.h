#pragma once

#include <variant>
#include <iostream>
#include "../Get_Type_Location_In_Pack.h"
#include "../Parameter_Pack_For_Each.h"
#include "../Choose_Integer_Type_From_Size.h"
#include "../My_Union.h"
#include "../Get_Type_From_Index.h"
#include "../Helper_Jump_Table.h"
#include "../Jump_Table_Array.h"
#include "../Probably_UB_Array.h"

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

    using uint_type = Choose_Integer_Type_From_Size<sizeof...(Ts)>;

    template<typename func_wrapper> // keep an eye on the remove_cv
    using to_tagged_union_member_t = typename switch_member_function_class_t<std::remove_cv_t<decltype(func_wrapper::template m_func<get_type_from_index<0, Ts...>>)>, Tagged_Union>::type;


    template<typename func_wrapper, std::size_t size, std::size_t current_pos, auto& arr, typename...Arg_Ts>
    constexpr static std::array<to_tagged_union_member_t<func_wrapper>, size> make_jump_table_internal() {
        arr[current_pos] = &Tagged_Union::execute_func_from_index_internal<func_wrapper, current_pos, Arg_Ts...>;
        if constexpr(size != current_pos) {
            make_jump_table_internal<to_tagged_union_member_t<func_wrapper>, size, current_pos+1, arr, Arg_Ts...>();
        }
    }

    template<typename func_wrapper, std::size_t size, typename...Arg_Ts>
    constexpr static std::array<to_tagged_union_member_t<func_wrapper>, size> make_jump_table() {
        return make_jump_table_internal<func_wrapper, size, 0, std::array<to_tagged_union_member_t<func_wrapper>, size>(), Arg_Ts...>();
    }

    //TODO: just pass the arg ts as template parameter. The arg ts are either correct or it won't compile
   /* template<typename func_wrapper, typename...Arg_Ts>
    static constexpr std::array<to_tagged_union_member_t<func_wrapper>, sizeof...(Ts)> jump_table                                // any type in the pack is good, all the function signatures will be the same
        = make_jump_table<func_wrapper, sizeof...(Ts), Arg_Ts...>();*/

   template<typename func_wrapper, typename...Arg_Ts>
   static constexpr auto jump_table = probably_ub_array<Tagged_Union, func_wrapper, sizeof...(Ts), 0, Arg_Ts...>();



    //template<typename...Arg_Ts>
    //using jump_table_entry_t = void (Tagged_Union::*)(Arg_Ts...);

   // template<typename func>
    //static constexpr std::array<> jump_table = make_jump_table

    uint_type tag;
    My_Union<Ts...> u;

    template<typename func, uint_type index, typename U, typename...Us, typename...Arg_Ts>
    void execute_func_internal(Arg_Ts...args) {
        //constexpr jump_table_entry_t jump_table[sizeof...(Ts)] =
        if(index == tag) { // try implementing this as a jump table too
            ((u.template get<U>()).*(func::template m_func<U>))(args...);
            return;
        }
        if constexpr(sizeof...(Us) != 0) {
            execute_func_internal<func, index+1, Us...>(args...); // oh shiz passing the args over and over again probably isn't fast. nvm will probably get inlined
                                                                    // consider making const&?
        }
    }

public:
    template<typename func_wrapper, uint_type index, typename...Arg_Ts>
    void execute_func_from_index_internal(Arg_Ts...args) {
        using U = get_type_from_index<index, Ts...>;

        ((u.template get<U>()).*(func_wrapper::template m_func<U>))(args...);
    }
private:



    template<typename T, uint_type N>
    void for_each() {
        std::cout << T();
        if (tag == N) {
            std::cout << "tag == N == " << N << "\n";
        }
    }

public:
    template<typename func, typename...Arg_Ts>
    auto execute_func(Arg_Ts...args) {
        execute_func_internal<func, 0, Ts...>(args...);
    }

    template<typename var>
    auto get_member_var() {

    }


    template<typename func_wrapper, typename...Arg_Ts>
    void execute_func_jump_table(Arg_Ts...args) {
        (this->*(jump_table<func_wrapper, Arg_Ts...>[tag]))(args...); // AHAHHAHA
    }

    template<typename T>
    Tagged_Union(T t) {
        tag = (uint_type)get_type_location_in_pack<T, Ts...>;
        u = t;
    }

    Tagged_Union() = default;
};

//GENERATE_LOCAL_MEMBER_FUNCTION_WRAPPER_STRUCT(Tagged_Union, for_each)

/*
namespace {
    struct Tagged_Union__for_each_wrapper_t {
        template<typename T, std::size_t N, typename...Ts>
        static constexpr auto m_func = &Tagged_Union<Ts...>::template for_each<T, N>;
    };
}*/