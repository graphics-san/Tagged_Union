#pragma once

template<typename T>
struct returns_void_t;

template<typename T, typename...Ts>
struct returns_void_t<T(Ts...)> {
    static constexpr bool value = false;
};

template<typename...Ts>
struct returns_void_t<void (Ts...)> {
    static constexpr bool value = true;
};


template<typename T>
constexpr bool returns_void = returns_void_t<T>::value;