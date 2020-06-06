/* Created by Korel Kashri - Free to use, share, and extend. */

#include <type_traits>

namespace custom_conditions {

    template<int Fst, int Snd, typename = void>
    struct is_bigger_than : std::false_type {
    };

    template<int Fst, int Snd>
    struct is_bigger_than<Fst, Snd, typename std::enable_if_t<(Fst > Snd), void>> : std::true_type {
    };

    template<int Fst, int Snd>
    constexpr bool is_bigger_than_v = is_bigger_than<Fst, Snd>::value;

}