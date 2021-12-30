#pragma once

#include <variant>
#include <iostream>
#include "../Get_Type_Location_In_Pack.h"
#include "../Parameter_Pack_For_Each.h"
#include "../Choose_Integer_Size_From_Type.h"

#define TAGGED_UNION_ENABLE_MEMBER_FUNC(FUNC_NAME) struct FUNC_NAME { \
        template<typename T> \
        static constexpr auto m_func = &T::FUNC_NAME; \
    };

#define TAGGED_UNION_ENABLE_MEMBER_VAR(VAR_NAME) struct VAR_NAME { \
        template<typename T> \
        static constexpr auto m_var = &T::VAR_NAME; \
    };

template<typename...Ts>
class Tagged_Union {
private:
    using uint_type = Choose_Integer_Type_From_Size<sizeof...(Ts)>;
    uint_type tag;
    std::variant<Ts...> u;

    template<typename func, uint_type index, typename U, typename...Us, typename...Arg_Ts>
    void execute_func_internal(Arg_Ts...args) {
        if(index == tag) { // try implementing this as a jump table too
            ((std::get<U>(u)).*(func::template m_func<U>))(args...);
            return;
        }
        if constexpr(sizeof...(Us) != 0) {
            execute_func_internal<func, index+1, Us...>(args...); // oh shiz passing the args over and over again probably isn't fast. nvm will probably get inlined
                                                                    // consider making const&?
        }
    }

    template<typename T, uint_type N>
    void for_each() {
        std::cout << T();
        if (tag == N) {
            std::cout << "tag == N == " << N << "\n";
        }
    }

public:
    template<typename func, typename...Arg_Ts>
    auto execute_func(Arg_Ts...args) {
        execute_func_internal<func, 0, Ts...>(args...);
    }

    template<typename var>
    auto get_member_var() {

    }

    template<typename T>
    Tagged_Union(T t) {
        tag = (uint_type)get_type_location_in_pack<T, Ts...>;
        u = t;
    }
};

//GENERATE_LOCAL_MEMBER_FUNCTION_WRAPPER_STRUCT(Tagged_Union, for_each)

/*
namespace {
    struct Tagged_Union__for_each_wrapper_t {
        template<typename T, std::size_t N, typename...Ts>
        static constexpr auto m_func = &Tagged_Union<Ts...>::template for_each<T, N>;
    };
}*/