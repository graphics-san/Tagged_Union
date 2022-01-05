#pragma once

#include <iostream>

template<typename T>
std::ostream& print_progress_bar(T current_val, T max_val, unsigned int number_of_cells = 100) {
    std::cout << '[';
    for(unsigned int i = 0; i < number_of_cells; ++i) {
        if(((double)current_val / (double)max_val) >= ((double)(i+1) / (double)number_of_cells )) {
            std::cout << '#';
        }
        else{
            std::cout << '-';
        }

    }
    return std::cout << ']';
}