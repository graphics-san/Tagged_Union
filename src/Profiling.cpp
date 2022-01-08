
#include <iostream>
#include <variant>
#include <chrono>
#include <array>
#include <vector>
#include <random>

#include "Examples/Foo_Bar_Baz.h"
#include "Tagged_Union/Tagged_Union.h"
#include "Tagged_Union/Dependencies/My_Union.h"
#include "Examples/Virtual_Inheritance_Classes.h"
#include "Misc_Utils/Progress_Bar.h"
#include "Examples/Visitors.h"


TAGGED_UNION_ENABLE_MEMBER(do_stuff)
TAGGED_UNION_ENABLE_MEMBER(work)
TAGGED_UNION_ENABLE_MEMBER(sleep)
TAGGED_UNION_ENABLE_MEMBER(i)
TAGGED_UNION_ENABLE_MEMBER(assign)


int main() {

#define ARRAY_SIZE 10000
#define NUMBER_OF_RUNS 1000

    /*A a {1};
    B b {2};

    Tagged_Union<A, B, C> tu = a;
    int x = 5;
    tu.execute_func_jump_table<assign>(x);
    std::cout << "x: " << x;

    std::exit(-1);*/

    double if_vec_total = 0, uvec_total = 0, vvec_total = 0, stdvec_total = 0;

    std::array<Tagged_Union<Foo, Bar, Baz, Um, Uhh>, ARRAY_SIZE> uvec{};
    std::array<Virtual_Base_Struct*, ARRAY_SIZE> vvec{};
    std::array<std::variant<Foo, Bar, Baz, Um, Uhh>, ARRAY_SIZE> stdvec;


    std::random_device os_seed;
    const uint32_t seed = os_seed();

    std::mt19937 generator(seed);

    std::uniform_int_distribution<unsigned int> distribute( 1, 5);

    for(unsigned int run = 0; run < NUMBER_OF_RUNS; ++run) {
        std::cout << "\rRun #: " << run << "/" << NUMBER_OF_RUNS << " ";
        print_progress_bar(run, (unsigned int)NUMBER_OF_RUNS, 25);

        for (unsigned int i = 0; i < ARRAY_SIZE; ++i) {
            switch (distribute(generator)) {
                case 1:
                    vvec[i] = (new virtual_Foo{1});
                    uvec[i] = (Foo{1});
                    stdvec[i] = (Foo{1});

                case 2:
                    vvec[i] = (new virtual_Bar{1});
                    uvec[i] = (Bar{1});
                    stdvec[i] = (Bar{1});

                case 3:
                    vvec[i] = (new virtual_Baz{1});
                    uvec[i] = (Baz{1});
                    stdvec[i] = (Baz{1});

                case 4:
                    vvec[i] = (new virtual_Um{1});
                    uvec[i] = (Um{1});
                    stdvec[i] = (Um{1});

                case 5:
                    vvec[i] = (new virtual_Uhh{1});
                    uvec[i] = (Uhh{1});
                    stdvec[i] = (Uhh{1});
            }
        }

        using namespace std::chrono;

        auto if_vec_start = high_resolution_clock::now(); //
        for (auto &u: uvec) {
            u.execute_func<sleep>(1);

        }
        auto if_vec_end = high_resolution_clock::now();


        auto vvec_start = high_resolution_clock::now();
        for (auto &u: vvec) {
            //m_union->work(3);
            //m_union->do_stuff("hI");
            u->sleep(1);

        }
        auto vvec_end = high_resolution_clock::now();


        auto uvec_start = high_resolution_clock::now();
        for (auto &u: uvec) {
            //m_union.execute_func<work>(3);
            //m_union.execute_func_jump_table<do_stuff>("HI");
            u.execute_func_jump_table<sleep>(1);

        }
        auto uvec_end = high_resolution_clock::now();


        auto stdvec_start = high_resolution_clock::now();
        for (auto &u: stdvec) {
            //std::visit(print_visitor(), m_union, std::variant<const char *>{"Hi"});
            std::visit(sleep_visitor(), u, std::variant<int>{1});
        }
        auto stdvec_end = high_resolution_clock::now();


        vvec_total += (double)(duration_cast<microseconds>(vvec_end - vvec_start).count()) / 1000000;
        uvec_total += (double)(duration_cast<microseconds>(uvec_end - uvec_start).count()) / 1000000;
        stdvec_total += (double)(duration_cast<microseconds>(stdvec_end - stdvec_start).count()) / 1000000;
        if_vec_total += (double)(duration_cast<microseconds>(if_vec_end - if_vec_start).count()) / 1000000;
    }


    std::cout << "\n\n----RESULTS-----\n\n";
    std::cout << "virtual inheritance duration: " << vvec_total << " seconds,\n";
    std::cout << "my tagged union duration (jump table): " << uvec_total << " seconds\n";
    std::cout << "my tagged union duration (if statements): " << if_vec_total << " seconds\n";
    std::cout << "std::variant duration: " << stdvec_total << " seconds\n\n";

    std::cout << "press enter to exit";
    std::cin.get();
}