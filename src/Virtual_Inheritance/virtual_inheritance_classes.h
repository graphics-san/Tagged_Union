#pragma once

#include <iostream>

struct cringe_virtual_struct {
    virtual void do_stuff(const char* says) = 0;
};

struct virtual_Foo : cringe_virtual_struct {
    void do_stuff(const char* says) override {
       std::cout << "Foo says " << says;
    }
};

struct virtual_Bar : cringe_virtual_struct {
    void do_stuff(const char* says)  override {
        std::cout << "Bar says " << says;
    }
};

struct virtual_Baz : cringe_virtual_struct  {
    void do_stuff(const char* says)  override {
        std::cout << "Baz says " << says;
    }
};