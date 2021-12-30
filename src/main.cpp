#include <iostream>
#include <variant>
#include <vector>
#include <random>
#include "Foo_Bar_Baz.h"
#include "Tagged_Union/Tagged_Union.h"
#include "test_function_wrapper.h"
#include "Recursive_Union.h"
#include "Virtual_Inheritance/virtual_inheritance_classes.h"
#include <chrono>

TAGGED_UNION_ENABLE_MEMBER_FUNC(do_stuff)

template<typename T>
struct type_info_err;

template<unsigned long long n>
struct val_info_err;

struct VisitPackage {
    void operator()(Foo&, const char* says)   { std::cout << "Foo says " << says;}
    void operator()(Bar&, const char* says)   {std::cout << "Bar says " << says; }
    void operator()(Baz&, const char* says)   {std::cout << "Baz says " << says;}
};

int main() {

    Recursive_Union<int, float, char> ru = 'c';

    ru.get<char>();

    std::vector<Tagged_Union<Foo, Bar, Baz>> uvec;


    std::cout << "VIRTUAL CRINGE INCOMING!!\n\n";

    std::vector<cringe_virtual_struct*> vvec;

    std::vector<std::variant<Foo, Bar, Baz>> stdvec;

    std::random_device os_seed;
    const uint32_t seed = os_seed();

    std::mt19937 generator( seed );

    std::uniform_int_distribution<uint8_t> distribute( 1, 3);



    for(unsigned int i = 0; i < 10000; ++i) {
        switch (distribute(generator)) {
            case 1:
                vvec.push_back(new virtual_Foo);
                uvec.emplace_back(Foo{});
                stdvec.emplace_back(Foo{});
            case 2:
                vvec.push_back(new virtual_Bar);
                uvec.emplace_back(Bar{});
                stdvec.emplace_back(Bar{});

            case 3:
                vvec.push_back(new virtual_Baz);
                uvec.emplace_back(Baz{});
                stdvec.emplace_back(Baz{});

        }
    }

    using namespace std::chrono;

    auto vvec_start = high_resolution_clock::now();

    for(auto u : vvec) {
        u->do_stuff("hi");
       // std::cout << '\n';

    }
    auto vvec_end = high_resolution_clock::now();


    auto uvec_start = high_resolution_clock::now();

    for(auto& u : uvec) {
        u.execute_func<do_stuff>("Hi");
        //std::cout << '\n';
    }

    auto uvec_end = high_resolution_clock::now();

    auto stdvec_start = high_resolution_clock::now();


    for(auto& u : stdvec) {
        std::visit(VisitPackage(), u, std::variant<const char *> {"hI"});

        //std::cout << '\n';
    }

    auto stdvec_end = high_resolution_clock::now();

    auto vvec_duration = duration_cast<microseconds>(vvec_end - vvec_start);
    auto uvec_duration = duration_cast<microseconds>(uvec_end - uvec_start);
    auto stdvec_duration = duration_cast<microseconds>(stdvec_end - stdvec_start);

    //Recursive_Union<int, float, char> ru = 'b';

    std::cout << "\n\n----RESULTS-----\n\n"
                 "vvec duration: " << (double)vvec_duration.count() / 1000000 << " seconds,\n"
                 "uvec duration: " << (double)uvec_duration.count() / 1000000 << " seconds\n"
                 "stdvec duration: " << (double)stdvec_duration.count() / 1000000 << " seconds\n";


    //std::cout << "RU contents: " << ru.get<char>() << '\n';



}