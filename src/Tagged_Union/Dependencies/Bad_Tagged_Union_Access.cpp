
#include "Bad_Tagged_Union_Access.h"

[[nodiscard]]

const char* Bad_Tagged_Union_Access::what () const noexcept {
    return what_string.c_str();
}

Bad_Tagged_Union_Access::Bad_Tagged_Union_Access(unsigned int requested_type_position, unsigned int tag) {
    what_string = std::string("Attempted to access type at index ") + std::to_string(requested_type_position) + " when active type has index " + std::to_string(tag) + '\n';

}