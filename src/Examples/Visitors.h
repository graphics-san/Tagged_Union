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
    void operator()(Foo& x, int time)   { using namespace std::chrono_literals; std::this_thread::sleep_for(x.x*time*1ns); }
    void operator()(Bar& x, int time)   { using namespace std::chrono_literals; std::this_thread::sleep_for(x.x*time*2ns); }
    void operator()(Baz& x, int time)   { using namespace std::chrono_literals; std::this_thread::sleep_for(x.x*time*3ns); }
    void operator()(Um& x, int time)   { using namespace std::chrono_literals; std::this_thread::sleep_for(x.x*time*4ns); }
    void operator()(Uhh& x, int time)   { using namespace std::chrono_literals; std::this_thread::sleep_for(x.x*time*5ns); }
};

struct print_visitor {
    void operator()(Foo&, const char* says)   { std::cout << "Foo says " << says;}
    void operator()(Bar&, const char* says)   {std::cout << "Bar says " << says; }
    void operator()(Baz&, const char* says)   {std::cout << "Baz says " << says;}
    void operator()(Um&, const char* says)   {std::cout << "Um says " << says;}
    void operator()(Uhh&, const char* says)   {std::cout << "Uhh says " << says;}
};