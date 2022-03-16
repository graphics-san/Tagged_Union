#pragma once

#include "Foo_Bar_Baz.h"


inline int do_thing(Foo& f, int i) {
    f.i = i;
    return 3;
}

inline int do_thing(Bar& b, int i) {
    b.i = -1*i;
    return 5;
}

inline int do_thing(Baz& b, int i) {
    b.i-=3*i;
    return -1;
}