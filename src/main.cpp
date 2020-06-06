#include <iostream>
#include "use_case_examples.hpp"

int main() {
    std::cout << Factorial<5>::value << std::endl;

    return EXIT_SUCCESS;
}