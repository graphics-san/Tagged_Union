#pragma once

#include <cstddef>
namespace {
    template<std::size_t desired_index, std::size_t current_pos, typename T, typename...Ts>
    auto get_type_from_index_func() { // I think this is correct
        if constexpr(current_pos == 0) {
            static_assert(!(desired_index > sizeof...(Ts)), "index out of range");
        }
        if constexpr(current_pos == desired_index) {
            return T{};
        }
        else {
            return get_type_from_index_func<desired_index, current_pos + 1, Ts...>();
        }
    }
}

template<std::size_t desired_index, typename...Ts>
using Get_Type_From_Index = decltype(get_type_from_index_func<desired_index, 0, Ts...>());