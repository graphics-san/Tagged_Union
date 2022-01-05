#pragma once

#include <cstddef>
#include <type_traits>

template<typename T, std::size_t current_pos, typename U, typename...Ts>
constexpr std::size_t get_type_location_in_pack_func() {
    if constexpr(std::is_same_v<T,U>) {
        return current_pos;
    }
    if constexpr(sizeof...(Ts) != 0) {
        return get_type_location_in_pack_func<T, current_pos+1, Ts...>();
    }
    return -1;
}

template<typename T, typename...Ts>
std::size_t get_type_location_in_pack = get_type_location_in_pack_func<T, 0, Ts...>();