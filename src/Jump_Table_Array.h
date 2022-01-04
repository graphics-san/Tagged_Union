#pragma once


#include <cstddef>
#include"Choose_Integer_Type_From_Size.h"

template<typename Tagged_Union_T, typename Func_Wrapper, std::size_t N, typename...Arg_Ts>
class Jump_Table_Array {
    using uint_t = Choose_Integer_Type_From_Size<N>;
    using T = decltype(&Tagged_Union_T::template execute_func_from_index_internal<Func_Wrapper, 0, Arg_Ts...>);
    T data[N];
    const T& operator[](uint_t index) const {
        return data[index];
    }

    template<typename tagged_union_t, typename func_wrapper, uint_t current_pos>
    constexpr void fill() {
        data[current_pos] = &tagged_union_t::template execute_func_from_index_internal<func_wrapper, current_pos, Arg_Ts...>;
        if constexpr(current_pos != N) {
            fill<func_wrapper, current_pos+1>();
        }
    }

public:

    constexpr Jump_Table_Array () {
        fill<Tagged_Union_T, Func_Wrapper, 0>();
    }

/*
    template<typename tagged_union_t, typename func_wrapper, std::size_t size, typename...arg_ts>
    static Jump_Table_Array Make_Jump_Table() {
        return Jump_Table_Array<tagged_union_t, func_wrapper, size, arg_ts...>();
    }*/
};

