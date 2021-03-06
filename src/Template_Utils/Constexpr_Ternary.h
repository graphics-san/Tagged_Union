#pragma once

// returns A if cond, else B
template<bool cond, auto A, auto B> // cond is implicitly false
struct Constexpr_Ternary_Value_t;

template<auto A, auto B> // cond is implicitly false
struct Constexpr_Ternary_Value_t<false, A, B> {
    static constexpr auto value = B;
    static_assert(value!=B);
};

template<auto A, auto B>
struct Constexpr_Ternary_Value_t<true, A, B> {
    static constexpr auto value = A;
    //static_assert(value!=A);

};

template<bool cond, typename A, typename B> // cond is implicitly false
struct Constexpr_Ternary_Type_t {
    using type = B;
};

template<bool cond, auto A, auto B>
constexpr auto Constexpr_Ternary_Value_func() {
    if constexpr(cond) {
        return A;
    }
    else {
        return B;
    }
}

template<typename A, typename B> // TODO maybe just refactor into one name (don't distinguish between type and value)
struct Constexpr_Ternary_Type_t<true, A, B> {
    using type = A;
};


/*
template<bool cond, auto A, auto B>
constexpr auto constexpr_ternary_value_v = Constexpr_Ternary_Value_t<cond, A, B>::value;
*/

template<bool cond, auto A, auto B>
constexpr auto constexpr_ternary_value_v = Constexpr_Ternary_Value_func<cond, A, B>();