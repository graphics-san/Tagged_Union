#include<type_traits>

namespace {
    template<typename T, typename first_t, typename...rest_ts>
    struct pack_contains_type_t {
        static constexpr bool value = pack_contains_type_t<T, rest_ts...>::value;
    };

    template<typename T, typename...rest_ts>
    struct pack_contains_type_t<T, T, rest_ts...> {
        static constexpr bool value = true;
    };

    template<typename T, typename U>
    struct pack_contains_type_t<T, U> {
        static constexpr bool value = false;
    };

    template<typename T>
    struct pack_contains_type_t<T, T> {
        static constexpr bool value = true;
    };
}

template<typename T, typename...Ts>
constexpr bool pack_contains_type_v = pack_contains_type_t<T, Ts...>::value;