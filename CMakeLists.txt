cmake_minimum_required(VERSION 3.21)
project(src/Tagged_Union)

set(CMAKE_CXX_STANDARD 20)

add_executable(Tagged_Union src/main.cpp src/Returns_Void.h src/Get_Type_Location_In_Pack.h src/Tagged_Union/Tagged_Union.cpp src/Tagged_Union/Tagged_Union.h src/Foo_Bar_Baz.h src/Parameter_Pack_For_Each.h src/test_function_wrapper.h src/My_Union.h src/Choose_Integer_Type_From_Size.h src/Virtual_Inheritance/virtual_inheritance_classes.h src/Helper_Jump_Table.h src/Get_Type_From_Index.h src/Jump_Table_Array.h src/Probably_UB_Array.h)
