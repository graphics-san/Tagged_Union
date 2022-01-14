cmake_minimum_required(VERSION 3.21)
project(Tagged_Union)

set(CMAKE_CXX_STANDARD 20)

include_directories(lib/Catch)
include_directories(src)

add_executable(Tagged_Union src/Profiling.cpp src/Template_Utils/Get_Type_Location_In_Pack.h src/Tagged_Union/Tagged_Union.h src/Examples/Foo_Bar_Baz.h src/Tagged_Union/Dependencies/My_Union.h src/Template_Utils/Choose_Integer_Type_From_Size.h src/Examples/Virtual_Inheritance_Classes.h src/Template_Utils/Get_Type_From_Index.h src/Tagged_Union/Dependencies/Jump_Table_Array.h src/Misc_Utils/Progress_Bar.h src/Misc_Utils/Sized_Struct.h src/Examples/Visitors.h src/Template_Utils/Constexpr_Ternary.h src/Debugging/Type_Info_Err.h src/Examples/Free_Functions.h src/Template_Utils/Member_Functions_Have_Same_Signature.h src/Tagged_Union/Dependencies/Bad_Tagged_Union_Access.cpp src/Tagged_Union/Dependencies/Bad_Tagged_Union_Access.h src/Template_Utils/All_Types_Have_Attribute.h test/test-Tagged_Union/test-Tagged_Union.cpp)

enable_testing()

add_executable(All_Tests test/test-main.cpp test/test-Tagged_Union/test-Tagged_Union.cpp src/Tagged_Union/Tagged_Union.h src/Tagged_Union/Dependencies/Bad_Tagged_Union_Access.h src/Tagged_Union/Dependencies/Bad_Tagged_Union_Access.h src/Tagged_Union/Dependencies/Bad_Tagged_Union_Access.cpp)
add_test(TEST All_Tests)

