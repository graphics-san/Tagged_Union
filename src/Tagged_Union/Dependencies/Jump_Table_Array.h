#pragma once

#include<cstddef>
#include<iostream>

enum Jump_Table_Mode {
    MEMBER_FUNCTION = 1,
    MEMBER_VARIABLE = 3,
    FREE_FUNCTION = 5,
};

/*This class is for Tagged_Union's jump tables (member functions, member variables, and free functions).
 It's defined recursively because it needs to be programmatically initialized at compile time.
 */

template<typename Tagged_Union_T, typename Func_Wrapper, Jump_Table_Mode mode, typename...Arg_Ts> // TODO rename func_wrapper to just wrapper
class Jump_Table_Array_Base {
protected:
    template<int _mode, std::size_t _index>
    struct helper_switch;

    template<std::size_t _index>
    struct helper_switch<MEMBER_FUNCTION, _index> {
        static constexpr auto val = &Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, _index, Arg_Ts...>;
    };
    template<std::size_t _index>
    struct helper_switch<MEMBER_VARIABLE, _index> {
        static constexpr auto val = &Tagged_Union_T::template get_member_var_from_index_internal<Func_Wrapper, _index>;
    };
    template<std::size_t _index>
    struct helper_switch<FREE_FUNCTION, _index> {
        static constexpr auto val = &Tagged_Union_T::template execute_free_func_from_index_internal<Func_Wrapper, _index, Arg_Ts...>;

    };
    

    // returns the correct tagged union func (get_member_var or get_member_func) based on mode
    template<std::size_t index>                                                     /// still don't understand why below didn't work
    static constexpr auto tagged_union_func = helper_switch<mode, index>::val; /*[]{
        if constexpr(mode == MEMBER_FUNCTION) {
            return &Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, index, Arg_Ts...>;
            }
        else if(mode == MEMBER_VARIABLE) {  // for some reason this branch is being taken when mode == FREE_FUNCTION. Compiles without issues when this case is omitted (don't know if it works though)
                return &Tagged_Union_T::template get_member_var_from_index_internal<Func_Wrapper, index>;
            }
        else { //mode == FREE_FUNCTION
            return &Tagged_Union_T::template execute_free_func_from_index_internal<Func_Wrapper, index, Arg_Ts...>;
        }
        }();*/

    using T = decltype(tagged_union_func<0>); // all functions will have the same type, so any of them will work here
};

template<typename Tagged_Union_T, typename Func_Wrapper, std::size_t N, std::size_t I, Jump_Table_Mode mode, typename...Arg_Ts>
class Jump_Table_Array : Jump_Table_Array_Base<Tagged_Union_T, Func_Wrapper, mode, Arg_Ts...> {

    using Jump_Table_Array_Base_t = Jump_Table_Array_Base<Tagged_Union_T, Func_Wrapper, mode, Arg_Ts...>;

    using T = typename Jump_Table_Array_Base_t ::T;


    T head_val;
    Jump_Table_Array<Tagged_Union_T, Func_Wrapper, N - 1, I + 1, mode, Arg_Ts...> tail_vals;

public:

    constexpr T& operator[](std::size_t index) const{
        return *((&head_val) + index);
    }

    constexpr Jump_Table_Array() : head_val(Jump_Table_Array_Base_t::template tagged_union_func<I>), tail_vals() {}
};

template<typename Tagged_Union_T, typename Func_Wrapper, std::size_t I, Jump_Table_Mode mode, typename...Arg_Ts>
class Jump_Table_Array<Tagged_Union_T, Func_Wrapper, 1, I, mode, Arg_Ts...> : Jump_Table_Array_Base<Tagged_Union_T, Func_Wrapper, mode, Arg_Ts...> {
    typename Jump_Table_Array_Base<Tagged_Union_T, Func_Wrapper, mode, Arg_Ts...>::T val;

    using Jump_Table_Array_Base_t = Jump_Table_Array_Base<Tagged_Union_T, Func_Wrapper, mode, Arg_Ts...>;

public:
    constexpr Jump_Table_Array() : val(Jump_Table_Array_Base_t::template tagged_union_func<I>) {}

};