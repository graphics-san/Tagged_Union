#pragma once

#include <iostream>
#include<thread>
#include <chrono>


struct cringe_virtual_struct {
    virtual void do_stuff(const char* says) = 0;
    virtual void work(int) = 0;
    virtual void print() = 0;
    virtual void sleep(int) = 0;
};

struct virtual_Foo : cringe_virtual_struct {
    void print() {
        std::cout << x;
    }
    void work (int i) {
       // x+=i;
    }
    void do_stuff(const char* says) override {
       std::cout << "Foo says " << says;
    }
    void sleep(int time) {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*1ns);
    }

    virtual_Foo(unsigned int x) : x(x) {}

    unsigned int x;
};

struct virtual_Bar : cringe_virtual_struct {
    void print() {
        std::cout << x;
    }
    void work (int i) {
        //x+=i*2;
    }
    void do_stuff(const char* says)  override {
        std::cout << "Bar says " << says;
    }
    void sleep(int time) {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*2ns);
    }
    long long x;

    virtual_Bar(long long int x) : x(x) {}
};

struct virtual_Baz : cringe_virtual_struct  {
    void print() {
        std::cout << x;
    }
    void work (int i) {
        //x+=i*3;
    }
    void do_stuff(const char* says)  override {
        std::cout << "Baz says " << says;
    }
    void sleep(int time) {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*3ns);
    }
    long x;

    virtual_Baz(long x) : x(x) {}
};

struct virtual_Um : cringe_virtual_struct  {
    void print() {
        std::cout << x;
    }
    void work (int i) {
        //x/=i*4;

    }
    void do_stuff(const char* says)  override {
        std::cout << "Um says " << says;
    }
    void sleep(int time) {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*4ns);
    }
    unsigned short x;

    virtual_Um(unsigned short x) : x(x) {}
};

struct virtual_Uhh : cringe_virtual_struct  {
    void print() {
        std::cout << x;
    }
    void work (int i) {
        //x/=i*5;
    }
    void do_stuff(const char* says)  override {
        std::cout << "Uhh says " << says;
    }
    void sleep(int time) {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(x*time*5ns );
    }

    void big_print(int foo, char bar, std::string baz) {

    }
    unsigned char x;

    virtual_Uhh(unsigned char x) : x(x) {}
};
