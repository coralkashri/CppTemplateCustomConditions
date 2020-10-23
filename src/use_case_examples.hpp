#ifndef CPP_TEMPLATE_CUSTOM_CONDITIONS_USE_CASE_EXAMPLES_HPP
#define CPP_TEMPLATE_CUSTOM_CONDITIONS_USE_CASE_EXAMPLES_HPP

#include "template_conditions.hpp"

// Factorial
//template <int Number, bool = custom_conditions::general_compare_v<Number, 0, std::greater<>>>
template <int Number, bool = custom_conditions::is_bigger_than_v<Number, 0>>
struct Factorial {
    static constexpr long long value = 1;
};

template <int Number>
struct Factorial<Number, true> {
    static constexpr auto value = Number * Factorial<Number - 1>::value;
};

#endif