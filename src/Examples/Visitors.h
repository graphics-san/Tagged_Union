#pragma once

#include<iostream>

#include "Foo_Bar_Baz.h"


struct work_visitor {
    void operator()(Foo& x, int i)   { }
    void operator()(Bar& x, int i)   {}
    void operator()(Baz& x, int i)   {}
    void operator()(Um& x, int i)   {}
    void operator()(Uhh& x, int i)   {}
};

struct sleep_visitor {
    void operator()(Foo& x, int time)   { using namespace std::chrono_literals; /*std::this::sleep_for(x.x*time*1ns);*/ for(volatile unsigned int index = 0; index < x.x*1; index = index+1) {}}
    void operator()(Bar& x, int time)   { using namespace std::chrono_literals; /*std::this::sleep_for(x.x*time*2ns);*/for(volatile unsigned int index = 0; index < x.x*2; index = index+1) {} }
    void operator()(Baz& x, int time)   { using namespace std::chrono_literals; /*std::this::sleep_for(x.x*time*3ns);*/for(volatile unsigned int index = 0; index < x.x*3; index = index+1) {} }
    void operator()(Um& x, int time)   { using namespace std::chrono_literals; /*std::this::sleep_for(x.x*time*4ns);*/for(volatile unsigned int index = 0; index < x.x*4; index = index+1) {} }
    void operator()(Uhh& x, int time)   { using namespace std::chrono_literals; /*std::this::sleep_for(x.x*time*5ns);*/for(volatile unsigned int index = 0; index < x.x*5; index = index+1) {}}
};

struct print_visitor {
    void operator()(Foo&, const char* says)   { std::cout << "Foo says " << says;}
    void operator()(Bar&, const char* says)   {std::cout << "Bar says " << says; }
    void operator()(Baz&, const char* says)   {std::cout << "Baz says " << says;}
    void operator()(Um&, const char* says)   {std::cout << "Um says " << says;}
    void operator()(Uhh&, const char* says)   {std::cout << "Uhh says " << says;}
};