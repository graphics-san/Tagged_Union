#pragma once

#include <cstddef>
#include <cstdint>

namespace {
    template<uint64_t max_size, bool is_signed = false>
    auto Choose_Integer_Type_From_Size_func() {

        if constexpr(!is_signed) {
            if constexpr(max_size <= UINT8_MAX) {
                return uint8_t{};
            }
            else if constexpr(max_size <= UINT16_MAX) {
                return uint16_t{};
            }
            else if constexpr(max_size <= UINT32_MAX) {
                return uint32_t{};
            }
            else if constexpr(max_size <= UINT64_MAX) {
                return uint64_t{};
            }
        } else {
            if constexpr(max_size <= INT8_MAX) {
                return int8_t{};
            }
            else if constexpr(max_size <= INT16_MAX) {
                return int16_t{};
            }
            else if constexpr(max_size <= INT32_MAX) {
                return int32_t{};
            }
            else if constexpr(max_size <= INT64_MAX) {
                return int64_t{};
            }
        }

    }
}

// evaluates to the smallest possible integer type that can contain the value max_size
template<uint64_t max_size, bool is_signed = false>
using Choose_Integer_Type_From_Size = decltype(Choose_Integer_Type_From_Size_func<max_size, is_signed>());