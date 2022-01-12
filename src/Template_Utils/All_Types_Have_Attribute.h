#pragma once

#include "Member_Functions_Have_Same_Signature.h"

// where attribute_wrapper is a class with a static variable template "value" of type bool that takes two type template parameters.
template<typename attribute_wrapper, typename T, typename U, typename...Ts>
constexpr bool all_types_have_attribute_func() {
    if constexpr(sizeof...(Ts) == 0) {
        return attribute_wrapper::template value<T, U>;
    }
    else {
        return attribute_wrapper::template value<T, U> && all_types_have_attribute_func<attribute_wrapper, U, Ts...>();
    }
}

template<typename attribute_wrapper, typename...Ts>
constexpr bool all_types_have_attribute_v = all_types_have_attribute_func<attribute_wrapper, Ts...>();

template<typename func_wrapper>
struct tagged_union_funcs_have_same_signature {
            template<typename T, typename U>
            static constexpr bool value = member_functions_have_same_signature_v<func_wrapper::template m_func<T>, func_wrapper::template m_func<U>>;
};

template<typename func_wrapper, typename...Ts>
constexpr bool all_tagged_union_funcs_have_same_signature_v = all_types_have_attribute_v<tagged_union_funcs_have_same_signature<func_wrapper>, Ts...>;

template<typename var_wrapper>
struct tagged_union_member_vars_have_same_type {
    template<typename T, typename U>
    static constexpr bool value = std::is_same_v<decltype(var_wrapper::template m_func<T>), decltype(var_wrapper::template m_func<U>)>;
};

template<typename var_wrapper, typename...Ts>
constexpr bool all_tagged_union_member_vars_have_same_type = all_types_have_attribute_v<tagged_union_member_vars_have_same_type<var_wrapper>, Ts...>;

