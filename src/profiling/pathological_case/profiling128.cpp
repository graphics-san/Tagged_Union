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
#include "profiling/pathological_case/structs.h"
#include "profiling/pathological_case/visitors.h"

TAGGED_UNION_ENABLE_MEMBER(do_work)

void profiling_128() {
    double if_vec_total = 0, uvec_total = 0, vvec_total = 0, stdvec_total = 0;

    std::array<Tagged_Union<Struct0, Struct1, Struct2, Struct3, Struct4, Struct5, Struct6, Struct7, Struct8, Struct9, Struct10, Struct11, Struct12, Struct13, Struct14, Struct15, Struct16, Struct17, Struct18, Struct19, Struct20, Struct21, Struct22, Struct23, Struct24, Struct25, Struct26, Struct27, Struct28, Struct29, Struct30, Struct31, Struct32, Struct33, Struct34, Struct35, Struct36, Struct37, Struct38, Struct39, Struct40, Struct41, Struct42, Struct43, Struct44, Struct45, Struct46, Struct47, Struct48, Struct49, Struct50, Struct51, Struct52, Struct53, Struct54, Struct55, Struct56, Struct57, Struct58, Struct59, Struct60, Struct61, Struct62, Struct63, Struct64, Struct65, Struct66, Struct67, Struct68, Struct69, Struct70, Struct71, Struct72, Struct73, Struct74, Struct75, Struct76, Struct77, Struct78, Struct79, Struct80, Struct81, Struct82, Struct83, Struct84, Struct85, Struct86, Struct87, Struct88, Struct89, Struct90, Struct91, Struct92, Struct93, Struct94, Struct95, Struct96, Struct97, Struct98, Struct99, Struct100, Struct101, Struct102, Struct103, Struct104, Struct105, Struct106, Struct107, Struct108, Struct109, Struct110, Struct111, Struct112, Struct113, Struct114, Struct115, Struct116, Struct117, Struct118, Struct119, Struct120, Struct121, Struct122, Struct123, Struct124, Struct125, Struct126, Struct127>, ARRAY_SIZE> uvec{};

    std::array<Virtual_Base_Struct*, ARRAY_SIZE> vvec{};
    std::array<std::variant<Struct0, Struct1, Struct2, Struct3, Struct4, Struct5, Struct6, Struct7, Struct8, Struct9, Struct10, Struct11, Struct12, Struct13, Struct14, Struct15, Struct16, Struct17, Struct18, Struct19, Struct20, Struct21, Struct22, Struct23, Struct24, Struct25, Struct26, Struct27, Struct28, Struct29, Struct30, Struct31, Struct32, Struct33, Struct34, Struct35, Struct36, Struct37, Struct38, Struct39, Struct40, Struct41, Struct42, Struct43, Struct44, Struct45, Struct46, Struct47, Struct48, Struct49, Struct50, Struct51, Struct52, Struct53, Struct54, Struct55, Struct56, Struct57, Struct58, Struct59, Struct60, Struct61, Struct62, Struct63, Struct64, Struct65, Struct66, Struct67, Struct68, Struct69, Struct70, Struct71, Struct72, Struct73, Struct74, Struct75, Struct76, Struct77, Struct78, Struct79, Struct80, Struct81, Struct82, Struct83, Struct84, Struct85, Struct86, Struct87, Struct88, Struct89, Struct90, Struct91, Struct92, Struct93, Struct94, Struct95, Struct96, Struct97, Struct98, Struct99, Struct100, Struct101, Struct102, Struct103, Struct104, Struct105, Struct106, Struct107, Struct108, Struct109, Struct110, Struct111, Struct112, Struct113, Struct114, Struct115, Struct116, Struct117, Struct118, Struct119, Struct120, Struct121, Struct122, Struct123, Struct124, Struct125, Struct126, Struct127>, ARRAY_SIZE> stdvec;


    std::random_device os_seed;
    const uint32_t seed = os_seed();

    std::mt19937 generator(seed);

    std::uniform_int_distribution<unsigned int> distribute(0, 128-1);

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
case 64:
	vvec[i] = (new polymorphic_Struct64{1});
	uvec[i] = (Struct64{1});
	stdvec[i] = (Struct64{1});
case 65:
	vvec[i] = (new polymorphic_Struct65{1});
	uvec[i] = (Struct65{1});
	stdvec[i] = (Struct65{1});
case 66:
	vvec[i] = (new polymorphic_Struct66{1});
	uvec[i] = (Struct66{1});
	stdvec[i] = (Struct66{1});
case 67:
	vvec[i] = (new polymorphic_Struct67{1});
	uvec[i] = (Struct67{1});
	stdvec[i] = (Struct67{1});
case 68:
	vvec[i] = (new polymorphic_Struct68{1});
	uvec[i] = (Struct68{1});
	stdvec[i] = (Struct68{1});
case 69:
	vvec[i] = (new polymorphic_Struct69{1});
	uvec[i] = (Struct69{1});
	stdvec[i] = (Struct69{1});
case 70:
	vvec[i] = (new polymorphic_Struct70{1});
	uvec[i] = (Struct70{1});
	stdvec[i] = (Struct70{1});
case 71:
	vvec[i] = (new polymorphic_Struct71{1});
	uvec[i] = (Struct71{1});
	stdvec[i] = (Struct71{1});
case 72:
	vvec[i] = (new polymorphic_Struct72{1});
	uvec[i] = (Struct72{1});
	stdvec[i] = (Struct72{1});
case 73:
	vvec[i] = (new polymorphic_Struct73{1});
	uvec[i] = (Struct73{1});
	stdvec[i] = (Struct73{1});
case 74:
	vvec[i] = (new polymorphic_Struct74{1});
	uvec[i] = (Struct74{1});
	stdvec[i] = (Struct74{1});
case 75:
	vvec[i] = (new polymorphic_Struct75{1});
	uvec[i] = (Struct75{1});
	stdvec[i] = (Struct75{1});
case 76:
	vvec[i] = (new polymorphic_Struct76{1});
	uvec[i] = (Struct76{1});
	stdvec[i] = (Struct76{1});
case 77:
	vvec[i] = (new polymorphic_Struct77{1});
	uvec[i] = (Struct77{1});
	stdvec[i] = (Struct77{1});
case 78:
	vvec[i] = (new polymorphic_Struct78{1});
	uvec[i] = (Struct78{1});
	stdvec[i] = (Struct78{1});
case 79:
	vvec[i] = (new polymorphic_Struct79{1});
	uvec[i] = (Struct79{1});
	stdvec[i] = (Struct79{1});
case 80:
	vvec[i] = (new polymorphic_Struct80{1});
	uvec[i] = (Struct80{1});
	stdvec[i] = (Struct80{1});
case 81:
	vvec[i] = (new polymorphic_Struct81{1});
	uvec[i] = (Struct81{1});
	stdvec[i] = (Struct81{1});
case 82:
	vvec[i] = (new polymorphic_Struct82{1});
	uvec[i] = (Struct82{1});
	stdvec[i] = (Struct82{1});
case 83:
	vvec[i] = (new polymorphic_Struct83{1});
	uvec[i] = (Struct83{1});
	stdvec[i] = (Struct83{1});
case 84:
	vvec[i] = (new polymorphic_Struct84{1});
	uvec[i] = (Struct84{1});
	stdvec[i] = (Struct84{1});
case 85:
	vvec[i] = (new polymorphic_Struct85{1});
	uvec[i] = (Struct85{1});
	stdvec[i] = (Struct85{1});
case 86:
	vvec[i] = (new polymorphic_Struct86{1});
	uvec[i] = (Struct86{1});
	stdvec[i] = (Struct86{1});
case 87:
	vvec[i] = (new polymorphic_Struct87{1});
	uvec[i] = (Struct87{1});
	stdvec[i] = (Struct87{1});
case 88:
	vvec[i] = (new polymorphic_Struct88{1});
	uvec[i] = (Struct88{1});
	stdvec[i] = (Struct88{1});
case 89:
	vvec[i] = (new polymorphic_Struct89{1});
	uvec[i] = (Struct89{1});
	stdvec[i] = (Struct89{1});
case 90:
	vvec[i] = (new polymorphic_Struct90{1});
	uvec[i] = (Struct90{1});
	stdvec[i] = (Struct90{1});
case 91:
	vvec[i] = (new polymorphic_Struct91{1});
	uvec[i] = (Struct91{1});
	stdvec[i] = (Struct91{1});
case 92:
	vvec[i] = (new polymorphic_Struct92{1});
	uvec[i] = (Struct92{1});
	stdvec[i] = (Struct92{1});
case 93:
	vvec[i] = (new polymorphic_Struct93{1});
	uvec[i] = (Struct93{1});
	stdvec[i] = (Struct93{1});
case 94:
	vvec[i] = (new polymorphic_Struct94{1});
	uvec[i] = (Struct94{1});
	stdvec[i] = (Struct94{1});
case 95:
	vvec[i] = (new polymorphic_Struct95{1});
	uvec[i] = (Struct95{1});
	stdvec[i] = (Struct95{1});
case 96:
	vvec[i] = (new polymorphic_Struct96{1});
	uvec[i] = (Struct96{1});
	stdvec[i] = (Struct96{1});
case 97:
	vvec[i] = (new polymorphic_Struct97{1});
	uvec[i] = (Struct97{1});
	stdvec[i] = (Struct97{1});
case 98:
	vvec[i] = (new polymorphic_Struct98{1});
	uvec[i] = (Struct98{1});
	stdvec[i] = (Struct98{1});
case 99:
	vvec[i] = (new polymorphic_Struct99{1});
	uvec[i] = (Struct99{1});
	stdvec[i] = (Struct99{1});
case 100:
	vvec[i] = (new polymorphic_Struct100{1});
	uvec[i] = (Struct100{1});
	stdvec[i] = (Struct100{1});
case 101:
	vvec[i] = (new polymorphic_Struct101{1});
	uvec[i] = (Struct101{1});
	stdvec[i] = (Struct101{1});
case 102:
	vvec[i] = (new polymorphic_Struct102{1});
	uvec[i] = (Struct102{1});
	stdvec[i] = (Struct102{1});
case 103:
	vvec[i] = (new polymorphic_Struct103{1});
	uvec[i] = (Struct103{1});
	stdvec[i] = (Struct103{1});
case 104:
	vvec[i] = (new polymorphic_Struct104{1});
	uvec[i] = (Struct104{1});
	stdvec[i] = (Struct104{1});
case 105:
	vvec[i] = (new polymorphic_Struct105{1});
	uvec[i] = (Struct105{1});
	stdvec[i] = (Struct105{1});
case 106:
	vvec[i] = (new polymorphic_Struct106{1});
	uvec[i] = (Struct106{1});
	stdvec[i] = (Struct106{1});
case 107:
	vvec[i] = (new polymorphic_Struct107{1});
	uvec[i] = (Struct107{1});
	stdvec[i] = (Struct107{1});
case 108:
	vvec[i] = (new polymorphic_Struct108{1});
	uvec[i] = (Struct108{1});
	stdvec[i] = (Struct108{1});
case 109:
	vvec[i] = (new polymorphic_Struct109{1});
	uvec[i] = (Struct109{1});
	stdvec[i] = (Struct109{1});
case 110:
	vvec[i] = (new polymorphic_Struct110{1});
	uvec[i] = (Struct110{1});
	stdvec[i] = (Struct110{1});
case 111:
	vvec[i] = (new polymorphic_Struct111{1});
	uvec[i] = (Struct111{1});
	stdvec[i] = (Struct111{1});
case 112:
	vvec[i] = (new polymorphic_Struct112{1});
	uvec[i] = (Struct112{1});
	stdvec[i] = (Struct112{1});
case 113:
	vvec[i] = (new polymorphic_Struct113{1});
	uvec[i] = (Struct113{1});
	stdvec[i] = (Struct113{1});
case 114:
	vvec[i] = (new polymorphic_Struct114{1});
	uvec[i] = (Struct114{1});
	stdvec[i] = (Struct114{1});
case 115:
	vvec[i] = (new polymorphic_Struct115{1});
	uvec[i] = (Struct115{1});
	stdvec[i] = (Struct115{1});
case 116:
	vvec[i] = (new polymorphic_Struct116{1});
	uvec[i] = (Struct116{1});
	stdvec[i] = (Struct116{1});
case 117:
	vvec[i] = (new polymorphic_Struct117{1});
	uvec[i] = (Struct117{1});
	stdvec[i] = (Struct117{1});
case 118:
	vvec[i] = (new polymorphic_Struct118{1});
	uvec[i] = (Struct118{1});
	stdvec[i] = (Struct118{1});
case 119:
	vvec[i] = (new polymorphic_Struct119{1});
	uvec[i] = (Struct119{1});
	stdvec[i] = (Struct119{1});
case 120:
	vvec[i] = (new polymorphic_Struct120{1});
	uvec[i] = (Struct120{1});
	stdvec[i] = (Struct120{1});
case 121:
	vvec[i] = (new polymorphic_Struct121{1});
	uvec[i] = (Struct121{1});
	stdvec[i] = (Struct121{1});
case 122:
	vvec[i] = (new polymorphic_Struct122{1});
	uvec[i] = (Struct122{1});
	stdvec[i] = (Struct122{1});
case 123:
	vvec[i] = (new polymorphic_Struct123{1});
	uvec[i] = (Struct123{1});
	stdvec[i] = (Struct123{1});
case 124:
	vvec[i] = (new polymorphic_Struct124{1});
	uvec[i] = (Struct124{1});
	stdvec[i] = (Struct124{1});
case 125:
	vvec[i] = (new polymorphic_Struct125{1});
	uvec[i] = (Struct125{1});
	stdvec[i] = (Struct125{1});
case 126:
	vvec[i] = (new polymorphic_Struct126{1});
	uvec[i] = (Struct126{1});
	stdvec[i] = (Struct126{1});
case 127:
	vvec[i] = (new polymorphic_Struct127{1});
	uvec[i] = (Struct127{1});
	stdvec[i] = (Struct127{1});


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

    std::ofstream os("../profiling_results/128_types.txt");
    

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