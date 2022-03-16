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

void profiling_512() {
    double if_vec_total = 0, uvec_total = 0, vvec_total = 0, stdvec_total = 0;

    std::array<Tagged_Union<Struct0, Struct1, Struct2, Struct3, Struct4, Struct5, Struct6, Struct7, Struct8, Struct9, Struct10, Struct11, Struct12, Struct13, Struct14, Struct15, Struct16, Struct17, Struct18, Struct19, Struct20, Struct21, Struct22, Struct23, Struct24, Struct25, Struct26, Struct27, Struct28, Struct29, Struct30, Struct31, Struct32, Struct33, Struct34, Struct35, Struct36, Struct37, Struct38, Struct39, Struct40, Struct41, Struct42, Struct43, Struct44, Struct45, Struct46, Struct47, Struct48, Struct49, Struct50, Struct51, Struct52, Struct53, Struct54, Struct55, Struct56, Struct57, Struct58, Struct59, Struct60, Struct61, Struct62, Struct63, Struct64, Struct65, Struct66, Struct67, Struct68, Struct69, Struct70, Struct71, Struct72, Struct73, Struct74, Struct75, Struct76, Struct77, Struct78, Struct79, Struct80, Struct81, Struct82, Struct83, Struct84, Struct85, Struct86, Struct87, Struct88, Struct89, Struct90, Struct91, Struct92, Struct93, Struct94, Struct95, Struct96, Struct97, Struct98, Struct99, Struct100, Struct101, Struct102, Struct103, Struct104, Struct105, Struct106, Struct107, Struct108, Struct109, Struct110, Struct111, Struct112, Struct113, Struct114, Struct115, Struct116, Struct117, Struct118, Struct119, Struct120, Struct121, Struct122, Struct123, Struct124, Struct125, Struct126, Struct127, Struct128, Struct129, Struct130, Struct131, Struct132, Struct133, Struct134, Struct135, Struct136, Struct137, Struct138, Struct139, Struct140, Struct141, Struct142, Struct143, Struct144, Struct145, Struct146, Struct147, Struct148, Struct149, Struct150, Struct151, Struct152, Struct153, Struct154, Struct155, Struct156, Struct157, Struct158, Struct159, Struct160, Struct161, Struct162, Struct163, Struct164, Struct165, Struct166, Struct167, Struct168, Struct169, Struct170, Struct171, Struct172, Struct173, Struct174, Struct175, Struct176, Struct177, Struct178, Struct179, Struct180, Struct181, Struct182, Struct183, Struct184, Struct185, Struct186, Struct187, Struct188, Struct189, Struct190, Struct191, Struct192, Struct193, Struct194, Struct195, Struct196, Struct197, Struct198, Struct199, Struct200, Struct201, Struct202, Struct203, Struct204, Struct205, Struct206, Struct207, Struct208, Struct209, Struct210, Struct211, Struct212, Struct213, Struct214, Struct215, Struct216, Struct217, Struct218, Struct219, Struct220, Struct221, Struct222, Struct223, Struct224, Struct225, Struct226, Struct227, Struct228, Struct229, Struct230, Struct231, Struct232, Struct233, Struct234, Struct235, Struct236, Struct237, Struct238, Struct239, Struct240, Struct241, Struct242, Struct243, Struct244, Struct245, Struct246, Struct247, Struct248, Struct249, Struct250, Struct251, Struct252, Struct253, Struct254, Struct255, Struct256, Struct257, Struct258, Struct259, Struct260, Struct261, Struct262, Struct263, Struct264, Struct265, Struct266, Struct267, Struct268, Struct269, Struct270, Struct271, Struct272, Struct273, Struct274, Struct275, Struct276, Struct277, Struct278, Struct279, Struct280, Struct281, Struct282, Struct283, Struct284, Struct285, Struct286, Struct287, Struct288, Struct289, Struct290, Struct291, Struct292, Struct293, Struct294, Struct295, Struct296, Struct297, Struct298, Struct299, Struct300, Struct301, Struct302, Struct303, Struct304, Struct305, Struct306, Struct307, Struct308, Struct309, Struct310, Struct311, Struct312, Struct313, Struct314, Struct315, Struct316, Struct317, Struct318, Struct319, Struct320, Struct321, Struct322, Struct323, Struct324, Struct325, Struct326, Struct327, Struct328, Struct329, Struct330, Struct331, Struct332, Struct333, Struct334, Struct335, Struct336, Struct337, Struct338, Struct339, Struct340, Struct341, Struct342, Struct343, Struct344, Struct345, Struct346, Struct347, Struct348, Struct349, Struct350, Struct351, Struct352, Struct353, Struct354, Struct355, Struct356, Struct357, Struct358, Struct359, Struct360, Struct361, Struct362, Struct363, Struct364, Struct365, Struct366, Struct367, Struct368, Struct369, Struct370, Struct371, Struct372, Struct373, Struct374, Struct375, Struct376, Struct377, Struct378, Struct379, Struct380, Struct381, Struct382, Struct383, Struct384, Struct385, Struct386, Struct387, Struct388, Struct389, Struct390, Struct391, Struct392, Struct393, Struct394, Struct395, Struct396, Struct397, Struct398, Struct399, Struct400, Struct401, Struct402, Struct403, Struct404, Struct405, Struct406, Struct407, Struct408, Struct409, Struct410, Struct411, Struct412, Struct413, Struct414, Struct415, Struct416, Struct417, Struct418, Struct419, Struct420, Struct421, Struct422, Struct423, Struct424, Struct425, Struct426, Struct427, Struct428, Struct429, Struct430, Struct431, Struct432, Struct433, Struct434, Struct435, Struct436, Struct437, Struct438, Struct439, Struct440, Struct441, Struct442, Struct443, Struct444, Struct445, Struct446, Struct447, Struct448, Struct449, Struct450, Struct451, Struct452, Struct453, Struct454, Struct455, Struct456, Struct457, Struct458, Struct459, Struct460, Struct461, Struct462, Struct463, Struct464, Struct465, Struct466, Struct467, Struct468, Struct469, Struct470, Struct471, Struct472, Struct473, Struct474, Struct475, Struct476, Struct477, Struct478, Struct479, Struct480, Struct481, Struct482, Struct483, Struct484, Struct485, Struct486, Struct487, Struct488, Struct489, Struct490, Struct491, Struct492, Struct493, Struct494, Struct495, Struct496, Struct497, Struct498, Struct499, Struct500, Struct501, Struct502, Struct503, Struct504, Struct505, Struct506, Struct507, Struct508, Struct509, Struct510, Struct511>, ARRAY_SIZE> uvec{};

    std::array<Virtual_Base_Struct*, ARRAY_SIZE> vvec{};
    std::array<std::variant<Struct0, Struct1, Struct2, Struct3, Struct4, Struct5, Struct6, Struct7, Struct8, Struct9, Struct10, Struct11, Struct12, Struct13, Struct14, Struct15, Struct16, Struct17, Struct18, Struct19, Struct20, Struct21, Struct22, Struct23, Struct24, Struct25, Struct26, Struct27, Struct28, Struct29, Struct30, Struct31, Struct32, Struct33, Struct34, Struct35, Struct36, Struct37, Struct38, Struct39, Struct40, Struct41, Struct42, Struct43, Struct44, Struct45, Struct46, Struct47, Struct48, Struct49, Struct50, Struct51, Struct52, Struct53, Struct54, Struct55, Struct56, Struct57, Struct58, Struct59, Struct60, Struct61, Struct62, Struct63, Struct64, Struct65, Struct66, Struct67, Struct68, Struct69, Struct70, Struct71, Struct72, Struct73, Struct74, Struct75, Struct76, Struct77, Struct78, Struct79, Struct80, Struct81, Struct82, Struct83, Struct84, Struct85, Struct86, Struct87, Struct88, Struct89, Struct90, Struct91, Struct92, Struct93, Struct94, Struct95, Struct96, Struct97, Struct98, Struct99, Struct100, Struct101, Struct102, Struct103, Struct104, Struct105, Struct106, Struct107, Struct108, Struct109, Struct110, Struct111, Struct112, Struct113, Struct114, Struct115, Struct116, Struct117, Struct118, Struct119, Struct120, Struct121, Struct122, Struct123, Struct124, Struct125, Struct126, Struct127, Struct128, Struct129, Struct130, Struct131, Struct132, Struct133, Struct134, Struct135, Struct136, Struct137, Struct138, Struct139, Struct140, Struct141, Struct142, Struct143, Struct144, Struct145, Struct146, Struct147, Struct148, Struct149, Struct150, Struct151, Struct152, Struct153, Struct154, Struct155, Struct156, Struct157, Struct158, Struct159, Struct160, Struct161, Struct162, Struct163, Struct164, Struct165, Struct166, Struct167, Struct168, Struct169, Struct170, Struct171, Struct172, Struct173, Struct174, Struct175, Struct176, Struct177, Struct178, Struct179, Struct180, Struct181, Struct182, Struct183, Struct184, Struct185, Struct186, Struct187, Struct188, Struct189, Struct190, Struct191, Struct192, Struct193, Struct194, Struct195, Struct196, Struct197, Struct198, Struct199, Struct200, Struct201, Struct202, Struct203, Struct204, Struct205, Struct206, Struct207, Struct208, Struct209, Struct210, Struct211, Struct212, Struct213, Struct214, Struct215, Struct216, Struct217, Struct218, Struct219, Struct220, Struct221, Struct222, Struct223, Struct224, Struct225, Struct226, Struct227, Struct228, Struct229, Struct230, Struct231, Struct232, Struct233, Struct234, Struct235, Struct236, Struct237, Struct238, Struct239, Struct240, Struct241, Struct242, Struct243, Struct244, Struct245, Struct246, Struct247, Struct248, Struct249, Struct250, Struct251, Struct252, Struct253, Struct254, Struct255, Struct256, Struct257, Struct258, Struct259, Struct260, Struct261, Struct262, Struct263, Struct264, Struct265, Struct266, Struct267, Struct268, Struct269, Struct270, Struct271, Struct272, Struct273, Struct274, Struct275, Struct276, Struct277, Struct278, Struct279, Struct280, Struct281, Struct282, Struct283, Struct284, Struct285, Struct286, Struct287, Struct288, Struct289, Struct290, Struct291, Struct292, Struct293, Struct294, Struct295, Struct296, Struct297, Struct298, Struct299, Struct300, Struct301, Struct302, Struct303, Struct304, Struct305, Struct306, Struct307, Struct308, Struct309, Struct310, Struct311, Struct312, Struct313, Struct314, Struct315, Struct316, Struct317, Struct318, Struct319, Struct320, Struct321, Struct322, Struct323, Struct324, Struct325, Struct326, Struct327, Struct328, Struct329, Struct330, Struct331, Struct332, Struct333, Struct334, Struct335, Struct336, Struct337, Struct338, Struct339, Struct340, Struct341, Struct342, Struct343, Struct344, Struct345, Struct346, Struct347, Struct348, Struct349, Struct350, Struct351, Struct352, Struct353, Struct354, Struct355, Struct356, Struct357, Struct358, Struct359, Struct360, Struct361, Struct362, Struct363, Struct364, Struct365, Struct366, Struct367, Struct368, Struct369, Struct370, Struct371, Struct372, Struct373, Struct374, Struct375, Struct376, Struct377, Struct378, Struct379, Struct380, Struct381, Struct382, Struct383, Struct384, Struct385, Struct386, Struct387, Struct388, Struct389, Struct390, Struct391, Struct392, Struct393, Struct394, Struct395, Struct396, Struct397, Struct398, Struct399, Struct400, Struct401, Struct402, Struct403, Struct404, Struct405, Struct406, Struct407, Struct408, Struct409, Struct410, Struct411, Struct412, Struct413, Struct414, Struct415, Struct416, Struct417, Struct418, Struct419, Struct420, Struct421, Struct422, Struct423, Struct424, Struct425, Struct426, Struct427, Struct428, Struct429, Struct430, Struct431, Struct432, Struct433, Struct434, Struct435, Struct436, Struct437, Struct438, Struct439, Struct440, Struct441, Struct442, Struct443, Struct444, Struct445, Struct446, Struct447, Struct448, Struct449, Struct450, Struct451, Struct452, Struct453, Struct454, Struct455, Struct456, Struct457, Struct458, Struct459, Struct460, Struct461, Struct462, Struct463, Struct464, Struct465, Struct466, Struct467, Struct468, Struct469, Struct470, Struct471, Struct472, Struct473, Struct474, Struct475, Struct476, Struct477, Struct478, Struct479, Struct480, Struct481, Struct482, Struct483, Struct484, Struct485, Struct486, Struct487, Struct488, Struct489, Struct490, Struct491, Struct492, Struct493, Struct494, Struct495, Struct496, Struct497, Struct498, Struct499, Struct500, Struct501, Struct502, Struct503, Struct504, Struct505, Struct506, Struct507, Struct508, Struct509, Struct510, Struct511>, ARRAY_SIZE> stdvec;


    std::random_device os_seed;
    const uint32_t seed = os_seed();

    std::mt19937 generator(seed);

    std::uniform_int_distribution<unsigned int> distribute(0, 512-1);

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
case 128:
	vvec[i] = (new polymorphic_Struct128{1});
	uvec[i] = (Struct128{1});
	stdvec[i] = (Struct128{1});
case 129:
	vvec[i] = (new polymorphic_Struct129{1});
	uvec[i] = (Struct129{1});
	stdvec[i] = (Struct129{1});
case 130:
	vvec[i] = (new polymorphic_Struct130{1});
	uvec[i] = (Struct130{1});
	stdvec[i] = (Struct130{1});
case 131:
	vvec[i] = (new polymorphic_Struct131{1});
	uvec[i] = (Struct131{1});
	stdvec[i] = (Struct131{1});
case 132:
	vvec[i] = (new polymorphic_Struct132{1});
	uvec[i] = (Struct132{1});
	stdvec[i] = (Struct132{1});
case 133:
	vvec[i] = (new polymorphic_Struct133{1});
	uvec[i] = (Struct133{1});
	stdvec[i] = (Struct133{1});
case 134:
	vvec[i] = (new polymorphic_Struct134{1});
	uvec[i] = (Struct134{1});
	stdvec[i] = (Struct134{1});
case 135:
	vvec[i] = (new polymorphic_Struct135{1});
	uvec[i] = (Struct135{1});
	stdvec[i] = (Struct135{1});
case 136:
	vvec[i] = (new polymorphic_Struct136{1});
	uvec[i] = (Struct136{1});
	stdvec[i] = (Struct136{1});
case 137:
	vvec[i] = (new polymorphic_Struct137{1});
	uvec[i] = (Struct137{1});
	stdvec[i] = (Struct137{1});
case 138:
	vvec[i] = (new polymorphic_Struct138{1});
	uvec[i] = (Struct138{1});
	stdvec[i] = (Struct138{1});
case 139:
	vvec[i] = (new polymorphic_Struct139{1});
	uvec[i] = (Struct139{1});
	stdvec[i] = (Struct139{1});
case 140:
	vvec[i] = (new polymorphic_Struct140{1});
	uvec[i] = (Struct140{1});
	stdvec[i] = (Struct140{1});
case 141:
	vvec[i] = (new polymorphic_Struct141{1});
	uvec[i] = (Struct141{1});
	stdvec[i] = (Struct141{1});
case 142:
	vvec[i] = (new polymorphic_Struct142{1});
	uvec[i] = (Struct142{1});
	stdvec[i] = (Struct142{1});
case 143:
	vvec[i] = (new polymorphic_Struct143{1});
	uvec[i] = (Struct143{1});
	stdvec[i] = (Struct143{1});
case 144:
	vvec[i] = (new polymorphic_Struct144{1});
	uvec[i] = (Struct144{1});
	stdvec[i] = (Struct144{1});
case 145:
	vvec[i] = (new polymorphic_Struct145{1});
	uvec[i] = (Struct145{1});
	stdvec[i] = (Struct145{1});
case 146:
	vvec[i] = (new polymorphic_Struct146{1});
	uvec[i] = (Struct146{1});
	stdvec[i] = (Struct146{1});
case 147:
	vvec[i] = (new polymorphic_Struct147{1});
	uvec[i] = (Struct147{1});
	stdvec[i] = (Struct147{1});
case 148:
	vvec[i] = (new polymorphic_Struct148{1});
	uvec[i] = (Struct148{1});
	stdvec[i] = (Struct148{1});
case 149:
	vvec[i] = (new polymorphic_Struct149{1});
	uvec[i] = (Struct149{1});
	stdvec[i] = (Struct149{1});
case 150:
	vvec[i] = (new polymorphic_Struct150{1});
	uvec[i] = (Struct150{1});
	stdvec[i] = (Struct150{1});
case 151:
	vvec[i] = (new polymorphic_Struct151{1});
	uvec[i] = (Struct151{1});
	stdvec[i] = (Struct151{1});
case 152:
	vvec[i] = (new polymorphic_Struct152{1});
	uvec[i] = (Struct152{1});
	stdvec[i] = (Struct152{1});
case 153:
	vvec[i] = (new polymorphic_Struct153{1});
	uvec[i] = (Struct153{1});
	stdvec[i] = (Struct153{1});
case 154:
	vvec[i] = (new polymorphic_Struct154{1});
	uvec[i] = (Struct154{1});
	stdvec[i] = (Struct154{1});
case 155:
	vvec[i] = (new polymorphic_Struct155{1});
	uvec[i] = (Struct155{1});
	stdvec[i] = (Struct155{1});
case 156:
	vvec[i] = (new polymorphic_Struct156{1});
	uvec[i] = (Struct156{1});
	stdvec[i] = (Struct156{1});
case 157:
	vvec[i] = (new polymorphic_Struct157{1});
	uvec[i] = (Struct157{1});
	stdvec[i] = (Struct157{1});
case 158:
	vvec[i] = (new polymorphic_Struct158{1});
	uvec[i] = (Struct158{1});
	stdvec[i] = (Struct158{1});
case 159:
	vvec[i] = (new polymorphic_Struct159{1});
	uvec[i] = (Struct159{1});
	stdvec[i] = (Struct159{1});
case 160:
	vvec[i] = (new polymorphic_Struct160{1});
	uvec[i] = (Struct160{1});
	stdvec[i] = (Struct160{1});
case 161:
	vvec[i] = (new polymorphic_Struct161{1});
	uvec[i] = (Struct161{1});
	stdvec[i] = (Struct161{1});
case 162:
	vvec[i] = (new polymorphic_Struct162{1});
	uvec[i] = (Struct162{1});
	stdvec[i] = (Struct162{1});
case 163:
	vvec[i] = (new polymorphic_Struct163{1});
	uvec[i] = (Struct163{1});
	stdvec[i] = (Struct163{1});
case 164:
	vvec[i] = (new polymorphic_Struct164{1});
	uvec[i] = (Struct164{1});
	stdvec[i] = (Struct164{1});
case 165:
	vvec[i] = (new polymorphic_Struct165{1});
	uvec[i] = (Struct165{1});
	stdvec[i] = (Struct165{1});
case 166:
	vvec[i] = (new polymorphic_Struct166{1});
	uvec[i] = (Struct166{1});
	stdvec[i] = (Struct166{1});
case 167:
	vvec[i] = (new polymorphic_Struct167{1});
	uvec[i] = (Struct167{1});
	stdvec[i] = (Struct167{1});
case 168:
	vvec[i] = (new polymorphic_Struct168{1});
	uvec[i] = (Struct168{1});
	stdvec[i] = (Struct168{1});
case 169:
	vvec[i] = (new polymorphic_Struct169{1});
	uvec[i] = (Struct169{1});
	stdvec[i] = (Struct169{1});
case 170:
	vvec[i] = (new polymorphic_Struct170{1});
	uvec[i] = (Struct170{1});
	stdvec[i] = (Struct170{1});
case 171:
	vvec[i] = (new polymorphic_Struct171{1});
	uvec[i] = (Struct171{1});
	stdvec[i] = (Struct171{1});
case 172:
	vvec[i] = (new polymorphic_Struct172{1});
	uvec[i] = (Struct172{1});
	stdvec[i] = (Struct172{1});
case 173:
	vvec[i] = (new polymorphic_Struct173{1});
	uvec[i] = (Struct173{1});
	stdvec[i] = (Struct173{1});
case 174:
	vvec[i] = (new polymorphic_Struct174{1});
	uvec[i] = (Struct174{1});
	stdvec[i] = (Struct174{1});
case 175:
	vvec[i] = (new polymorphic_Struct175{1});
	uvec[i] = (Struct175{1});
	stdvec[i] = (Struct175{1});
case 176:
	vvec[i] = (new polymorphic_Struct176{1});
	uvec[i] = (Struct176{1});
	stdvec[i] = (Struct176{1});
case 177:
	vvec[i] = (new polymorphic_Struct177{1});
	uvec[i] = (Struct177{1});
	stdvec[i] = (Struct177{1});
case 178:
	vvec[i] = (new polymorphic_Struct178{1});
	uvec[i] = (Struct178{1});
	stdvec[i] = (Struct178{1});
case 179:
	vvec[i] = (new polymorphic_Struct179{1});
	uvec[i] = (Struct179{1});
	stdvec[i] = (Struct179{1});
case 180:
	vvec[i] = (new polymorphic_Struct180{1});
	uvec[i] = (Struct180{1});
	stdvec[i] = (Struct180{1});
case 181:
	vvec[i] = (new polymorphic_Struct181{1});
	uvec[i] = (Struct181{1});
	stdvec[i] = (Struct181{1});
case 182:
	vvec[i] = (new polymorphic_Struct182{1});
	uvec[i] = (Struct182{1});
	stdvec[i] = (Struct182{1});
case 183:
	vvec[i] = (new polymorphic_Struct183{1});
	uvec[i] = (Struct183{1});
	stdvec[i] = (Struct183{1});
case 184:
	vvec[i] = (new polymorphic_Struct184{1});
	uvec[i] = (Struct184{1});
	stdvec[i] = (Struct184{1});
case 185:
	vvec[i] = (new polymorphic_Struct185{1});
	uvec[i] = (Struct185{1});
	stdvec[i] = (Struct185{1});
case 186:
	vvec[i] = (new polymorphic_Struct186{1});
	uvec[i] = (Struct186{1});
	stdvec[i] = (Struct186{1});
case 187:
	vvec[i] = (new polymorphic_Struct187{1});
	uvec[i] = (Struct187{1});
	stdvec[i] = (Struct187{1});
case 188:
	vvec[i] = (new polymorphic_Struct188{1});
	uvec[i] = (Struct188{1});
	stdvec[i] = (Struct188{1});
case 189:
	vvec[i] = (new polymorphic_Struct189{1});
	uvec[i] = (Struct189{1});
	stdvec[i] = (Struct189{1});
case 190:
	vvec[i] = (new polymorphic_Struct190{1});
	uvec[i] = (Struct190{1});
	stdvec[i] = (Struct190{1});
case 191:
	vvec[i] = (new polymorphic_Struct191{1});
	uvec[i] = (Struct191{1});
	stdvec[i] = (Struct191{1});
case 192:
	vvec[i] = (new polymorphic_Struct192{1});
	uvec[i] = (Struct192{1});
	stdvec[i] = (Struct192{1});
case 193:
	vvec[i] = (new polymorphic_Struct193{1});
	uvec[i] = (Struct193{1});
	stdvec[i] = (Struct193{1});
case 194:
	vvec[i] = (new polymorphic_Struct194{1});
	uvec[i] = (Struct194{1});
	stdvec[i] = (Struct194{1});
case 195:
	vvec[i] = (new polymorphic_Struct195{1});
	uvec[i] = (Struct195{1});
	stdvec[i] = (Struct195{1});
case 196:
	vvec[i] = (new polymorphic_Struct196{1});
	uvec[i] = (Struct196{1});
	stdvec[i] = (Struct196{1});
case 197:
	vvec[i] = (new polymorphic_Struct197{1});
	uvec[i] = (Struct197{1});
	stdvec[i] = (Struct197{1});
case 198:
	vvec[i] = (new polymorphic_Struct198{1});
	uvec[i] = (Struct198{1});
	stdvec[i] = (Struct198{1});
case 199:
	vvec[i] = (new polymorphic_Struct199{1});
	uvec[i] = (Struct199{1});
	stdvec[i] = (Struct199{1});
case 200:
	vvec[i] = (new polymorphic_Struct200{1});
	uvec[i] = (Struct200{1});
	stdvec[i] = (Struct200{1});
case 201:
	vvec[i] = (new polymorphic_Struct201{1});
	uvec[i] = (Struct201{1});
	stdvec[i] = (Struct201{1});
case 202:
	vvec[i] = (new polymorphic_Struct202{1});
	uvec[i] = (Struct202{1});
	stdvec[i] = (Struct202{1});
case 203:
	vvec[i] = (new polymorphic_Struct203{1});
	uvec[i] = (Struct203{1});
	stdvec[i] = (Struct203{1});
case 204:
	vvec[i] = (new polymorphic_Struct204{1});
	uvec[i] = (Struct204{1});
	stdvec[i] = (Struct204{1});
case 205:
	vvec[i] = (new polymorphic_Struct205{1});
	uvec[i] = (Struct205{1});
	stdvec[i] = (Struct205{1});
case 206:
	vvec[i] = (new polymorphic_Struct206{1});
	uvec[i] = (Struct206{1});
	stdvec[i] = (Struct206{1});
case 207:
	vvec[i] = (new polymorphic_Struct207{1});
	uvec[i] = (Struct207{1});
	stdvec[i] = (Struct207{1});
case 208:
	vvec[i] = (new polymorphic_Struct208{1});
	uvec[i] = (Struct208{1});
	stdvec[i] = (Struct208{1});
case 209:
	vvec[i] = (new polymorphic_Struct209{1});
	uvec[i] = (Struct209{1});
	stdvec[i] = (Struct209{1});
case 210:
	vvec[i] = (new polymorphic_Struct210{1});
	uvec[i] = (Struct210{1});
	stdvec[i] = (Struct210{1});
case 211:
	vvec[i] = (new polymorphic_Struct211{1});
	uvec[i] = (Struct211{1});
	stdvec[i] = (Struct211{1});
case 212:
	vvec[i] = (new polymorphic_Struct212{1});
	uvec[i] = (Struct212{1});
	stdvec[i] = (Struct212{1});
case 213:
	vvec[i] = (new polymorphic_Struct213{1});
	uvec[i] = (Struct213{1});
	stdvec[i] = (Struct213{1});
case 214:
	vvec[i] = (new polymorphic_Struct214{1});
	uvec[i] = (Struct214{1});
	stdvec[i] = (Struct214{1});
case 215:
	vvec[i] = (new polymorphic_Struct215{1});
	uvec[i] = (Struct215{1});
	stdvec[i] = (Struct215{1});
case 216:
	vvec[i] = (new polymorphic_Struct216{1});
	uvec[i] = (Struct216{1});
	stdvec[i] = (Struct216{1});
case 217:
	vvec[i] = (new polymorphic_Struct217{1});
	uvec[i] = (Struct217{1});
	stdvec[i] = (Struct217{1});
case 218:
	vvec[i] = (new polymorphic_Struct218{1});
	uvec[i] = (Struct218{1});
	stdvec[i] = (Struct218{1});
case 219:
	vvec[i] = (new polymorphic_Struct219{1});
	uvec[i] = (Struct219{1});
	stdvec[i] = (Struct219{1});
case 220:
	vvec[i] = (new polymorphic_Struct220{1});
	uvec[i] = (Struct220{1});
	stdvec[i] = (Struct220{1});
case 221:
	vvec[i] = (new polymorphic_Struct221{1});
	uvec[i] = (Struct221{1});
	stdvec[i] = (Struct221{1});
case 222:
	vvec[i] = (new polymorphic_Struct222{1});
	uvec[i] = (Struct222{1});
	stdvec[i] = (Struct222{1});
case 223:
	vvec[i] = (new polymorphic_Struct223{1});
	uvec[i] = (Struct223{1});
	stdvec[i] = (Struct223{1});
case 224:
	vvec[i] = (new polymorphic_Struct224{1});
	uvec[i] = (Struct224{1});
	stdvec[i] = (Struct224{1});
case 225:
	vvec[i] = (new polymorphic_Struct225{1});
	uvec[i] = (Struct225{1});
	stdvec[i] = (Struct225{1});
case 226:
	vvec[i] = (new polymorphic_Struct226{1});
	uvec[i] = (Struct226{1});
	stdvec[i] = (Struct226{1});
case 227:
	vvec[i] = (new polymorphic_Struct227{1});
	uvec[i] = (Struct227{1});
	stdvec[i] = (Struct227{1});
case 228:
	vvec[i] = (new polymorphic_Struct228{1});
	uvec[i] = (Struct228{1});
	stdvec[i] = (Struct228{1});
case 229:
	vvec[i] = (new polymorphic_Struct229{1});
	uvec[i] = (Struct229{1});
	stdvec[i] = (Struct229{1});
case 230:
	vvec[i] = (new polymorphic_Struct230{1});
	uvec[i] = (Struct230{1});
	stdvec[i] = (Struct230{1});
case 231:
	vvec[i] = (new polymorphic_Struct231{1});
	uvec[i] = (Struct231{1});
	stdvec[i] = (Struct231{1});
case 232:
	vvec[i] = (new polymorphic_Struct232{1});
	uvec[i] = (Struct232{1});
	stdvec[i] = (Struct232{1});
case 233:
	vvec[i] = (new polymorphic_Struct233{1});
	uvec[i] = (Struct233{1});
	stdvec[i] = (Struct233{1});
case 234:
	vvec[i] = (new polymorphic_Struct234{1});
	uvec[i] = (Struct234{1});
	stdvec[i] = (Struct234{1});
case 235:
	vvec[i] = (new polymorphic_Struct235{1});
	uvec[i] = (Struct235{1});
	stdvec[i] = (Struct235{1});
case 236:
	vvec[i] = (new polymorphic_Struct236{1});
	uvec[i] = (Struct236{1});
	stdvec[i] = (Struct236{1});
case 237:
	vvec[i] = (new polymorphic_Struct237{1});
	uvec[i] = (Struct237{1});
	stdvec[i] = (Struct237{1});
case 238:
	vvec[i] = (new polymorphic_Struct238{1});
	uvec[i] = (Struct238{1});
	stdvec[i] = (Struct238{1});
case 239:
	vvec[i] = (new polymorphic_Struct239{1});
	uvec[i] = (Struct239{1});
	stdvec[i] = (Struct239{1});
case 240:
	vvec[i] = (new polymorphic_Struct240{1});
	uvec[i] = (Struct240{1});
	stdvec[i] = (Struct240{1});
case 241:
	vvec[i] = (new polymorphic_Struct241{1});
	uvec[i] = (Struct241{1});
	stdvec[i] = (Struct241{1});
case 242:
	vvec[i] = (new polymorphic_Struct242{1});
	uvec[i] = (Struct242{1});
	stdvec[i] = (Struct242{1});
case 243:
	vvec[i] = (new polymorphic_Struct243{1});
	uvec[i] = (Struct243{1});
	stdvec[i] = (Struct243{1});
case 244:
	vvec[i] = (new polymorphic_Struct244{1});
	uvec[i] = (Struct244{1});
	stdvec[i] = (Struct244{1});
case 245:
	vvec[i] = (new polymorphic_Struct245{1});
	uvec[i] = (Struct245{1});
	stdvec[i] = (Struct245{1});
case 246:
	vvec[i] = (new polymorphic_Struct246{1});
	uvec[i] = (Struct246{1});
	stdvec[i] = (Struct246{1});
case 247:
	vvec[i] = (new polymorphic_Struct247{1});
	uvec[i] = (Struct247{1});
	stdvec[i] = (Struct247{1});
case 248:
	vvec[i] = (new polymorphic_Struct248{1});
	uvec[i] = (Struct248{1});
	stdvec[i] = (Struct248{1});
case 249:
	vvec[i] = (new polymorphic_Struct249{1});
	uvec[i] = (Struct249{1});
	stdvec[i] = (Struct249{1});
case 250:
	vvec[i] = (new polymorphic_Struct250{1});
	uvec[i] = (Struct250{1});
	stdvec[i] = (Struct250{1});
case 251:
	vvec[i] = (new polymorphic_Struct251{1});
	uvec[i] = (Struct251{1});
	stdvec[i] = (Struct251{1});
case 252:
	vvec[i] = (new polymorphic_Struct252{1});
	uvec[i] = (Struct252{1});
	stdvec[i] = (Struct252{1});
case 253:
	vvec[i] = (new polymorphic_Struct253{1});
	uvec[i] = (Struct253{1});
	stdvec[i] = (Struct253{1});
case 254:
	vvec[i] = (new polymorphic_Struct254{1});
	uvec[i] = (Struct254{1});
	stdvec[i] = (Struct254{1});
case 255:
	vvec[i] = (new polymorphic_Struct255{1});
	uvec[i] = (Struct255{1});
	stdvec[i] = (Struct255{1});
case 256:
	vvec[i] = (new polymorphic_Struct256{1});
	uvec[i] = (Struct256{1});
	stdvec[i] = (Struct256{1});
case 257:
	vvec[i] = (new polymorphic_Struct257{1});
	uvec[i] = (Struct257{1});
	stdvec[i] = (Struct257{1});
case 258:
	vvec[i] = (new polymorphic_Struct258{1});
	uvec[i] = (Struct258{1});
	stdvec[i] = (Struct258{1});
case 259:
	vvec[i] = (new polymorphic_Struct259{1});
	uvec[i] = (Struct259{1});
	stdvec[i] = (Struct259{1});
case 260:
	vvec[i] = (new polymorphic_Struct260{1});
	uvec[i] = (Struct260{1});
	stdvec[i] = (Struct260{1});
case 261:
	vvec[i] = (new polymorphic_Struct261{1});
	uvec[i] = (Struct261{1});
	stdvec[i] = (Struct261{1});
case 262:
	vvec[i] = (new polymorphic_Struct262{1});
	uvec[i] = (Struct262{1});
	stdvec[i] = (Struct262{1});
case 263:
	vvec[i] = (new polymorphic_Struct263{1});
	uvec[i] = (Struct263{1});
	stdvec[i] = (Struct263{1});
case 264:
	vvec[i] = (new polymorphic_Struct264{1});
	uvec[i] = (Struct264{1});
	stdvec[i] = (Struct264{1});
case 265:
	vvec[i] = (new polymorphic_Struct265{1});
	uvec[i] = (Struct265{1});
	stdvec[i] = (Struct265{1});
case 266:
	vvec[i] = (new polymorphic_Struct266{1});
	uvec[i] = (Struct266{1});
	stdvec[i] = (Struct266{1});
case 267:
	vvec[i] = (new polymorphic_Struct267{1});
	uvec[i] = (Struct267{1});
	stdvec[i] = (Struct267{1});
case 268:
	vvec[i] = (new polymorphic_Struct268{1});
	uvec[i] = (Struct268{1});
	stdvec[i] = (Struct268{1});
case 269:
	vvec[i] = (new polymorphic_Struct269{1});
	uvec[i] = (Struct269{1});
	stdvec[i] = (Struct269{1});
case 270:
	vvec[i] = (new polymorphic_Struct270{1});
	uvec[i] = (Struct270{1});
	stdvec[i] = (Struct270{1});
case 271:
	vvec[i] = (new polymorphic_Struct271{1});
	uvec[i] = (Struct271{1});
	stdvec[i] = (Struct271{1});
case 272:
	vvec[i] = (new polymorphic_Struct272{1});
	uvec[i] = (Struct272{1});
	stdvec[i] = (Struct272{1});
case 273:
	vvec[i] = (new polymorphic_Struct273{1});
	uvec[i] = (Struct273{1});
	stdvec[i] = (Struct273{1});
case 274:
	vvec[i] = (new polymorphic_Struct274{1});
	uvec[i] = (Struct274{1});
	stdvec[i] = (Struct274{1});
case 275:
	vvec[i] = (new polymorphic_Struct275{1});
	uvec[i] = (Struct275{1});
	stdvec[i] = (Struct275{1});
case 276:
	vvec[i] = (new polymorphic_Struct276{1});
	uvec[i] = (Struct276{1});
	stdvec[i] = (Struct276{1});
case 277:
	vvec[i] = (new polymorphic_Struct277{1});
	uvec[i] = (Struct277{1});
	stdvec[i] = (Struct277{1});
case 278:
	vvec[i] = (new polymorphic_Struct278{1});
	uvec[i] = (Struct278{1});
	stdvec[i] = (Struct278{1});
case 279:
	vvec[i] = (new polymorphic_Struct279{1});
	uvec[i] = (Struct279{1});
	stdvec[i] = (Struct279{1});
case 280:
	vvec[i] = (new polymorphic_Struct280{1});
	uvec[i] = (Struct280{1});
	stdvec[i] = (Struct280{1});
case 281:
	vvec[i] = (new polymorphic_Struct281{1});
	uvec[i] = (Struct281{1});
	stdvec[i] = (Struct281{1});
case 282:
	vvec[i] = (new polymorphic_Struct282{1});
	uvec[i] = (Struct282{1});
	stdvec[i] = (Struct282{1});
case 283:
	vvec[i] = (new polymorphic_Struct283{1});
	uvec[i] = (Struct283{1});
	stdvec[i] = (Struct283{1});
case 284:
	vvec[i] = (new polymorphic_Struct284{1});
	uvec[i] = (Struct284{1});
	stdvec[i] = (Struct284{1});
case 285:
	vvec[i] = (new polymorphic_Struct285{1});
	uvec[i] = (Struct285{1});
	stdvec[i] = (Struct285{1});
case 286:
	vvec[i] = (new polymorphic_Struct286{1});
	uvec[i] = (Struct286{1});
	stdvec[i] = (Struct286{1});
case 287:
	vvec[i] = (new polymorphic_Struct287{1});
	uvec[i] = (Struct287{1});
	stdvec[i] = (Struct287{1});
case 288:
	vvec[i] = (new polymorphic_Struct288{1});
	uvec[i] = (Struct288{1});
	stdvec[i] = (Struct288{1});
case 289:
	vvec[i] = (new polymorphic_Struct289{1});
	uvec[i] = (Struct289{1});
	stdvec[i] = (Struct289{1});
case 290:
	vvec[i] = (new polymorphic_Struct290{1});
	uvec[i] = (Struct290{1});
	stdvec[i] = (Struct290{1});
case 291:
	vvec[i] = (new polymorphic_Struct291{1});
	uvec[i] = (Struct291{1});
	stdvec[i] = (Struct291{1});
case 292:
	vvec[i] = (new polymorphic_Struct292{1});
	uvec[i] = (Struct292{1});
	stdvec[i] = (Struct292{1});
case 293:
	vvec[i] = (new polymorphic_Struct293{1});
	uvec[i] = (Struct293{1});
	stdvec[i] = (Struct293{1});
case 294:
	vvec[i] = (new polymorphic_Struct294{1});
	uvec[i] = (Struct294{1});
	stdvec[i] = (Struct294{1});
case 295:
	vvec[i] = (new polymorphic_Struct295{1});
	uvec[i] = (Struct295{1});
	stdvec[i] = (Struct295{1});
case 296:
	vvec[i] = (new polymorphic_Struct296{1});
	uvec[i] = (Struct296{1});
	stdvec[i] = (Struct296{1});
case 297:
	vvec[i] = (new polymorphic_Struct297{1});
	uvec[i] = (Struct297{1});
	stdvec[i] = (Struct297{1});
case 298:
	vvec[i] = (new polymorphic_Struct298{1});
	uvec[i] = (Struct298{1});
	stdvec[i] = (Struct298{1});
case 299:
	vvec[i] = (new polymorphic_Struct299{1});
	uvec[i] = (Struct299{1});
	stdvec[i] = (Struct299{1});
case 300:
	vvec[i] = (new polymorphic_Struct300{1});
	uvec[i] = (Struct300{1});
	stdvec[i] = (Struct300{1});
case 301:
	vvec[i] = (new polymorphic_Struct301{1});
	uvec[i] = (Struct301{1});
	stdvec[i] = (Struct301{1});
case 302:
	vvec[i] = (new polymorphic_Struct302{1});
	uvec[i] = (Struct302{1});
	stdvec[i] = (Struct302{1});
case 303:
	vvec[i] = (new polymorphic_Struct303{1});
	uvec[i] = (Struct303{1});
	stdvec[i] = (Struct303{1});
case 304:
	vvec[i] = (new polymorphic_Struct304{1});
	uvec[i] = (Struct304{1});
	stdvec[i] = (Struct304{1});
case 305:
	vvec[i] = (new polymorphic_Struct305{1});
	uvec[i] = (Struct305{1});
	stdvec[i] = (Struct305{1});
case 306:
	vvec[i] = (new polymorphic_Struct306{1});
	uvec[i] = (Struct306{1});
	stdvec[i] = (Struct306{1});
case 307:
	vvec[i] = (new polymorphic_Struct307{1});
	uvec[i] = (Struct307{1});
	stdvec[i] = (Struct307{1});
case 308:
	vvec[i] = (new polymorphic_Struct308{1});
	uvec[i] = (Struct308{1});
	stdvec[i] = (Struct308{1});
case 309:
	vvec[i] = (new polymorphic_Struct309{1});
	uvec[i] = (Struct309{1});
	stdvec[i] = (Struct309{1});
case 310:
	vvec[i] = (new polymorphic_Struct310{1});
	uvec[i] = (Struct310{1});
	stdvec[i] = (Struct310{1});
case 311:
	vvec[i] = (new polymorphic_Struct311{1});
	uvec[i] = (Struct311{1});
	stdvec[i] = (Struct311{1});
case 312:
	vvec[i] = (new polymorphic_Struct312{1});
	uvec[i] = (Struct312{1});
	stdvec[i] = (Struct312{1});
case 313:
	vvec[i] = (new polymorphic_Struct313{1});
	uvec[i] = (Struct313{1});
	stdvec[i] = (Struct313{1});
case 314:
	vvec[i] = (new polymorphic_Struct314{1});
	uvec[i] = (Struct314{1});
	stdvec[i] = (Struct314{1});
case 315:
	vvec[i] = (new polymorphic_Struct315{1});
	uvec[i] = (Struct315{1});
	stdvec[i] = (Struct315{1});
case 316:
	vvec[i] = (new polymorphic_Struct316{1});
	uvec[i] = (Struct316{1});
	stdvec[i] = (Struct316{1});
case 317:
	vvec[i] = (new polymorphic_Struct317{1});
	uvec[i] = (Struct317{1});
	stdvec[i] = (Struct317{1});
case 318:
	vvec[i] = (new polymorphic_Struct318{1});
	uvec[i] = (Struct318{1});
	stdvec[i] = (Struct318{1});
case 319:
	vvec[i] = (new polymorphic_Struct319{1});
	uvec[i] = (Struct319{1});
	stdvec[i] = (Struct319{1});
case 320:
	vvec[i] = (new polymorphic_Struct320{1});
	uvec[i] = (Struct320{1});
	stdvec[i] = (Struct320{1});
case 321:
	vvec[i] = (new polymorphic_Struct321{1});
	uvec[i] = (Struct321{1});
	stdvec[i] = (Struct321{1});
case 322:
	vvec[i] = (new polymorphic_Struct322{1});
	uvec[i] = (Struct322{1});
	stdvec[i] = (Struct322{1});
case 323:
	vvec[i] = (new polymorphic_Struct323{1});
	uvec[i] = (Struct323{1});
	stdvec[i] = (Struct323{1});
case 324:
	vvec[i] = (new polymorphic_Struct324{1});
	uvec[i] = (Struct324{1});
	stdvec[i] = (Struct324{1});
case 325:
	vvec[i] = (new polymorphic_Struct325{1});
	uvec[i] = (Struct325{1});
	stdvec[i] = (Struct325{1});
case 326:
	vvec[i] = (new polymorphic_Struct326{1});
	uvec[i] = (Struct326{1});
	stdvec[i] = (Struct326{1});
case 327:
	vvec[i] = (new polymorphic_Struct327{1});
	uvec[i] = (Struct327{1});
	stdvec[i] = (Struct327{1});
case 328:
	vvec[i] = (new polymorphic_Struct328{1});
	uvec[i] = (Struct328{1});
	stdvec[i] = (Struct328{1});
case 329:
	vvec[i] = (new polymorphic_Struct329{1});
	uvec[i] = (Struct329{1});
	stdvec[i] = (Struct329{1});
case 330:
	vvec[i] = (new polymorphic_Struct330{1});
	uvec[i] = (Struct330{1});
	stdvec[i] = (Struct330{1});
case 331:
	vvec[i] = (new polymorphic_Struct331{1});
	uvec[i] = (Struct331{1});
	stdvec[i] = (Struct331{1});
case 332:
	vvec[i] = (new polymorphic_Struct332{1});
	uvec[i] = (Struct332{1});
	stdvec[i] = (Struct332{1});
case 333:
	vvec[i] = (new polymorphic_Struct333{1});
	uvec[i] = (Struct333{1});
	stdvec[i] = (Struct333{1});
case 334:
	vvec[i] = (new polymorphic_Struct334{1});
	uvec[i] = (Struct334{1});
	stdvec[i] = (Struct334{1});
case 335:
	vvec[i] = (new polymorphic_Struct335{1});
	uvec[i] = (Struct335{1});
	stdvec[i] = (Struct335{1});
case 336:
	vvec[i] = (new polymorphic_Struct336{1});
	uvec[i] = (Struct336{1});
	stdvec[i] = (Struct336{1});
case 337:
	vvec[i] = (new polymorphic_Struct337{1});
	uvec[i] = (Struct337{1});
	stdvec[i] = (Struct337{1});
case 338:
	vvec[i] = (new polymorphic_Struct338{1});
	uvec[i] = (Struct338{1});
	stdvec[i] = (Struct338{1});
case 339:
	vvec[i] = (new polymorphic_Struct339{1});
	uvec[i] = (Struct339{1});
	stdvec[i] = (Struct339{1});
case 340:
	vvec[i] = (new polymorphic_Struct340{1});
	uvec[i] = (Struct340{1});
	stdvec[i] = (Struct340{1});
case 341:
	vvec[i] = (new polymorphic_Struct341{1});
	uvec[i] = (Struct341{1});
	stdvec[i] = (Struct341{1});
case 342:
	vvec[i] = (new polymorphic_Struct342{1});
	uvec[i] = (Struct342{1});
	stdvec[i] = (Struct342{1});
case 343:
	vvec[i] = (new polymorphic_Struct343{1});
	uvec[i] = (Struct343{1});
	stdvec[i] = (Struct343{1});
case 344:
	vvec[i] = (new polymorphic_Struct344{1});
	uvec[i] = (Struct344{1});
	stdvec[i] = (Struct344{1});
case 345:
	vvec[i] = (new polymorphic_Struct345{1});
	uvec[i] = (Struct345{1});
	stdvec[i] = (Struct345{1});
case 346:
	vvec[i] = (new polymorphic_Struct346{1});
	uvec[i] = (Struct346{1});
	stdvec[i] = (Struct346{1});
case 347:
	vvec[i] = (new polymorphic_Struct347{1});
	uvec[i] = (Struct347{1});
	stdvec[i] = (Struct347{1});
case 348:
	vvec[i] = (new polymorphic_Struct348{1});
	uvec[i] = (Struct348{1});
	stdvec[i] = (Struct348{1});
case 349:
	vvec[i] = (new polymorphic_Struct349{1});
	uvec[i] = (Struct349{1});
	stdvec[i] = (Struct349{1});
case 350:
	vvec[i] = (new polymorphic_Struct350{1});
	uvec[i] = (Struct350{1});
	stdvec[i] = (Struct350{1});
case 351:
	vvec[i] = (new polymorphic_Struct351{1});
	uvec[i] = (Struct351{1});
	stdvec[i] = (Struct351{1});
case 352:
	vvec[i] = (new polymorphic_Struct352{1});
	uvec[i] = (Struct352{1});
	stdvec[i] = (Struct352{1});
case 353:
	vvec[i] = (new polymorphic_Struct353{1});
	uvec[i] = (Struct353{1});
	stdvec[i] = (Struct353{1});
case 354:
	vvec[i] = (new polymorphic_Struct354{1});
	uvec[i] = (Struct354{1});
	stdvec[i] = (Struct354{1});
case 355:
	vvec[i] = (new polymorphic_Struct355{1});
	uvec[i] = (Struct355{1});
	stdvec[i] = (Struct355{1});
case 356:
	vvec[i] = (new polymorphic_Struct356{1});
	uvec[i] = (Struct356{1});
	stdvec[i] = (Struct356{1});
case 357:
	vvec[i] = (new polymorphic_Struct357{1});
	uvec[i] = (Struct357{1});
	stdvec[i] = (Struct357{1});
case 358:
	vvec[i] = (new polymorphic_Struct358{1});
	uvec[i] = (Struct358{1});
	stdvec[i] = (Struct358{1});
case 359:
	vvec[i] = (new polymorphic_Struct359{1});
	uvec[i] = (Struct359{1});
	stdvec[i] = (Struct359{1});
case 360:
	vvec[i] = (new polymorphic_Struct360{1});
	uvec[i] = (Struct360{1});
	stdvec[i] = (Struct360{1});
case 361:
	vvec[i] = (new polymorphic_Struct361{1});
	uvec[i] = (Struct361{1});
	stdvec[i] = (Struct361{1});
case 362:
	vvec[i] = (new polymorphic_Struct362{1});
	uvec[i] = (Struct362{1});
	stdvec[i] = (Struct362{1});
case 363:
	vvec[i] = (new polymorphic_Struct363{1});
	uvec[i] = (Struct363{1});
	stdvec[i] = (Struct363{1});
case 364:
	vvec[i] = (new polymorphic_Struct364{1});
	uvec[i] = (Struct364{1});
	stdvec[i] = (Struct364{1});
case 365:
	vvec[i] = (new polymorphic_Struct365{1});
	uvec[i] = (Struct365{1});
	stdvec[i] = (Struct365{1});
case 366:
	vvec[i] = (new polymorphic_Struct366{1});
	uvec[i] = (Struct366{1});
	stdvec[i] = (Struct366{1});
case 367:
	vvec[i] = (new polymorphic_Struct367{1});
	uvec[i] = (Struct367{1});
	stdvec[i] = (Struct367{1});
case 368:
	vvec[i] = (new polymorphic_Struct368{1});
	uvec[i] = (Struct368{1});
	stdvec[i] = (Struct368{1});
case 369:
	vvec[i] = (new polymorphic_Struct369{1});
	uvec[i] = (Struct369{1});
	stdvec[i] = (Struct369{1});
case 370:
	vvec[i] = (new polymorphic_Struct370{1});
	uvec[i] = (Struct370{1});
	stdvec[i] = (Struct370{1});
case 371:
	vvec[i] = (new polymorphic_Struct371{1});
	uvec[i] = (Struct371{1});
	stdvec[i] = (Struct371{1});
case 372:
	vvec[i] = (new polymorphic_Struct372{1});
	uvec[i] = (Struct372{1});
	stdvec[i] = (Struct372{1});
case 373:
	vvec[i] = (new polymorphic_Struct373{1});
	uvec[i] = (Struct373{1});
	stdvec[i] = (Struct373{1});
case 374:
	vvec[i] = (new polymorphic_Struct374{1});
	uvec[i] = (Struct374{1});
	stdvec[i] = (Struct374{1});
case 375:
	vvec[i] = (new polymorphic_Struct375{1});
	uvec[i] = (Struct375{1});
	stdvec[i] = (Struct375{1});
case 376:
	vvec[i] = (new polymorphic_Struct376{1});
	uvec[i] = (Struct376{1});
	stdvec[i] = (Struct376{1});
case 377:
	vvec[i] = (new polymorphic_Struct377{1});
	uvec[i] = (Struct377{1});
	stdvec[i] = (Struct377{1});
case 378:
	vvec[i] = (new polymorphic_Struct378{1});
	uvec[i] = (Struct378{1});
	stdvec[i] = (Struct378{1});
case 379:
	vvec[i] = (new polymorphic_Struct379{1});
	uvec[i] = (Struct379{1});
	stdvec[i] = (Struct379{1});
case 380:
	vvec[i] = (new polymorphic_Struct380{1});
	uvec[i] = (Struct380{1});
	stdvec[i] = (Struct380{1});
case 381:
	vvec[i] = (new polymorphic_Struct381{1});
	uvec[i] = (Struct381{1});
	stdvec[i] = (Struct381{1});
case 382:
	vvec[i] = (new polymorphic_Struct382{1});
	uvec[i] = (Struct382{1});
	stdvec[i] = (Struct382{1});
case 383:
	vvec[i] = (new polymorphic_Struct383{1});
	uvec[i] = (Struct383{1});
	stdvec[i] = (Struct383{1});
case 384:
	vvec[i] = (new polymorphic_Struct384{1});
	uvec[i] = (Struct384{1});
	stdvec[i] = (Struct384{1});
case 385:
	vvec[i] = (new polymorphic_Struct385{1});
	uvec[i] = (Struct385{1});
	stdvec[i] = (Struct385{1});
case 386:
	vvec[i] = (new polymorphic_Struct386{1});
	uvec[i] = (Struct386{1});
	stdvec[i] = (Struct386{1});
case 387:
	vvec[i] = (new polymorphic_Struct387{1});
	uvec[i] = (Struct387{1});
	stdvec[i] = (Struct387{1});
case 388:
	vvec[i] = (new polymorphic_Struct388{1});
	uvec[i] = (Struct388{1});
	stdvec[i] = (Struct388{1});
case 389:
	vvec[i] = (new polymorphic_Struct389{1});
	uvec[i] = (Struct389{1});
	stdvec[i] = (Struct389{1});
case 390:
	vvec[i] = (new polymorphic_Struct390{1});
	uvec[i] = (Struct390{1});
	stdvec[i] = (Struct390{1});
case 391:
	vvec[i] = (new polymorphic_Struct391{1});
	uvec[i] = (Struct391{1});
	stdvec[i] = (Struct391{1});
case 392:
	vvec[i] = (new polymorphic_Struct392{1});
	uvec[i] = (Struct392{1});
	stdvec[i] = (Struct392{1});
case 393:
	vvec[i] = (new polymorphic_Struct393{1});
	uvec[i] = (Struct393{1});
	stdvec[i] = (Struct393{1});
case 394:
	vvec[i] = (new polymorphic_Struct394{1});
	uvec[i] = (Struct394{1});
	stdvec[i] = (Struct394{1});
case 395:
	vvec[i] = (new polymorphic_Struct395{1});
	uvec[i] = (Struct395{1});
	stdvec[i] = (Struct395{1});
case 396:
	vvec[i] = (new polymorphic_Struct396{1});
	uvec[i] = (Struct396{1});
	stdvec[i] = (Struct396{1});
case 397:
	vvec[i] = (new polymorphic_Struct397{1});
	uvec[i] = (Struct397{1});
	stdvec[i] = (Struct397{1});
case 398:
	vvec[i] = (new polymorphic_Struct398{1});
	uvec[i] = (Struct398{1});
	stdvec[i] = (Struct398{1});
case 399:
	vvec[i] = (new polymorphic_Struct399{1});
	uvec[i] = (Struct399{1});
	stdvec[i] = (Struct399{1});
case 400:
	vvec[i] = (new polymorphic_Struct400{1});
	uvec[i] = (Struct400{1});
	stdvec[i] = (Struct400{1});
case 401:
	vvec[i] = (new polymorphic_Struct401{1});
	uvec[i] = (Struct401{1});
	stdvec[i] = (Struct401{1});
case 402:
	vvec[i] = (new polymorphic_Struct402{1});
	uvec[i] = (Struct402{1});
	stdvec[i] = (Struct402{1});
case 403:
	vvec[i] = (new polymorphic_Struct403{1});
	uvec[i] = (Struct403{1});
	stdvec[i] = (Struct403{1});
case 404:
	vvec[i] = (new polymorphic_Struct404{1});
	uvec[i] = (Struct404{1});
	stdvec[i] = (Struct404{1});
case 405:
	vvec[i] = (new polymorphic_Struct405{1});
	uvec[i] = (Struct405{1});
	stdvec[i] = (Struct405{1});
case 406:
	vvec[i] = (new polymorphic_Struct406{1});
	uvec[i] = (Struct406{1});
	stdvec[i] = (Struct406{1});
case 407:
	vvec[i] = (new polymorphic_Struct407{1});
	uvec[i] = (Struct407{1});
	stdvec[i] = (Struct407{1});
case 408:
	vvec[i] = (new polymorphic_Struct408{1});
	uvec[i] = (Struct408{1});
	stdvec[i] = (Struct408{1});
case 409:
	vvec[i] = (new polymorphic_Struct409{1});
	uvec[i] = (Struct409{1});
	stdvec[i] = (Struct409{1});
case 410:
	vvec[i] = (new polymorphic_Struct410{1});
	uvec[i] = (Struct410{1});
	stdvec[i] = (Struct410{1});
case 411:
	vvec[i] = (new polymorphic_Struct411{1});
	uvec[i] = (Struct411{1});
	stdvec[i] = (Struct411{1});
case 412:
	vvec[i] = (new polymorphic_Struct412{1});
	uvec[i] = (Struct412{1});
	stdvec[i] = (Struct412{1});
case 413:
	vvec[i] = (new polymorphic_Struct413{1});
	uvec[i] = (Struct413{1});
	stdvec[i] = (Struct413{1});
case 414:
	vvec[i] = (new polymorphic_Struct414{1});
	uvec[i] = (Struct414{1});
	stdvec[i] = (Struct414{1});
case 415:
	vvec[i] = (new polymorphic_Struct415{1});
	uvec[i] = (Struct415{1});
	stdvec[i] = (Struct415{1});
case 416:
	vvec[i] = (new polymorphic_Struct416{1});
	uvec[i] = (Struct416{1});
	stdvec[i] = (Struct416{1});
case 417:
	vvec[i] = (new polymorphic_Struct417{1});
	uvec[i] = (Struct417{1});
	stdvec[i] = (Struct417{1});
case 418:
	vvec[i] = (new polymorphic_Struct418{1});
	uvec[i] = (Struct418{1});
	stdvec[i] = (Struct418{1});
case 419:
	vvec[i] = (new polymorphic_Struct419{1});
	uvec[i] = (Struct419{1});
	stdvec[i] = (Struct419{1});
case 420:
	vvec[i] = (new polymorphic_Struct420{1});
	uvec[i] = (Struct420{1});
	stdvec[i] = (Struct420{1});
case 421:
	vvec[i] = (new polymorphic_Struct421{1});
	uvec[i] = (Struct421{1});
	stdvec[i] = (Struct421{1});
case 422:
	vvec[i] = (new polymorphic_Struct422{1});
	uvec[i] = (Struct422{1});
	stdvec[i] = (Struct422{1});
case 423:
	vvec[i] = (new polymorphic_Struct423{1});
	uvec[i] = (Struct423{1});
	stdvec[i] = (Struct423{1});
case 424:
	vvec[i] = (new polymorphic_Struct424{1});
	uvec[i] = (Struct424{1});
	stdvec[i] = (Struct424{1});
case 425:
	vvec[i] = (new polymorphic_Struct425{1});
	uvec[i] = (Struct425{1});
	stdvec[i] = (Struct425{1});
case 426:
	vvec[i] = (new polymorphic_Struct426{1});
	uvec[i] = (Struct426{1});
	stdvec[i] = (Struct426{1});
case 427:
	vvec[i] = (new polymorphic_Struct427{1});
	uvec[i] = (Struct427{1});
	stdvec[i] = (Struct427{1});
case 428:
	vvec[i] = (new polymorphic_Struct428{1});
	uvec[i] = (Struct428{1});
	stdvec[i] = (Struct428{1});
case 429:
	vvec[i] = (new polymorphic_Struct429{1});
	uvec[i] = (Struct429{1});
	stdvec[i] = (Struct429{1});
case 430:
	vvec[i] = (new polymorphic_Struct430{1});
	uvec[i] = (Struct430{1});
	stdvec[i] = (Struct430{1});
case 431:
	vvec[i] = (new polymorphic_Struct431{1});
	uvec[i] = (Struct431{1});
	stdvec[i] = (Struct431{1});
case 432:
	vvec[i] = (new polymorphic_Struct432{1});
	uvec[i] = (Struct432{1});
	stdvec[i] = (Struct432{1});
case 433:
	vvec[i] = (new polymorphic_Struct433{1});
	uvec[i] = (Struct433{1});
	stdvec[i] = (Struct433{1});
case 434:
	vvec[i] = (new polymorphic_Struct434{1});
	uvec[i] = (Struct434{1});
	stdvec[i] = (Struct434{1});
case 435:
	vvec[i] = (new polymorphic_Struct435{1});
	uvec[i] = (Struct435{1});
	stdvec[i] = (Struct435{1});
case 436:
	vvec[i] = (new polymorphic_Struct436{1});
	uvec[i] = (Struct436{1});
	stdvec[i] = (Struct436{1});
case 437:
	vvec[i] = (new polymorphic_Struct437{1});
	uvec[i] = (Struct437{1});
	stdvec[i] = (Struct437{1});
case 438:
	vvec[i] = (new polymorphic_Struct438{1});
	uvec[i] = (Struct438{1});
	stdvec[i] = (Struct438{1});
case 439:
	vvec[i] = (new polymorphic_Struct439{1});
	uvec[i] = (Struct439{1});
	stdvec[i] = (Struct439{1});
case 440:
	vvec[i] = (new polymorphic_Struct440{1});
	uvec[i] = (Struct440{1});
	stdvec[i] = (Struct440{1});
case 441:
	vvec[i] = (new polymorphic_Struct441{1});
	uvec[i] = (Struct441{1});
	stdvec[i] = (Struct441{1});
case 442:
	vvec[i] = (new polymorphic_Struct442{1});
	uvec[i] = (Struct442{1});
	stdvec[i] = (Struct442{1});
case 443:
	vvec[i] = (new polymorphic_Struct443{1});
	uvec[i] = (Struct443{1});
	stdvec[i] = (Struct443{1});
case 444:
	vvec[i] = (new polymorphic_Struct444{1});
	uvec[i] = (Struct444{1});
	stdvec[i] = (Struct444{1});
case 445:
	vvec[i] = (new polymorphic_Struct445{1});
	uvec[i] = (Struct445{1});
	stdvec[i] = (Struct445{1});
case 446:
	vvec[i] = (new polymorphic_Struct446{1});
	uvec[i] = (Struct446{1});
	stdvec[i] = (Struct446{1});
case 447:
	vvec[i] = (new polymorphic_Struct447{1});
	uvec[i] = (Struct447{1});
	stdvec[i] = (Struct447{1});
case 448:
	vvec[i] = (new polymorphic_Struct448{1});
	uvec[i] = (Struct448{1});
	stdvec[i] = (Struct448{1});
case 449:
	vvec[i] = (new polymorphic_Struct449{1});
	uvec[i] = (Struct449{1});
	stdvec[i] = (Struct449{1});
case 450:
	vvec[i] = (new polymorphic_Struct450{1});
	uvec[i] = (Struct450{1});
	stdvec[i] = (Struct450{1});
case 451:
	vvec[i] = (new polymorphic_Struct451{1});
	uvec[i] = (Struct451{1});
	stdvec[i] = (Struct451{1});
case 452:
	vvec[i] = (new polymorphic_Struct452{1});
	uvec[i] = (Struct452{1});
	stdvec[i] = (Struct452{1});
case 453:
	vvec[i] = (new polymorphic_Struct453{1});
	uvec[i] = (Struct453{1});
	stdvec[i] = (Struct453{1});
case 454:
	vvec[i] = (new polymorphic_Struct454{1});
	uvec[i] = (Struct454{1});
	stdvec[i] = (Struct454{1});
case 455:
	vvec[i] = (new polymorphic_Struct455{1});
	uvec[i] = (Struct455{1});
	stdvec[i] = (Struct455{1});
case 456:
	vvec[i] = (new polymorphic_Struct456{1});
	uvec[i] = (Struct456{1});
	stdvec[i] = (Struct456{1});
case 457:
	vvec[i] = (new polymorphic_Struct457{1});
	uvec[i] = (Struct457{1});
	stdvec[i] = (Struct457{1});
case 458:
	vvec[i] = (new polymorphic_Struct458{1});
	uvec[i] = (Struct458{1});
	stdvec[i] = (Struct458{1});
case 459:
	vvec[i] = (new polymorphic_Struct459{1});
	uvec[i] = (Struct459{1});
	stdvec[i] = (Struct459{1});
case 460:
	vvec[i] = (new polymorphic_Struct460{1});
	uvec[i] = (Struct460{1});
	stdvec[i] = (Struct460{1});
case 461:
	vvec[i] = (new polymorphic_Struct461{1});
	uvec[i] = (Struct461{1});
	stdvec[i] = (Struct461{1});
case 462:
	vvec[i] = (new polymorphic_Struct462{1});
	uvec[i] = (Struct462{1});
	stdvec[i] = (Struct462{1});
case 463:
	vvec[i] = (new polymorphic_Struct463{1});
	uvec[i] = (Struct463{1});
	stdvec[i] = (Struct463{1});
case 464:
	vvec[i] = (new polymorphic_Struct464{1});
	uvec[i] = (Struct464{1});
	stdvec[i] = (Struct464{1});
case 465:
	vvec[i] = (new polymorphic_Struct465{1});
	uvec[i] = (Struct465{1});
	stdvec[i] = (Struct465{1});
case 466:
	vvec[i] = (new polymorphic_Struct466{1});
	uvec[i] = (Struct466{1});
	stdvec[i] = (Struct466{1});
case 467:
	vvec[i] = (new polymorphic_Struct467{1});
	uvec[i] = (Struct467{1});
	stdvec[i] = (Struct467{1});
case 468:
	vvec[i] = (new polymorphic_Struct468{1});
	uvec[i] = (Struct468{1});
	stdvec[i] = (Struct468{1});
case 469:
	vvec[i] = (new polymorphic_Struct469{1});
	uvec[i] = (Struct469{1});
	stdvec[i] = (Struct469{1});
case 470:
	vvec[i] = (new polymorphic_Struct470{1});
	uvec[i] = (Struct470{1});
	stdvec[i] = (Struct470{1});
case 471:
	vvec[i] = (new polymorphic_Struct471{1});
	uvec[i] = (Struct471{1});
	stdvec[i] = (Struct471{1});
case 472:
	vvec[i] = (new polymorphic_Struct472{1});
	uvec[i] = (Struct472{1});
	stdvec[i] = (Struct472{1});
case 473:
	vvec[i] = (new polymorphic_Struct473{1});
	uvec[i] = (Struct473{1});
	stdvec[i] = (Struct473{1});
case 474:
	vvec[i] = (new polymorphic_Struct474{1});
	uvec[i] = (Struct474{1});
	stdvec[i] = (Struct474{1});
case 475:
	vvec[i] = (new polymorphic_Struct475{1});
	uvec[i] = (Struct475{1});
	stdvec[i] = (Struct475{1});
case 476:
	vvec[i] = (new polymorphic_Struct476{1});
	uvec[i] = (Struct476{1});
	stdvec[i] = (Struct476{1});
case 477:
	vvec[i] = (new polymorphic_Struct477{1});
	uvec[i] = (Struct477{1});
	stdvec[i] = (Struct477{1});
case 478:
	vvec[i] = (new polymorphic_Struct478{1});
	uvec[i] = (Struct478{1});
	stdvec[i] = (Struct478{1});
case 479:
	vvec[i] = (new polymorphic_Struct479{1});
	uvec[i] = (Struct479{1});
	stdvec[i] = (Struct479{1});
case 480:
	vvec[i] = (new polymorphic_Struct480{1});
	uvec[i] = (Struct480{1});
	stdvec[i] = (Struct480{1});
case 481:
	vvec[i] = (new polymorphic_Struct481{1});
	uvec[i] = (Struct481{1});
	stdvec[i] = (Struct481{1});
case 482:
	vvec[i] = (new polymorphic_Struct482{1});
	uvec[i] = (Struct482{1});
	stdvec[i] = (Struct482{1});
case 483:
	vvec[i] = (new polymorphic_Struct483{1});
	uvec[i] = (Struct483{1});
	stdvec[i] = (Struct483{1});
case 484:
	vvec[i] = (new polymorphic_Struct484{1});
	uvec[i] = (Struct484{1});
	stdvec[i] = (Struct484{1});
case 485:
	vvec[i] = (new polymorphic_Struct485{1});
	uvec[i] = (Struct485{1});
	stdvec[i] = (Struct485{1});
case 486:
	vvec[i] = (new polymorphic_Struct486{1});
	uvec[i] = (Struct486{1});
	stdvec[i] = (Struct486{1});
case 487:
	vvec[i] = (new polymorphic_Struct487{1});
	uvec[i] = (Struct487{1});
	stdvec[i] = (Struct487{1});
case 488:
	vvec[i] = (new polymorphic_Struct488{1});
	uvec[i] = (Struct488{1});
	stdvec[i] = (Struct488{1});
case 489:
	vvec[i] = (new polymorphic_Struct489{1});
	uvec[i] = (Struct489{1});
	stdvec[i] = (Struct489{1});
case 490:
	vvec[i] = (new polymorphic_Struct490{1});
	uvec[i] = (Struct490{1});
	stdvec[i] = (Struct490{1});
case 491:
	vvec[i] = (new polymorphic_Struct491{1});
	uvec[i] = (Struct491{1});
	stdvec[i] = (Struct491{1});
case 492:
	vvec[i] = (new polymorphic_Struct492{1});
	uvec[i] = (Struct492{1});
	stdvec[i] = (Struct492{1});
case 493:
	vvec[i] = (new polymorphic_Struct493{1});
	uvec[i] = (Struct493{1});
	stdvec[i] = (Struct493{1});
case 494:
	vvec[i] = (new polymorphic_Struct494{1});
	uvec[i] = (Struct494{1});
	stdvec[i] = (Struct494{1});
case 495:
	vvec[i] = (new polymorphic_Struct495{1});
	uvec[i] = (Struct495{1});
	stdvec[i] = (Struct495{1});
case 496:
	vvec[i] = (new polymorphic_Struct496{1});
	uvec[i] = (Struct496{1});
	stdvec[i] = (Struct496{1});
case 497:
	vvec[i] = (new polymorphic_Struct497{1});
	uvec[i] = (Struct497{1});
	stdvec[i] = (Struct497{1});
case 498:
	vvec[i] = (new polymorphic_Struct498{1});
	uvec[i] = (Struct498{1});
	stdvec[i] = (Struct498{1});
case 499:
	vvec[i] = (new polymorphic_Struct499{1});
	uvec[i] = (Struct499{1});
	stdvec[i] = (Struct499{1});
case 500:
	vvec[i] = (new polymorphic_Struct500{1});
	uvec[i] = (Struct500{1});
	stdvec[i] = (Struct500{1});
case 501:
	vvec[i] = (new polymorphic_Struct501{1});
	uvec[i] = (Struct501{1});
	stdvec[i] = (Struct501{1});
case 502:
	vvec[i] = (new polymorphic_Struct502{1});
	uvec[i] = (Struct502{1});
	stdvec[i] = (Struct502{1});
case 503:
	vvec[i] = (new polymorphic_Struct503{1});
	uvec[i] = (Struct503{1});
	stdvec[i] = (Struct503{1});
case 504:
	vvec[i] = (new polymorphic_Struct504{1});
	uvec[i] = (Struct504{1});
	stdvec[i] = (Struct504{1});
case 505:
	vvec[i] = (new polymorphic_Struct505{1});
	uvec[i] = (Struct505{1});
	stdvec[i] = (Struct505{1});
case 506:
	vvec[i] = (new polymorphic_Struct506{1});
	uvec[i] = (Struct506{1});
	stdvec[i] = (Struct506{1});
case 507:
	vvec[i] = (new polymorphic_Struct507{1});
	uvec[i] = (Struct507{1});
	stdvec[i] = (Struct507{1});
case 508:
	vvec[i] = (new polymorphic_Struct508{1});
	uvec[i] = (Struct508{1});
	stdvec[i] = (Struct508{1});
case 509:
	vvec[i] = (new polymorphic_Struct509{1});
	uvec[i] = (Struct509{1});
	stdvec[i] = (Struct509{1});
case 510:
	vvec[i] = (new polymorphic_Struct510{1});
	uvec[i] = (Struct510{1});
	stdvec[i] = (Struct510{1});
case 511:
	vvec[i] = (new polymorphic_Struct511{1});
	uvec[i] = (Struct511{1});
	stdvec[i] = (Struct511{1});


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

    std::ofstream os("../profiling_results/512_types.txt");
    

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