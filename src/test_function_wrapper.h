#include <cstddef>
#include <iostream>

template<typename T, std::size_t N>
struct test_function_wrapper {
    static void execute() {
        std::cout << typeid(T).name();
        std::cout << N << '\n';
    }
};