#pragma once
#include <exception>
#include <string>

template<typename...Ts>
class Tagged_Union;

class Bad_Tagged_Union_Access : std::exception {
private:
    std::string what_string;

public:

    template<typename...Ts>
    explicit Bad_Tagged_Union_Access(const Tagged_Union<Ts...>& t) { // TODO add code to index of requested type (probably implement as private member function in tagged union)
        what_string = "Attempted to access type at index ... when active type has index " + t.tag;
    }

    Bad_Tagged_Union_Access(unsigned int requested_type_position, unsigned int tag);

    [[nodiscard]] const char* what () const noexcept override;
};
