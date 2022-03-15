[![Build](https://github.com/graphics-san/Tagged_Union/actions/workflows/Build.yml/badge.svg)](https://github.com/graphics-san/Tagged_Union/actions/workflows/Build.yml) ![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)


# Tagged Union
This is a templated implementation of a tagged union ([wikipedia](https://en.wikipedia.org/wiki/Tagged_union)) written in C++20.

# Features
## Concise
Much less code to achieve the same effect as `std::visit`
## Fast
Beats subclass polymorphism and `std::visit` in my tests
## Minimal hackery
Only uses one family of straightforward macros

# Usage

## Public Member Functions
```cpp
#include"Tagged_Union/Tagged_Union.h"

class Foo {
    int special_number = 1;
    
public:
    std::string get_special_product(unsigned int special_coefficient) {
        return std::string("Foo says hi. Foo's special number * special coefficient is ") + std::to_string(special_number * special_coefficient) + '\n';
    }
};

class Bar {
        int special_number = 2;
    
public:
    std::string get_special_product(unsigned int special_coefficient) {
        return std::string("Bar says hi. Bar's special number * special coefficient is ") + std::to_string(special_number * special_coefficient) + '\n';
    }
};

class Baz {
        int special_number = 3;
    
public:
    std::string get_special_product(unsigned int special_coefficient) {
        return std::string("Baz says hi. Baz's special number * special coefficient is ") + std::to_string(special_number * special_coefficient) + '\n';
    }
};

TAGGED_UNION_ENABLE_MEMBER(say_hi) // This macro defines a struct with the same name as its parameter that wraps a static variable template
                                   // which can refer to any public member (variable or function) named say_hi of any class

int main() {
    Tagged_Union<Foo, Bar, Baz> tu = Foo{}; // wrapper for function you want to call is the first template argument, args are args
    std::cout << tu.execute_member_func<get_special_product>(3); // prints "Foo says hi. Foo's special number * special coefficient is 3"

    tu = Bar{};
    std::cout << tu.execute_member_func<get_special_product>(5); // prints "Bar says hi. Bar's special number * special coefficient is 10"
}

```
## Public Member Variables

```cpp
struct Foo {
    int i = 1;
}

struct Bar {
    int i = 3;
}

struct Baz {
    int i = 5;
}

TAGGED_UNION_ENABLE_MEMBER(i) // this macro works for member functions and member variables
int main() {
    Tagged_Union<Foo, Bar, Baz> tu(Foo{});
    
    std::cout << tu.get_member_var<i>(); // prints 1
    
    tu = Bar{};
    tu.get_member_var_ref<i>() = 9;
    
    std::cout << tu.get_member_var<i>(); // prints 9
}
```

        
## Free Functions

```cpp
struct Foo {
    int i = 1;
}

struct Bar {
    int i = 3;
}

struct Baz {
    int i = 5;
}



TAGGED_UNION_ENABLE_MEMBER(i) // this macro works for member functions and member variables
int main() {
    Tagged_Union<Foo, Bar, Baz> tu(Foo{});
    
    std::cout << tu.get_member_var<i>(); // prints 1
    
    tu = Bar{};
    tu.get_member_var_ref<i>() = 9;
    
    std::cout << tu.get_member_var<i>(); // prints 9
}
```

