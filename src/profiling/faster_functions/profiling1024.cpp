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

void profiling_1024() {
    double if_vec_total = 0, uvec_total = 0, vvec_total = 0, stdvec_total = 0;

    std::array<Tagged_Union<Struct0, Struct1, Struct2, Struct3, Struct4, Struct5, Struct6, Struct7, Struct8, Struct9, Struct10, Struct11, Struct12, Struct13, Struct14, Struct15, Struct16, Struct17, Struct18, Struct19, Struct20, Struct21, Struct22, Struct23, Struct24, Struct25, Struct26, Struct27, Struct28, Struct29, Struct30, Struct31, Struct32, Struct33, Struct34, Struct35, Struct36, Struct37, Struct38, Struct39, Struct40, Struct41, Struct42, Struct43, Struct44, Struct45, Struct46, Struct47, Struct48, Struct49, Struct50, Struct51, Struct52, Struct53, Struct54, Struct55, Struct56, Struct57, Struct58, Struct59, Struct60, Struct61, Struct62, Struct63, Struct64, Struct65, Struct66, Struct67, Struct68, Struct69, Struct70, Struct71, Struct72, Struct73, Struct74, Struct75, Struct76, Struct77, Struct78, Struct79, Struct80, Struct81, Struct82, Struct83, Struct84, Struct85, Struct86, Struct87, Struct88, Struct89, Struct90, Struct91, Struct92, Struct93, Struct94, Struct95, Struct96, Struct97, Struct98, Struct99, Struct100, Struct101, Struct102, Struct103, Struct104, Struct105, Struct106, Struct107, Struct108, Struct109, Struct110, Struct111, Struct112, Struct113, Struct114, Struct115, Struct116, Struct117, Struct118, Struct119, Struct120, Struct121, Struct122, Struct123, Struct124, Struct125, Struct126, Struct127, Struct128, Struct129, Struct130, Struct131, Struct132, Struct133, Struct134, Struct135, Struct136, Struct137, Struct138, Struct139, Struct140, Struct141, Struct142, Struct143, Struct144, Struct145, Struct146, Struct147, Struct148, Struct149, Struct150, Struct151, Struct152, Struct153, Struct154, Struct155, Struct156, Struct157, Struct158, Struct159, Struct160, Struct161, Struct162, Struct163, Struct164, Struct165, Struct166, Struct167, Struct168, Struct169, Struct170, Struct171, Struct172, Struct173, Struct174, Struct175, Struct176, Struct177, Struct178, Struct179, Struct180, Struct181, Struct182, Struct183, Struct184, Struct185, Struct186, Struct187, Struct188, Struct189, Struct190, Struct191, Struct192, Struct193, Struct194, Struct195, Struct196, Struct197, Struct198, Struct199, Struct200, Struct201, Struct202, Struct203, Struct204, Struct205, Struct206, Struct207, Struct208, Struct209, Struct210, Struct211, Struct212, Struct213, Struct214, Struct215, Struct216, Struct217, Struct218, Struct219, Struct220, Struct221, Struct222, Struct223, Struct224, Struct225, Struct226, Struct227, Struct228, Struct229, Struct230, Struct231, Struct232, Struct233, Struct234, Struct235, Struct236, Struct237, Struct238, Struct239, Struct240, Struct241, Struct242, Struct243, Struct244, Struct245, Struct246, Struct247, Struct248, Struct249, Struct250, Struct251, Struct252, Struct253, Struct254, Struct255, Struct256, Struct257, Struct258, Struct259, Struct260, Struct261, Struct262, Struct263, Struct264, Struct265, Struct266, Struct267, Struct268, Struct269, Struct270, Struct271, Struct272, Struct273, Struct274, Struct275, Struct276, Struct277, Struct278, Struct279, Struct280, Struct281, Struct282, Struct283, Struct284, Struct285, Struct286, Struct287, Struct288, Struct289, Struct290, Struct291, Struct292, Struct293, Struct294, Struct295, Struct296, Struct297, Struct298, Struct299, Struct300, Struct301, Struct302, Struct303, Struct304, Struct305, Struct306, Struct307, Struct308, Struct309, Struct310, Struct311, Struct312, Struct313, Struct314, Struct315, Struct316, Struct317, Struct318, Struct319, Struct320, Struct321, Struct322, Struct323, Struct324, Struct325, Struct326, Struct327, Struct328, Struct329, Struct330, Struct331, Struct332, Struct333, Struct334, Struct335, Struct336, Struct337, Struct338, Struct339, Struct340, Struct341, Struct342, Struct343, Struct344, Struct345, Struct346, Struct347, Struct348, Struct349, Struct350, Struct351, Struct352, Struct353, Struct354, Struct355, Struct356, Struct357, Struct358, Struct359, Struct360, Struct361, Struct362, Struct363, Struct364, Struct365, Struct366, Struct367, Struct368, Struct369, Struct370, Struct371, Struct372, Struct373, Struct374, Struct375, Struct376, Struct377, Struct378, Struct379, Struct380, Struct381, Struct382, Struct383, Struct384, Struct385, Struct386, Struct387, Struct388, Struct389, Struct390, Struct391, Struct392, Struct393, Struct394, Struct395, Struct396, Struct397, Struct398, Struct399, Struct400, Struct401, Struct402, Struct403, Struct404, Struct405, Struct406, Struct407, Struct408, Struct409, Struct410, Struct411, Struct412, Struct413, Struct414, Struct415, Struct416, Struct417, Struct418, Struct419, Struct420, Struct421, Struct422, Struct423, Struct424, Struct425, Struct426, Struct427, Struct428, Struct429, Struct430, Struct431, Struct432, Struct433, Struct434, Struct435, Struct436, Struct437, Struct438, Struct439, Struct440, Struct441, Struct442, Struct443, Struct444, Struct445, Struct446, Struct447, Struct448, Struct449, Struct450, Struct451, Struct452, Struct453, Struct454, Struct455, Struct456, Struct457, Struct458, Struct459, Struct460, Struct461, Struct462, Struct463, Struct464, Struct465, Struct466, Struct467, Struct468, Struct469, Struct470, Struct471, Struct472, Struct473, Struct474, Struct475, Struct476, Struct477, Struct478, Struct479, Struct480, Struct481, Struct482, Struct483, Struct484, Struct485, Struct486, Struct487, Struct488, Struct489, Struct490, Struct491, Struct492, Struct493, Struct494, Struct495, Struct496, Struct497, Struct498, Struct499, Struct500, Struct501, Struct502, Struct503, Struct504, Struct505, Struct506, Struct507, Struct508, Struct509, Struct510, Struct511, Struct512, Struct513, Struct514, Struct515, Struct516, Struct517, Struct518, Struct519, Struct520, Struct521, Struct522, Struct523, Struct524, Struct525, Struct526, Struct527, Struct528, Struct529, Struct530, Struct531, Struct532, Struct533, Struct534, Struct535, Struct536, Struct537, Struct538, Struct539, Struct540, Struct541, Struct542, Struct543, Struct544, Struct545, Struct546, Struct547, Struct548, Struct549, Struct550, Struct551, Struct552, Struct553, Struct554, Struct555, Struct556, Struct557, Struct558, Struct559, Struct560, Struct561, Struct562, Struct563, Struct564, Struct565, Struct566, Struct567, Struct568, Struct569, Struct570, Struct571, Struct572, Struct573, Struct574, Struct575, Struct576, Struct577, Struct578, Struct579, Struct580, Struct581, Struct582, Struct583, Struct584, Struct585, Struct586, Struct587, Struct588, Struct589, Struct590, Struct591, Struct592, Struct593, Struct594, Struct595, Struct596, Struct597, Struct598, Struct599, Struct600, Struct601, Struct602, Struct603, Struct604, Struct605, Struct606, Struct607, Struct608, Struct609, Struct610, Struct611, Struct612, Struct613, Struct614, Struct615, Struct616, Struct617, Struct618, Struct619, Struct620, Struct621, Struct622, Struct623, Struct624, Struct625, Struct626, Struct627, Struct628, Struct629, Struct630, Struct631, Struct632, Struct633, Struct634, Struct635, Struct636, Struct637, Struct638, Struct639, Struct640, Struct641, Struct642, Struct643, Struct644, Struct645, Struct646, Struct647, Struct648, Struct649, Struct650, Struct651, Struct652, Struct653, Struct654, Struct655, Struct656, Struct657, Struct658, Struct659, Struct660, Struct661, Struct662, Struct663, Struct664, Struct665, Struct666, Struct667, Struct668, Struct669, Struct670, Struct671, Struct672, Struct673, Struct674, Struct675, Struct676, Struct677, Struct678, Struct679, Struct680, Struct681, Struct682, Struct683, Struct684, Struct685, Struct686, Struct687, Struct688, Struct689, Struct690, Struct691, Struct692, Struct693, Struct694, Struct695, Struct696, Struct697, Struct698, Struct699, Struct700, Struct701, Struct702, Struct703, Struct704, Struct705, Struct706, Struct707, Struct708, Struct709, Struct710, Struct711, Struct712, Struct713, Struct714, Struct715, Struct716, Struct717, Struct718, Struct719, Struct720, Struct721, Struct722, Struct723, Struct724, Struct725, Struct726, Struct727, Struct728, Struct729, Struct730, Struct731, Struct732, Struct733, Struct734, Struct735, Struct736, Struct737, Struct738, Struct739, Struct740, Struct741, Struct742, Struct743, Struct744, Struct745, Struct746, Struct747, Struct748, Struct749, Struct750, Struct751, Struct752, Struct753, Struct754, Struct755, Struct756, Struct757, Struct758, Struct759, Struct760, Struct761, Struct762, Struct763, Struct764, Struct765, Struct766, Struct767, Struct768, Struct769, Struct770, Struct771, Struct772, Struct773, Struct774, Struct775, Struct776, Struct777, Struct778, Struct779, Struct780, Struct781, Struct782, Struct783, Struct784, Struct785, Struct786, Struct787, Struct788, Struct789, Struct790, Struct791, Struct792, Struct793, Struct794, Struct795, Struct796, Struct797, Struct798, Struct799, Struct800, Struct801, Struct802, Struct803, Struct804, Struct805, Struct806, Struct807, Struct808, Struct809, Struct810, Struct811, Struct812, Struct813, Struct814, Struct815, Struct816, Struct817, Struct818, Struct819, Struct820, Struct821, Struct822, Struct823, Struct824, Struct825, Struct826, Struct827, Struct828, Struct829, Struct830, Struct831, Struct832, Struct833, Struct834, Struct835, Struct836, Struct837, Struct838, Struct839, Struct840, Struct841, Struct842, Struct843, Struct844, Struct845, Struct846, Struct847, Struct848, Struct849, Struct850, Struct851, Struct852, Struct853, Struct854, Struct855, Struct856, Struct857, Struct858, Struct859, Struct860, Struct861, Struct862, Struct863, Struct864, Struct865, Struct866, Struct867, Struct868, Struct869, Struct870, Struct871, Struct872, Struct873, Struct874, Struct875, Struct876, Struct877, Struct878, Struct879, Struct880, Struct881, Struct882, Struct883, Struct884, Struct885, Struct886, Struct887, Struct888, Struct889, Struct890, Struct891, Struct892, Struct893, Struct894, Struct895, Struct896, Struct897, Struct898, Struct899, Struct900, Struct901, Struct902, Struct903, Struct904, Struct905, Struct906, Struct907, Struct908, Struct909, Struct910, Struct911, Struct912, Struct913, Struct914, Struct915, Struct916, Struct917, Struct918, Struct919, Struct920, Struct921, Struct922, Struct923, Struct924, Struct925, Struct926, Struct927, Struct928, Struct929, Struct930, Struct931, Struct932, Struct933, Struct934, Struct935, Struct936, Struct937, Struct938, Struct939, Struct940, Struct941, Struct942, Struct943, Struct944, Struct945, Struct946, Struct947, Struct948, Struct949, Struct950, Struct951, Struct952, Struct953, Struct954, Struct955, Struct956, Struct957, Struct958, Struct959, Struct960, Struct961, Struct962, Struct963, Struct964, Struct965, Struct966, Struct967, Struct968, Struct969, Struct970, Struct971, Struct972, Struct973, Struct974, Struct975, Struct976, Struct977, Struct978, Struct979, Struct980, Struct981, Struct982, Struct983, Struct984, Struct985, Struct986, Struct987, Struct988, Struct989, Struct990, Struct991, Struct992, Struct993, Struct994, Struct995, Struct996, Struct997, Struct998, Struct999, Struct1000, Struct1001, Struct1002, Struct1003, Struct1004, Struct1005, Struct1006, Struct1007, Struct1008, Struct1009, Struct1010, Struct1011, Struct1012, Struct1013, Struct1014, Struct1015, Struct1016, Struct1017, Struct1018, Struct1019, Struct1020, Struct1021, Struct1022, Struct1023>, ARRAY_SIZE> uvec{};

    std::array<Virtual_Base_Struct*, ARRAY_SIZE> vvec{};
    std::array<std::variant<Struct0, Struct1, Struct2, Struct3, Struct4, Struct5, Struct6, Struct7, Struct8, Struct9, Struct10, Struct11, Struct12, Struct13, Struct14, Struct15, Struct16, Struct17, Struct18, Struct19, Struct20, Struct21, Struct22, Struct23, Struct24, Struct25, Struct26, Struct27, Struct28, Struct29, Struct30, Struct31, Struct32, Struct33, Struct34, Struct35, Struct36, Struct37, Struct38, Struct39, Struct40, Struct41, Struct42, Struct43, Struct44, Struct45, Struct46, Struct47, Struct48, Struct49, Struct50, Struct51, Struct52, Struct53, Struct54, Struct55, Struct56, Struct57, Struct58, Struct59, Struct60, Struct61, Struct62, Struct63, Struct64, Struct65, Struct66, Struct67, Struct68, Struct69, Struct70, Struct71, Struct72, Struct73, Struct74, Struct75, Struct76, Struct77, Struct78, Struct79, Struct80, Struct81, Struct82, Struct83, Struct84, Struct85, Struct86, Struct87, Struct88, Struct89, Struct90, Struct91, Struct92, Struct93, Struct94, Struct95, Struct96, Struct97, Struct98, Struct99, Struct100, Struct101, Struct102, Struct103, Struct104, Struct105, Struct106, Struct107, Struct108, Struct109, Struct110, Struct111, Struct112, Struct113, Struct114, Struct115, Struct116, Struct117, Struct118, Struct119, Struct120, Struct121, Struct122, Struct123, Struct124, Struct125, Struct126, Struct127, Struct128, Struct129, Struct130, Struct131, Struct132, Struct133, Struct134, Struct135, Struct136, Struct137, Struct138, Struct139, Struct140, Struct141, Struct142, Struct143, Struct144, Struct145, Struct146, Struct147, Struct148, Struct149, Struct150, Struct151, Struct152, Struct153, Struct154, Struct155, Struct156, Struct157, Struct158, Struct159, Struct160, Struct161, Struct162, Struct163, Struct164, Struct165, Struct166, Struct167, Struct168, Struct169, Struct170, Struct171, Struct172, Struct173, Struct174, Struct175, Struct176, Struct177, Struct178, Struct179, Struct180, Struct181, Struct182, Struct183, Struct184, Struct185, Struct186, Struct187, Struct188, Struct189, Struct190, Struct191, Struct192, Struct193, Struct194, Struct195, Struct196, Struct197, Struct198, Struct199, Struct200, Struct201, Struct202, Struct203, Struct204, Struct205, Struct206, Struct207, Struct208, Struct209, Struct210, Struct211, Struct212, Struct213, Struct214, Struct215, Struct216, Struct217, Struct218, Struct219, Struct220, Struct221, Struct222, Struct223, Struct224, Struct225, Struct226, Struct227, Struct228, Struct229, Struct230, Struct231, Struct232, Struct233, Struct234, Struct235, Struct236, Struct237, Struct238, Struct239, Struct240, Struct241, Struct242, Struct243, Struct244, Struct245, Struct246, Struct247, Struct248, Struct249, Struct250, Struct251, Struct252, Struct253, Struct254, Struct255, Struct256, Struct257, Struct258, Struct259, Struct260, Struct261, Struct262, Struct263, Struct264, Struct265, Struct266, Struct267, Struct268, Struct269, Struct270, Struct271, Struct272, Struct273, Struct274, Struct275, Struct276, Struct277, Struct278, Struct279, Struct280, Struct281, Struct282, Struct283, Struct284, Struct285, Struct286, Struct287, Struct288, Struct289, Struct290, Struct291, Struct292, Struct293, Struct294, Struct295, Struct296, Struct297, Struct298, Struct299, Struct300, Struct301, Struct302, Struct303, Struct304, Struct305, Struct306, Struct307, Struct308, Struct309, Struct310, Struct311, Struct312, Struct313, Struct314, Struct315, Struct316, Struct317, Struct318, Struct319, Struct320, Struct321, Struct322, Struct323, Struct324, Struct325, Struct326, Struct327, Struct328, Struct329, Struct330, Struct331, Struct332, Struct333, Struct334, Struct335, Struct336, Struct337, Struct338, Struct339, Struct340, Struct341, Struct342, Struct343, Struct344, Struct345, Struct346, Struct347, Struct348, Struct349, Struct350, Struct351, Struct352, Struct353, Struct354, Struct355, Struct356, Struct357, Struct358, Struct359, Struct360, Struct361, Struct362, Struct363, Struct364, Struct365, Struct366, Struct367, Struct368, Struct369, Struct370, Struct371, Struct372, Struct373, Struct374, Struct375, Struct376, Struct377, Struct378, Struct379, Struct380, Struct381, Struct382, Struct383, Struct384, Struct385, Struct386, Struct387, Struct388, Struct389, Struct390, Struct391, Struct392, Struct393, Struct394, Struct395, Struct396, Struct397, Struct398, Struct399, Struct400, Struct401, Struct402, Struct403, Struct404, Struct405, Struct406, Struct407, Struct408, Struct409, Struct410, Struct411, Struct412, Struct413, Struct414, Struct415, Struct416, Struct417, Struct418, Struct419, Struct420, Struct421, Struct422, Struct423, Struct424, Struct425, Struct426, Struct427, Struct428, Struct429, Struct430, Struct431, Struct432, Struct433, Struct434, Struct435, Struct436, Struct437, Struct438, Struct439, Struct440, Struct441, Struct442, Struct443, Struct444, Struct445, Struct446, Struct447, Struct448, Struct449, Struct450, Struct451, Struct452, Struct453, Struct454, Struct455, Struct456, Struct457, Struct458, Struct459, Struct460, Struct461, Struct462, Struct463, Struct464, Struct465, Struct466, Struct467, Struct468, Struct469, Struct470, Struct471, Struct472, Struct473, Struct474, Struct475, Struct476, Struct477, Struct478, Struct479, Struct480, Struct481, Struct482, Struct483, Struct484, Struct485, Struct486, Struct487, Struct488, Struct489, Struct490, Struct491, Struct492, Struct493, Struct494, Struct495, Struct496, Struct497, Struct498, Struct499, Struct500, Struct501, Struct502, Struct503, Struct504, Struct505, Struct506, Struct507, Struct508, Struct509, Struct510, Struct511, Struct512, Struct513, Struct514, Struct515, Struct516, Struct517, Struct518, Struct519, Struct520, Struct521, Struct522, Struct523, Struct524, Struct525, Struct526, Struct527, Struct528, Struct529, Struct530, Struct531, Struct532, Struct533, Struct534, Struct535, Struct536, Struct537, Struct538, Struct539, Struct540, Struct541, Struct542, Struct543, Struct544, Struct545, Struct546, Struct547, Struct548, Struct549, Struct550, Struct551, Struct552, Struct553, Struct554, Struct555, Struct556, Struct557, Struct558, Struct559, Struct560, Struct561, Struct562, Struct563, Struct564, Struct565, Struct566, Struct567, Struct568, Struct569, Struct570, Struct571, Struct572, Struct573, Struct574, Struct575, Struct576, Struct577, Struct578, Struct579, Struct580, Struct581, Struct582, Struct583, Struct584, Struct585, Struct586, Struct587, Struct588, Struct589, Struct590, Struct591, Struct592, Struct593, Struct594, Struct595, Struct596, Struct597, Struct598, Struct599, Struct600, Struct601, Struct602, Struct603, Struct604, Struct605, Struct606, Struct607, Struct608, Struct609, Struct610, Struct611, Struct612, Struct613, Struct614, Struct615, Struct616, Struct617, Struct618, Struct619, Struct620, Struct621, Struct622, Struct623, Struct624, Struct625, Struct626, Struct627, Struct628, Struct629, Struct630, Struct631, Struct632, Struct633, Struct634, Struct635, Struct636, Struct637, Struct638, Struct639, Struct640, Struct641, Struct642, Struct643, Struct644, Struct645, Struct646, Struct647, Struct648, Struct649, Struct650, Struct651, Struct652, Struct653, Struct654, Struct655, Struct656, Struct657, Struct658, Struct659, Struct660, Struct661, Struct662, Struct663, Struct664, Struct665, Struct666, Struct667, Struct668, Struct669, Struct670, Struct671, Struct672, Struct673, Struct674, Struct675, Struct676, Struct677, Struct678, Struct679, Struct680, Struct681, Struct682, Struct683, Struct684, Struct685, Struct686, Struct687, Struct688, Struct689, Struct690, Struct691, Struct692, Struct693, Struct694, Struct695, Struct696, Struct697, Struct698, Struct699, Struct700, Struct701, Struct702, Struct703, Struct704, Struct705, Struct706, Struct707, Struct708, Struct709, Struct710, Struct711, Struct712, Struct713, Struct714, Struct715, Struct716, Struct717, Struct718, Struct719, Struct720, Struct721, Struct722, Struct723, Struct724, Struct725, Struct726, Struct727, Struct728, Struct729, Struct730, Struct731, Struct732, Struct733, Struct734, Struct735, Struct736, Struct737, Struct738, Struct739, Struct740, Struct741, Struct742, Struct743, Struct744, Struct745, Struct746, Struct747, Struct748, Struct749, Struct750, Struct751, Struct752, Struct753, Struct754, Struct755, Struct756, Struct757, Struct758, Struct759, Struct760, Struct761, Struct762, Struct763, Struct764, Struct765, Struct766, Struct767, Struct768, Struct769, Struct770, Struct771, Struct772, Struct773, Struct774, Struct775, Struct776, Struct777, Struct778, Struct779, Struct780, Struct781, Struct782, Struct783, Struct784, Struct785, Struct786, Struct787, Struct788, Struct789, Struct790, Struct791, Struct792, Struct793, Struct794, Struct795, Struct796, Struct797, Struct798, Struct799, Struct800, Struct801, Struct802, Struct803, Struct804, Struct805, Struct806, Struct807, Struct808, Struct809, Struct810, Struct811, Struct812, Struct813, Struct814, Struct815, Struct816, Struct817, Struct818, Struct819, Struct820, Struct821, Struct822, Struct823, Struct824, Struct825, Struct826, Struct827, Struct828, Struct829, Struct830, Struct831, Struct832, Struct833, Struct834, Struct835, Struct836, Struct837, Struct838, Struct839, Struct840, Struct841, Struct842, Struct843, Struct844, Struct845, Struct846, Struct847, Struct848, Struct849, Struct850, Struct851, Struct852, Struct853, Struct854, Struct855, Struct856, Struct857, Struct858, Struct859, Struct860, Struct861, Struct862, Struct863, Struct864, Struct865, Struct866, Struct867, Struct868, Struct869, Struct870, Struct871, Struct872, Struct873, Struct874, Struct875, Struct876, Struct877, Struct878, Struct879, Struct880, Struct881, Struct882, Struct883, Struct884, Struct885, Struct886, Struct887, Struct888, Struct889, Struct890, Struct891, Struct892, Struct893, Struct894, Struct895, Struct896, Struct897, Struct898, Struct899, Struct900, Struct901, Struct902, Struct903, Struct904, Struct905, Struct906, Struct907, Struct908, Struct909, Struct910, Struct911, Struct912, Struct913, Struct914, Struct915, Struct916, Struct917, Struct918, Struct919, Struct920, Struct921, Struct922, Struct923, Struct924, Struct925, Struct926, Struct927, Struct928, Struct929, Struct930, Struct931, Struct932, Struct933, Struct934, Struct935, Struct936, Struct937, Struct938, Struct939, Struct940, Struct941, Struct942, Struct943, Struct944, Struct945, Struct946, Struct947, Struct948, Struct949, Struct950, Struct951, Struct952, Struct953, Struct954, Struct955, Struct956, Struct957, Struct958, Struct959, Struct960, Struct961, Struct962, Struct963, Struct964, Struct965, Struct966, Struct967, Struct968, Struct969, Struct970, Struct971, Struct972, Struct973, Struct974, Struct975, Struct976, Struct977, Struct978, Struct979, Struct980, Struct981, Struct982, Struct983, Struct984, Struct985, Struct986, Struct987, Struct988, Struct989, Struct990, Struct991, Struct992, Struct993, Struct994, Struct995, Struct996, Struct997, Struct998, Struct999, Struct1000, Struct1001, Struct1002, Struct1003, Struct1004, Struct1005, Struct1006, Struct1007, Struct1008, Struct1009, Struct1010, Struct1011, Struct1012, Struct1013, Struct1014, Struct1015, Struct1016, Struct1017, Struct1018, Struct1019, Struct1020, Struct1021, Struct1022, Struct1023>, ARRAY_SIZE> stdvec;


    std::random_device os_seed;
    const uint32_t seed = os_seed();

    std::mt19937 generator(seed);

    std::uniform_int_distribution<unsigned int> distribute(0, 1024-1);

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
case 512:
	vvec[i] = (new polymorphic_Struct512{1});
	uvec[i] = (Struct512{1});
	stdvec[i] = (Struct512{1});
case 513:
	vvec[i] = (new polymorphic_Struct513{1});
	uvec[i] = (Struct513{1});
	stdvec[i] = (Struct513{1});
case 514:
	vvec[i] = (new polymorphic_Struct514{1});
	uvec[i] = (Struct514{1});
	stdvec[i] = (Struct514{1});
case 515:
	vvec[i] = (new polymorphic_Struct515{1});
	uvec[i] = (Struct515{1});
	stdvec[i] = (Struct515{1});
case 516:
	vvec[i] = (new polymorphic_Struct516{1});
	uvec[i] = (Struct516{1});
	stdvec[i] = (Struct516{1});
case 517:
	vvec[i] = (new polymorphic_Struct517{1});
	uvec[i] = (Struct517{1});
	stdvec[i] = (Struct517{1});
case 518:
	vvec[i] = (new polymorphic_Struct518{1});
	uvec[i] = (Struct518{1});
	stdvec[i] = (Struct518{1});
case 519:
	vvec[i] = (new polymorphic_Struct519{1});
	uvec[i] = (Struct519{1});
	stdvec[i] = (Struct519{1});
case 520:
	vvec[i] = (new polymorphic_Struct520{1});
	uvec[i] = (Struct520{1});
	stdvec[i] = (Struct520{1});
case 521:
	vvec[i] = (new polymorphic_Struct521{1});
	uvec[i] = (Struct521{1});
	stdvec[i] = (Struct521{1});
case 522:
	vvec[i] = (new polymorphic_Struct522{1});
	uvec[i] = (Struct522{1});
	stdvec[i] = (Struct522{1});
case 523:
	vvec[i] = (new polymorphic_Struct523{1});
	uvec[i] = (Struct523{1});
	stdvec[i] = (Struct523{1});
case 524:
	vvec[i] = (new polymorphic_Struct524{1});
	uvec[i] = (Struct524{1});
	stdvec[i] = (Struct524{1});
case 525:
	vvec[i] = (new polymorphic_Struct525{1});
	uvec[i] = (Struct525{1});
	stdvec[i] = (Struct525{1});
case 526:
	vvec[i] = (new polymorphic_Struct526{1});
	uvec[i] = (Struct526{1});
	stdvec[i] = (Struct526{1});
case 527:
	vvec[i] = (new polymorphic_Struct527{1});
	uvec[i] = (Struct527{1});
	stdvec[i] = (Struct527{1});
case 528:
	vvec[i] = (new polymorphic_Struct528{1});
	uvec[i] = (Struct528{1});
	stdvec[i] = (Struct528{1});
case 529:
	vvec[i] = (new polymorphic_Struct529{1});
	uvec[i] = (Struct529{1});
	stdvec[i] = (Struct529{1});
case 530:
	vvec[i] = (new polymorphic_Struct530{1});
	uvec[i] = (Struct530{1});
	stdvec[i] = (Struct530{1});
case 531:
	vvec[i] = (new polymorphic_Struct531{1});
	uvec[i] = (Struct531{1});
	stdvec[i] = (Struct531{1});
case 532:
	vvec[i] = (new polymorphic_Struct532{1});
	uvec[i] = (Struct532{1});
	stdvec[i] = (Struct532{1});
case 533:
	vvec[i] = (new polymorphic_Struct533{1});
	uvec[i] = (Struct533{1});
	stdvec[i] = (Struct533{1});
case 534:
	vvec[i] = (new polymorphic_Struct534{1});
	uvec[i] = (Struct534{1});
	stdvec[i] = (Struct534{1});
case 535:
	vvec[i] = (new polymorphic_Struct535{1});
	uvec[i] = (Struct535{1});
	stdvec[i] = (Struct535{1});
case 536:
	vvec[i] = (new polymorphic_Struct536{1});
	uvec[i] = (Struct536{1});
	stdvec[i] = (Struct536{1});
case 537:
	vvec[i] = (new polymorphic_Struct537{1});
	uvec[i] = (Struct537{1});
	stdvec[i] = (Struct537{1});
case 538:
	vvec[i] = (new polymorphic_Struct538{1});
	uvec[i] = (Struct538{1});
	stdvec[i] = (Struct538{1});
case 539:
	vvec[i] = (new polymorphic_Struct539{1});
	uvec[i] = (Struct539{1});
	stdvec[i] = (Struct539{1});
case 540:
	vvec[i] = (new polymorphic_Struct540{1});
	uvec[i] = (Struct540{1});
	stdvec[i] = (Struct540{1});
case 541:
	vvec[i] = (new polymorphic_Struct541{1});
	uvec[i] = (Struct541{1});
	stdvec[i] = (Struct541{1});
case 542:
	vvec[i] = (new polymorphic_Struct542{1});
	uvec[i] = (Struct542{1});
	stdvec[i] = (Struct542{1});
case 543:
	vvec[i] = (new polymorphic_Struct543{1});
	uvec[i] = (Struct543{1});
	stdvec[i] = (Struct543{1});
case 544:
	vvec[i] = (new polymorphic_Struct544{1});
	uvec[i] = (Struct544{1});
	stdvec[i] = (Struct544{1});
case 545:
	vvec[i] = (new polymorphic_Struct545{1});
	uvec[i] = (Struct545{1});
	stdvec[i] = (Struct545{1});
case 546:
	vvec[i] = (new polymorphic_Struct546{1});
	uvec[i] = (Struct546{1});
	stdvec[i] = (Struct546{1});
case 547:
	vvec[i] = (new polymorphic_Struct547{1});
	uvec[i] = (Struct547{1});
	stdvec[i] = (Struct547{1});
case 548:
	vvec[i] = (new polymorphic_Struct548{1});
	uvec[i] = (Struct548{1});
	stdvec[i] = (Struct548{1});
case 549:
	vvec[i] = (new polymorphic_Struct549{1});
	uvec[i] = (Struct549{1});
	stdvec[i] = (Struct549{1});
case 550:
	vvec[i] = (new polymorphic_Struct550{1});
	uvec[i] = (Struct550{1});
	stdvec[i] = (Struct550{1});
case 551:
	vvec[i] = (new polymorphic_Struct551{1});
	uvec[i] = (Struct551{1});
	stdvec[i] = (Struct551{1});
case 552:
	vvec[i] = (new polymorphic_Struct552{1});
	uvec[i] = (Struct552{1});
	stdvec[i] = (Struct552{1});
case 553:
	vvec[i] = (new polymorphic_Struct553{1});
	uvec[i] = (Struct553{1});
	stdvec[i] = (Struct553{1});
case 554:
	vvec[i] = (new polymorphic_Struct554{1});
	uvec[i] = (Struct554{1});
	stdvec[i] = (Struct554{1});
case 555:
	vvec[i] = (new polymorphic_Struct555{1});
	uvec[i] = (Struct555{1});
	stdvec[i] = (Struct555{1});
case 556:
	vvec[i] = (new polymorphic_Struct556{1});
	uvec[i] = (Struct556{1});
	stdvec[i] = (Struct556{1});
case 557:
	vvec[i] = (new polymorphic_Struct557{1});
	uvec[i] = (Struct557{1});
	stdvec[i] = (Struct557{1});
case 558:
	vvec[i] = (new polymorphic_Struct558{1});
	uvec[i] = (Struct558{1});
	stdvec[i] = (Struct558{1});
case 559:
	vvec[i] = (new polymorphic_Struct559{1});
	uvec[i] = (Struct559{1});
	stdvec[i] = (Struct559{1});
case 560:
	vvec[i] = (new polymorphic_Struct560{1});
	uvec[i] = (Struct560{1});
	stdvec[i] = (Struct560{1});
case 561:
	vvec[i] = (new polymorphic_Struct561{1});
	uvec[i] = (Struct561{1});
	stdvec[i] = (Struct561{1});
case 562:
	vvec[i] = (new polymorphic_Struct562{1});
	uvec[i] = (Struct562{1});
	stdvec[i] = (Struct562{1});
case 563:
	vvec[i] = (new polymorphic_Struct563{1});
	uvec[i] = (Struct563{1});
	stdvec[i] = (Struct563{1});
case 564:
	vvec[i] = (new polymorphic_Struct564{1});
	uvec[i] = (Struct564{1});
	stdvec[i] = (Struct564{1});
case 565:
	vvec[i] = (new polymorphic_Struct565{1});
	uvec[i] = (Struct565{1});
	stdvec[i] = (Struct565{1});
case 566:
	vvec[i] = (new polymorphic_Struct566{1});
	uvec[i] = (Struct566{1});
	stdvec[i] = (Struct566{1});
case 567:
	vvec[i] = (new polymorphic_Struct567{1});
	uvec[i] = (Struct567{1});
	stdvec[i] = (Struct567{1});
case 568:
	vvec[i] = (new polymorphic_Struct568{1});
	uvec[i] = (Struct568{1});
	stdvec[i] = (Struct568{1});
case 569:
	vvec[i] = (new polymorphic_Struct569{1});
	uvec[i] = (Struct569{1});
	stdvec[i] = (Struct569{1});
case 570:
	vvec[i] = (new polymorphic_Struct570{1});
	uvec[i] = (Struct570{1});
	stdvec[i] = (Struct570{1});
case 571:
	vvec[i] = (new polymorphic_Struct571{1});
	uvec[i] = (Struct571{1});
	stdvec[i] = (Struct571{1});
case 572:
	vvec[i] = (new polymorphic_Struct572{1});
	uvec[i] = (Struct572{1});
	stdvec[i] = (Struct572{1});
case 573:
	vvec[i] = (new polymorphic_Struct573{1});
	uvec[i] = (Struct573{1});
	stdvec[i] = (Struct573{1});
case 574:
	vvec[i] = (new polymorphic_Struct574{1});
	uvec[i] = (Struct574{1});
	stdvec[i] = (Struct574{1});
case 575:
	vvec[i] = (new polymorphic_Struct575{1});
	uvec[i] = (Struct575{1});
	stdvec[i] = (Struct575{1});
case 576:
	vvec[i] = (new polymorphic_Struct576{1});
	uvec[i] = (Struct576{1});
	stdvec[i] = (Struct576{1});
case 577:
	vvec[i] = (new polymorphic_Struct577{1});
	uvec[i] = (Struct577{1});
	stdvec[i] = (Struct577{1});
case 578:
	vvec[i] = (new polymorphic_Struct578{1});
	uvec[i] = (Struct578{1});
	stdvec[i] = (Struct578{1});
case 579:
	vvec[i] = (new polymorphic_Struct579{1});
	uvec[i] = (Struct579{1});
	stdvec[i] = (Struct579{1});
case 580:
	vvec[i] = (new polymorphic_Struct580{1});
	uvec[i] = (Struct580{1});
	stdvec[i] = (Struct580{1});
case 581:
	vvec[i] = (new polymorphic_Struct581{1});
	uvec[i] = (Struct581{1});
	stdvec[i] = (Struct581{1});
case 582:
	vvec[i] = (new polymorphic_Struct582{1});
	uvec[i] = (Struct582{1});
	stdvec[i] = (Struct582{1});
case 583:
	vvec[i] = (new polymorphic_Struct583{1});
	uvec[i] = (Struct583{1});
	stdvec[i] = (Struct583{1});
case 584:
	vvec[i] = (new polymorphic_Struct584{1});
	uvec[i] = (Struct584{1});
	stdvec[i] = (Struct584{1});
case 585:
	vvec[i] = (new polymorphic_Struct585{1});
	uvec[i] = (Struct585{1});
	stdvec[i] = (Struct585{1});
case 586:
	vvec[i] = (new polymorphic_Struct586{1});
	uvec[i] = (Struct586{1});
	stdvec[i] = (Struct586{1});
case 587:
	vvec[i] = (new polymorphic_Struct587{1});
	uvec[i] = (Struct587{1});
	stdvec[i] = (Struct587{1});
case 588:
	vvec[i] = (new polymorphic_Struct588{1});
	uvec[i] = (Struct588{1});
	stdvec[i] = (Struct588{1});
case 589:
	vvec[i] = (new polymorphic_Struct589{1});
	uvec[i] = (Struct589{1});
	stdvec[i] = (Struct589{1});
case 590:
	vvec[i] = (new polymorphic_Struct590{1});
	uvec[i] = (Struct590{1});
	stdvec[i] = (Struct590{1});
case 591:
	vvec[i] = (new polymorphic_Struct591{1});
	uvec[i] = (Struct591{1});
	stdvec[i] = (Struct591{1});
case 592:
	vvec[i] = (new polymorphic_Struct592{1});
	uvec[i] = (Struct592{1});
	stdvec[i] = (Struct592{1});
case 593:
	vvec[i] = (new polymorphic_Struct593{1});
	uvec[i] = (Struct593{1});
	stdvec[i] = (Struct593{1});
case 594:
	vvec[i] = (new polymorphic_Struct594{1});
	uvec[i] = (Struct594{1});
	stdvec[i] = (Struct594{1});
case 595:
	vvec[i] = (new polymorphic_Struct595{1});
	uvec[i] = (Struct595{1});
	stdvec[i] = (Struct595{1});
case 596:
	vvec[i] = (new polymorphic_Struct596{1});
	uvec[i] = (Struct596{1});
	stdvec[i] = (Struct596{1});
case 597:
	vvec[i] = (new polymorphic_Struct597{1});
	uvec[i] = (Struct597{1});
	stdvec[i] = (Struct597{1});
case 598:
	vvec[i] = (new polymorphic_Struct598{1});
	uvec[i] = (Struct598{1});
	stdvec[i] = (Struct598{1});
case 599:
	vvec[i] = (new polymorphic_Struct599{1});
	uvec[i] = (Struct599{1});
	stdvec[i] = (Struct599{1});
case 600:
	vvec[i] = (new polymorphic_Struct600{1});
	uvec[i] = (Struct600{1});
	stdvec[i] = (Struct600{1});
case 601:
	vvec[i] = (new polymorphic_Struct601{1});
	uvec[i] = (Struct601{1});
	stdvec[i] = (Struct601{1});
case 602:
	vvec[i] = (new polymorphic_Struct602{1});
	uvec[i] = (Struct602{1});
	stdvec[i] = (Struct602{1});
case 603:
	vvec[i] = (new polymorphic_Struct603{1});
	uvec[i] = (Struct603{1});
	stdvec[i] = (Struct603{1});
case 604:
	vvec[i] = (new polymorphic_Struct604{1});
	uvec[i] = (Struct604{1});
	stdvec[i] = (Struct604{1});
case 605:
	vvec[i] = (new polymorphic_Struct605{1});
	uvec[i] = (Struct605{1});
	stdvec[i] = (Struct605{1});
case 606:
	vvec[i] = (new polymorphic_Struct606{1});
	uvec[i] = (Struct606{1});
	stdvec[i] = (Struct606{1});
case 607:
	vvec[i] = (new polymorphic_Struct607{1});
	uvec[i] = (Struct607{1});
	stdvec[i] = (Struct607{1});
case 608:
	vvec[i] = (new polymorphic_Struct608{1});
	uvec[i] = (Struct608{1});
	stdvec[i] = (Struct608{1});
case 609:
	vvec[i] = (new polymorphic_Struct609{1});
	uvec[i] = (Struct609{1});
	stdvec[i] = (Struct609{1});
case 610:
	vvec[i] = (new polymorphic_Struct610{1});
	uvec[i] = (Struct610{1});
	stdvec[i] = (Struct610{1});
case 611:
	vvec[i] = (new polymorphic_Struct611{1});
	uvec[i] = (Struct611{1});
	stdvec[i] = (Struct611{1});
case 612:
	vvec[i] = (new polymorphic_Struct612{1});
	uvec[i] = (Struct612{1});
	stdvec[i] = (Struct612{1});
case 613:
	vvec[i] = (new polymorphic_Struct613{1});
	uvec[i] = (Struct613{1});
	stdvec[i] = (Struct613{1});
case 614:
	vvec[i] = (new polymorphic_Struct614{1});
	uvec[i] = (Struct614{1});
	stdvec[i] = (Struct614{1});
case 615:
	vvec[i] = (new polymorphic_Struct615{1});
	uvec[i] = (Struct615{1});
	stdvec[i] = (Struct615{1});
case 616:
	vvec[i] = (new polymorphic_Struct616{1});
	uvec[i] = (Struct616{1});
	stdvec[i] = (Struct616{1});
case 617:
	vvec[i] = (new polymorphic_Struct617{1});
	uvec[i] = (Struct617{1});
	stdvec[i] = (Struct617{1});
case 618:
	vvec[i] = (new polymorphic_Struct618{1});
	uvec[i] = (Struct618{1});
	stdvec[i] = (Struct618{1});
case 619:
	vvec[i] = (new polymorphic_Struct619{1});
	uvec[i] = (Struct619{1});
	stdvec[i] = (Struct619{1});
case 620:
	vvec[i] = (new polymorphic_Struct620{1});
	uvec[i] = (Struct620{1});
	stdvec[i] = (Struct620{1});
case 621:
	vvec[i] = (new polymorphic_Struct621{1});
	uvec[i] = (Struct621{1});
	stdvec[i] = (Struct621{1});
case 622:
	vvec[i] = (new polymorphic_Struct622{1});
	uvec[i] = (Struct622{1});
	stdvec[i] = (Struct622{1});
case 623:
	vvec[i] = (new polymorphic_Struct623{1});
	uvec[i] = (Struct623{1});
	stdvec[i] = (Struct623{1});
case 624:
	vvec[i] = (new polymorphic_Struct624{1});
	uvec[i] = (Struct624{1});
	stdvec[i] = (Struct624{1});
case 625:
	vvec[i] = (new polymorphic_Struct625{1});
	uvec[i] = (Struct625{1});
	stdvec[i] = (Struct625{1});
case 626:
	vvec[i] = (new polymorphic_Struct626{1});
	uvec[i] = (Struct626{1});
	stdvec[i] = (Struct626{1});
case 627:
	vvec[i] = (new polymorphic_Struct627{1});
	uvec[i] = (Struct627{1});
	stdvec[i] = (Struct627{1});
case 628:
	vvec[i] = (new polymorphic_Struct628{1});
	uvec[i] = (Struct628{1});
	stdvec[i] = (Struct628{1});
case 629:
	vvec[i] = (new polymorphic_Struct629{1});
	uvec[i] = (Struct629{1});
	stdvec[i] = (Struct629{1});
case 630:
	vvec[i] = (new polymorphic_Struct630{1});
	uvec[i] = (Struct630{1});
	stdvec[i] = (Struct630{1});
case 631:
	vvec[i] = (new polymorphic_Struct631{1});
	uvec[i] = (Struct631{1});
	stdvec[i] = (Struct631{1});
case 632:
	vvec[i] = (new polymorphic_Struct632{1});
	uvec[i] = (Struct632{1});
	stdvec[i] = (Struct632{1});
case 633:
	vvec[i] = (new polymorphic_Struct633{1});
	uvec[i] = (Struct633{1});
	stdvec[i] = (Struct633{1});
case 634:
	vvec[i] = (new polymorphic_Struct634{1});
	uvec[i] = (Struct634{1});
	stdvec[i] = (Struct634{1});
case 635:
	vvec[i] = (new polymorphic_Struct635{1});
	uvec[i] = (Struct635{1});
	stdvec[i] = (Struct635{1});
case 636:
	vvec[i] = (new polymorphic_Struct636{1});
	uvec[i] = (Struct636{1});
	stdvec[i] = (Struct636{1});
case 637:
	vvec[i] = (new polymorphic_Struct637{1});
	uvec[i] = (Struct637{1});
	stdvec[i] = (Struct637{1});
case 638:
	vvec[i] = (new polymorphic_Struct638{1});
	uvec[i] = (Struct638{1});
	stdvec[i] = (Struct638{1});
case 639:
	vvec[i] = (new polymorphic_Struct639{1});
	uvec[i] = (Struct639{1});
	stdvec[i] = (Struct639{1});
case 640:
	vvec[i] = (new polymorphic_Struct640{1});
	uvec[i] = (Struct640{1});
	stdvec[i] = (Struct640{1});
case 641:
	vvec[i] = (new polymorphic_Struct641{1});
	uvec[i] = (Struct641{1});
	stdvec[i] = (Struct641{1});
case 642:
	vvec[i] = (new polymorphic_Struct642{1});
	uvec[i] = (Struct642{1});
	stdvec[i] = (Struct642{1});
case 643:
	vvec[i] = (new polymorphic_Struct643{1});
	uvec[i] = (Struct643{1});
	stdvec[i] = (Struct643{1});
case 644:
	vvec[i] = (new polymorphic_Struct644{1});
	uvec[i] = (Struct644{1});
	stdvec[i] = (Struct644{1});
case 645:
	vvec[i] = (new polymorphic_Struct645{1});
	uvec[i] = (Struct645{1});
	stdvec[i] = (Struct645{1});
case 646:
	vvec[i] = (new polymorphic_Struct646{1});
	uvec[i] = (Struct646{1});
	stdvec[i] = (Struct646{1});
case 647:
	vvec[i] = (new polymorphic_Struct647{1});
	uvec[i] = (Struct647{1});
	stdvec[i] = (Struct647{1});
case 648:
	vvec[i] = (new polymorphic_Struct648{1});
	uvec[i] = (Struct648{1});
	stdvec[i] = (Struct648{1});
case 649:
	vvec[i] = (new polymorphic_Struct649{1});
	uvec[i] = (Struct649{1});
	stdvec[i] = (Struct649{1});
case 650:
	vvec[i] = (new polymorphic_Struct650{1});
	uvec[i] = (Struct650{1});
	stdvec[i] = (Struct650{1});
case 651:
	vvec[i] = (new polymorphic_Struct651{1});
	uvec[i] = (Struct651{1});
	stdvec[i] = (Struct651{1});
case 652:
	vvec[i] = (new polymorphic_Struct652{1});
	uvec[i] = (Struct652{1});
	stdvec[i] = (Struct652{1});
case 653:
	vvec[i] = (new polymorphic_Struct653{1});
	uvec[i] = (Struct653{1});
	stdvec[i] = (Struct653{1});
case 654:
	vvec[i] = (new polymorphic_Struct654{1});
	uvec[i] = (Struct654{1});
	stdvec[i] = (Struct654{1});
case 655:
	vvec[i] = (new polymorphic_Struct655{1});
	uvec[i] = (Struct655{1});
	stdvec[i] = (Struct655{1});
case 656:
	vvec[i] = (new polymorphic_Struct656{1});
	uvec[i] = (Struct656{1});
	stdvec[i] = (Struct656{1});
case 657:
	vvec[i] = (new polymorphic_Struct657{1});
	uvec[i] = (Struct657{1});
	stdvec[i] = (Struct657{1});
case 658:
	vvec[i] = (new polymorphic_Struct658{1});
	uvec[i] = (Struct658{1});
	stdvec[i] = (Struct658{1});
case 659:
	vvec[i] = (new polymorphic_Struct659{1});
	uvec[i] = (Struct659{1});
	stdvec[i] = (Struct659{1});
case 660:
	vvec[i] = (new polymorphic_Struct660{1});
	uvec[i] = (Struct660{1});
	stdvec[i] = (Struct660{1});
case 661:
	vvec[i] = (new polymorphic_Struct661{1});
	uvec[i] = (Struct661{1});
	stdvec[i] = (Struct661{1});
case 662:
	vvec[i] = (new polymorphic_Struct662{1});
	uvec[i] = (Struct662{1});
	stdvec[i] = (Struct662{1});
case 663:
	vvec[i] = (new polymorphic_Struct663{1});
	uvec[i] = (Struct663{1});
	stdvec[i] = (Struct663{1});
case 664:
	vvec[i] = (new polymorphic_Struct664{1});
	uvec[i] = (Struct664{1});
	stdvec[i] = (Struct664{1});
case 665:
	vvec[i] = (new polymorphic_Struct665{1});
	uvec[i] = (Struct665{1});
	stdvec[i] = (Struct665{1});
case 666:
	vvec[i] = (new polymorphic_Struct666{1});
	uvec[i] = (Struct666{1});
	stdvec[i] = (Struct666{1});
case 667:
	vvec[i] = (new polymorphic_Struct667{1});
	uvec[i] = (Struct667{1});
	stdvec[i] = (Struct667{1});
case 668:
	vvec[i] = (new polymorphic_Struct668{1});
	uvec[i] = (Struct668{1});
	stdvec[i] = (Struct668{1});
case 669:
	vvec[i] = (new polymorphic_Struct669{1});
	uvec[i] = (Struct669{1});
	stdvec[i] = (Struct669{1});
case 670:
	vvec[i] = (new polymorphic_Struct670{1});
	uvec[i] = (Struct670{1});
	stdvec[i] = (Struct670{1});
case 671:
	vvec[i] = (new polymorphic_Struct671{1});
	uvec[i] = (Struct671{1});
	stdvec[i] = (Struct671{1});
case 672:
	vvec[i] = (new polymorphic_Struct672{1});
	uvec[i] = (Struct672{1});
	stdvec[i] = (Struct672{1});
case 673:
	vvec[i] = (new polymorphic_Struct673{1});
	uvec[i] = (Struct673{1});
	stdvec[i] = (Struct673{1});
case 674:
	vvec[i] = (new polymorphic_Struct674{1});
	uvec[i] = (Struct674{1});
	stdvec[i] = (Struct674{1});
case 675:
	vvec[i] = (new polymorphic_Struct675{1});
	uvec[i] = (Struct675{1});
	stdvec[i] = (Struct675{1});
case 676:
	vvec[i] = (new polymorphic_Struct676{1});
	uvec[i] = (Struct676{1});
	stdvec[i] = (Struct676{1});
case 677:
	vvec[i] = (new polymorphic_Struct677{1});
	uvec[i] = (Struct677{1});
	stdvec[i] = (Struct677{1});
case 678:
	vvec[i] = (new polymorphic_Struct678{1});
	uvec[i] = (Struct678{1});
	stdvec[i] = (Struct678{1});
case 679:
	vvec[i] = (new polymorphic_Struct679{1});
	uvec[i] = (Struct679{1});
	stdvec[i] = (Struct679{1});
case 680:
	vvec[i] = (new polymorphic_Struct680{1});
	uvec[i] = (Struct680{1});
	stdvec[i] = (Struct680{1});
case 681:
	vvec[i] = (new polymorphic_Struct681{1});
	uvec[i] = (Struct681{1});
	stdvec[i] = (Struct681{1});
case 682:
	vvec[i] = (new polymorphic_Struct682{1});
	uvec[i] = (Struct682{1});
	stdvec[i] = (Struct682{1});
case 683:
	vvec[i] = (new polymorphic_Struct683{1});
	uvec[i] = (Struct683{1});
	stdvec[i] = (Struct683{1});
case 684:
	vvec[i] = (new polymorphic_Struct684{1});
	uvec[i] = (Struct684{1});
	stdvec[i] = (Struct684{1});
case 685:
	vvec[i] = (new polymorphic_Struct685{1});
	uvec[i] = (Struct685{1});
	stdvec[i] = (Struct685{1});
case 686:
	vvec[i] = (new polymorphic_Struct686{1});
	uvec[i] = (Struct686{1});
	stdvec[i] = (Struct686{1});
case 687:
	vvec[i] = (new polymorphic_Struct687{1});
	uvec[i] = (Struct687{1});
	stdvec[i] = (Struct687{1});
case 688:
	vvec[i] = (new polymorphic_Struct688{1});
	uvec[i] = (Struct688{1});
	stdvec[i] = (Struct688{1});
case 689:
	vvec[i] = (new polymorphic_Struct689{1});
	uvec[i] = (Struct689{1});
	stdvec[i] = (Struct689{1});
case 690:
	vvec[i] = (new polymorphic_Struct690{1});
	uvec[i] = (Struct690{1});
	stdvec[i] = (Struct690{1});
case 691:
	vvec[i] = (new polymorphic_Struct691{1});
	uvec[i] = (Struct691{1});
	stdvec[i] = (Struct691{1});
case 692:
	vvec[i] = (new polymorphic_Struct692{1});
	uvec[i] = (Struct692{1});
	stdvec[i] = (Struct692{1});
case 693:
	vvec[i] = (new polymorphic_Struct693{1});
	uvec[i] = (Struct693{1});
	stdvec[i] = (Struct693{1});
case 694:
	vvec[i] = (new polymorphic_Struct694{1});
	uvec[i] = (Struct694{1});
	stdvec[i] = (Struct694{1});
case 695:
	vvec[i] = (new polymorphic_Struct695{1});
	uvec[i] = (Struct695{1});
	stdvec[i] = (Struct695{1});
case 696:
	vvec[i] = (new polymorphic_Struct696{1});
	uvec[i] = (Struct696{1});
	stdvec[i] = (Struct696{1});
case 697:
	vvec[i] = (new polymorphic_Struct697{1});
	uvec[i] = (Struct697{1});
	stdvec[i] = (Struct697{1});
case 698:
	vvec[i] = (new polymorphic_Struct698{1});
	uvec[i] = (Struct698{1});
	stdvec[i] = (Struct698{1});
case 699:
	vvec[i] = (new polymorphic_Struct699{1});
	uvec[i] = (Struct699{1});
	stdvec[i] = (Struct699{1});
case 700:
	vvec[i] = (new polymorphic_Struct700{1});
	uvec[i] = (Struct700{1});
	stdvec[i] = (Struct700{1});
case 701:
	vvec[i] = (new polymorphic_Struct701{1});
	uvec[i] = (Struct701{1});
	stdvec[i] = (Struct701{1});
case 702:
	vvec[i] = (new polymorphic_Struct702{1});
	uvec[i] = (Struct702{1});
	stdvec[i] = (Struct702{1});
case 703:
	vvec[i] = (new polymorphic_Struct703{1});
	uvec[i] = (Struct703{1});
	stdvec[i] = (Struct703{1});
case 704:
	vvec[i] = (new polymorphic_Struct704{1});
	uvec[i] = (Struct704{1});
	stdvec[i] = (Struct704{1});
case 705:
	vvec[i] = (new polymorphic_Struct705{1});
	uvec[i] = (Struct705{1});
	stdvec[i] = (Struct705{1});
case 706:
	vvec[i] = (new polymorphic_Struct706{1});
	uvec[i] = (Struct706{1});
	stdvec[i] = (Struct706{1});
case 707:
	vvec[i] = (new polymorphic_Struct707{1});
	uvec[i] = (Struct707{1});
	stdvec[i] = (Struct707{1});
case 708:
	vvec[i] = (new polymorphic_Struct708{1});
	uvec[i] = (Struct708{1});
	stdvec[i] = (Struct708{1});
case 709:
	vvec[i] = (new polymorphic_Struct709{1});
	uvec[i] = (Struct709{1});
	stdvec[i] = (Struct709{1});
case 710:
	vvec[i] = (new polymorphic_Struct710{1});
	uvec[i] = (Struct710{1});
	stdvec[i] = (Struct710{1});
case 711:
	vvec[i] = (new polymorphic_Struct711{1});
	uvec[i] = (Struct711{1});
	stdvec[i] = (Struct711{1});
case 712:
	vvec[i] = (new polymorphic_Struct712{1});
	uvec[i] = (Struct712{1});
	stdvec[i] = (Struct712{1});
case 713:
	vvec[i] = (new polymorphic_Struct713{1});
	uvec[i] = (Struct713{1});
	stdvec[i] = (Struct713{1});
case 714:
	vvec[i] = (new polymorphic_Struct714{1});
	uvec[i] = (Struct714{1});
	stdvec[i] = (Struct714{1});
case 715:
	vvec[i] = (new polymorphic_Struct715{1});
	uvec[i] = (Struct715{1});
	stdvec[i] = (Struct715{1});
case 716:
	vvec[i] = (new polymorphic_Struct716{1});
	uvec[i] = (Struct716{1});
	stdvec[i] = (Struct716{1});
case 717:
	vvec[i] = (new polymorphic_Struct717{1});
	uvec[i] = (Struct717{1});
	stdvec[i] = (Struct717{1});
case 718:
	vvec[i] = (new polymorphic_Struct718{1});
	uvec[i] = (Struct718{1});
	stdvec[i] = (Struct718{1});
case 719:
	vvec[i] = (new polymorphic_Struct719{1});
	uvec[i] = (Struct719{1});
	stdvec[i] = (Struct719{1});
case 720:
	vvec[i] = (new polymorphic_Struct720{1});
	uvec[i] = (Struct720{1});
	stdvec[i] = (Struct720{1});
case 721:
	vvec[i] = (new polymorphic_Struct721{1});
	uvec[i] = (Struct721{1});
	stdvec[i] = (Struct721{1});
case 722:
	vvec[i] = (new polymorphic_Struct722{1});
	uvec[i] = (Struct722{1});
	stdvec[i] = (Struct722{1});
case 723:
	vvec[i] = (new polymorphic_Struct723{1});
	uvec[i] = (Struct723{1});
	stdvec[i] = (Struct723{1});
case 724:
	vvec[i] = (new polymorphic_Struct724{1});
	uvec[i] = (Struct724{1});
	stdvec[i] = (Struct724{1});
case 725:
	vvec[i] = (new polymorphic_Struct725{1});
	uvec[i] = (Struct725{1});
	stdvec[i] = (Struct725{1});
case 726:
	vvec[i] = (new polymorphic_Struct726{1});
	uvec[i] = (Struct726{1});
	stdvec[i] = (Struct726{1});
case 727:
	vvec[i] = (new polymorphic_Struct727{1});
	uvec[i] = (Struct727{1});
	stdvec[i] = (Struct727{1});
case 728:
	vvec[i] = (new polymorphic_Struct728{1});
	uvec[i] = (Struct728{1});
	stdvec[i] = (Struct728{1});
case 729:
	vvec[i] = (new polymorphic_Struct729{1});
	uvec[i] = (Struct729{1});
	stdvec[i] = (Struct729{1});
case 730:
	vvec[i] = (new polymorphic_Struct730{1});
	uvec[i] = (Struct730{1});
	stdvec[i] = (Struct730{1});
case 731:
	vvec[i] = (new polymorphic_Struct731{1});
	uvec[i] = (Struct731{1});
	stdvec[i] = (Struct731{1});
case 732:
	vvec[i] = (new polymorphic_Struct732{1});
	uvec[i] = (Struct732{1});
	stdvec[i] = (Struct732{1});
case 733:
	vvec[i] = (new polymorphic_Struct733{1});
	uvec[i] = (Struct733{1});
	stdvec[i] = (Struct733{1});
case 734:
	vvec[i] = (new polymorphic_Struct734{1});
	uvec[i] = (Struct734{1});
	stdvec[i] = (Struct734{1});
case 735:
	vvec[i] = (new polymorphic_Struct735{1});
	uvec[i] = (Struct735{1});
	stdvec[i] = (Struct735{1});
case 736:
	vvec[i] = (new polymorphic_Struct736{1});
	uvec[i] = (Struct736{1});
	stdvec[i] = (Struct736{1});
case 737:
	vvec[i] = (new polymorphic_Struct737{1});
	uvec[i] = (Struct737{1});
	stdvec[i] = (Struct737{1});
case 738:
	vvec[i] = (new polymorphic_Struct738{1});
	uvec[i] = (Struct738{1});
	stdvec[i] = (Struct738{1});
case 739:
	vvec[i] = (new polymorphic_Struct739{1});
	uvec[i] = (Struct739{1});
	stdvec[i] = (Struct739{1});
case 740:
	vvec[i] = (new polymorphic_Struct740{1});
	uvec[i] = (Struct740{1});
	stdvec[i] = (Struct740{1});
case 741:
	vvec[i] = (new polymorphic_Struct741{1});
	uvec[i] = (Struct741{1});
	stdvec[i] = (Struct741{1});
case 742:
	vvec[i] = (new polymorphic_Struct742{1});
	uvec[i] = (Struct742{1});
	stdvec[i] = (Struct742{1});
case 743:
	vvec[i] = (new polymorphic_Struct743{1});
	uvec[i] = (Struct743{1});
	stdvec[i] = (Struct743{1});
case 744:
	vvec[i] = (new polymorphic_Struct744{1});
	uvec[i] = (Struct744{1});
	stdvec[i] = (Struct744{1});
case 745:
	vvec[i] = (new polymorphic_Struct745{1});
	uvec[i] = (Struct745{1});
	stdvec[i] = (Struct745{1});
case 746:
	vvec[i] = (new polymorphic_Struct746{1});
	uvec[i] = (Struct746{1});
	stdvec[i] = (Struct746{1});
case 747:
	vvec[i] = (new polymorphic_Struct747{1});
	uvec[i] = (Struct747{1});
	stdvec[i] = (Struct747{1});
case 748:
	vvec[i] = (new polymorphic_Struct748{1});
	uvec[i] = (Struct748{1});
	stdvec[i] = (Struct748{1});
case 749:
	vvec[i] = (new polymorphic_Struct749{1});
	uvec[i] = (Struct749{1});
	stdvec[i] = (Struct749{1});
case 750:
	vvec[i] = (new polymorphic_Struct750{1});
	uvec[i] = (Struct750{1});
	stdvec[i] = (Struct750{1});
case 751:
	vvec[i] = (new polymorphic_Struct751{1});
	uvec[i] = (Struct751{1});
	stdvec[i] = (Struct751{1});
case 752:
	vvec[i] = (new polymorphic_Struct752{1});
	uvec[i] = (Struct752{1});
	stdvec[i] = (Struct752{1});
case 753:
	vvec[i] = (new polymorphic_Struct753{1});
	uvec[i] = (Struct753{1});
	stdvec[i] = (Struct753{1});
case 754:
	vvec[i] = (new polymorphic_Struct754{1});
	uvec[i] = (Struct754{1});
	stdvec[i] = (Struct754{1});
case 755:
	vvec[i] = (new polymorphic_Struct755{1});
	uvec[i] = (Struct755{1});
	stdvec[i] = (Struct755{1});
case 756:
	vvec[i] = (new polymorphic_Struct756{1});
	uvec[i] = (Struct756{1});
	stdvec[i] = (Struct756{1});
case 757:
	vvec[i] = (new polymorphic_Struct757{1});
	uvec[i] = (Struct757{1});
	stdvec[i] = (Struct757{1});
case 758:
	vvec[i] = (new polymorphic_Struct758{1});
	uvec[i] = (Struct758{1});
	stdvec[i] = (Struct758{1});
case 759:
	vvec[i] = (new polymorphic_Struct759{1});
	uvec[i] = (Struct759{1});
	stdvec[i] = (Struct759{1});
case 760:
	vvec[i] = (new polymorphic_Struct760{1});
	uvec[i] = (Struct760{1});
	stdvec[i] = (Struct760{1});
case 761:
	vvec[i] = (new polymorphic_Struct761{1});
	uvec[i] = (Struct761{1});
	stdvec[i] = (Struct761{1});
case 762:
	vvec[i] = (new polymorphic_Struct762{1});
	uvec[i] = (Struct762{1});
	stdvec[i] = (Struct762{1});
case 763:
	vvec[i] = (new polymorphic_Struct763{1});
	uvec[i] = (Struct763{1});
	stdvec[i] = (Struct763{1});
case 764:
	vvec[i] = (new polymorphic_Struct764{1});
	uvec[i] = (Struct764{1});
	stdvec[i] = (Struct764{1});
case 765:
	vvec[i] = (new polymorphic_Struct765{1});
	uvec[i] = (Struct765{1});
	stdvec[i] = (Struct765{1});
case 766:
	vvec[i] = (new polymorphic_Struct766{1});
	uvec[i] = (Struct766{1});
	stdvec[i] = (Struct766{1});
case 767:
	vvec[i] = (new polymorphic_Struct767{1});
	uvec[i] = (Struct767{1});
	stdvec[i] = (Struct767{1});
case 768:
	vvec[i] = (new polymorphic_Struct768{1});
	uvec[i] = (Struct768{1});
	stdvec[i] = (Struct768{1});
case 769:
	vvec[i] = (new polymorphic_Struct769{1});
	uvec[i] = (Struct769{1});
	stdvec[i] = (Struct769{1});
case 770:
	vvec[i] = (new polymorphic_Struct770{1});
	uvec[i] = (Struct770{1});
	stdvec[i] = (Struct770{1});
case 771:
	vvec[i] = (new polymorphic_Struct771{1});
	uvec[i] = (Struct771{1});
	stdvec[i] = (Struct771{1});
case 772:
	vvec[i] = (new polymorphic_Struct772{1});
	uvec[i] = (Struct772{1});
	stdvec[i] = (Struct772{1});
case 773:
	vvec[i] = (new polymorphic_Struct773{1});
	uvec[i] = (Struct773{1});
	stdvec[i] = (Struct773{1});
case 774:
	vvec[i] = (new polymorphic_Struct774{1});
	uvec[i] = (Struct774{1});
	stdvec[i] = (Struct774{1});
case 775:
	vvec[i] = (new polymorphic_Struct775{1});
	uvec[i] = (Struct775{1});
	stdvec[i] = (Struct775{1});
case 776:
	vvec[i] = (new polymorphic_Struct776{1});
	uvec[i] = (Struct776{1});
	stdvec[i] = (Struct776{1});
case 777:
	vvec[i] = (new polymorphic_Struct777{1});
	uvec[i] = (Struct777{1});
	stdvec[i] = (Struct777{1});
case 778:
	vvec[i] = (new polymorphic_Struct778{1});
	uvec[i] = (Struct778{1});
	stdvec[i] = (Struct778{1});
case 779:
	vvec[i] = (new polymorphic_Struct779{1});
	uvec[i] = (Struct779{1});
	stdvec[i] = (Struct779{1});
case 780:
	vvec[i] = (new polymorphic_Struct780{1});
	uvec[i] = (Struct780{1});
	stdvec[i] = (Struct780{1});
case 781:
	vvec[i] = (new polymorphic_Struct781{1});
	uvec[i] = (Struct781{1});
	stdvec[i] = (Struct781{1});
case 782:
	vvec[i] = (new polymorphic_Struct782{1});
	uvec[i] = (Struct782{1});
	stdvec[i] = (Struct782{1});
case 783:
	vvec[i] = (new polymorphic_Struct783{1});
	uvec[i] = (Struct783{1});
	stdvec[i] = (Struct783{1});
case 784:
	vvec[i] = (new polymorphic_Struct784{1});
	uvec[i] = (Struct784{1});
	stdvec[i] = (Struct784{1});
case 785:
	vvec[i] = (new polymorphic_Struct785{1});
	uvec[i] = (Struct785{1});
	stdvec[i] = (Struct785{1});
case 786:
	vvec[i] = (new polymorphic_Struct786{1});
	uvec[i] = (Struct786{1});
	stdvec[i] = (Struct786{1});
case 787:
	vvec[i] = (new polymorphic_Struct787{1});
	uvec[i] = (Struct787{1});
	stdvec[i] = (Struct787{1});
case 788:
	vvec[i] = (new polymorphic_Struct788{1});
	uvec[i] = (Struct788{1});
	stdvec[i] = (Struct788{1});
case 789:
	vvec[i] = (new polymorphic_Struct789{1});
	uvec[i] = (Struct789{1});
	stdvec[i] = (Struct789{1});
case 790:
	vvec[i] = (new polymorphic_Struct790{1});
	uvec[i] = (Struct790{1});
	stdvec[i] = (Struct790{1});
case 791:
	vvec[i] = (new polymorphic_Struct791{1});
	uvec[i] = (Struct791{1});
	stdvec[i] = (Struct791{1});
case 792:
	vvec[i] = (new polymorphic_Struct792{1});
	uvec[i] = (Struct792{1});
	stdvec[i] = (Struct792{1});
case 793:
	vvec[i] = (new polymorphic_Struct793{1});
	uvec[i] = (Struct793{1});
	stdvec[i] = (Struct793{1});
case 794:
	vvec[i] = (new polymorphic_Struct794{1});
	uvec[i] = (Struct794{1});
	stdvec[i] = (Struct794{1});
case 795:
	vvec[i] = (new polymorphic_Struct795{1});
	uvec[i] = (Struct795{1});
	stdvec[i] = (Struct795{1});
case 796:
	vvec[i] = (new polymorphic_Struct796{1});
	uvec[i] = (Struct796{1});
	stdvec[i] = (Struct796{1});
case 797:
	vvec[i] = (new polymorphic_Struct797{1});
	uvec[i] = (Struct797{1});
	stdvec[i] = (Struct797{1});
case 798:
	vvec[i] = (new polymorphic_Struct798{1});
	uvec[i] = (Struct798{1});
	stdvec[i] = (Struct798{1});
case 799:
	vvec[i] = (new polymorphic_Struct799{1});
	uvec[i] = (Struct799{1});
	stdvec[i] = (Struct799{1});
case 800:
	vvec[i] = (new polymorphic_Struct800{1});
	uvec[i] = (Struct800{1});
	stdvec[i] = (Struct800{1});
case 801:
	vvec[i] = (new polymorphic_Struct801{1});
	uvec[i] = (Struct801{1});
	stdvec[i] = (Struct801{1});
case 802:
	vvec[i] = (new polymorphic_Struct802{1});
	uvec[i] = (Struct802{1});
	stdvec[i] = (Struct802{1});
case 803:
	vvec[i] = (new polymorphic_Struct803{1});
	uvec[i] = (Struct803{1});
	stdvec[i] = (Struct803{1});
case 804:
	vvec[i] = (new polymorphic_Struct804{1});
	uvec[i] = (Struct804{1});
	stdvec[i] = (Struct804{1});
case 805:
	vvec[i] = (new polymorphic_Struct805{1});
	uvec[i] = (Struct805{1});
	stdvec[i] = (Struct805{1});
case 806:
	vvec[i] = (new polymorphic_Struct806{1});
	uvec[i] = (Struct806{1});
	stdvec[i] = (Struct806{1});
case 807:
	vvec[i] = (new polymorphic_Struct807{1});
	uvec[i] = (Struct807{1});
	stdvec[i] = (Struct807{1});
case 808:
	vvec[i] = (new polymorphic_Struct808{1});
	uvec[i] = (Struct808{1});
	stdvec[i] = (Struct808{1});
case 809:
	vvec[i] = (new polymorphic_Struct809{1});
	uvec[i] = (Struct809{1});
	stdvec[i] = (Struct809{1});
case 810:
	vvec[i] = (new polymorphic_Struct810{1});
	uvec[i] = (Struct810{1});
	stdvec[i] = (Struct810{1});
case 811:
	vvec[i] = (new polymorphic_Struct811{1});
	uvec[i] = (Struct811{1});
	stdvec[i] = (Struct811{1});
case 812:
	vvec[i] = (new polymorphic_Struct812{1});
	uvec[i] = (Struct812{1});
	stdvec[i] = (Struct812{1});
case 813:
	vvec[i] = (new polymorphic_Struct813{1});
	uvec[i] = (Struct813{1});
	stdvec[i] = (Struct813{1});
case 814:
	vvec[i] = (new polymorphic_Struct814{1});
	uvec[i] = (Struct814{1});
	stdvec[i] = (Struct814{1});
case 815:
	vvec[i] = (new polymorphic_Struct815{1});
	uvec[i] = (Struct815{1});
	stdvec[i] = (Struct815{1});
case 816:
	vvec[i] = (new polymorphic_Struct816{1});
	uvec[i] = (Struct816{1});
	stdvec[i] = (Struct816{1});
case 817:
	vvec[i] = (new polymorphic_Struct817{1});
	uvec[i] = (Struct817{1});
	stdvec[i] = (Struct817{1});
case 818:
	vvec[i] = (new polymorphic_Struct818{1});
	uvec[i] = (Struct818{1});
	stdvec[i] = (Struct818{1});
case 819:
	vvec[i] = (new polymorphic_Struct819{1});
	uvec[i] = (Struct819{1});
	stdvec[i] = (Struct819{1});
case 820:
	vvec[i] = (new polymorphic_Struct820{1});
	uvec[i] = (Struct820{1});
	stdvec[i] = (Struct820{1});
case 821:
	vvec[i] = (new polymorphic_Struct821{1});
	uvec[i] = (Struct821{1});
	stdvec[i] = (Struct821{1});
case 822:
	vvec[i] = (new polymorphic_Struct822{1});
	uvec[i] = (Struct822{1});
	stdvec[i] = (Struct822{1});
case 823:
	vvec[i] = (new polymorphic_Struct823{1});
	uvec[i] = (Struct823{1});
	stdvec[i] = (Struct823{1});
case 824:
	vvec[i] = (new polymorphic_Struct824{1});
	uvec[i] = (Struct824{1});
	stdvec[i] = (Struct824{1});
case 825:
	vvec[i] = (new polymorphic_Struct825{1});
	uvec[i] = (Struct825{1});
	stdvec[i] = (Struct825{1});
case 826:
	vvec[i] = (new polymorphic_Struct826{1});
	uvec[i] = (Struct826{1});
	stdvec[i] = (Struct826{1});
case 827:
	vvec[i] = (new polymorphic_Struct827{1});
	uvec[i] = (Struct827{1});
	stdvec[i] = (Struct827{1});
case 828:
	vvec[i] = (new polymorphic_Struct828{1});
	uvec[i] = (Struct828{1});
	stdvec[i] = (Struct828{1});
case 829:
	vvec[i] = (new polymorphic_Struct829{1});
	uvec[i] = (Struct829{1});
	stdvec[i] = (Struct829{1});
case 830:
	vvec[i] = (new polymorphic_Struct830{1});
	uvec[i] = (Struct830{1});
	stdvec[i] = (Struct830{1});
case 831:
	vvec[i] = (new polymorphic_Struct831{1});
	uvec[i] = (Struct831{1});
	stdvec[i] = (Struct831{1});
case 832:
	vvec[i] = (new polymorphic_Struct832{1});
	uvec[i] = (Struct832{1});
	stdvec[i] = (Struct832{1});
case 833:
	vvec[i] = (new polymorphic_Struct833{1});
	uvec[i] = (Struct833{1});
	stdvec[i] = (Struct833{1});
case 834:
	vvec[i] = (new polymorphic_Struct834{1});
	uvec[i] = (Struct834{1});
	stdvec[i] = (Struct834{1});
case 835:
	vvec[i] = (new polymorphic_Struct835{1});
	uvec[i] = (Struct835{1});
	stdvec[i] = (Struct835{1});
case 836:
	vvec[i] = (new polymorphic_Struct836{1});
	uvec[i] = (Struct836{1});
	stdvec[i] = (Struct836{1});
case 837:
	vvec[i] = (new polymorphic_Struct837{1});
	uvec[i] = (Struct837{1});
	stdvec[i] = (Struct837{1});
case 838:
	vvec[i] = (new polymorphic_Struct838{1});
	uvec[i] = (Struct838{1});
	stdvec[i] = (Struct838{1});
case 839:
	vvec[i] = (new polymorphic_Struct839{1});
	uvec[i] = (Struct839{1});
	stdvec[i] = (Struct839{1});
case 840:
	vvec[i] = (new polymorphic_Struct840{1});
	uvec[i] = (Struct840{1});
	stdvec[i] = (Struct840{1});
case 841:
	vvec[i] = (new polymorphic_Struct841{1});
	uvec[i] = (Struct841{1});
	stdvec[i] = (Struct841{1});
case 842:
	vvec[i] = (new polymorphic_Struct842{1});
	uvec[i] = (Struct842{1});
	stdvec[i] = (Struct842{1});
case 843:
	vvec[i] = (new polymorphic_Struct843{1});
	uvec[i] = (Struct843{1});
	stdvec[i] = (Struct843{1});
case 844:
	vvec[i] = (new polymorphic_Struct844{1});
	uvec[i] = (Struct844{1});
	stdvec[i] = (Struct844{1});
case 845:
	vvec[i] = (new polymorphic_Struct845{1});
	uvec[i] = (Struct845{1});
	stdvec[i] = (Struct845{1});
case 846:
	vvec[i] = (new polymorphic_Struct846{1});
	uvec[i] = (Struct846{1});
	stdvec[i] = (Struct846{1});
case 847:
	vvec[i] = (new polymorphic_Struct847{1});
	uvec[i] = (Struct847{1});
	stdvec[i] = (Struct847{1});
case 848:
	vvec[i] = (new polymorphic_Struct848{1});
	uvec[i] = (Struct848{1});
	stdvec[i] = (Struct848{1});
case 849:
	vvec[i] = (new polymorphic_Struct849{1});
	uvec[i] = (Struct849{1});
	stdvec[i] = (Struct849{1});
case 850:
	vvec[i] = (new polymorphic_Struct850{1});
	uvec[i] = (Struct850{1});
	stdvec[i] = (Struct850{1});
case 851:
	vvec[i] = (new polymorphic_Struct851{1});
	uvec[i] = (Struct851{1});
	stdvec[i] = (Struct851{1});
case 852:
	vvec[i] = (new polymorphic_Struct852{1});
	uvec[i] = (Struct852{1});
	stdvec[i] = (Struct852{1});
case 853:
	vvec[i] = (new polymorphic_Struct853{1});
	uvec[i] = (Struct853{1});
	stdvec[i] = (Struct853{1});
case 854:
	vvec[i] = (new polymorphic_Struct854{1});
	uvec[i] = (Struct854{1});
	stdvec[i] = (Struct854{1});
case 855:
	vvec[i] = (new polymorphic_Struct855{1});
	uvec[i] = (Struct855{1});
	stdvec[i] = (Struct855{1});
case 856:
	vvec[i] = (new polymorphic_Struct856{1});
	uvec[i] = (Struct856{1});
	stdvec[i] = (Struct856{1});
case 857:
	vvec[i] = (new polymorphic_Struct857{1});
	uvec[i] = (Struct857{1});
	stdvec[i] = (Struct857{1});
case 858:
	vvec[i] = (new polymorphic_Struct858{1});
	uvec[i] = (Struct858{1});
	stdvec[i] = (Struct858{1});
case 859:
	vvec[i] = (new polymorphic_Struct859{1});
	uvec[i] = (Struct859{1});
	stdvec[i] = (Struct859{1});
case 860:
	vvec[i] = (new polymorphic_Struct860{1});
	uvec[i] = (Struct860{1});
	stdvec[i] = (Struct860{1});
case 861:
	vvec[i] = (new polymorphic_Struct861{1});
	uvec[i] = (Struct861{1});
	stdvec[i] = (Struct861{1});
case 862:
	vvec[i] = (new polymorphic_Struct862{1});
	uvec[i] = (Struct862{1});
	stdvec[i] = (Struct862{1});
case 863:
	vvec[i] = (new polymorphic_Struct863{1});
	uvec[i] = (Struct863{1});
	stdvec[i] = (Struct863{1});
case 864:
	vvec[i] = (new polymorphic_Struct864{1});
	uvec[i] = (Struct864{1});
	stdvec[i] = (Struct864{1});
case 865:
	vvec[i] = (new polymorphic_Struct865{1});
	uvec[i] = (Struct865{1});
	stdvec[i] = (Struct865{1});
case 866:
	vvec[i] = (new polymorphic_Struct866{1});
	uvec[i] = (Struct866{1});
	stdvec[i] = (Struct866{1});
case 867:
	vvec[i] = (new polymorphic_Struct867{1});
	uvec[i] = (Struct867{1});
	stdvec[i] = (Struct867{1});
case 868:
	vvec[i] = (new polymorphic_Struct868{1});
	uvec[i] = (Struct868{1});
	stdvec[i] = (Struct868{1});
case 869:
	vvec[i] = (new polymorphic_Struct869{1});
	uvec[i] = (Struct869{1});
	stdvec[i] = (Struct869{1});
case 870:
	vvec[i] = (new polymorphic_Struct870{1});
	uvec[i] = (Struct870{1});
	stdvec[i] = (Struct870{1});
case 871:
	vvec[i] = (new polymorphic_Struct871{1});
	uvec[i] = (Struct871{1});
	stdvec[i] = (Struct871{1});
case 872:
	vvec[i] = (new polymorphic_Struct872{1});
	uvec[i] = (Struct872{1});
	stdvec[i] = (Struct872{1});
case 873:
	vvec[i] = (new polymorphic_Struct873{1});
	uvec[i] = (Struct873{1});
	stdvec[i] = (Struct873{1});
case 874:
	vvec[i] = (new polymorphic_Struct874{1});
	uvec[i] = (Struct874{1});
	stdvec[i] = (Struct874{1});
case 875:
	vvec[i] = (new polymorphic_Struct875{1});
	uvec[i] = (Struct875{1});
	stdvec[i] = (Struct875{1});
case 876:
	vvec[i] = (new polymorphic_Struct876{1});
	uvec[i] = (Struct876{1});
	stdvec[i] = (Struct876{1});
case 877:
	vvec[i] = (new polymorphic_Struct877{1});
	uvec[i] = (Struct877{1});
	stdvec[i] = (Struct877{1});
case 878:
	vvec[i] = (new polymorphic_Struct878{1});
	uvec[i] = (Struct878{1});
	stdvec[i] = (Struct878{1});
case 879:
	vvec[i] = (new polymorphic_Struct879{1});
	uvec[i] = (Struct879{1});
	stdvec[i] = (Struct879{1});
case 880:
	vvec[i] = (new polymorphic_Struct880{1});
	uvec[i] = (Struct880{1});
	stdvec[i] = (Struct880{1});
case 881:
	vvec[i] = (new polymorphic_Struct881{1});
	uvec[i] = (Struct881{1});
	stdvec[i] = (Struct881{1});
case 882:
	vvec[i] = (new polymorphic_Struct882{1});
	uvec[i] = (Struct882{1});
	stdvec[i] = (Struct882{1});
case 883:
	vvec[i] = (new polymorphic_Struct883{1});
	uvec[i] = (Struct883{1});
	stdvec[i] = (Struct883{1});
case 884:
	vvec[i] = (new polymorphic_Struct884{1});
	uvec[i] = (Struct884{1});
	stdvec[i] = (Struct884{1});
case 885:
	vvec[i] = (new polymorphic_Struct885{1});
	uvec[i] = (Struct885{1});
	stdvec[i] = (Struct885{1});
case 886:
	vvec[i] = (new polymorphic_Struct886{1});
	uvec[i] = (Struct886{1});
	stdvec[i] = (Struct886{1});
case 887:
	vvec[i] = (new polymorphic_Struct887{1});
	uvec[i] = (Struct887{1});
	stdvec[i] = (Struct887{1});
case 888:
	vvec[i] = (new polymorphic_Struct888{1});
	uvec[i] = (Struct888{1});
	stdvec[i] = (Struct888{1});
case 889:
	vvec[i] = (new polymorphic_Struct889{1});
	uvec[i] = (Struct889{1});
	stdvec[i] = (Struct889{1});
case 890:
	vvec[i] = (new polymorphic_Struct890{1});
	uvec[i] = (Struct890{1});
	stdvec[i] = (Struct890{1});
case 891:
	vvec[i] = (new polymorphic_Struct891{1});
	uvec[i] = (Struct891{1});
	stdvec[i] = (Struct891{1});
case 892:
	vvec[i] = (new polymorphic_Struct892{1});
	uvec[i] = (Struct892{1});
	stdvec[i] = (Struct892{1});
case 893:
	vvec[i] = (new polymorphic_Struct893{1});
	uvec[i] = (Struct893{1});
	stdvec[i] = (Struct893{1});
case 894:
	vvec[i] = (new polymorphic_Struct894{1});
	uvec[i] = (Struct894{1});
	stdvec[i] = (Struct894{1});
case 895:
	vvec[i] = (new polymorphic_Struct895{1});
	uvec[i] = (Struct895{1});
	stdvec[i] = (Struct895{1});
case 896:
	vvec[i] = (new polymorphic_Struct896{1});
	uvec[i] = (Struct896{1});
	stdvec[i] = (Struct896{1});
case 897:
	vvec[i] = (new polymorphic_Struct897{1});
	uvec[i] = (Struct897{1});
	stdvec[i] = (Struct897{1});
case 898:
	vvec[i] = (new polymorphic_Struct898{1});
	uvec[i] = (Struct898{1});
	stdvec[i] = (Struct898{1});
case 899:
	vvec[i] = (new polymorphic_Struct899{1});
	uvec[i] = (Struct899{1});
	stdvec[i] = (Struct899{1});
case 900:
	vvec[i] = (new polymorphic_Struct900{1});
	uvec[i] = (Struct900{1});
	stdvec[i] = (Struct900{1});
case 901:
	vvec[i] = (new polymorphic_Struct901{1});
	uvec[i] = (Struct901{1});
	stdvec[i] = (Struct901{1});
case 902:
	vvec[i] = (new polymorphic_Struct902{1});
	uvec[i] = (Struct902{1});
	stdvec[i] = (Struct902{1});
case 903:
	vvec[i] = (new polymorphic_Struct903{1});
	uvec[i] = (Struct903{1});
	stdvec[i] = (Struct903{1});
case 904:
	vvec[i] = (new polymorphic_Struct904{1});
	uvec[i] = (Struct904{1});
	stdvec[i] = (Struct904{1});
case 905:
	vvec[i] = (new polymorphic_Struct905{1});
	uvec[i] = (Struct905{1});
	stdvec[i] = (Struct905{1});
case 906:
	vvec[i] = (new polymorphic_Struct906{1});
	uvec[i] = (Struct906{1});
	stdvec[i] = (Struct906{1});
case 907:
	vvec[i] = (new polymorphic_Struct907{1});
	uvec[i] = (Struct907{1});
	stdvec[i] = (Struct907{1});
case 908:
	vvec[i] = (new polymorphic_Struct908{1});
	uvec[i] = (Struct908{1});
	stdvec[i] = (Struct908{1});
case 909:
	vvec[i] = (new polymorphic_Struct909{1});
	uvec[i] = (Struct909{1});
	stdvec[i] = (Struct909{1});
case 910:
	vvec[i] = (new polymorphic_Struct910{1});
	uvec[i] = (Struct910{1});
	stdvec[i] = (Struct910{1});
case 911:
	vvec[i] = (new polymorphic_Struct911{1});
	uvec[i] = (Struct911{1});
	stdvec[i] = (Struct911{1});
case 912:
	vvec[i] = (new polymorphic_Struct912{1});
	uvec[i] = (Struct912{1});
	stdvec[i] = (Struct912{1});
case 913:
	vvec[i] = (new polymorphic_Struct913{1});
	uvec[i] = (Struct913{1});
	stdvec[i] = (Struct913{1});
case 914:
	vvec[i] = (new polymorphic_Struct914{1});
	uvec[i] = (Struct914{1});
	stdvec[i] = (Struct914{1});
case 915:
	vvec[i] = (new polymorphic_Struct915{1});
	uvec[i] = (Struct915{1});
	stdvec[i] = (Struct915{1});
case 916:
	vvec[i] = (new polymorphic_Struct916{1});
	uvec[i] = (Struct916{1});
	stdvec[i] = (Struct916{1});
case 917:
	vvec[i] = (new polymorphic_Struct917{1});
	uvec[i] = (Struct917{1});
	stdvec[i] = (Struct917{1});
case 918:
	vvec[i] = (new polymorphic_Struct918{1});
	uvec[i] = (Struct918{1});
	stdvec[i] = (Struct918{1});
case 919:
	vvec[i] = (new polymorphic_Struct919{1});
	uvec[i] = (Struct919{1});
	stdvec[i] = (Struct919{1});
case 920:
	vvec[i] = (new polymorphic_Struct920{1});
	uvec[i] = (Struct920{1});
	stdvec[i] = (Struct920{1});
case 921:
	vvec[i] = (new polymorphic_Struct921{1});
	uvec[i] = (Struct921{1});
	stdvec[i] = (Struct921{1});
case 922:
	vvec[i] = (new polymorphic_Struct922{1});
	uvec[i] = (Struct922{1});
	stdvec[i] = (Struct922{1});
case 923:
	vvec[i] = (new polymorphic_Struct923{1});
	uvec[i] = (Struct923{1});
	stdvec[i] = (Struct923{1});
case 924:
	vvec[i] = (new polymorphic_Struct924{1});
	uvec[i] = (Struct924{1});
	stdvec[i] = (Struct924{1});
case 925:
	vvec[i] = (new polymorphic_Struct925{1});
	uvec[i] = (Struct925{1});
	stdvec[i] = (Struct925{1});
case 926:
	vvec[i] = (new polymorphic_Struct926{1});
	uvec[i] = (Struct926{1});
	stdvec[i] = (Struct926{1});
case 927:
	vvec[i] = (new polymorphic_Struct927{1});
	uvec[i] = (Struct927{1});
	stdvec[i] = (Struct927{1});
case 928:
	vvec[i] = (new polymorphic_Struct928{1});
	uvec[i] = (Struct928{1});
	stdvec[i] = (Struct928{1});
case 929:
	vvec[i] = (new polymorphic_Struct929{1});
	uvec[i] = (Struct929{1});
	stdvec[i] = (Struct929{1});
case 930:
	vvec[i] = (new polymorphic_Struct930{1});
	uvec[i] = (Struct930{1});
	stdvec[i] = (Struct930{1});
case 931:
	vvec[i] = (new polymorphic_Struct931{1});
	uvec[i] = (Struct931{1});
	stdvec[i] = (Struct931{1});
case 932:
	vvec[i] = (new polymorphic_Struct932{1});
	uvec[i] = (Struct932{1});
	stdvec[i] = (Struct932{1});
case 933:
	vvec[i] = (new polymorphic_Struct933{1});
	uvec[i] = (Struct933{1});
	stdvec[i] = (Struct933{1});
case 934:
	vvec[i] = (new polymorphic_Struct934{1});
	uvec[i] = (Struct934{1});
	stdvec[i] = (Struct934{1});
case 935:
	vvec[i] = (new polymorphic_Struct935{1});
	uvec[i] = (Struct935{1});
	stdvec[i] = (Struct935{1});
case 936:
	vvec[i] = (new polymorphic_Struct936{1});
	uvec[i] = (Struct936{1});
	stdvec[i] = (Struct936{1});
case 937:
	vvec[i] = (new polymorphic_Struct937{1});
	uvec[i] = (Struct937{1});
	stdvec[i] = (Struct937{1});
case 938:
	vvec[i] = (new polymorphic_Struct938{1});
	uvec[i] = (Struct938{1});
	stdvec[i] = (Struct938{1});
case 939:
	vvec[i] = (new polymorphic_Struct939{1});
	uvec[i] = (Struct939{1});
	stdvec[i] = (Struct939{1});
case 940:
	vvec[i] = (new polymorphic_Struct940{1});
	uvec[i] = (Struct940{1});
	stdvec[i] = (Struct940{1});
case 941:
	vvec[i] = (new polymorphic_Struct941{1});
	uvec[i] = (Struct941{1});
	stdvec[i] = (Struct941{1});
case 942:
	vvec[i] = (new polymorphic_Struct942{1});
	uvec[i] = (Struct942{1});
	stdvec[i] = (Struct942{1});
case 943:
	vvec[i] = (new polymorphic_Struct943{1});
	uvec[i] = (Struct943{1});
	stdvec[i] = (Struct943{1});
case 944:
	vvec[i] = (new polymorphic_Struct944{1});
	uvec[i] = (Struct944{1});
	stdvec[i] = (Struct944{1});
case 945:
	vvec[i] = (new polymorphic_Struct945{1});
	uvec[i] = (Struct945{1});
	stdvec[i] = (Struct945{1});
case 946:
	vvec[i] = (new polymorphic_Struct946{1});
	uvec[i] = (Struct946{1});
	stdvec[i] = (Struct946{1});
case 947:
	vvec[i] = (new polymorphic_Struct947{1});
	uvec[i] = (Struct947{1});
	stdvec[i] = (Struct947{1});
case 948:
	vvec[i] = (new polymorphic_Struct948{1});
	uvec[i] = (Struct948{1});
	stdvec[i] = (Struct948{1});
case 949:
	vvec[i] = (new polymorphic_Struct949{1});
	uvec[i] = (Struct949{1});
	stdvec[i] = (Struct949{1});
case 950:
	vvec[i] = (new polymorphic_Struct950{1});
	uvec[i] = (Struct950{1});
	stdvec[i] = (Struct950{1});
case 951:
	vvec[i] = (new polymorphic_Struct951{1});
	uvec[i] = (Struct951{1});
	stdvec[i] = (Struct951{1});
case 952:
	vvec[i] = (new polymorphic_Struct952{1});
	uvec[i] = (Struct952{1});
	stdvec[i] = (Struct952{1});
case 953:
	vvec[i] = (new polymorphic_Struct953{1});
	uvec[i] = (Struct953{1});
	stdvec[i] = (Struct953{1});
case 954:
	vvec[i] = (new polymorphic_Struct954{1});
	uvec[i] = (Struct954{1});
	stdvec[i] = (Struct954{1});
case 955:
	vvec[i] = (new polymorphic_Struct955{1});
	uvec[i] = (Struct955{1});
	stdvec[i] = (Struct955{1});
case 956:
	vvec[i] = (new polymorphic_Struct956{1});
	uvec[i] = (Struct956{1});
	stdvec[i] = (Struct956{1});
case 957:
	vvec[i] = (new polymorphic_Struct957{1});
	uvec[i] = (Struct957{1});
	stdvec[i] = (Struct957{1});
case 958:
	vvec[i] = (new polymorphic_Struct958{1});
	uvec[i] = (Struct958{1});
	stdvec[i] = (Struct958{1});
case 959:
	vvec[i] = (new polymorphic_Struct959{1});
	uvec[i] = (Struct959{1});
	stdvec[i] = (Struct959{1});
case 960:
	vvec[i] = (new polymorphic_Struct960{1});
	uvec[i] = (Struct960{1});
	stdvec[i] = (Struct960{1});
case 961:
	vvec[i] = (new polymorphic_Struct961{1});
	uvec[i] = (Struct961{1});
	stdvec[i] = (Struct961{1});
case 962:
	vvec[i] = (new polymorphic_Struct962{1});
	uvec[i] = (Struct962{1});
	stdvec[i] = (Struct962{1});
case 963:
	vvec[i] = (new polymorphic_Struct963{1});
	uvec[i] = (Struct963{1});
	stdvec[i] = (Struct963{1});
case 964:
	vvec[i] = (new polymorphic_Struct964{1});
	uvec[i] = (Struct964{1});
	stdvec[i] = (Struct964{1});
case 965:
	vvec[i] = (new polymorphic_Struct965{1});
	uvec[i] = (Struct965{1});
	stdvec[i] = (Struct965{1});
case 966:
	vvec[i] = (new polymorphic_Struct966{1});
	uvec[i] = (Struct966{1});
	stdvec[i] = (Struct966{1});
case 967:
	vvec[i] = (new polymorphic_Struct967{1});
	uvec[i] = (Struct967{1});
	stdvec[i] = (Struct967{1});
case 968:
	vvec[i] = (new polymorphic_Struct968{1});
	uvec[i] = (Struct968{1});
	stdvec[i] = (Struct968{1});
case 969:
	vvec[i] = (new polymorphic_Struct969{1});
	uvec[i] = (Struct969{1});
	stdvec[i] = (Struct969{1});
case 970:
	vvec[i] = (new polymorphic_Struct970{1});
	uvec[i] = (Struct970{1});
	stdvec[i] = (Struct970{1});
case 971:
	vvec[i] = (new polymorphic_Struct971{1});
	uvec[i] = (Struct971{1});
	stdvec[i] = (Struct971{1});
case 972:
	vvec[i] = (new polymorphic_Struct972{1});
	uvec[i] = (Struct972{1});
	stdvec[i] = (Struct972{1});
case 973:
	vvec[i] = (new polymorphic_Struct973{1});
	uvec[i] = (Struct973{1});
	stdvec[i] = (Struct973{1});
case 974:
	vvec[i] = (new polymorphic_Struct974{1});
	uvec[i] = (Struct974{1});
	stdvec[i] = (Struct974{1});
case 975:
	vvec[i] = (new polymorphic_Struct975{1});
	uvec[i] = (Struct975{1});
	stdvec[i] = (Struct975{1});
case 976:
	vvec[i] = (new polymorphic_Struct976{1});
	uvec[i] = (Struct976{1});
	stdvec[i] = (Struct976{1});
case 977:
	vvec[i] = (new polymorphic_Struct977{1});
	uvec[i] = (Struct977{1});
	stdvec[i] = (Struct977{1});
case 978:
	vvec[i] = (new polymorphic_Struct978{1});
	uvec[i] = (Struct978{1});
	stdvec[i] = (Struct978{1});
case 979:
	vvec[i] = (new polymorphic_Struct979{1});
	uvec[i] = (Struct979{1});
	stdvec[i] = (Struct979{1});
case 980:
	vvec[i] = (new polymorphic_Struct980{1});
	uvec[i] = (Struct980{1});
	stdvec[i] = (Struct980{1});
case 981:
	vvec[i] = (new polymorphic_Struct981{1});
	uvec[i] = (Struct981{1});
	stdvec[i] = (Struct981{1});
case 982:
	vvec[i] = (new polymorphic_Struct982{1});
	uvec[i] = (Struct982{1});
	stdvec[i] = (Struct982{1});
case 983:
	vvec[i] = (new polymorphic_Struct983{1});
	uvec[i] = (Struct983{1});
	stdvec[i] = (Struct983{1});
case 984:
	vvec[i] = (new polymorphic_Struct984{1});
	uvec[i] = (Struct984{1});
	stdvec[i] = (Struct984{1});
case 985:
	vvec[i] = (new polymorphic_Struct985{1});
	uvec[i] = (Struct985{1});
	stdvec[i] = (Struct985{1});
case 986:
	vvec[i] = (new polymorphic_Struct986{1});
	uvec[i] = (Struct986{1});
	stdvec[i] = (Struct986{1});
case 987:
	vvec[i] = (new polymorphic_Struct987{1});
	uvec[i] = (Struct987{1});
	stdvec[i] = (Struct987{1});
case 988:
	vvec[i] = (new polymorphic_Struct988{1});
	uvec[i] = (Struct988{1});
	stdvec[i] = (Struct988{1});
case 989:
	vvec[i] = (new polymorphic_Struct989{1});
	uvec[i] = (Struct989{1});
	stdvec[i] = (Struct989{1});
case 990:
	vvec[i] = (new polymorphic_Struct990{1});
	uvec[i] = (Struct990{1});
	stdvec[i] = (Struct990{1});
case 991:
	vvec[i] = (new polymorphic_Struct991{1});
	uvec[i] = (Struct991{1});
	stdvec[i] = (Struct991{1});
case 992:
	vvec[i] = (new polymorphic_Struct992{1});
	uvec[i] = (Struct992{1});
	stdvec[i] = (Struct992{1});
case 993:
	vvec[i] = (new polymorphic_Struct993{1});
	uvec[i] = (Struct993{1});
	stdvec[i] = (Struct993{1});
case 994:
	vvec[i] = (new polymorphic_Struct994{1});
	uvec[i] = (Struct994{1});
	stdvec[i] = (Struct994{1});
case 995:
	vvec[i] = (new polymorphic_Struct995{1});
	uvec[i] = (Struct995{1});
	stdvec[i] = (Struct995{1});
case 996:
	vvec[i] = (new polymorphic_Struct996{1});
	uvec[i] = (Struct996{1});
	stdvec[i] = (Struct996{1});
case 997:
	vvec[i] = (new polymorphic_Struct997{1});
	uvec[i] = (Struct997{1});
	stdvec[i] = (Struct997{1});
case 998:
	vvec[i] = (new polymorphic_Struct998{1});
	uvec[i] = (Struct998{1});
	stdvec[i] = (Struct998{1});
case 999:
	vvec[i] = (new polymorphic_Struct999{1});
	uvec[i] = (Struct999{1});
	stdvec[i] = (Struct999{1});
case 1000:
	vvec[i] = (new polymorphic_Struct1000{1});
	uvec[i] = (Struct1000{1});
	stdvec[i] = (Struct1000{1});
case 1001:
	vvec[i] = (new polymorphic_Struct1001{1});
	uvec[i] = (Struct1001{1});
	stdvec[i] = (Struct1001{1});
case 1002:
	vvec[i] = (new polymorphic_Struct1002{1});
	uvec[i] = (Struct1002{1});
	stdvec[i] = (Struct1002{1});
case 1003:
	vvec[i] = (new polymorphic_Struct1003{1});
	uvec[i] = (Struct1003{1});
	stdvec[i] = (Struct1003{1});
case 1004:
	vvec[i] = (new polymorphic_Struct1004{1});
	uvec[i] = (Struct1004{1});
	stdvec[i] = (Struct1004{1});
case 1005:
	vvec[i] = (new polymorphic_Struct1005{1});
	uvec[i] = (Struct1005{1});
	stdvec[i] = (Struct1005{1});
case 1006:
	vvec[i] = (new polymorphic_Struct1006{1});
	uvec[i] = (Struct1006{1});
	stdvec[i] = (Struct1006{1});
case 1007:
	vvec[i] = (new polymorphic_Struct1007{1});
	uvec[i] = (Struct1007{1});
	stdvec[i] = (Struct1007{1});
case 1008:
	vvec[i] = (new polymorphic_Struct1008{1});
	uvec[i] = (Struct1008{1});
	stdvec[i] = (Struct1008{1});
case 1009:
	vvec[i] = (new polymorphic_Struct1009{1});
	uvec[i] = (Struct1009{1});
	stdvec[i] = (Struct1009{1});
case 1010:
	vvec[i] = (new polymorphic_Struct1010{1});
	uvec[i] = (Struct1010{1});
	stdvec[i] = (Struct1010{1});
case 1011:
	vvec[i] = (new polymorphic_Struct1011{1});
	uvec[i] = (Struct1011{1});
	stdvec[i] = (Struct1011{1});
case 1012:
	vvec[i] = (new polymorphic_Struct1012{1});
	uvec[i] = (Struct1012{1});
	stdvec[i] = (Struct1012{1});
case 1013:
	vvec[i] = (new polymorphic_Struct1013{1});
	uvec[i] = (Struct1013{1});
	stdvec[i] = (Struct1013{1});
case 1014:
	vvec[i] = (new polymorphic_Struct1014{1});
	uvec[i] = (Struct1014{1});
	stdvec[i] = (Struct1014{1});
case 1015:
	vvec[i] = (new polymorphic_Struct1015{1});
	uvec[i] = (Struct1015{1});
	stdvec[i] = (Struct1015{1});
case 1016:
	vvec[i] = (new polymorphic_Struct1016{1});
	uvec[i] = (Struct1016{1});
	stdvec[i] = (Struct1016{1});
case 1017:
	vvec[i] = (new polymorphic_Struct1017{1});
	uvec[i] = (Struct1017{1});
	stdvec[i] = (Struct1017{1});
case 1018:
	vvec[i] = (new polymorphic_Struct1018{1});
	uvec[i] = (Struct1018{1});
	stdvec[i] = (Struct1018{1});
case 1019:
	vvec[i] = (new polymorphic_Struct1019{1});
	uvec[i] = (Struct1019{1});
	stdvec[i] = (Struct1019{1});
case 1020:
	vvec[i] = (new polymorphic_Struct1020{1});
	uvec[i] = (Struct1020{1});
	stdvec[i] = (Struct1020{1});
case 1021:
	vvec[i] = (new polymorphic_Struct1021{1});
	uvec[i] = (Struct1021{1});
	stdvec[i] = (Struct1021{1});
case 1022:
	vvec[i] = (new polymorphic_Struct1022{1});
	uvec[i] = (Struct1022{1});
	stdvec[i] = (Struct1022{1});
case 1023:
	vvec[i] = (new polymorphic_Struct1023{1});
	uvec[i] = (Struct1023{1});
	stdvec[i] = (Struct1023{1});


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