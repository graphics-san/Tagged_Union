#pragma once

#include<cstddef>
#include<iostream>

template<typename Tagged_Union_T, typename Func_Wrapper, std::size_t N, std::size_t I, typename...Arg_Ts>
struct probably_ub_array {
    using T = decltype(&Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, 0, Arg_Ts...>);
    T head_val;
    probably_ub_array<Tagged_Union_T, Func_Wrapper, N-1, I+1, Arg_Ts...> tail_vals;

    //todo readd ref
    constexpr T operator[](std::size_t index) const{
        return *((&head_val) + index);
    }

    constexpr probably_ub_array() : head_val(&Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, I, Arg_Ts...>), tail_vals() {}


};

template<typename Tagged_Union_T, typename Func_Wrapper, std::size_t I, typename...Arg_Ts>
struct probably_ub_array<Tagged_Union_T, Func_Wrapper, 1, I, Arg_Ts...> {
    using T = decltype(&Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, 0, Arg_Ts...>);
    T val;
    constexpr probably_ub_array() : val(&Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, I, Arg_Ts...>) {}

};