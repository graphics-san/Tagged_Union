#pragma once

#include "Parameter_Pack_For_Each.h"

#include<chrono>
#include<thread>

extern int val;

struct Foo {
    void do_stuff(const char* says) {
        std::cout << "Foo says " << says;
    }
    void work (int i) {
       // x+=i;

    }
    void sleep(int time) const {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*1ns);
    }

    unsigned int x;
};

struct Bar {
    void do_stuff(const char* says) {
        std::cout << "Bar says " << says;
    }
    long long x;
    void work (int i) {
       // x+=i*2;

    }
    void sleep(int time) const {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*2ns);
    }
};

struct Baz {
    void do_stuff(const char* says) {
        std::cout << "Baz says " << says;
    }
    void work (int i) {
        //x+=i*3;

    }
    void sleep(int time) const {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*3ns);
    }
    long x;

};

struct Um {
    void do_stuff(const char* says) {
        std::cout << "Um says " << says;
    }
    void work (int i) {
        //x/=i*4;

    }
    void sleep(int time) const {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*4ns);
    }
    unsigned short x;

};

struct Uhh {
    void do_stuff(const char* says) {
        std::cout << "Uhh says " << says;
    }
    void work (int i) {
        //x/=i*5;

    }
    void sleep(int time) const {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*5ns);
    }
    unsigned char x;

};
