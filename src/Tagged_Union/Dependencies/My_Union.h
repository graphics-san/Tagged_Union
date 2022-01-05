#pragma once

#include <type_traits>

template<typename T, typename...Ts>
struct My_Union {
    union {
        T head_val;
        My_Union<Ts...> tail_vals;
    };

    template<typename U>
    U& get() {
        if constexpr(std::is_same_v<U, T>) {
            return head_val;
        }
        else {
            return tail_vals.template get<U>();
        }
    }

    My_Union() = default;

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
};

