# Tagged Union
This is a templated implementation of a tagged union written in C++20.

# Features
## Concise
Much less code to achieve the same effect as `std::visit`
## Fast
Beats virtual inheritance and `std::visit` in my tests
## Minimal hackery
Only uses one family of relatively straightforward macros

# Usage

## Public Member Functions
```cpp
#include"Tagged_Union/Tagged_Union.h"

struct A {
    std::string say_hi(unsigned int age) {
        return std::string("A says hi. ") + "A is " + std::to_string(age) + " years old\n";
    }
};

struct B {
    std::string say_hi(unsigned int age) {
        return std::string("B says hi. ") + "B is " + std::to_string(age) + " years old\n";
    }
};

struct C {
    std::string say_hi(unsigned int age) {
        return std::string("C says hi. ") + "C is " + std::to_string(age) + " years old\n";
    }
};

TAGGED_UNION_ENABLE_MEMBER(say_hi) // This macro defines a struct with the same name as its parameter that wraps a static variable template
                                   // which can refer to any public member (variable or function) named say_hi of any class

int main() {
    Tagged_Union<A, B, C> tu = A{}; // wrapper for function you want to call is the first template argument, args are args
    std::cout << tu.execute_member_func<say_hi>(3); // prints "A says hi. A is 3 years old"

    tu = B{};
    std::cout << tu.execute_member_func<say_hi>(5); // prints "B says hi. B is 5 years old"
}
        
        
```
        
## Free Functions
supported, examples coming soon

## Public Member Variables
supported, examples coming soon

