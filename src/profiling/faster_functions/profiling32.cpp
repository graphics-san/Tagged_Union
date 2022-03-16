#define ARRAY_SIZE 1000u
#define NUMBER_OF_RUNS 2000u

#include <iostream>
#include <variant>
#include <chrono>
#include <array>
#include <vector>
#include <random>
#include <fstream>

#include "Examples/Foo_Bar_Baz.h"
#include "Tagged_Union/Tagged_Union.h"
#include "Tagged_Union/Dependencies/My_Union.h"
#include "Examples/Virtual_Inheritance_Classes.h"
#include "Misc_Utils/Progress_Bar.h"
#include "Examples/Visitors.h"
#include "Examples/Free_Functions.h"
#include "profiling/structs.h"
#include "profiling/visitors.h"

TAGGED_UNION_ENABLE_MEMBER(do_work)

void profiling_32() {
    double if_vec_total = 0, uvec_total = 0, vvec_total = 0, stdvec_total = 0;

    std::array<Tagged_Union<Struct0, Struct1, Struct2, Struct3, Struct4, Struct5, Struct6, Struct7, Struct8, Struct9, Struct10, Struct11, Struct12, Struct13, Struct14, Struct15, Struct16, Struct17, Struct18, Struct19, Struct20, Struct21, Struct22, Struct23, Struct24, Struct25, Struct26, Struct27, Struct28, Struct29, Struct30, Struct31>, ARRAY_SIZE> uvec{};

    std::array<Virtual_Base_Struct*, ARRAY_SIZE> vvec{};
    std::array<std::variant<Struct0, Struct1, Struct2, Struct3, Struct4, Struct5, Struct6, Struct7, Struct8, Struct9, Struct10, Struct11, Struct12, Struct13, Struct14, Struct15, Struct16, Struct17, Struct18, Struct19, Struct20, Struct21, Struct22, Struct23, Struct24, Struct25, Struct26, Struct27, Struct28, Struct29, Struct30, Struct31>, ARRAY_SIZE> stdvec;


    std::random_device os_seed;
    const uint32_t seed = os_seed();

    std::mt19937 generator(seed);

    std::uniform_int_distribution<unsigned int> distribute(0, 32-1);

    for(unsigned int run = 0; run < NUMBER_OF_RUNS; ++run) {
        std::cout << "\rRun #: " << run+1 << "/" << NUMBER_OF_RUNS << " ";
        print_progress_bar(run+1, NUMBER_OF_RUNS, 25);

        for (unsigned int i = 0; i < ARRAY_SIZE; ++i) {
            switch (distribute(generator)) {

                case 0:
	vvec[i] = (new polymorphic_Struct0{1});
	uvec[i] = (Struct0{1});
	stdvec[i] = (Struct0{1});
case 1:
	vvec[i] = (new polymorphic_Struct1{1});
	uvec[i] = (Struct1{1});
	stdvec[i] = (Struct1{1});
case 2:
	vvec[i] = (new polymorphic_Struct2{1});
	uvec[i] = (Struct2{1});
	stdvec[i] = (Struct2{1});
case 3:
	vvec[i] = (new polymorphic_Struct3{1});
	uvec[i] = (Struct3{1});
	stdvec[i] = (Struct3{1});
case 4:
	vvec[i] = (new polymorphic_Struct4{1});
	uvec[i] = (Struct4{1});
	stdvec[i] = (Struct4{1});
case 5:
	vvec[i] = (new polymorphic_Struct5{1});
	uvec[i] = (Struct5{1});
	stdvec[i] = (Struct5{1});
case 6:
	vvec[i] = (new polymorphic_Struct6{1});
	uvec[i] = (Struct6{1});
	stdvec[i] = (Struct6{1});
case 7:
	vvec[i] = (new polymorphic_Struct7{1});
	uvec[i] = (Struct7{1});
	stdvec[i] = (Struct7{1});
case 8:
	vvec[i] = (new polymorphic_Struct8{1});
	uvec[i] = (Struct8{1});
	stdvec[i] = (Struct8{1});
case 9:
	vvec[i] = (new polymorphic_Struct9{1});
	uvec[i] = (Struct9{1});
	stdvec[i] = (Struct9{1});
case 10:
	vvec[i] = (new polymorphic_Struct10{1});
	uvec[i] = (Struct10{1});
	stdvec[i] = (Struct10{1});
case 11:
	vvec[i] = (new polymorphic_Struct11{1});
	uvec[i] = (Struct11{1});
	stdvec[i] = (Struct11{1});
case 12:
	vvec[i] = (new polymorphic_Struct12{1});
	uvec[i] = (Struct12{1});
	stdvec[i] = (Struct12{1});
case 13:
	vvec[i] = (new polymorphic_Struct13{1});
	uvec[i] = (Struct13{1});
	stdvec[i] = (Struct13{1});
case 14:
	vvec[i] = (new polymorphic_Struct14{1});
	uvec[i] = (Struct14{1});
	stdvec[i] = (Struct14{1});
case 15:
	vvec[i] = (new polymorphic_Struct15{1});
	uvec[i] = (Struct15{1});
	stdvec[i] = (Struct15{1});
case 16:
	vvec[i] = (new polymorphic_Struct16{1});
	uvec[i] = (Struct16{1});
	stdvec[i] = (Struct16{1});
case 17:
	vvec[i] = (new polymorphic_Struct17{1});
	uvec[i] = (Struct17{1});
	stdvec[i] = (Struct17{1});
case 18:
	vvec[i] = (new polymorphic_Struct18{1});
	uvec[i] = (Struct18{1});
	stdvec[i] = (Struct18{1});
case 19:
	vvec[i] = (new polymorphic_Struct19{1});
	uvec[i] = (Struct19{1});
	stdvec[i] = (Struct19{1});
case 20:
	vvec[i] = (new polymorphic_Struct20{1});
	uvec[i] = (Struct20{1});
	stdvec[i] = (Struct20{1});
case 21:
	vvec[i] = (new polymorphic_Struct21{1});
	uvec[i] = (Struct21{1});
	stdvec[i] = (Struct21{1});
case 22:
	vvec[i] = (new polymorphic_Struct22{1});
	uvec[i] = (Struct22{1});
	stdvec[i] = (Struct22{1});
case 23:
	vvec[i] = (new polymorphic_Struct23{1});
	uvec[i] = (Struct23{1});
	stdvec[i] = (Struct23{1});
case 24:
	vvec[i] = (new polymorphic_Struct24{1});
	uvec[i] = (Struct24{1});
	stdvec[i] = (Struct24{1});
case 25:
	vvec[i] = (new polymorphic_Struct25{1});
	uvec[i] = (Struct25{1});
	stdvec[i] = (Struct25{1});
case 26:
	vvec[i] = (new polymorphic_Struct26{1});
	uvec[i] = (Struct26{1});
	stdvec[i] = (Struct26{1});
case 27:
	vvec[i] = (new polymorphic_Struct27{1});
	uvec[i] = (Struct27{1});
	stdvec[i] = (Struct27{1});
case 28:
	vvec[i] = (new polymorphic_Struct28{1});
	uvec[i] = (Struct28{1});
	stdvec[i] = (Struct28{1});
case 29:
	vvec[i] = (new polymorphic_Struct29{1});
	uvec[i] = (Struct29{1});
	stdvec[i] = (Struct29{1});
case 30:
	vvec[i] = (new polymorphic_Struct30{1});
	uvec[i] = (Struct30{1});
	stdvec[i] = (Struct30{1});
case 31:
	vvec[i] = (new polymorphic_Struct31{1});
	uvec[i] = (Struct31{1});
	stdvec[i] = (Struct31{1});


            }
        }

        using namespace std::chrono;

        auto if_vec_start = high_resolution_clock::now(); //
        for (auto &u: uvec) {
            u.execute_member_func__if_statement_impl<do_work>(1);

        }
        auto if_vec_end = high_resolution_clock::now();


        auto vvec_start = high_resolution_clock::now();
        for (auto &u: vvec) {
            //m_union->work(3);
            //m_union->do_stuff("hI");
            u->do_work(1);

        }
        auto vvec_end = high_resolution_clock::now();


        auto uvec_start = high_resolution_clock::now();
        for (auto &u: uvec) {
            //m_union.execute_member_func__if_statement_impl<work>(3);
            //m_union.execute_member_func<do_stuff>("HI");
            u.execute_member_func<do_work>(1);

        }
        auto uvec_end = high_resolution_clock::now();


        auto stdvec_start = high_resolution_clock::now();
        for (auto &u: stdvec) {
            //std::visit(print_visitor(), m_union, std::variant<const char *>{"Hi"});
            std::visit(big_work_visitor(), u, std::variant<int>{1});
        }
        auto stdvec_end = high_resolution_clock::now();


        vvec_total += (double)(duration_cast<microseconds>(vvec_end - vvec_start).count()) / 1000000;
        uvec_total += (double)(duration_cast<microseconds>(uvec_end - uvec_start).count()) / 1000000;
        stdvec_total += (double)(duration_cast<microseconds>(stdvec_end - stdvec_start).count()) / 1000000;
        if_vec_total += (double)(duration_cast<microseconds>(if_vec_end - if_vec_start).count()) / 1000000;
    }

    std::ofstream os("../profiling_results/32_types.txt");
    

    std::cout << "\n\n----RESULTS-----\n\n";
    std::cout << "virtual inheritance duration: " << vvec_total << " seconds,\n";
    std::cout << "tagged_union duration (jump table): " << uvec_total << " seconds\n";
    std::cout << "tagged_union duration (if statements): " << if_vec_total << " seconds\n";
    std::cout << "std::variant duration: " << stdvec_total << " seconds\n\n";
    
    os << "\n\n----RESULTS-----\n\n";
    os << "virtual inheritance duration: " << vvec_total << " seconds,\n";
    os << "tagged_union duration (jump table): " << uvec_total << " seconds\n";
    os << "tagged_union duration (if statements): " << if_vec_total << " seconds\n";
    os << "std::variant duration: " << stdvec_total << " seconds\n\n";


    std::cout << "press enter to exit";
    std::cin.get();
    }