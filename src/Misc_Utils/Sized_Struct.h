#pragma once

#include <cstddef>

template<std::size_t bytes>
class Sized_Struct {
    char head_val;
    Sized_Struct<bytes - 1> tail_vals;
};

template<>
class Sized_Struct<1> {
    char val;
};