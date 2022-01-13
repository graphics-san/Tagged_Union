#pragma once

template<typename T, typename U>
struct member_functions_have_same_signature_helper {
    static constexpr bool value = false;
};

template<class T, class U, typename return_t, typename...arg_ts>
struct member_functions_have_same_signature_helper <return_t(T::*)(arg_ts...), return_t(U::*)(arg_ts...)> {
    static constexpr bool value = true;
};

template<class T, class U, typename return_t, typename...arg_ts>
struct member_functions_have_same_signature_helper <return_t(T::*)(arg_ts...) const, return_t(U::*)(arg_ts...) const> {
    static constexpr bool value = true;
};

template<auto V, auto W>
constexpr bool member_functions_have_same_signature_v = member_functions_have_same_signature_helper<decltype(V), decltype(W)>::value;

template<auto val1, auto val2, auto...vals>
constexpr bool all_member_functions_have_same_signature_helper_func() {
    if constexpr(sizeof...(vals) == 0) {
        return member_functions_have_same_signature_v<val1, val2>;
    }
    else {
        return member_functions_have_same_signature_v<val1, val2> && all_member_functions_have_same_signature_helper_func<val2, vals...>();
    }
}

template<auto...vals>
constexpr bool all_member_functions_have_same_signature_v = all_member_functions_have_same_signature_helper_func<vals...>();

template<typename T, typename V>
struct member_variables_have_same_type;

template<class A, class B, typename T, typename V>
struct member_variables_have_same_type<T A::*, V B::*> {
    static constexpr bool value = std::is_same_v<T,V>;
};


template<typename T, typename V>
static constexpr bool member_variables_have_same_type_v = member_variables_have_same_type<std::remove_const_t<T>, std::remove_const_t<V>>::value;