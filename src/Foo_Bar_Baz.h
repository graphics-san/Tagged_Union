#pragma once

#include "Parameter_Pack_For_Each.h"

struct Foo {
    void do_stuff(const char* says) {
        //std::cout << "Foo says " << says;
    }

    template<typename T, std::size_t N>
    void do_other_stuff() {

    }
};

struct Bar {
    void do_stuff(const char* says) {
        std::cout << "Bar says " << says;
    }
};

struct Baz {
    void do_stuff(const char* says) {
        std::cout << "Baz says " << says;
    }
};