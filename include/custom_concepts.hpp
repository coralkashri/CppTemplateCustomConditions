/* Created by Koral Kashri - Free to use, share, and extend. */

#ifndef CPP_TEMPLATE_CUSTOM_CONDITIONS_CUSTOM_CONCEPTS_HPP
#define CPP_TEMPLATE_CUSTOM_CONDITIONS_CUSTOM_CONCEPTS_HPP

#include <iostream>
#include <type_traits>

namespace std {
    // Stringable concept helper
    inline string to_string(string &&val) {
        return val;
    }
}

namespace custom_concepts {
    template <typename T>
    concept ToStringable = requires(T t) {
        { std::to_string(t) };
    };

    template <typename T>
    concept Stringable = requires(T t) {
        { (std::string)(t) };
    };

    template <typename T>
    concept String = std::is_base_of_v<std::basic_string, T>;

    template <typename T>
    concept StringOrStringable = ToStringable<T> || Stringable<T> || String<T>;
}

#endif
