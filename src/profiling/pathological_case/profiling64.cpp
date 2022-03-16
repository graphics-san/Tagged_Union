#define ARRAY_SIZE 1000u
#define NUMBER_OF_RUNS 2000u

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
#include "Examples/Free_Functions.h"
#include "profiling/faster_functions/structs.h"
#include "profiling/faster_functions/visitors.h"

TAGGED_UNION_ENABLE_MEMBER(do_work)

void profiling_64() {
    double if_vec_total = 0, uvec_total = 0, vvec_total = 0, stdvec_total = 0;

    std::array<Tagged_Union<Struct0, Struct1, Struct2, Struct3, Struct4, Struct5, Struct6, Struct7, Struct8, Struct9, Struct10, Struct11, Struct12, Struct13, Struct14, Struct15, Struct16, Struct17, Struct18, Struct19, Struct20, Struct21, Struct22, Struct23, Struct24, Struct25, Struct26, Struct27, Struct28, Struct29, Struct30, Struct31, Struct32, Struct33, Struct34, Struct35, Struct36, Struct37, Struct38, Struct39, Struct40, Struct41, Struct42, Struct43, Struct44, Struct45, Struct46, Struct47, Struct48, Struct49, Struct50, Struct51, Struct52, Struct53, Struct54, Struct55, Struct56, Struct57, Struct58, Struct59, Struct60, Struct61, Struct62, Struct63>, ARRAY_SIZE> uvec{};

    std::array<Virtual_Base_Struct*, ARRAY_SIZE> vvec{};
    std::array<std::variant<Struct0, Struct1, Struct2, Struct3, Struct4, Struct5, Struct6, Struct7, Struct8, Struct9, Struct10, Struct11, Struct12, Struct13, Struct14, Struct15, Struct16, Struct17, Struct18, Struct19, Struct20, Struct21, Struct22, Struct23, Struct24, Struct25, Struct26, Struct27, Struct28, Struct29, Struct30, Struct31, Struct32, Struct33, Struct34, Struct35, Struct36, Struct37, Struct38, Struct39, Struct40, Struct41, Struct42, Struct43, Struct44, Struct45, Struct46, Struct47, Struct48, Struct49, Struct50, Struct51, Struct52, Struct53, Struct54, Struct55, Struct56, Struct57, Struct58, Struct59, Struct60, Struct61, Struct62, Struct63>, ARRAY_SIZE> stdvec;


    std::random_device os_seed;
    const uint32_t seed = os_seed();

    std::mt19937 generator(seed);

    std::uniform_int_distribution<unsigned int> distribute(0, 64-1);

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
case 32:
	vvec[i] = (new polymorphic_Struct32{1});
	uvec[i] = (Struct32{1});
	stdvec[i] = (Struct32{1});
case 33:
	vvec[i] = (new polymorphic_Struct33{1});
	uvec[i] = (Struct33{1});
	stdvec[i] = (Struct33{1});
case 34:
	vvec[i] = (new polymorphic_Struct34{1});
	uvec[i] = (Struct34{1});
	stdvec[i] = (Struct34{1});
case 35:
	vvec[i] = (new polymorphic_Struct35{1});
	uvec[i] = (Struct35{1});
	stdvec[i] = (Struct35{1});
case 36:
	vvec[i] = (new polymorphic_Struct36{1});
	uvec[i] = (Struct36{1});
	stdvec[i] = (Struct36{1});
case 37:
	vvec[i] = (new polymorphic_Struct37{1});
	uvec[i] = (Struct37{1});
	stdvec[i] = (Struct37{1});
case 38:
	vvec[i] = (new polymorphic_Struct38{1});
	uvec[i] = (Struct38{1});
	stdvec[i] = (Struct38{1});
case 39:
	vvec[i] = (new polymorphic_Struct39{1});
	uvec[i] = (Struct39{1});
	stdvec[i] = (Struct39{1});
case 40:
	vvec[i] = (new polymorphic_Struct40{1});
	uvec[i] = (Struct40{1});
	stdvec[i] = (Struct40{1});
case 41:
	vvec[i] = (new polymorphic_Struct41{1});
	uvec[i] = (Struct41{1});
	stdvec[i] = (Struct41{1});
case 42:
	vvec[i] = (new polymorphic_Struct42{1});
	uvec[i] = (Struct42{1});
	stdvec[i] = (Struct42{1});
case 43:
	vvec[i] = (new polymorphic_Struct43{1});
	uvec[i] = (Struct43{1});
	stdvec[i] = (Struct43{1});
case 44:
	vvec[i] = (new polymorphic_Struct44{1});
	uvec[i] = (Struct44{1});
	stdvec[i] = (Struct44{1});
case 45:
	vvec[i] = (new polymorphic_Struct45{1});
	uvec[i] = (Struct45{1});
	stdvec[i] = (Struct45{1});
case 46:
	vvec[i] = (new polymorphic_Struct46{1});
	uvec[i] = (Struct46{1});
	stdvec[i] = (Struct46{1});
case 47:
	vvec[i] = (new polymorphic_Struct47{1});
	uvec[i] = (Struct47{1});
	stdvec[i] = (Struct47{1});
case 48:
	vvec[i] = (new polymorphic_Struct48{1});
	uvec[i] = (Struct48{1});
	stdvec[i] = (Struct48{1});
case 49:
	vvec[i] = (new polymorphic_Struct49{1});
	uvec[i] = (Struct49{1});
	stdvec[i] = (Struct49{1});
case 50:
	vvec[i] = (new polymorphic_Struct50{1});
	uvec[i] = (Struct50{1});
	stdvec[i] = (Struct50{1});
case 51:
	vvec[i] = (new polymorphic_Struct51{1});
	uvec[i] = (Struct51{1});
	stdvec[i] = (Struct51{1});
case 52:
	vvec[i] = (new polymorphic_Struct52{1});
	uvec[i] = (Struct52{1});
	stdvec[i] = (Struct52{1});
case 53:
	vvec[i] = (new polymorphic_Struct53{1});
	uvec[i] = (Struct53{1});
	stdvec[i] = (Struct53{1});
case 54:
	vvec[i] = (new polymorphic_Struct54{1});
	uvec[i] = (Struct54{1});
	stdvec[i] = (Struct54{1});
case 55:
	vvec[i] = (new polymorphic_Struct55{1});
	uvec[i] = (Struct55{1});
	stdvec[i] = (Struct55{1});
case 56:
	vvec[i] = (new polymorphic_Struct56{1});
	uvec[i] = (Struct56{1});
	stdvec[i] = (Struct56{1});
case 57:
	vvec[i] = (new polymorphic_Struct57{1});
	uvec[i] = (Struct57{1});
	stdvec[i] = (Struct57{1});
case 58:
	vvec[i] = (new polymorphic_Struct58{1});
	uvec[i] = (Struct58{1});
	stdvec[i] = (Struct58{1});
case 59:
	vvec[i] = (new polymorphic_Struct59{1});
	uvec[i] = (Struct59{1});
	stdvec[i] = (Struct59{1});
case 60:
	vvec[i] = (new polymorphic_Struct60{1});
	uvec[i] = (Struct60{1});
	stdvec[i] = (Struct60{1});
case 61:
	vvec[i] = (new polymorphic_Struct61{1});
	uvec[i] = (Struct61{1});
	stdvec[i] = (Struct61{1});
case 62:
	vvec[i] = (new polymorphic_Struct62{1});
	uvec[i] = (Struct62{1});
	stdvec[i] = (Struct62{1});
case 63:
	vvec[i] = (new polymorphic_Struct63{1});
	uvec[i] = (Struct63{1});
	stdvec[i] = (Struct63{1});


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


    std::cout << "\n\n----RESULTS-----\n\n";
    std::cout << "virtual inheritance duration: " << vvec_total << " seconds,\n";
    std::cout << "tagged_union duration (jump table): " << uvec_total << " seconds\n";
    std::cout << "tagged_union duration (if statements): " << if_vec_total << " seconds\n";
    std::cout << "std::variant duration: " << stdvec_total << " seconds\n\n";

    std::cout << "press enter to exit";
    std::cin.get();
    }