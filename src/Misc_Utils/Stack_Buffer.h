#pragma once

#include <cstddef>

template<std::size_t bytes>
class Stack_Buffer {
    char head_val;
    Stack_Buffer<bytes-1> tail_vals;
};

template<>
class Stack_Buffer<1> {
    char val;
};