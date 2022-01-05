#pragma once

#include<chrono>
#include<thread>

#include "../Misc_Utils/Stack_Buffer.h"

#define GENERATE_STRUCT(NAME, MEMBER_VARIABLE_TYPE, UNIQUE_VALUE) struct NAME  { \
                  void do_stuff(const char* says) {\
                    std::cout << "NAME says " << says;\
                    }\
                        \
                    \
                    void sleep(int time) const {\
                        using namespace std::chrono_literals;\
                        std::this_thread::sleep_for(x*time*UNIQUE_VALUE*1ns);\
                    }                                                            \
                    MEMBER_VARIABLE_TYPE x;                                                             \
};

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

    std::string concat(std::string a, std::string b) {
        return "I am foo " + a + b + ' ' + std::to_string(x);
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

    std::string concat(std::string a, std::string b) {
        return "I am bar " + a + b + ' ' + std::to_string(x);
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
    //Stack_Buffer<30> needlessly_big_member;


};

