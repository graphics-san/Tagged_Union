#pragma once

#include<cstddef>
#include<iostream>

/*This class is for Tagged_Union's member function jump table.
 It's defined recursively because it needs to be programmatically initialized at compile time.
 */
template<typename Tagged_Union_T, typename Func_Wrapper, std::size_t N, std::size_t I, typename...Arg_Ts>
class Jump_Table_Array {

    using T = decltype(&Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, 0, Arg_Ts...>);
    T head_val;
    Jump_Table_Array<Tagged_Union_T, Func_Wrapper, N - 1, I + 1, Arg_Ts...> tail_vals;

public:
    //todo readd ref (T&)
    constexpr T operator[](std::size_t index) const{
        return *((&head_val) + index);
    }

    constexpr Jump_Table_Array() : head_val(&Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, I, Arg_Ts...>), tail_vals() {}
};

template<typename Tagged_Union_T, typename Func_Wrapper, std::size_t I, typename...Arg_Ts>
class Jump_Table_Array<Tagged_Union_T, Func_Wrapper, 1, I, Arg_Ts...> {
    using T = decltype(&Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, 0, Arg_Ts...>);
    T val;
public:
    constexpr Jump_Table_Array() : val(&Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, I, Arg_Ts...>) {}

};