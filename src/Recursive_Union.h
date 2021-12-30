#pragma once

#include <type_traits>

template<typename T, typename...Ts>
struct Recursive_Union {
    union {
        T head_val;
        Recursive_Union<Ts...> tail_vals;
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

    template<typename U>
    Recursive_Union& operator=(U val) {
        if constexpr(std::is_same_v<U, T>) {
            head_val = val;
            return *this;
        }
        else {
            return (tail_vals = val);
        }
    }

    template<typename U>
    Recursive_Union(U val) {
        if constexpr(std::is_same_v<U, T>) {
            head_val = val;
        }
        else {
            tail_vals = val;
        }
    }
};

template<typename T>
struct Recursive_Union<T> {
    T head_val;

    template<typename U>
    Recursive_Union(U val) {
        head_val(val);
    }

    template<typename U>
    U& get() {
            static_assert(std::is_same_v<T,U>, "Union does not contain specified type");
            return head_val;
        }
};

