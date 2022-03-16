
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

#include "profiling/profiling_funcs.h"


TAGGED_UNION_ENABLE_MEMBER(do_stuff)
TAGGED_UNION_ENABLE_MEMBER(work)
TAGGED_UNION_ENABLE_MEMBER(sleepy_sleep)
TAGGED_UNION_ENABLE_MEMBER(i)
TAGGED_UNION_ENABLE_MEMBER(assign)

TAGGED_UNION_ENABLE_FREE_FUNCTION(do_thing)


int main() {
    profiling_128();
}
