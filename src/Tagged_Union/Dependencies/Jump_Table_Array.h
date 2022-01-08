#pragma once

#include<cstddef>
#include<iostream>

enum Jump_Table_Mode {
    MEMBER_FUNCTION,
    MEMBER_VARIABLE
};

/*This class is for Tagged_Union's member jump tables.
 It's defined recursively because it needs to be programmatically initialized at compile time.
 */

template<typename Tagged_Union_T, typename Func_Wrapper, Jump_Table_Mode mode, typename...Arg_Ts>
class Jump_Table_Array_Base {
protected:

    // returns the correct tagged union func (get_member_var or get_member_func) based on mode
    template<std::size_t index>
    static constexpr auto tagged_union_func = []{
        if constexpr(mode == MEMBER_FUNCTION) {
            return &Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, index, Arg_Ts...>;
            }
        else {
                return &Tagged_Union_T::template get_member_var_from_index_internal<Func_Wrapper, index>;
            }
        }();

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