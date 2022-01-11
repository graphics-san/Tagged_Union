
#include "Bad_Tagged_Union_Access.h"

[[nodiscard]]

const char* Bad_Tagged_Union_Access::what () const noexcept {
    return what_string.c_str();
}
