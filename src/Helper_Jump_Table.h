#pragma once
#include <cstddef>
#include <array>

template<typename...Ts>
class Tagged_Union;

template<typename T>
struct Helper_Jump_Table;
/*
template<template<class...Ts>class func_wrapper, typename T>
struct Helper_Jump_Table<> {
    using member_func_t = decltype(func_wrapper<T>::m_func);

    template<class U, typename return_t, typename...arg_ts>
            using
};*/



template<typename T, typename U>
struct switch_member_function_class_t;




template<class func_wrapper, class new_t, typename return_t, typename...arg_ts>
struct switch_member_function_class_t<return_t (func_wrapper::*)(arg_ts...), new_t> {
    using type = return_t (new_t::*)(arg_ts...);
};

template<typename old_t, typename new_t>
using switch_member_function_class = typename switch_member_function_class_t<std::remove_cv<old_t>, new_t>::type;
