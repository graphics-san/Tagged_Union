#pragma once

#include <cstddef>

// executes func_wrapper::execute on every type in the pack
template<template<typename, std::size_t> class func_wrapper, std::size_t index, typename T, typename...Ts>
void for_each_in_pack() {
    func_wrapper<T, index>::execute();
    if constexpr(sizeof...(Ts) != 0) {
        for_each_in_pack<func_wrapper, index+1, Ts...>();
    }
}


#define GENERATE_LOCAL_MEMBER_FUNCTION_WRAPPER_STRUCT(CLASS, FUNC) namespace { \
struct CLASS##__##FUNC##_wrapper_t { \
    template<typename T, std::size_t N>                                                                                             \
    static constexpr auto m_func = &CLASS::FUNC<T,N>;                                                     \
};                                                                       \
}



class For_Each_In_Pack_t {
protected:

    template<typename func_wrapper, std::size_t index, typename T, typename...Ts>
    auto for_each_in_pack() {
        (this->*(func_wrapper::template m_func<T, index>))();
        if constexpr(sizeof...(Ts) != 0) {
            return for_each_in_pack<func_wrapper, index+1, Ts...>();
        }
    }
};

/*
//overload for index = 0
template<template<typename, std::size_t> class func_wrapper, typename T, typename...Ts>
void for_each_in_pack() {
    func_wrapper<T, 0>::execute();
    if(sizeof...(Ts) != 0) {
        for_each_in_pack<func_wrapper,1, Ts...>();
    }
}*/
