#include <iostream>
#include <variant>
#include <vector>
#include <random>
#include "Foo_Bar_Baz.h"
#include "Tagged_Union/Tagged_Union.h"
#include "test_function_wrapper.h"
#include "My_Union.h"
#include "Virtual_Inheritance/virtual_inheritance_classes.h"
#include "Get_Type_From_Index.h"
#include <chrono>

TAGGED_UNION_ENABLE_MEMBER_FUNC(do_stuff)
TAGGED_UNION_ENABLE_MEMBER_FUNC(work)
TAGGED_UNION_ENABLE_MEMBER_FUNC(sleep)



int val;

template<typename T>
struct type_info_err;

template<unsigned long long n>
struct val_info_err;

struct work_visitor {
   /* void operator()(Foo&, const char* says)   { std::cout << "Foo says " << says;}
    void operator()(Bar&, const char* says)   {std::cout << "Bar says " << says; }
    void operator()(Baz&, const char* says)   {std::cout << "Baz says " << says;}
    void operator()(Um&, const char* says)   {std::cout << "Um says " << says;}
    void operator()(Uhh&, const char* says)   {std::cout << "Uhh says " << says;}*/
   void operator()(Foo& x, int i)   { }
    void operator()(Bar& x, int i)   {}
    void operator()(Baz& x, int i)   {}
    void operator()(Um& x, int i)   {}
    void operator()(Uhh& x, int i)   {}
};

struct sleep_visitor {
    void operator()(Foo& x, int time)   { using namespace std::chrono_literals; std::this_thread::sleep_for(time*1ns); }
    void operator()(Bar& x, int time)   { using namespace std::chrono_literals; std::this_thread::sleep_for(time*2ns); }
    void operator()(Baz& x, int time)   { using namespace std::chrono_literals; std::this_thread::sleep_for(time*3ns); }
    void operator()(Um& x, int time)   { using namespace std::chrono_literals; std::this_thread::sleep_for(time*4ns); }
    void operator()(Uhh& x, int time)   { using namespace std::chrono_literals; std::this_thread::sleep_for(time*5ns); }
};

struct print_visitor {
    void operator()(Foo&, const char* says)   { std::cout << "Foo says " << says;}
 void operator()(Bar&, const char* says)   {std::cout << "Bar says " << says; }
 void operator()(Baz&, const char* says)   {std::cout << "Baz says " << says;}
 void operator()(Um&, const char* says)   {std::cout << "Um says " << says;}
 void operator()(Uhh&, const char* says)   {std::cout << "Uhh says " << says;}
};

int main() {

#define ARRAY_SIZE 10000
#define NUMBER_OF_RUNS 1000


    double if_vec_avg = 0, uvec_avg = 0, vvec_avg = 0, stdvec_avg = 0;


    std::array<Tagged_Union<Foo, Bar, Baz, Um, Uhh>, ARRAY_SIZE> uvec{};

    std::cout << "VIRTUAL CRINGE INCOMING!!\n\n";

    std::array<cringe_virtual_struct*, ARRAY_SIZE> vvec{};

    std::array<std::variant<Foo, Bar, Baz, Um, Uhh>, ARRAY_SIZE> stdvec;

    std::random_device os_seed;
    const uint32_t seed = os_seed();

    std::mt19937 generator(seed);

    std::uniform_int_distribution<unsigned int> distribute( 1, 5);


    std::cin.get();
    std::cout << "starting random generation\n\n";

    for(unsigned int run = 0; run < NUMBER_OF_RUNS; ++run) {
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

        //std::cout << "finished random generation\n";

        using namespace std::chrono;


        auto if_vec_start = high_resolution_clock::now();
        for (auto &u: uvec) {
            u.execute_func<sleep>(1);

        }

        auto if_vec_end = high_resolution_clock::now();


        auto vvec_start = high_resolution_clock::now();

        for (auto &u: vvec) {
            //u->work(3);
            //u->do_stuff("hI");
            u->sleep(1);

        }
        auto vvec_end = high_resolution_clock::now();


        auto uvec_start = high_resolution_clock::now();

        for (auto &u: uvec) {
            //u.execute_func<work>(3);
            //u.execute_func_jump_table<do_stuff>("HI");
            u.execute_func_jump_table<sleep>(1);

        }

        auto uvec_end = high_resolution_clock::now();

        auto stdvec_start = high_resolution_clock::now();


        for (auto &u: stdvec) {
            //std::visit(print_visitor(), u, std::variant<const char *>{"Hi"});
            std::visit(sleep_visitor(), u, std::variant<int>{1});
        }

        auto stdvec_end = high_resolution_clock::now();

/*

        auto vvec_duration = duration_cast<microseconds>(vvec_end - vvec_start);
        auto uvec_duration = duration_cast<microseconds>(uvec_end - uvec_start);
        auto stdvec_duration = duration_cast<microseconds>(stdvec_end - stdvec_start);
        auto if_vec_duration = duration_cast<microseconds>(if_vec_end - if_vec_start); */



        vvec_avg += (double)(duration_cast<microseconds>(vvec_end - vvec_start).count())/1000000;
        uvec_avg +=(double)(duration_cast<microseconds>(uvec_end - uvec_start).count())/1000000;
        stdvec_avg +=(double)(duration_cast<microseconds>(stdvec_end - stdvec_start).count())/1000000;
        if_vec_avg +=(double)(duration_cast<microseconds>(if_vec_end - if_vec_start).count())/1000000;

    }

    /*std::cout << "\n\n----RESULTS-----\n\n"
                 "virtual inheritance duration: " << (double)vvec_duration.count() / 1000000 << " seconds,\n"
                 "my tagged union duration (jump table): " << (double)uvec_duration.count() / 1000000 << " seconds\n"
                 "my tagged union duration (if statements): " << (double)if_vec_duration.count() / 1000000 << " seconds\n"
                 "std::variant duration: " << (double)stdvec_duration.count() / 1000000 << " seconds\n";*/

    std::cout << "\n\n----RESULTS-----\n\n";
    std::cout << "virtual inheritance duration: " << vvec_avg << " seconds,\n";
    std::cout << "my tagged union duration (jump table): " << uvec_avg << " seconds\n";
    std::cout << "my tagged union duration (if statements): " << if_vec_avg << " seconds\n";
    std::cout << "std::variant duration: " << stdvec_avg << " seconds\n";


    /*for(auto& a : vvec) {
        a->print();
    }*/

    //std::cout << "RU contents: " << ru.get<char>() << '\n';


}