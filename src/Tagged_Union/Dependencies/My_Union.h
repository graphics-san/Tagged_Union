#pragma once

#include <type_traits>
#include "Template_Utils/Get_Type_From_Index.h"

template<typename T, typename...Ts>
struct My_Union {
    union {
        T head_val;
        My_Union<Ts...> tail_vals;
    };

    My_Union() = default;

    template<typename U>
    U& get() {
        if constexpr(std::is_same_v<U, T>) {
            return head_val;
        }
        else {
            return tail_vals.template get<U>();
        }
    }


    template<typename U>
    My_Union& operator=(U val) {
        if constexpr(std::is_same_v<U, T>) {
            head_val = val;
            return *this;
        }
        else {
            tail_vals = val;
            return *this;
        }
    }

    template<typename U>
    My_Union(U val) {
        if constexpr(std::is_same_v<U, T>) {
            head_val = val;
        }
        else {
            tail_vals = val;
        }
    }

    template<std::size_t I, std::size_t current_pos = 0>
    auto get() {
        if constexpr(current_pos == 0) {
            static_assert(I < sizeof...(Ts) + 1, "Union get index out of bounds");
        }
        if constexpr(current_pos == I) {
            return head_val;
        }
        else{
            return tail_vals.template get<I, current_pos+1>();
        }
    }
};

template<typename T>
struct My_Union<T> {
    T head_val;

    template<typename U>
    My_Union(U val) {
        head_val = val;
    }

    My_Union() = default;

    template<typename U>
    U& get() {
            static_assert(std::is_same_v<T,U>, "Union does not contain specified type");
            return head_val;
        }

    template<std::size_t I, std::size_t current_pos>
    auto& get() {
        return head_val;
    }
};

