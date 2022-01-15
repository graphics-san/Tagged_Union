#pragma once

#include <iostream>
#include<thread>
#include <chrono>

#include "Misc_Utils/Sized_Struct.h"

// TODO clean up this whole file

#define GENERATE_VIRTUAL_STRUCT(NAME, MEMBER_VARIABLE_TYPE, UNIQUE_VALUE) struct NAME  { \
                  void do_stuff(const char* says) override {\
                    std::cout << "NAME says " << says;\
                    }\
                        \
                    \
                    void sleep(int time) const override {\
                        using namespace std::chrono_literals;\
                        std::this_thread::sleep_for(x*time*UNIQUE_VALUE*1ns);\
                    }                                                            \
                    MEMBER_VARIABLE_TYPE x;                                                             \
};


struct Virtual_Base_Struct {
    virtual void do_stuff(const char* says) = 0;
    virtual void work(int) = 0;
    virtual void print() = 0;
    virtual void sleep(int) = 0;
};

struct virtual_Foo : Virtual_Base_Struct {
    void print() override {
        std::cout << x;
    }
    void work (int i) override {
       // x+=i;
    }
    void do_stuff(const char* says) override {
       std::cout << "Foo says " << says;
    }
    void sleep(int time) override {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*1ns);
    }

    virtual_Foo(unsigned int x) : x(x) {}

    unsigned int x;
};

struct virtual_Bar : Virtual_Base_Struct {
    void print() override {
        std::cout << x;
    }
    void work (int i) override {
        //x+=i*2;
    }
    void do_stuff(const char* says)  override {
        std::cout << "Bar says " << says;
    }
    void sleep(int time) override {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*2ns);
    }
    long long x;

    virtual_Bar(long long int x) : x(x) {}
};

struct virtual_Baz : Virtual_Base_Struct  {
    void print() override {
        std::cout << x;
    }
    void work (int i) override {
        //x+=i*3;
    }
    void do_stuff(const char* says)  override {
        std::cout << "Baz says " << says;
    }
    void sleep(int time) override {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*3ns);
    }
    long x;

    virtual_Baz(long x) : x(x) {}
};

struct virtual_Um : Virtual_Base_Struct  {
    void print() {
        std::cout << x;
    }
    void work (int i) override {
        //x/=i*4;

    }
    void do_stuff(const char* says) override {
        std::cout << "Um says " << says;
    }
    void sleep(int time) override {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*4ns);
    }
    unsigned short x;

    virtual_Um(unsigned short x) : x(x) {}
};

struct virtual_Uhh : Virtual_Base_Struct  {
    void print() override {
        std::cout << x;
    }
    void work (int i) override {
        //x/=i*5;
    }
    void do_stuff(const char* says) override {
        std::cout << "Uhh says " << says;
    }
    void sleep(int time) override {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*5ns );
    }

    unsigned char x;
    //Sized_Struct<30> needlessly_big_member;

    virtual_Uhh(unsigned char x) : x(x) {}
};
