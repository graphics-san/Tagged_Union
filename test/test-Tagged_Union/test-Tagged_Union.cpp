#include<string>
#include <type_traits>

#include "catch.hpp"
#include "Tagged_Union/Tagged_Union.h"

class Test_Class_1 {
    int i;

public:
    Test_Class_1(int ival, unsigned int uval) : i (ival), u(uval) {}

    Test_Class_1() = default;

    void assign_to_arg(unsigned int& val) {
        val = u;
    }

    int do_thing(int val) const {
        return i * val;
    }

    unsigned int u;

};

class Test_Class_2 {
    int i;

public:

    Test_Class_2(int ival, unsigned int uval) : i (ival), u(uval) {}

    Test_Class_2() = default;

    void assign_to_arg(unsigned int& val) {
        val = 2*u;
    }

    int do_thing(int val) const {
        return i * val * 2;
    }

    unsigned int u;

};

class Test_Class_3 {
    int i;

public:
    Test_Class_3(int ival, unsigned int uval) : i (ival), u(uval) {}

    Test_Class_3() = default;

    void assign_to_arg(unsigned int& val) {
        val = 3*u;
    }

    int do_thing(int val) const {
        return i * val * 3;
    }

    unsigned int u;
};

Test_Class_1 tc1{1, 10};
Test_Class_2 tc2{2, 11};
Test_Class_3 tc3{3, 12};

Tagged_Union<Test_Class_1, Test_Class_2, Test_Class_3> tu;

TAGGED_UNION_ENABLE_MEMBER(do_thing)

TEST_CASE("execute_member_func returns correct result") {
    tu = tc1;
    REQUIRE(tu.execute_member_func<do_thing>(1) == 1);

    tu = tc2;
    REQUIRE(tu.execute_member_func<do_thing>(1) == 4);

    tu = tc3;
    REQUIRE(tu.execute_member_func<do_thing>(1) == 9);
}


TAGGED_UNION_ENABLE_MEMBER(assign_to_arg)
TEST_CASE("pass by reference works") {
    unsigned int i;

    tu = tc1;
    tu.execute_member_func<assign_to_arg>(i);
    REQUIRE(i == 10);

    tu = tc2;
    tu.execute_member_func<assign_to_arg>(i);
    REQUIRE(i == 22);

    tu = tc3;
    tu.execute_member_func<assign_to_arg>(i);
    REQUIRE(i == 36);
}

// TODO: Test passing by reference

TAGGED_UNION_ENABLE_MEMBER(u)

TEST_CASE("get_member_variable returns correct result") {
    tu = tc1;
    REQUIRE(tu.get_member_var<u>() == 10);

    tu = tc2;
    REQUIRE(tu.get_member_var<u>() == 11);

    tu = tc3;
    REQUIRE(tu.get_member_var<u>() == 12);
}

TEST_CASE("get_member_variable_ref assigns correct result") {
    tu = tc1;
    tu.get_member_var_ref<u>() = 5;
    REQUIRE(tu.get_member_var<u>() == 5);

    tu = tc2;
    tu.get_member_var_ref<u>() = 3;
    REQUIRE(tu.get_member_var<u>() == 3);

    tu = tc3;
    tu.get_member_var_ref<u>() = 1;
    REQUIRE(tu.get_member_var<u>() == 1);
}

Tagged_Union<int, bool, char> pod_tu;

std::string pod_do_thing(int i, const char* s) {
    return std::string(s) + ' ' + std::to_string(i);
}
std::string pod_do_thing(bool b, const char* s) {
    return std::string(s) + ' ' + (b ? "true" : "false");
}
std::string pod_do_thing(char c, const char* s) {
    return std::string(s) + ' ' + c;
}

TAGGED_UNION_ENABLE_FREE_FUNCTION(pod_do_thing)

TEST_CASE("execute_free_func returns correct result") {
    pod_tu = 3;
    REQUIRE(pod_tu.execute_free_func<pod_do_thing_Wrapper_t>("int is") == std::string("int is 3"));

    pod_tu = true;
    REQUIRE(pod_tu.execute_free_func<pod_do_thing_Wrapper_t>("bool is") == std::string("bool is true"));

    pod_tu = 'c';
    REQUIRE(pod_tu.execute_free_func<pod_do_thing_Wrapper_t>("char is") == std::string("char is c"));
}

TEST_CASE("get returns correct type and value") {
    auto c = pod_tu.get<char>();
    REQUIRE(std::is_same_v<decltype(c), char>);
    REQUIRE(c == 'c');

    pod_tu = true;
    auto b = pod_tu.get<bool>();
    REQUIRE(std::is_same_v<decltype(b), bool>);
    REQUIRE(b == true);

    pod_tu = 3;
    auto i = pod_tu.get<int>();
    REQUIRE(std::is_same_v<decltype(i), int>);
    REQUIRE(i == 3);

}

TEST_CASE("get throws when requesting a type that isn't active") {
    bool has_thrown = false;

    pod_tu = 3;
    try {
        pod_tu.get<char>();
    }
    catch (Bad_Tagged_Union_Access& e) {
        has_thrown = true;
    }

    REQUIRE(has_thrown);

}