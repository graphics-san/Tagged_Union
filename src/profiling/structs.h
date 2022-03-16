#pragma once

#include "Examples/Virtual_Inheritance_Classes.h"

struct Struct0 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*0; i=i+1) {}
        return reps*2;
    }

    Struct0(int val) : field(val) {}
    Struct0() = default;
};

struct polymorphic_Struct0 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*0; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct0(int val) : field(val) {}
       polymorphic_Struct0() = default;
};
/*
inline int do_work(Struct0& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*0; i=i+1) {}
         return reps*2;
}*/


struct Struct1 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1; i=i+1) {}
        return reps*2;
    }

    Struct1(int val) : field(val) {}
    Struct1() = default;
};

struct polymorphic_Struct1 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1(int val) : field(val) {}
       polymorphic_Struct1() = default;
};
/*
inline int do_work(Struct1& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1; i=i+1) {}
         return reps*2;
}*/


struct Struct2 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*2; i=i+1) {}
        return reps*2;
    }

    Struct2(int val) : field(val) {}
    Struct2() = default;
};

struct polymorphic_Struct2 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*2; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct2(int val) : field(val) {}
       polymorphic_Struct2() = default;
};
/*
inline int do_work(Struct2& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*2; i=i+1) {}
         return reps*2;
}*/


struct Struct3 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*3; i=i+1) {}
        return reps*2;
    }

    Struct3(int val) : field(val) {}
    Struct3() = default;
};

struct polymorphic_Struct3 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*3; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct3(int val) : field(val) {}
       polymorphic_Struct3() = default;
};
/*
inline int do_work(Struct3& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*3; i=i+1) {}
         return reps*2;
}*/


struct Struct4 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*4; i=i+1) {}
        return reps*2;
    }

    Struct4(int val) : field(val) {}
    Struct4() = default;
};

struct polymorphic_Struct4 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*4; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct4(int val) : field(val) {}
       polymorphic_Struct4() = default;
};
/*
inline int do_work(Struct4& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*4; i=i+1) {}
         return reps*2;
}*/


struct Struct5 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*5; i=i+1) {}
        return reps*2;
    }

    Struct5(int val) : field(val) {}
    Struct5() = default;
};

struct polymorphic_Struct5 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*5; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct5(int val) : field(val) {}
       polymorphic_Struct5() = default;
};
/*
inline int do_work(Struct5& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*5; i=i+1) {}
         return reps*2;
}*/


struct Struct6 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*6; i=i+1) {}
        return reps*2;
    }

    Struct6(int val) : field(val) {}
    Struct6() = default;
};

struct polymorphic_Struct6 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*6; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct6(int val) : field(val) {}
       polymorphic_Struct6() = default;
};
/*
inline int do_work(Struct6& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*6; i=i+1) {}
         return reps*2;
}*/


struct Struct7 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*7; i=i+1) {}
        return reps*2;
    }

    Struct7(int val) : field(val) {}
    Struct7() = default;
};

struct polymorphic_Struct7 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*7; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct7(int val) : field(val) {}
       polymorphic_Struct7() = default;
};
/*
inline int do_work(Struct7& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*7; i=i+1) {}
         return reps*2;
}*/


struct Struct8 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*8; i=i+1) {}
        return reps*2;
    }

    Struct8(int val) : field(val) {}
    Struct8() = default;
};

struct polymorphic_Struct8 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*8; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct8(int val) : field(val) {}
       polymorphic_Struct8() = default;
};
/*
inline int do_work(Struct8& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*8; i=i+1) {}
         return reps*2;
}*/


struct Struct9 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*9; i=i+1) {}
        return reps*2;
    }

    Struct9(int val) : field(val) {}
    Struct9() = default;
};

struct polymorphic_Struct9 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*9; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct9(int val) : field(val) {}
       polymorphic_Struct9() = default;
};
/*
inline int do_work(Struct9& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*9; i=i+1) {}
         return reps*2;
}*/


struct Struct10 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*10; i=i+1) {}
        return reps*2;
    }

    Struct10(int val) : field(val) {}
    Struct10() = default;
};

struct polymorphic_Struct10 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*10; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct10(int val) : field(val) {}
       polymorphic_Struct10() = default;
};
/*
inline int do_work(Struct10& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*10; i=i+1) {}
         return reps*2;
}*/


struct Struct11 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*11; i=i+1) {}
        return reps*2;
    }

    Struct11(int val) : field(val) {}
    Struct11() = default;
};

struct polymorphic_Struct11 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*11; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct11(int val) : field(val) {}
       polymorphic_Struct11() = default;
};
/*
inline int do_work(Struct11& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*11; i=i+1) {}
         return reps*2;
}*/


struct Struct12 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*12; i=i+1) {}
        return reps*2;
    }

    Struct12(int val) : field(val) {}
    Struct12() = default;
};

struct polymorphic_Struct12 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*12; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct12(int val) : field(val) {}
       polymorphic_Struct12() = default;
};
/*
inline int do_work(Struct12& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*12; i=i+1) {}
         return reps*2;
}*/


struct Struct13 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*13; i=i+1) {}
        return reps*2;
    }

    Struct13(int val) : field(val) {}
    Struct13() = default;
};

struct polymorphic_Struct13 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*13; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct13(int val) : field(val) {}
       polymorphic_Struct13() = default;
};
/*
inline int do_work(Struct13& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*13; i=i+1) {}
         return reps*2;
}*/


struct Struct14 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*14; i=i+1) {}
        return reps*2;
    }

    Struct14(int val) : field(val) {}
    Struct14() = default;
};

struct polymorphic_Struct14 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*14; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct14(int val) : field(val) {}
       polymorphic_Struct14() = default;
};
/*
inline int do_work(Struct14& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*14; i=i+1) {}
         return reps*2;
}*/


struct Struct15 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*15; i=i+1) {}
        return reps*2;
    }

    Struct15(int val) : field(val) {}
    Struct15() = default;
};

struct polymorphic_Struct15 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*15; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct15(int val) : field(val) {}
       polymorphic_Struct15() = default;
};
/*
inline int do_work(Struct15& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*15; i=i+1) {}
         return reps*2;
}*/


struct Struct16 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*16; i=i+1) {}
        return reps*2;
    }

    Struct16(int val) : field(val) {}
    Struct16() = default;
};

struct polymorphic_Struct16 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*16; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct16(int val) : field(val) {}
       polymorphic_Struct16() = default;
};
/*
inline int do_work(Struct16& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*16; i=i+1) {}
         return reps*2;
}*/


struct Struct17 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*17; i=i+1) {}
        return reps*2;
    }

    Struct17(int val) : field(val) {}
    Struct17() = default;
};

struct polymorphic_Struct17 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*17; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct17(int val) : field(val) {}
       polymorphic_Struct17() = default;
};
/*
inline int do_work(Struct17& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*17; i=i+1) {}
         return reps*2;
}*/


struct Struct18 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*18; i=i+1) {}
        return reps*2;
    }

    Struct18(int val) : field(val) {}
    Struct18() = default;
};

struct polymorphic_Struct18 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*18; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct18(int val) : field(val) {}
       polymorphic_Struct18() = default;
};
/*
inline int do_work(Struct18& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*18; i=i+1) {}
         return reps*2;
}*/


struct Struct19 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*19; i=i+1) {}
        return reps*2;
    }

    Struct19(int val) : field(val) {}
    Struct19() = default;
};

struct polymorphic_Struct19 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*19; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct19(int val) : field(val) {}
       polymorphic_Struct19() = default;
};
/*
inline int do_work(Struct19& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*19; i=i+1) {}
         return reps*2;
}*/


struct Struct20 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*20; i=i+1) {}
        return reps*2;
    }

    Struct20(int val) : field(val) {}
    Struct20() = default;
};

struct polymorphic_Struct20 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*20; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct20(int val) : field(val) {}
       polymorphic_Struct20() = default;
};
/*
inline int do_work(Struct20& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*20; i=i+1) {}
         return reps*2;
}*/


struct Struct21 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*21; i=i+1) {}
        return reps*2;
    }

    Struct21(int val) : field(val) {}
    Struct21() = default;
};

struct polymorphic_Struct21 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*21; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct21(int val) : field(val) {}
       polymorphic_Struct21() = default;
};
/*
inline int do_work(Struct21& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*21; i=i+1) {}
         return reps*2;
}*/


struct Struct22 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*22; i=i+1) {}
        return reps*2;
    }

    Struct22(int val) : field(val) {}
    Struct22() = default;
};

struct polymorphic_Struct22 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*22; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct22(int val) : field(val) {}
       polymorphic_Struct22() = default;
};
/*
inline int do_work(Struct22& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*22; i=i+1) {}
         return reps*2;
}*/


struct Struct23 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*23; i=i+1) {}
        return reps*2;
    }

    Struct23(int val) : field(val) {}
    Struct23() = default;
};

struct polymorphic_Struct23 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*23; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct23(int val) : field(val) {}
       polymorphic_Struct23() = default;
};
/*
inline int do_work(Struct23& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*23; i=i+1) {}
         return reps*2;
}*/


struct Struct24 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*24; i=i+1) {}
        return reps*2;
    }

    Struct24(int val) : field(val) {}
    Struct24() = default;
};

struct polymorphic_Struct24 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*24; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct24(int val) : field(val) {}
       polymorphic_Struct24() = default;
};
/*
inline int do_work(Struct24& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*24; i=i+1) {}
         return reps*2;
}*/


struct Struct25 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*25; i=i+1) {}
        return reps*2;
    }

    Struct25(int val) : field(val) {}
    Struct25() = default;
};

struct polymorphic_Struct25 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*25; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct25(int val) : field(val) {}
       polymorphic_Struct25() = default;
};
/*
inline int do_work(Struct25& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*25; i=i+1) {}
         return reps*2;
}*/


struct Struct26 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*26; i=i+1) {}
        return reps*2;
    }

    Struct26(int val) : field(val) {}
    Struct26() = default;
};

struct polymorphic_Struct26 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*26; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct26(int val) : field(val) {}
       polymorphic_Struct26() = default;
};
/*
inline int do_work(Struct26& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*26; i=i+1) {}
         return reps*2;
}*/


struct Struct27 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*27; i=i+1) {}
        return reps*2;
    }

    Struct27(int val) : field(val) {}
    Struct27() = default;
};

struct polymorphic_Struct27 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*27; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct27(int val) : field(val) {}
       polymorphic_Struct27() = default;
};
/*
inline int do_work(Struct27& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*27; i=i+1) {}
         return reps*2;
}*/


struct Struct28 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*28; i=i+1) {}
        return reps*2;
    }

    Struct28(int val) : field(val) {}
    Struct28() = default;
};

struct polymorphic_Struct28 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*28; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct28(int val) : field(val) {}
       polymorphic_Struct28() = default;
};
/*
inline int do_work(Struct28& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*28; i=i+1) {}
         return reps*2;
}*/


struct Struct29 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*29; i=i+1) {}
        return reps*2;
    }

    Struct29(int val) : field(val) {}
    Struct29() = default;
};

struct polymorphic_Struct29 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*29; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct29(int val) : field(val) {}
       polymorphic_Struct29() = default;
};
/*
inline int do_work(Struct29& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*29; i=i+1) {}
         return reps*2;
}*/


struct Struct30 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*30; i=i+1) {}
        return reps*2;
    }

    Struct30(int val) : field(val) {}
    Struct30() = default;
};

struct polymorphic_Struct30 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*30; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct30(int val) : field(val) {}
       polymorphic_Struct30() = default;
};
/*
inline int do_work(Struct30& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*30; i=i+1) {}
         return reps*2;
}*/


struct Struct31 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*31; i=i+1) {}
        return reps*2;
    }

    Struct31(int val) : field(val) {}
    Struct31() = default;
};

struct polymorphic_Struct31 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*31; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct31(int val) : field(val) {}
       polymorphic_Struct31() = default;
};
/*
inline int do_work(Struct31& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*31; i=i+1) {}
         return reps*2;
}*/


struct Struct32 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*32; i=i+1) {}
        return reps*2;
    }

    Struct32(int val) : field(val) {}
    Struct32() = default;
};

struct polymorphic_Struct32 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*32; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct32(int val) : field(val) {}
       polymorphic_Struct32() = default;
};
/*
inline int do_work(Struct32& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*32; i=i+1) {}
         return reps*2;
}*/


struct Struct33 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*33; i=i+1) {}
        return reps*2;
    }

    Struct33(int val) : field(val) {}
    Struct33() = default;
};

struct polymorphic_Struct33 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*33; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct33(int val) : field(val) {}
       polymorphic_Struct33() = default;
};
/*
inline int do_work(Struct33& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*33; i=i+1) {}
         return reps*2;
}*/


struct Struct34 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*34; i=i+1) {}
        return reps*2;
    }

    Struct34(int val) : field(val) {}
    Struct34() = default;
};

struct polymorphic_Struct34 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*34; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct34(int val) : field(val) {}
       polymorphic_Struct34() = default;
};
/*
inline int do_work(Struct34& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*34; i=i+1) {}
         return reps*2;
}*/


struct Struct35 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*35; i=i+1) {}
        return reps*2;
    }

    Struct35(int val) : field(val) {}
    Struct35() = default;
};

struct polymorphic_Struct35 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*35; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct35(int val) : field(val) {}
       polymorphic_Struct35() = default;
};
/*
inline int do_work(Struct35& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*35; i=i+1) {}
         return reps*2;
}*/


struct Struct36 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*36; i=i+1) {}
        return reps*2;
    }

    Struct36(int val) : field(val) {}
    Struct36() = default;
};

struct polymorphic_Struct36 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*36; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct36(int val) : field(val) {}
       polymorphic_Struct36() = default;
};
/*
inline int do_work(Struct36& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*36; i=i+1) {}
         return reps*2;
}*/


struct Struct37 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*37; i=i+1) {}
        return reps*2;
    }

    Struct37(int val) : field(val) {}
    Struct37() = default;
};

struct polymorphic_Struct37 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*37; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct37(int val) : field(val) {}
       polymorphic_Struct37() = default;
};
/*
inline int do_work(Struct37& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*37; i=i+1) {}
         return reps*2;
}*/


struct Struct38 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*38; i=i+1) {}
        return reps*2;
    }

    Struct38(int val) : field(val) {}
    Struct38() = default;
};

struct polymorphic_Struct38 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*38; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct38(int val) : field(val) {}
       polymorphic_Struct38() = default;
};
/*
inline int do_work(Struct38& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*38; i=i+1) {}
         return reps*2;
}*/


struct Struct39 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*39; i=i+1) {}
        return reps*2;
    }

    Struct39(int val) : field(val) {}
    Struct39() = default;
};

struct polymorphic_Struct39 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*39; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct39(int val) : field(val) {}
       polymorphic_Struct39() = default;
};
/*
inline int do_work(Struct39& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*39; i=i+1) {}
         return reps*2;
}*/


struct Struct40 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*40; i=i+1) {}
        return reps*2;
    }

    Struct40(int val) : field(val) {}
    Struct40() = default;
};

struct polymorphic_Struct40 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*40; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct40(int val) : field(val) {}
       polymorphic_Struct40() = default;
};
/*
inline int do_work(Struct40& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*40; i=i+1) {}
         return reps*2;
}*/


struct Struct41 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*41; i=i+1) {}
        return reps*2;
    }

    Struct41(int val) : field(val) {}
    Struct41() = default;
};

struct polymorphic_Struct41 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*41; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct41(int val) : field(val) {}
       polymorphic_Struct41() = default;
};
/*
inline int do_work(Struct41& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*41; i=i+1) {}
         return reps*2;
}*/


struct Struct42 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*42; i=i+1) {}
        return reps*2;
    }

    Struct42(int val) : field(val) {}
    Struct42() = default;
};

struct polymorphic_Struct42 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*42; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct42(int val) : field(val) {}
       polymorphic_Struct42() = default;
};
/*
inline int do_work(Struct42& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*42; i=i+1) {}
         return reps*2;
}*/


struct Struct43 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*43; i=i+1) {}
        return reps*2;
    }

    Struct43(int val) : field(val) {}
    Struct43() = default;
};

struct polymorphic_Struct43 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*43; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct43(int val) : field(val) {}
       polymorphic_Struct43() = default;
};
/*
inline int do_work(Struct43& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*43; i=i+1) {}
         return reps*2;
}*/


struct Struct44 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*44; i=i+1) {}
        return reps*2;
    }

    Struct44(int val) : field(val) {}
    Struct44() = default;
};

struct polymorphic_Struct44 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*44; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct44(int val) : field(val) {}
       polymorphic_Struct44() = default;
};
/*
inline int do_work(Struct44& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*44; i=i+1) {}
         return reps*2;
}*/


struct Struct45 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*45; i=i+1) {}
        return reps*2;
    }

    Struct45(int val) : field(val) {}
    Struct45() = default;
};

struct polymorphic_Struct45 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*45; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct45(int val) : field(val) {}
       polymorphic_Struct45() = default;
};
/*
inline int do_work(Struct45& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*45; i=i+1) {}
         return reps*2;
}*/


struct Struct46 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*46; i=i+1) {}
        return reps*2;
    }

    Struct46(int val) : field(val) {}
    Struct46() = default;
};

struct polymorphic_Struct46 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*46; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct46(int val) : field(val) {}
       polymorphic_Struct46() = default;
};
/*
inline int do_work(Struct46& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*46; i=i+1) {}
         return reps*2;
}*/


struct Struct47 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*47; i=i+1) {}
        return reps*2;
    }

    Struct47(int val) : field(val) {}
    Struct47() = default;
};

struct polymorphic_Struct47 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*47; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct47(int val) : field(val) {}
       polymorphic_Struct47() = default;
};
/*
inline int do_work(Struct47& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*47; i=i+1) {}
         return reps*2;
}*/


struct Struct48 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*48; i=i+1) {}
        return reps*2;
    }

    Struct48(int val) : field(val) {}
    Struct48() = default;
};

struct polymorphic_Struct48 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*48; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct48(int val) : field(val) {}
       polymorphic_Struct48() = default;
};
/*
inline int do_work(Struct48& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*48; i=i+1) {}
         return reps*2;
}*/


struct Struct49 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*49; i=i+1) {}
        return reps*2;
    }

    Struct49(int val) : field(val) {}
    Struct49() = default;
};

struct polymorphic_Struct49 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*49; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct49(int val) : field(val) {}
       polymorphic_Struct49() = default;
};
/*
inline int do_work(Struct49& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*49; i=i+1) {}
         return reps*2;
}*/


struct Struct50 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*50; i=i+1) {}
        return reps*2;
    }

    Struct50(int val) : field(val) {}
    Struct50() = default;
};

struct polymorphic_Struct50 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*50; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct50(int val) : field(val) {}
       polymorphic_Struct50() = default;
};
/*
inline int do_work(Struct50& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*50; i=i+1) {}
         return reps*2;
}*/


struct Struct51 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*51; i=i+1) {}
        return reps*2;
    }

    Struct51(int val) : field(val) {}
    Struct51() = default;
};

struct polymorphic_Struct51 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*51; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct51(int val) : field(val) {}
       polymorphic_Struct51() = default;
};
/*
inline int do_work(Struct51& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*51; i=i+1) {}
         return reps*2;
}*/


struct Struct52 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*52; i=i+1) {}
        return reps*2;
    }

    Struct52(int val) : field(val) {}
    Struct52() = default;
};

struct polymorphic_Struct52 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*52; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct52(int val) : field(val) {}
       polymorphic_Struct52() = default;
};
/*
inline int do_work(Struct52& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*52; i=i+1) {}
         return reps*2;
}*/


struct Struct53 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*53; i=i+1) {}
        return reps*2;
    }

    Struct53(int val) : field(val) {}
    Struct53() = default;
};

struct polymorphic_Struct53 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*53; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct53(int val) : field(val) {}
       polymorphic_Struct53() = default;
};
/*
inline int do_work(Struct53& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*53; i=i+1) {}
         return reps*2;
}*/


struct Struct54 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*54; i=i+1) {}
        return reps*2;
    }

    Struct54(int val) : field(val) {}
    Struct54() = default;
};

struct polymorphic_Struct54 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*54; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct54(int val) : field(val) {}
       polymorphic_Struct54() = default;
};
/*
inline int do_work(Struct54& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*54; i=i+1) {}
         return reps*2;
}*/


struct Struct55 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*55; i=i+1) {}
        return reps*2;
    }

    Struct55(int val) : field(val) {}
    Struct55() = default;
};

struct polymorphic_Struct55 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*55; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct55(int val) : field(val) {}
       polymorphic_Struct55() = default;
};
/*
inline int do_work(Struct55& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*55; i=i+1) {}
         return reps*2;
}*/


struct Struct56 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*56; i=i+1) {}
        return reps*2;
    }

    Struct56(int val) : field(val) {}
    Struct56() = default;
};

struct polymorphic_Struct56 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*56; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct56(int val) : field(val) {}
       polymorphic_Struct56() = default;
};
/*
inline int do_work(Struct56& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*56; i=i+1) {}
         return reps*2;
}*/


struct Struct57 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*57; i=i+1) {}
        return reps*2;
    }

    Struct57(int val) : field(val) {}
    Struct57() = default;
};

struct polymorphic_Struct57 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*57; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct57(int val) : field(val) {}
       polymorphic_Struct57() = default;
};
/*
inline int do_work(Struct57& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*57; i=i+1) {}
         return reps*2;
}*/


struct Struct58 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*58; i=i+1) {}
        return reps*2;
    }

    Struct58(int val) : field(val) {}
    Struct58() = default;
};

struct polymorphic_Struct58 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*58; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct58(int val) : field(val) {}
       polymorphic_Struct58() = default;
};
/*
inline int do_work(Struct58& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*58; i=i+1) {}
         return reps*2;
}*/


struct Struct59 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*59; i=i+1) {}
        return reps*2;
    }

    Struct59(int val) : field(val) {}
    Struct59() = default;
};

struct polymorphic_Struct59 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*59; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct59(int val) : field(val) {}
       polymorphic_Struct59() = default;
};
/*
inline int do_work(Struct59& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*59; i=i+1) {}
         return reps*2;
}*/


struct Struct60 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*60; i=i+1) {}
        return reps*2;
    }

    Struct60(int val) : field(val) {}
    Struct60() = default;
};

struct polymorphic_Struct60 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*60; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct60(int val) : field(val) {}
       polymorphic_Struct60() = default;
};
/*
inline int do_work(Struct60& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*60; i=i+1) {}
         return reps*2;
}*/


struct Struct61 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*61; i=i+1) {}
        return reps*2;
    }

    Struct61(int val) : field(val) {}
    Struct61() = default;
};

struct polymorphic_Struct61 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*61; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct61(int val) : field(val) {}
       polymorphic_Struct61() = default;
};
/*
inline int do_work(Struct61& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*61; i=i+1) {}
         return reps*2;
}*/


struct Struct62 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*62; i=i+1) {}
        return reps*2;
    }

    Struct62(int val) : field(val) {}
    Struct62() = default;
};

struct polymorphic_Struct62 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*62; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct62(int val) : field(val) {}
       polymorphic_Struct62() = default;
};
/*
inline int do_work(Struct62& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*62; i=i+1) {}
         return reps*2;
}*/


struct Struct63 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*63; i=i+1) {}
        return reps*2;
    }

    Struct63(int val) : field(val) {}
    Struct63() = default;
};

struct polymorphic_Struct63 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*63; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct63(int val) : field(val) {}
       polymorphic_Struct63() = default;
};
/*
inline int do_work(Struct63& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*63; i=i+1) {}
         return reps*2;
}*/


struct Struct64 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*64; i=i+1) {}
        return reps*2;
    }

    Struct64(int val) : field(val) {}
    Struct64() = default;
};

struct polymorphic_Struct64 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*64; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct64(int val) : field(val) {}
       polymorphic_Struct64() = default;
};
/*
inline int do_work(Struct64& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*64; i=i+1) {}
         return reps*2;
}*/


struct Struct65 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*65; i=i+1) {}
        return reps*2;
    }

    Struct65(int val) : field(val) {}
    Struct65() = default;
};

struct polymorphic_Struct65 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*65; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct65(int val) : field(val) {}
       polymorphic_Struct65() = default;
};
/*
inline int do_work(Struct65& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*65; i=i+1) {}
         return reps*2;
}*/


struct Struct66 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*66; i=i+1) {}
        return reps*2;
    }

    Struct66(int val) : field(val) {}
    Struct66() = default;
};

struct polymorphic_Struct66 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*66; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct66(int val) : field(val) {}
       polymorphic_Struct66() = default;
};
/*
inline int do_work(Struct66& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*66; i=i+1) {}
         return reps*2;
}*/


struct Struct67 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*67; i=i+1) {}
        return reps*2;
    }

    Struct67(int val) : field(val) {}
    Struct67() = default;
};

struct polymorphic_Struct67 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*67; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct67(int val) : field(val) {}
       polymorphic_Struct67() = default;
};
/*
inline int do_work(Struct67& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*67; i=i+1) {}
         return reps*2;
}*/


struct Struct68 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*68; i=i+1) {}
        return reps*2;
    }

    Struct68(int val) : field(val) {}
    Struct68() = default;
};

struct polymorphic_Struct68 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*68; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct68(int val) : field(val) {}
       polymorphic_Struct68() = default;
};
/*
inline int do_work(Struct68& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*68; i=i+1) {}
         return reps*2;
}*/


struct Struct69 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*69; i=i+1) {}
        return reps*2;
    }

    Struct69(int val) : field(val) {}
    Struct69() = default;
};

struct polymorphic_Struct69 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*69; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct69(int val) : field(val) {}
       polymorphic_Struct69() = default;
};
/*
inline int do_work(Struct69& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*69; i=i+1) {}
         return reps*2;
}*/


struct Struct70 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*70; i=i+1) {}
        return reps*2;
    }

    Struct70(int val) : field(val) {}
    Struct70() = default;
};

struct polymorphic_Struct70 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*70; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct70(int val) : field(val) {}
       polymorphic_Struct70() = default;
};
/*
inline int do_work(Struct70& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*70; i=i+1) {}
         return reps*2;
}*/


struct Struct71 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*71; i=i+1) {}
        return reps*2;
    }

    Struct71(int val) : field(val) {}
    Struct71() = default;
};

struct polymorphic_Struct71 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*71; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct71(int val) : field(val) {}
       polymorphic_Struct71() = default;
};
/*
inline int do_work(Struct71& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*71; i=i+1) {}
         return reps*2;
}*/


struct Struct72 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*72; i=i+1) {}
        return reps*2;
    }

    Struct72(int val) : field(val) {}
    Struct72() = default;
};

struct polymorphic_Struct72 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*72; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct72(int val) : field(val) {}
       polymorphic_Struct72() = default;
};
/*
inline int do_work(Struct72& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*72; i=i+1) {}
         return reps*2;
}*/


struct Struct73 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*73; i=i+1) {}
        return reps*2;
    }

    Struct73(int val) : field(val) {}
    Struct73() = default;
};

struct polymorphic_Struct73 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*73; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct73(int val) : field(val) {}
       polymorphic_Struct73() = default;
};
/*
inline int do_work(Struct73& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*73; i=i+1) {}
         return reps*2;
}*/


struct Struct74 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*74; i=i+1) {}
        return reps*2;
    }

    Struct74(int val) : field(val) {}
    Struct74() = default;
};

struct polymorphic_Struct74 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*74; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct74(int val) : field(val) {}
       polymorphic_Struct74() = default;
};
/*
inline int do_work(Struct74& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*74; i=i+1) {}
         return reps*2;
}*/


struct Struct75 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*75; i=i+1) {}
        return reps*2;
    }

    Struct75(int val) : field(val) {}
    Struct75() = default;
};

struct polymorphic_Struct75 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*75; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct75(int val) : field(val) {}
       polymorphic_Struct75() = default;
};
/*
inline int do_work(Struct75& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*75; i=i+1) {}
         return reps*2;
}*/


struct Struct76 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*76; i=i+1) {}
        return reps*2;
    }

    Struct76(int val) : field(val) {}
    Struct76() = default;
};

struct polymorphic_Struct76 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*76; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct76(int val) : field(val) {}
       polymorphic_Struct76() = default;
};
/*
inline int do_work(Struct76& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*76; i=i+1) {}
         return reps*2;
}*/


struct Struct77 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*77; i=i+1) {}
        return reps*2;
    }

    Struct77(int val) : field(val) {}
    Struct77() = default;
};

struct polymorphic_Struct77 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*77; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct77(int val) : field(val) {}
       polymorphic_Struct77() = default;
};
/*
inline int do_work(Struct77& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*77; i=i+1) {}
         return reps*2;
}*/


struct Struct78 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*78; i=i+1) {}
        return reps*2;
    }

    Struct78(int val) : field(val) {}
    Struct78() = default;
};

struct polymorphic_Struct78 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*78; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct78(int val) : field(val) {}
       polymorphic_Struct78() = default;
};
/*
inline int do_work(Struct78& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*78; i=i+1) {}
         return reps*2;
}*/


struct Struct79 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*79; i=i+1) {}
        return reps*2;
    }

    Struct79(int val) : field(val) {}
    Struct79() = default;
};

struct polymorphic_Struct79 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*79; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct79(int val) : field(val) {}
       polymorphic_Struct79() = default;
};
/*
inline int do_work(Struct79& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*79; i=i+1) {}
         return reps*2;
}*/


struct Struct80 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*80; i=i+1) {}
        return reps*2;
    }

    Struct80(int val) : field(val) {}
    Struct80() = default;
};

struct polymorphic_Struct80 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*80; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct80(int val) : field(val) {}
       polymorphic_Struct80() = default;
};
/*
inline int do_work(Struct80& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*80; i=i+1) {}
         return reps*2;
}*/


struct Struct81 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*81; i=i+1) {}
        return reps*2;
    }

    Struct81(int val) : field(val) {}
    Struct81() = default;
};

struct polymorphic_Struct81 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*81; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct81(int val) : field(val) {}
       polymorphic_Struct81() = default;
};
/*
inline int do_work(Struct81& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*81; i=i+1) {}
         return reps*2;
}*/


struct Struct82 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*82; i=i+1) {}
        return reps*2;
    }

    Struct82(int val) : field(val) {}
    Struct82() = default;
};

struct polymorphic_Struct82 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*82; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct82(int val) : field(val) {}
       polymorphic_Struct82() = default;
};
/*
inline int do_work(Struct82& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*82; i=i+1) {}
         return reps*2;
}*/


struct Struct83 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*83; i=i+1) {}
        return reps*2;
    }

    Struct83(int val) : field(val) {}
    Struct83() = default;
};

struct polymorphic_Struct83 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*83; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct83(int val) : field(val) {}
       polymorphic_Struct83() = default;
};
/*
inline int do_work(Struct83& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*83; i=i+1) {}
         return reps*2;
}*/


struct Struct84 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*84; i=i+1) {}
        return reps*2;
    }

    Struct84(int val) : field(val) {}
    Struct84() = default;
};

struct polymorphic_Struct84 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*84; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct84(int val) : field(val) {}
       polymorphic_Struct84() = default;
};
/*
inline int do_work(Struct84& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*84; i=i+1) {}
         return reps*2;
}*/


struct Struct85 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*85; i=i+1) {}
        return reps*2;
    }

    Struct85(int val) : field(val) {}
    Struct85() = default;
};

struct polymorphic_Struct85 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*85; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct85(int val) : field(val) {}
       polymorphic_Struct85() = default;
};
/*
inline int do_work(Struct85& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*85; i=i+1) {}
         return reps*2;
}*/


struct Struct86 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*86; i=i+1) {}
        return reps*2;
    }

    Struct86(int val) : field(val) {}
    Struct86() = default;
};

struct polymorphic_Struct86 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*86; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct86(int val) : field(val) {}
       polymorphic_Struct86() = default;
};
/*
inline int do_work(Struct86& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*86; i=i+1) {}
         return reps*2;
}*/


struct Struct87 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*87; i=i+1) {}
        return reps*2;
    }

    Struct87(int val) : field(val) {}
    Struct87() = default;
};

struct polymorphic_Struct87 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*87; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct87(int val) : field(val) {}
       polymorphic_Struct87() = default;
};
/*
inline int do_work(Struct87& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*87; i=i+1) {}
         return reps*2;
}*/


struct Struct88 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*88; i=i+1) {}
        return reps*2;
    }

    Struct88(int val) : field(val) {}
    Struct88() = default;
};

struct polymorphic_Struct88 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*88; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct88(int val) : field(val) {}
       polymorphic_Struct88() = default;
};
/*
inline int do_work(Struct88& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*88; i=i+1) {}
         return reps*2;
}*/


struct Struct89 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*89; i=i+1) {}
        return reps*2;
    }

    Struct89(int val) : field(val) {}
    Struct89() = default;
};

struct polymorphic_Struct89 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*89; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct89(int val) : field(val) {}
       polymorphic_Struct89() = default;
};
/*
inline int do_work(Struct89& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*89; i=i+1) {}
         return reps*2;
}*/


struct Struct90 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*90; i=i+1) {}
        return reps*2;
    }

    Struct90(int val) : field(val) {}
    Struct90() = default;
};

struct polymorphic_Struct90 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*90; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct90(int val) : field(val) {}
       polymorphic_Struct90() = default;
};
/*
inline int do_work(Struct90& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*90; i=i+1) {}
         return reps*2;
}*/


struct Struct91 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*91; i=i+1) {}
        return reps*2;
    }

    Struct91(int val) : field(val) {}
    Struct91() = default;
};

struct polymorphic_Struct91 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*91; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct91(int val) : field(val) {}
       polymorphic_Struct91() = default;
};
/*
inline int do_work(Struct91& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*91; i=i+1) {}
         return reps*2;
}*/


struct Struct92 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*92; i=i+1) {}
        return reps*2;
    }

    Struct92(int val) : field(val) {}
    Struct92() = default;
};

struct polymorphic_Struct92 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*92; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct92(int val) : field(val) {}
       polymorphic_Struct92() = default;
};
/*
inline int do_work(Struct92& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*92; i=i+1) {}
         return reps*2;
}*/


struct Struct93 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*93; i=i+1) {}
        return reps*2;
    }

    Struct93(int val) : field(val) {}
    Struct93() = default;
};

struct polymorphic_Struct93 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*93; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct93(int val) : field(val) {}
       polymorphic_Struct93() = default;
};
/*
inline int do_work(Struct93& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*93; i=i+1) {}
         return reps*2;
}*/


struct Struct94 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*94; i=i+1) {}
        return reps*2;
    }

    Struct94(int val) : field(val) {}
    Struct94() = default;
};

struct polymorphic_Struct94 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*94; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct94(int val) : field(val) {}
       polymorphic_Struct94() = default;
};
/*
inline int do_work(Struct94& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*94; i=i+1) {}
         return reps*2;
}*/


struct Struct95 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*95; i=i+1) {}
        return reps*2;
    }

    Struct95(int val) : field(val) {}
    Struct95() = default;
};

struct polymorphic_Struct95 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*95; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct95(int val) : field(val) {}
       polymorphic_Struct95() = default;
};
/*
inline int do_work(Struct95& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*95; i=i+1) {}
         return reps*2;
}*/


struct Struct96 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*96; i=i+1) {}
        return reps*2;
    }

    Struct96(int val) : field(val) {}
    Struct96() = default;
};

struct polymorphic_Struct96 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*96; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct96(int val) : field(val) {}
       polymorphic_Struct96() = default;
};
/*
inline int do_work(Struct96& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*96; i=i+1) {}
         return reps*2;
}*/


struct Struct97 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*97; i=i+1) {}
        return reps*2;
    }

    Struct97(int val) : field(val) {}
    Struct97() = default;
};

struct polymorphic_Struct97 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*97; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct97(int val) : field(val) {}
       polymorphic_Struct97() = default;
};
/*
inline int do_work(Struct97& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*97; i=i+1) {}
         return reps*2;
}*/


struct Struct98 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*98; i=i+1) {}
        return reps*2;
    }

    Struct98(int val) : field(val) {}
    Struct98() = default;
};

struct polymorphic_Struct98 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*98; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct98(int val) : field(val) {}
       polymorphic_Struct98() = default;
};
/*
inline int do_work(Struct98& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*98; i=i+1) {}
         return reps*2;
}*/


struct Struct99 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*99; i=i+1) {}
        return reps*2;
    }

    Struct99(int val) : field(val) {}
    Struct99() = default;
};

struct polymorphic_Struct99 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*99; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct99(int val) : field(val) {}
       polymorphic_Struct99() = default;
};
/*
inline int do_work(Struct99& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*99; i=i+1) {}
         return reps*2;
}*/


struct Struct100 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*100; i=i+1) {}
        return reps*2;
    }

    Struct100(int val) : field(val) {}
    Struct100() = default;
};

struct polymorphic_Struct100 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*100; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct100(int val) : field(val) {}
       polymorphic_Struct100() = default;
};
/*
inline int do_work(Struct100& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*100; i=i+1) {}
         return reps*2;
}*/


struct Struct101 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*101; i=i+1) {}
        return reps*2;
    }

    Struct101(int val) : field(val) {}
    Struct101() = default;
};

struct polymorphic_Struct101 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*101; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct101(int val) : field(val) {}
       polymorphic_Struct101() = default;
};
/*
inline int do_work(Struct101& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*101; i=i+1) {}
         return reps*2;
}*/


struct Struct102 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*102; i=i+1) {}
        return reps*2;
    }

    Struct102(int val) : field(val) {}
    Struct102() = default;
};

struct polymorphic_Struct102 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*102; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct102(int val) : field(val) {}
       polymorphic_Struct102() = default;
};
/*
inline int do_work(Struct102& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*102; i=i+1) {}
         return reps*2;
}*/


struct Struct103 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*103; i=i+1) {}
        return reps*2;
    }

    Struct103(int val) : field(val) {}
    Struct103() = default;
};

struct polymorphic_Struct103 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*103; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct103(int val) : field(val) {}
       polymorphic_Struct103() = default;
};
/*
inline int do_work(Struct103& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*103; i=i+1) {}
         return reps*2;
}*/


struct Struct104 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*104; i=i+1) {}
        return reps*2;
    }

    Struct104(int val) : field(val) {}
    Struct104() = default;
};

struct polymorphic_Struct104 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*104; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct104(int val) : field(val) {}
       polymorphic_Struct104() = default;
};
/*
inline int do_work(Struct104& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*104; i=i+1) {}
         return reps*2;
}*/


struct Struct105 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*105; i=i+1) {}
        return reps*2;
    }

    Struct105(int val) : field(val) {}
    Struct105() = default;
};

struct polymorphic_Struct105 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*105; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct105(int val) : field(val) {}
       polymorphic_Struct105() = default;
};
/*
inline int do_work(Struct105& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*105; i=i+1) {}
         return reps*2;
}*/


struct Struct106 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*106; i=i+1) {}
        return reps*2;
    }

    Struct106(int val) : field(val) {}
    Struct106() = default;
};

struct polymorphic_Struct106 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*106; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct106(int val) : field(val) {}
       polymorphic_Struct106() = default;
};
/*
inline int do_work(Struct106& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*106; i=i+1) {}
         return reps*2;
}*/


struct Struct107 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*107; i=i+1) {}
        return reps*2;
    }

    Struct107(int val) : field(val) {}
    Struct107() = default;
};

struct polymorphic_Struct107 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*107; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct107(int val) : field(val) {}
       polymorphic_Struct107() = default;
};
/*
inline int do_work(Struct107& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*107; i=i+1) {}
         return reps*2;
}*/


struct Struct108 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*108; i=i+1) {}
        return reps*2;
    }

    Struct108(int val) : field(val) {}
    Struct108() = default;
};

struct polymorphic_Struct108 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*108; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct108(int val) : field(val) {}
       polymorphic_Struct108() = default;
};
/*
inline int do_work(Struct108& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*108; i=i+1) {}
         return reps*2;
}*/


struct Struct109 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*109; i=i+1) {}
        return reps*2;
    }

    Struct109(int val) : field(val) {}
    Struct109() = default;
};

struct polymorphic_Struct109 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*109; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct109(int val) : field(val) {}
       polymorphic_Struct109() = default;
};
/*
inline int do_work(Struct109& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*109; i=i+1) {}
         return reps*2;
}*/


struct Struct110 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*110; i=i+1) {}
        return reps*2;
    }

    Struct110(int val) : field(val) {}
    Struct110() = default;
};

struct polymorphic_Struct110 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*110; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct110(int val) : field(val) {}
       polymorphic_Struct110() = default;
};
/*
inline int do_work(Struct110& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*110; i=i+1) {}
         return reps*2;
}*/


struct Struct111 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*111; i=i+1) {}
        return reps*2;
    }

    Struct111(int val) : field(val) {}
    Struct111() = default;
};

struct polymorphic_Struct111 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*111; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct111(int val) : field(val) {}
       polymorphic_Struct111() = default;
};
/*
inline int do_work(Struct111& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*111; i=i+1) {}
         return reps*2;
}*/


struct Struct112 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*112; i=i+1) {}
        return reps*2;
    }

    Struct112(int val) : field(val) {}
    Struct112() = default;
};

struct polymorphic_Struct112 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*112; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct112(int val) : field(val) {}
       polymorphic_Struct112() = default;
};
/*
inline int do_work(Struct112& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*112; i=i+1) {}
         return reps*2;
}*/


struct Struct113 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*113; i=i+1) {}
        return reps*2;
    }

    Struct113(int val) : field(val) {}
    Struct113() = default;
};

struct polymorphic_Struct113 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*113; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct113(int val) : field(val) {}
       polymorphic_Struct113() = default;
};
/*
inline int do_work(Struct113& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*113; i=i+1) {}
         return reps*2;
}*/


struct Struct114 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*114; i=i+1) {}
        return reps*2;
    }

    Struct114(int val) : field(val) {}
    Struct114() = default;
};

struct polymorphic_Struct114 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*114; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct114(int val) : field(val) {}
       polymorphic_Struct114() = default;
};
/*
inline int do_work(Struct114& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*114; i=i+1) {}
         return reps*2;
}*/


struct Struct115 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*115; i=i+1) {}
        return reps*2;
    }

    Struct115(int val) : field(val) {}
    Struct115() = default;
};

struct polymorphic_Struct115 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*115; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct115(int val) : field(val) {}
       polymorphic_Struct115() = default;
};
/*
inline int do_work(Struct115& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*115; i=i+1) {}
         return reps*2;
}*/


struct Struct116 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*116; i=i+1) {}
        return reps*2;
    }

    Struct116(int val) : field(val) {}
    Struct116() = default;
};

struct polymorphic_Struct116 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*116; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct116(int val) : field(val) {}
       polymorphic_Struct116() = default;
};
/*
inline int do_work(Struct116& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*116; i=i+1) {}
         return reps*2;
}*/


struct Struct117 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*117; i=i+1) {}
        return reps*2;
    }

    Struct117(int val) : field(val) {}
    Struct117() = default;
};

struct polymorphic_Struct117 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*117; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct117(int val) : field(val) {}
       polymorphic_Struct117() = default;
};
/*
inline int do_work(Struct117& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*117; i=i+1) {}
         return reps*2;
}*/


struct Struct118 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*118; i=i+1) {}
        return reps*2;
    }

    Struct118(int val) : field(val) {}
    Struct118() = default;
};

struct polymorphic_Struct118 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*118; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct118(int val) : field(val) {}
       polymorphic_Struct118() = default;
};
/*
inline int do_work(Struct118& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*118; i=i+1) {}
         return reps*2;
}*/


struct Struct119 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*119; i=i+1) {}
        return reps*2;
    }

    Struct119(int val) : field(val) {}
    Struct119() = default;
};

struct polymorphic_Struct119 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*119; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct119(int val) : field(val) {}
       polymorphic_Struct119() = default;
};
/*
inline int do_work(Struct119& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*119; i=i+1) {}
         return reps*2;
}*/


struct Struct120 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*120; i=i+1) {}
        return reps*2;
    }

    Struct120(int val) : field(val) {}
    Struct120() = default;
};

struct polymorphic_Struct120 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*120; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct120(int val) : field(val) {}
       polymorphic_Struct120() = default;
};
/*
inline int do_work(Struct120& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*120; i=i+1) {}
         return reps*2;
}*/


struct Struct121 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*121; i=i+1) {}
        return reps*2;
    }

    Struct121(int val) : field(val) {}
    Struct121() = default;
};

struct polymorphic_Struct121 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*121; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct121(int val) : field(val) {}
       polymorphic_Struct121() = default;
};
/*
inline int do_work(Struct121& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*121; i=i+1) {}
         return reps*2;
}*/


struct Struct122 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*122; i=i+1) {}
        return reps*2;
    }

    Struct122(int val) : field(val) {}
    Struct122() = default;
};

struct polymorphic_Struct122 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*122; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct122(int val) : field(val) {}
       polymorphic_Struct122() = default;
};
/*
inline int do_work(Struct122& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*122; i=i+1) {}
         return reps*2;
}*/


struct Struct123 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*123; i=i+1) {}
        return reps*2;
    }

    Struct123(int val) : field(val) {}
    Struct123() = default;
};

struct polymorphic_Struct123 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*123; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct123(int val) : field(val) {}
       polymorphic_Struct123() = default;
};
/*
inline int do_work(Struct123& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*123; i=i+1) {}
         return reps*2;
}*/


struct Struct124 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*124; i=i+1) {}
        return reps*2;
    }

    Struct124(int val) : field(val) {}
    Struct124() = default;
};

struct polymorphic_Struct124 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*124; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct124(int val) : field(val) {}
       polymorphic_Struct124() = default;
};
/*
inline int do_work(Struct124& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*124; i=i+1) {}
         return reps*2;
}*/


struct Struct125 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*125; i=i+1) {}
        return reps*2;
    }

    Struct125(int val) : field(val) {}
    Struct125() = default;
};

struct polymorphic_Struct125 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*125; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct125(int val) : field(val) {}
       polymorphic_Struct125() = default;
};
/*
inline int do_work(Struct125& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*125; i=i+1) {}
         return reps*2;
}*/


struct Struct126 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*126; i=i+1) {}
        return reps*2;
    }

    Struct126(int val) : field(val) {}
    Struct126() = default;
};

struct polymorphic_Struct126 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*126; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct126(int val) : field(val) {}
       polymorphic_Struct126() = default;
};
/*
inline int do_work(Struct126& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*126; i=i+1) {}
         return reps*2;
}*/


struct Struct127 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*127; i=i+1) {}
        return reps*2;
    }

    Struct127(int val) : field(val) {}
    Struct127() = default;
};

struct polymorphic_Struct127 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*127; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct127(int val) : field(val) {}
       polymorphic_Struct127() = default;
};
/*
inline int do_work(Struct127& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*127; i=i+1) {}
         return reps*2;
}*/


struct Struct128 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*128; i=i+1) {}
        return reps*2;
    }

    Struct128(int val) : field(val) {}
    Struct128() = default;
};

struct polymorphic_Struct128 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*128; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct128(int val) : field(val) {}
       polymorphic_Struct128() = default;
};
/*
inline int do_work(Struct128& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*128; i=i+1) {}
         return reps*2;
}*/


struct Struct129 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*129; i=i+1) {}
        return reps*2;
    }

    Struct129(int val) : field(val) {}
    Struct129() = default;
};

struct polymorphic_Struct129 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*129; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct129(int val) : field(val) {}
       polymorphic_Struct129() = default;
};
/*
inline int do_work(Struct129& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*129; i=i+1) {}
         return reps*2;
}*/


struct Struct130 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*130; i=i+1) {}
        return reps*2;
    }

    Struct130(int val) : field(val) {}
    Struct130() = default;
};

struct polymorphic_Struct130 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*130; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct130(int val) : field(val) {}
       polymorphic_Struct130() = default;
};
/*
inline int do_work(Struct130& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*130; i=i+1) {}
         return reps*2;
}*/


struct Struct131 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*131; i=i+1) {}
        return reps*2;
    }

    Struct131(int val) : field(val) {}
    Struct131() = default;
};

struct polymorphic_Struct131 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*131; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct131(int val) : field(val) {}
       polymorphic_Struct131() = default;
};
/*
inline int do_work(Struct131& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*131; i=i+1) {}
         return reps*2;
}*/


struct Struct132 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*132; i=i+1) {}
        return reps*2;
    }

    Struct132(int val) : field(val) {}
    Struct132() = default;
};

struct polymorphic_Struct132 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*132; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct132(int val) : field(val) {}
       polymorphic_Struct132() = default;
};
/*
inline int do_work(Struct132& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*132; i=i+1) {}
         return reps*2;
}*/


struct Struct133 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*133; i=i+1) {}
        return reps*2;
    }

    Struct133(int val) : field(val) {}
    Struct133() = default;
};

struct polymorphic_Struct133 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*133; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct133(int val) : field(val) {}
       polymorphic_Struct133() = default;
};
/*
inline int do_work(Struct133& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*133; i=i+1) {}
         return reps*2;
}*/


struct Struct134 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*134; i=i+1) {}
        return reps*2;
    }

    Struct134(int val) : field(val) {}
    Struct134() = default;
};

struct polymorphic_Struct134 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*134; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct134(int val) : field(val) {}
       polymorphic_Struct134() = default;
};
/*
inline int do_work(Struct134& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*134; i=i+1) {}
         return reps*2;
}*/


struct Struct135 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*135; i=i+1) {}
        return reps*2;
    }

    Struct135(int val) : field(val) {}
    Struct135() = default;
};

struct polymorphic_Struct135 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*135; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct135(int val) : field(val) {}
       polymorphic_Struct135() = default;
};
/*
inline int do_work(Struct135& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*135; i=i+1) {}
         return reps*2;
}*/


struct Struct136 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*136; i=i+1) {}
        return reps*2;
    }

    Struct136(int val) : field(val) {}
    Struct136() = default;
};

struct polymorphic_Struct136 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*136; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct136(int val) : field(val) {}
       polymorphic_Struct136() = default;
};
/*
inline int do_work(Struct136& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*136; i=i+1) {}
         return reps*2;
}*/


struct Struct137 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*137; i=i+1) {}
        return reps*2;
    }

    Struct137(int val) : field(val) {}
    Struct137() = default;
};

struct polymorphic_Struct137 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*137; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct137(int val) : field(val) {}
       polymorphic_Struct137() = default;
};
/*
inline int do_work(Struct137& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*137; i=i+1) {}
         return reps*2;
}*/


struct Struct138 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*138; i=i+1) {}
        return reps*2;
    }

    Struct138(int val) : field(val) {}
    Struct138() = default;
};

struct polymorphic_Struct138 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*138; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct138(int val) : field(val) {}
       polymorphic_Struct138() = default;
};
/*
inline int do_work(Struct138& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*138; i=i+1) {}
         return reps*2;
}*/


struct Struct139 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*139; i=i+1) {}
        return reps*2;
    }

    Struct139(int val) : field(val) {}
    Struct139() = default;
};

struct polymorphic_Struct139 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*139; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct139(int val) : field(val) {}
       polymorphic_Struct139() = default;
};
/*
inline int do_work(Struct139& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*139; i=i+1) {}
         return reps*2;
}*/


struct Struct140 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*140; i=i+1) {}
        return reps*2;
    }

    Struct140(int val) : field(val) {}
    Struct140() = default;
};

struct polymorphic_Struct140 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*140; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct140(int val) : field(val) {}
       polymorphic_Struct140() = default;
};
/*
inline int do_work(Struct140& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*140; i=i+1) {}
         return reps*2;
}*/


struct Struct141 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*141; i=i+1) {}
        return reps*2;
    }

    Struct141(int val) : field(val) {}
    Struct141() = default;
};

struct polymorphic_Struct141 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*141; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct141(int val) : field(val) {}
       polymorphic_Struct141() = default;
};
/*
inline int do_work(Struct141& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*141; i=i+1) {}
         return reps*2;
}*/


struct Struct142 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*142; i=i+1) {}
        return reps*2;
    }

    Struct142(int val) : field(val) {}
    Struct142() = default;
};

struct polymorphic_Struct142 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*142; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct142(int val) : field(val) {}
       polymorphic_Struct142() = default;
};
/*
inline int do_work(Struct142& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*142; i=i+1) {}
         return reps*2;
}*/


struct Struct143 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*143; i=i+1) {}
        return reps*2;
    }

    Struct143(int val) : field(val) {}
    Struct143() = default;
};

struct polymorphic_Struct143 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*143; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct143(int val) : field(val) {}
       polymorphic_Struct143() = default;
};
/*
inline int do_work(Struct143& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*143; i=i+1) {}
         return reps*2;
}*/


struct Struct144 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*144; i=i+1) {}
        return reps*2;
    }

    Struct144(int val) : field(val) {}
    Struct144() = default;
};

struct polymorphic_Struct144 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*144; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct144(int val) : field(val) {}
       polymorphic_Struct144() = default;
};
/*
inline int do_work(Struct144& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*144; i=i+1) {}
         return reps*2;
}*/


struct Struct145 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*145; i=i+1) {}
        return reps*2;
    }

    Struct145(int val) : field(val) {}
    Struct145() = default;
};

struct polymorphic_Struct145 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*145; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct145(int val) : field(val) {}
       polymorphic_Struct145() = default;
};
/*
inline int do_work(Struct145& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*145; i=i+1) {}
         return reps*2;
}*/


struct Struct146 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*146; i=i+1) {}
        return reps*2;
    }

    Struct146(int val) : field(val) {}
    Struct146() = default;
};

struct polymorphic_Struct146 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*146; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct146(int val) : field(val) {}
       polymorphic_Struct146() = default;
};
/*
inline int do_work(Struct146& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*146; i=i+1) {}
         return reps*2;
}*/


struct Struct147 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*147; i=i+1) {}
        return reps*2;
    }

    Struct147(int val) : field(val) {}
    Struct147() = default;
};

struct polymorphic_Struct147 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*147; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct147(int val) : field(val) {}
       polymorphic_Struct147() = default;
};
/*
inline int do_work(Struct147& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*147; i=i+1) {}
         return reps*2;
}*/


struct Struct148 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*148; i=i+1) {}
        return reps*2;
    }

    Struct148(int val) : field(val) {}
    Struct148() = default;
};

struct polymorphic_Struct148 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*148; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct148(int val) : field(val) {}
       polymorphic_Struct148() = default;
};
/*
inline int do_work(Struct148& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*148; i=i+1) {}
         return reps*2;
}*/


struct Struct149 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*149; i=i+1) {}
        return reps*2;
    }

    Struct149(int val) : field(val) {}
    Struct149() = default;
};

struct polymorphic_Struct149 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*149; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct149(int val) : field(val) {}
       polymorphic_Struct149() = default;
};
/*
inline int do_work(Struct149& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*149; i=i+1) {}
         return reps*2;
}*/


struct Struct150 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*150; i=i+1) {}
        return reps*2;
    }

    Struct150(int val) : field(val) {}
    Struct150() = default;
};

struct polymorphic_Struct150 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*150; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct150(int val) : field(val) {}
       polymorphic_Struct150() = default;
};
/*
inline int do_work(Struct150& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*150; i=i+1) {}
         return reps*2;
}*/


struct Struct151 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*151; i=i+1) {}
        return reps*2;
    }

    Struct151(int val) : field(val) {}
    Struct151() = default;
};

struct polymorphic_Struct151 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*151; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct151(int val) : field(val) {}
       polymorphic_Struct151() = default;
};
/*
inline int do_work(Struct151& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*151; i=i+1) {}
         return reps*2;
}*/


struct Struct152 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*152; i=i+1) {}
        return reps*2;
    }

    Struct152(int val) : field(val) {}
    Struct152() = default;
};

struct polymorphic_Struct152 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*152; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct152(int val) : field(val) {}
       polymorphic_Struct152() = default;
};
/*
inline int do_work(Struct152& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*152; i=i+1) {}
         return reps*2;
}*/


struct Struct153 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*153; i=i+1) {}
        return reps*2;
    }

    Struct153(int val) : field(val) {}
    Struct153() = default;
};

struct polymorphic_Struct153 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*153; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct153(int val) : field(val) {}
       polymorphic_Struct153() = default;
};
/*
inline int do_work(Struct153& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*153; i=i+1) {}
         return reps*2;
}*/


struct Struct154 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*154; i=i+1) {}
        return reps*2;
    }

    Struct154(int val) : field(val) {}
    Struct154() = default;
};

struct polymorphic_Struct154 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*154; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct154(int val) : field(val) {}
       polymorphic_Struct154() = default;
};
/*
inline int do_work(Struct154& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*154; i=i+1) {}
         return reps*2;
}*/


struct Struct155 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*155; i=i+1) {}
        return reps*2;
    }

    Struct155(int val) : field(val) {}
    Struct155() = default;
};

struct polymorphic_Struct155 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*155; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct155(int val) : field(val) {}
       polymorphic_Struct155() = default;
};
/*
inline int do_work(Struct155& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*155; i=i+1) {}
         return reps*2;
}*/


struct Struct156 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*156; i=i+1) {}
        return reps*2;
    }

    Struct156(int val) : field(val) {}
    Struct156() = default;
};

struct polymorphic_Struct156 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*156; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct156(int val) : field(val) {}
       polymorphic_Struct156() = default;
};
/*
inline int do_work(Struct156& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*156; i=i+1) {}
         return reps*2;
}*/


struct Struct157 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*157; i=i+1) {}
        return reps*2;
    }

    Struct157(int val) : field(val) {}
    Struct157() = default;
};

struct polymorphic_Struct157 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*157; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct157(int val) : field(val) {}
       polymorphic_Struct157() = default;
};
/*
inline int do_work(Struct157& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*157; i=i+1) {}
         return reps*2;
}*/


struct Struct158 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*158; i=i+1) {}
        return reps*2;
    }

    Struct158(int val) : field(val) {}
    Struct158() = default;
};

struct polymorphic_Struct158 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*158; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct158(int val) : field(val) {}
       polymorphic_Struct158() = default;
};
/*
inline int do_work(Struct158& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*158; i=i+1) {}
         return reps*2;
}*/


struct Struct159 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*159; i=i+1) {}
        return reps*2;
    }

    Struct159(int val) : field(val) {}
    Struct159() = default;
};

struct polymorphic_Struct159 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*159; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct159(int val) : field(val) {}
       polymorphic_Struct159() = default;
};
/*
inline int do_work(Struct159& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*159; i=i+1) {}
         return reps*2;
}*/


struct Struct160 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*160; i=i+1) {}
        return reps*2;
    }

    Struct160(int val) : field(val) {}
    Struct160() = default;
};

struct polymorphic_Struct160 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*160; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct160(int val) : field(val) {}
       polymorphic_Struct160() = default;
};
/*
inline int do_work(Struct160& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*160; i=i+1) {}
         return reps*2;
}*/


struct Struct161 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*161; i=i+1) {}
        return reps*2;
    }

    Struct161(int val) : field(val) {}
    Struct161() = default;
};

struct polymorphic_Struct161 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*161; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct161(int val) : field(val) {}
       polymorphic_Struct161() = default;
};
/*
inline int do_work(Struct161& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*161; i=i+1) {}
         return reps*2;
}*/


struct Struct162 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*162; i=i+1) {}
        return reps*2;
    }

    Struct162(int val) : field(val) {}
    Struct162() = default;
};

struct polymorphic_Struct162 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*162; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct162(int val) : field(val) {}
       polymorphic_Struct162() = default;
};
/*
inline int do_work(Struct162& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*162; i=i+1) {}
         return reps*2;
}*/


struct Struct163 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*163; i=i+1) {}
        return reps*2;
    }

    Struct163(int val) : field(val) {}
    Struct163() = default;
};

struct polymorphic_Struct163 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*163; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct163(int val) : field(val) {}
       polymorphic_Struct163() = default;
};
/*
inline int do_work(Struct163& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*163; i=i+1) {}
         return reps*2;
}*/


struct Struct164 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*164; i=i+1) {}
        return reps*2;
    }

    Struct164(int val) : field(val) {}
    Struct164() = default;
};

struct polymorphic_Struct164 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*164; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct164(int val) : field(val) {}
       polymorphic_Struct164() = default;
};
/*
inline int do_work(Struct164& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*164; i=i+1) {}
         return reps*2;
}*/


struct Struct165 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*165; i=i+1) {}
        return reps*2;
    }

    Struct165(int val) : field(val) {}
    Struct165() = default;
};

struct polymorphic_Struct165 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*165; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct165(int val) : field(val) {}
       polymorphic_Struct165() = default;
};
/*
inline int do_work(Struct165& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*165; i=i+1) {}
         return reps*2;
}*/


struct Struct166 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*166; i=i+1) {}
        return reps*2;
    }

    Struct166(int val) : field(val) {}
    Struct166() = default;
};

struct polymorphic_Struct166 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*166; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct166(int val) : field(val) {}
       polymorphic_Struct166() = default;
};
/*
inline int do_work(Struct166& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*166; i=i+1) {}
         return reps*2;
}*/


struct Struct167 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*167; i=i+1) {}
        return reps*2;
    }

    Struct167(int val) : field(val) {}
    Struct167() = default;
};

struct polymorphic_Struct167 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*167; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct167(int val) : field(val) {}
       polymorphic_Struct167() = default;
};
/*
inline int do_work(Struct167& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*167; i=i+1) {}
         return reps*2;
}*/


struct Struct168 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*168; i=i+1) {}
        return reps*2;
    }

    Struct168(int val) : field(val) {}
    Struct168() = default;
};

struct polymorphic_Struct168 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*168; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct168(int val) : field(val) {}
       polymorphic_Struct168() = default;
};
/*
inline int do_work(Struct168& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*168; i=i+1) {}
         return reps*2;
}*/


struct Struct169 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*169; i=i+1) {}
        return reps*2;
    }

    Struct169(int val) : field(val) {}
    Struct169() = default;
};

struct polymorphic_Struct169 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*169; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct169(int val) : field(val) {}
       polymorphic_Struct169() = default;
};
/*
inline int do_work(Struct169& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*169; i=i+1) {}
         return reps*2;
}*/


struct Struct170 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*170; i=i+1) {}
        return reps*2;
    }

    Struct170(int val) : field(val) {}
    Struct170() = default;
};

struct polymorphic_Struct170 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*170; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct170(int val) : field(val) {}
       polymorphic_Struct170() = default;
};
/*
inline int do_work(Struct170& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*170; i=i+1) {}
         return reps*2;
}*/


struct Struct171 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*171; i=i+1) {}
        return reps*2;
    }

    Struct171(int val) : field(val) {}
    Struct171() = default;
};

struct polymorphic_Struct171 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*171; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct171(int val) : field(val) {}
       polymorphic_Struct171() = default;
};
/*
inline int do_work(Struct171& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*171; i=i+1) {}
         return reps*2;
}*/


struct Struct172 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*172; i=i+1) {}
        return reps*2;
    }

    Struct172(int val) : field(val) {}
    Struct172() = default;
};

struct polymorphic_Struct172 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*172; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct172(int val) : field(val) {}
       polymorphic_Struct172() = default;
};
/*
inline int do_work(Struct172& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*172; i=i+1) {}
         return reps*2;
}*/


struct Struct173 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*173; i=i+1) {}
        return reps*2;
    }

    Struct173(int val) : field(val) {}
    Struct173() = default;
};

struct polymorphic_Struct173 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*173; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct173(int val) : field(val) {}
       polymorphic_Struct173() = default;
};
/*
inline int do_work(Struct173& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*173; i=i+1) {}
         return reps*2;
}*/


struct Struct174 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*174; i=i+1) {}
        return reps*2;
    }

    Struct174(int val) : field(val) {}
    Struct174() = default;
};

struct polymorphic_Struct174 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*174; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct174(int val) : field(val) {}
       polymorphic_Struct174() = default;
};
/*
inline int do_work(Struct174& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*174; i=i+1) {}
         return reps*2;
}*/


struct Struct175 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*175; i=i+1) {}
        return reps*2;
    }

    Struct175(int val) : field(val) {}
    Struct175() = default;
};

struct polymorphic_Struct175 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*175; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct175(int val) : field(val) {}
       polymorphic_Struct175() = default;
};
/*
inline int do_work(Struct175& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*175; i=i+1) {}
         return reps*2;
}*/


struct Struct176 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*176; i=i+1) {}
        return reps*2;
    }

    Struct176(int val) : field(val) {}
    Struct176() = default;
};

struct polymorphic_Struct176 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*176; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct176(int val) : field(val) {}
       polymorphic_Struct176() = default;
};
/*
inline int do_work(Struct176& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*176; i=i+1) {}
         return reps*2;
}*/


struct Struct177 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*177; i=i+1) {}
        return reps*2;
    }

    Struct177(int val) : field(val) {}
    Struct177() = default;
};

struct polymorphic_Struct177 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*177; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct177(int val) : field(val) {}
       polymorphic_Struct177() = default;
};
/*
inline int do_work(Struct177& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*177; i=i+1) {}
         return reps*2;
}*/


struct Struct178 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*178; i=i+1) {}
        return reps*2;
    }

    Struct178(int val) : field(val) {}
    Struct178() = default;
};

struct polymorphic_Struct178 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*178; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct178(int val) : field(val) {}
       polymorphic_Struct178() = default;
};
/*
inline int do_work(Struct178& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*178; i=i+1) {}
         return reps*2;
}*/


struct Struct179 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*179; i=i+1) {}
        return reps*2;
    }

    Struct179(int val) : field(val) {}
    Struct179() = default;
};

struct polymorphic_Struct179 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*179; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct179(int val) : field(val) {}
       polymorphic_Struct179() = default;
};
/*
inline int do_work(Struct179& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*179; i=i+1) {}
         return reps*2;
}*/


struct Struct180 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*180; i=i+1) {}
        return reps*2;
    }

    Struct180(int val) : field(val) {}
    Struct180() = default;
};

struct polymorphic_Struct180 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*180; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct180(int val) : field(val) {}
       polymorphic_Struct180() = default;
};
/*
inline int do_work(Struct180& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*180; i=i+1) {}
         return reps*2;
}*/


struct Struct181 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*181; i=i+1) {}
        return reps*2;
    }

    Struct181(int val) : field(val) {}
    Struct181() = default;
};

struct polymorphic_Struct181 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*181; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct181(int val) : field(val) {}
       polymorphic_Struct181() = default;
};
/*
inline int do_work(Struct181& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*181; i=i+1) {}
         return reps*2;
}*/


struct Struct182 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*182; i=i+1) {}
        return reps*2;
    }

    Struct182(int val) : field(val) {}
    Struct182() = default;
};

struct polymorphic_Struct182 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*182; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct182(int val) : field(val) {}
       polymorphic_Struct182() = default;
};
/*
inline int do_work(Struct182& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*182; i=i+1) {}
         return reps*2;
}*/


struct Struct183 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*183; i=i+1) {}
        return reps*2;
    }

    Struct183(int val) : field(val) {}
    Struct183() = default;
};

struct polymorphic_Struct183 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*183; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct183(int val) : field(val) {}
       polymorphic_Struct183() = default;
};
/*
inline int do_work(Struct183& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*183; i=i+1) {}
         return reps*2;
}*/


struct Struct184 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*184; i=i+1) {}
        return reps*2;
    }

    Struct184(int val) : field(val) {}
    Struct184() = default;
};

struct polymorphic_Struct184 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*184; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct184(int val) : field(val) {}
       polymorphic_Struct184() = default;
};
/*
inline int do_work(Struct184& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*184; i=i+1) {}
         return reps*2;
}*/


struct Struct185 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*185; i=i+1) {}
        return reps*2;
    }

    Struct185(int val) : field(val) {}
    Struct185() = default;
};

struct polymorphic_Struct185 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*185; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct185(int val) : field(val) {}
       polymorphic_Struct185() = default;
};
/*
inline int do_work(Struct185& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*185; i=i+1) {}
         return reps*2;
}*/


struct Struct186 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*186; i=i+1) {}
        return reps*2;
    }

    Struct186(int val) : field(val) {}
    Struct186() = default;
};

struct polymorphic_Struct186 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*186; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct186(int val) : field(val) {}
       polymorphic_Struct186() = default;
};
/*
inline int do_work(Struct186& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*186; i=i+1) {}
         return reps*2;
}*/


struct Struct187 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*187; i=i+1) {}
        return reps*2;
    }

    Struct187(int val) : field(val) {}
    Struct187() = default;
};

struct polymorphic_Struct187 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*187; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct187(int val) : field(val) {}
       polymorphic_Struct187() = default;
};
/*
inline int do_work(Struct187& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*187; i=i+1) {}
         return reps*2;
}*/


struct Struct188 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*188; i=i+1) {}
        return reps*2;
    }

    Struct188(int val) : field(val) {}
    Struct188() = default;
};

struct polymorphic_Struct188 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*188; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct188(int val) : field(val) {}
       polymorphic_Struct188() = default;
};
/*
inline int do_work(Struct188& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*188; i=i+1) {}
         return reps*2;
}*/


struct Struct189 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*189; i=i+1) {}
        return reps*2;
    }

    Struct189(int val) : field(val) {}
    Struct189() = default;
};

struct polymorphic_Struct189 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*189; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct189(int val) : field(val) {}
       polymorphic_Struct189() = default;
};
/*
inline int do_work(Struct189& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*189; i=i+1) {}
         return reps*2;
}*/


struct Struct190 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*190; i=i+1) {}
        return reps*2;
    }

    Struct190(int val) : field(val) {}
    Struct190() = default;
};

struct polymorphic_Struct190 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*190; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct190(int val) : field(val) {}
       polymorphic_Struct190() = default;
};
/*
inline int do_work(Struct190& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*190; i=i+1) {}
         return reps*2;
}*/


struct Struct191 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*191; i=i+1) {}
        return reps*2;
    }

    Struct191(int val) : field(val) {}
    Struct191() = default;
};

struct polymorphic_Struct191 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*191; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct191(int val) : field(val) {}
       polymorphic_Struct191() = default;
};
/*
inline int do_work(Struct191& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*191; i=i+1) {}
         return reps*2;
}*/


struct Struct192 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*192; i=i+1) {}
        return reps*2;
    }

    Struct192(int val) : field(val) {}
    Struct192() = default;
};

struct polymorphic_Struct192 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*192; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct192(int val) : field(val) {}
       polymorphic_Struct192() = default;
};
/*
inline int do_work(Struct192& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*192; i=i+1) {}
         return reps*2;
}*/


struct Struct193 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*193; i=i+1) {}
        return reps*2;
    }

    Struct193(int val) : field(val) {}
    Struct193() = default;
};

struct polymorphic_Struct193 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*193; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct193(int val) : field(val) {}
       polymorphic_Struct193() = default;
};
/*
inline int do_work(Struct193& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*193; i=i+1) {}
         return reps*2;
}*/


struct Struct194 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*194; i=i+1) {}
        return reps*2;
    }

    Struct194(int val) : field(val) {}
    Struct194() = default;
};

struct polymorphic_Struct194 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*194; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct194(int val) : field(val) {}
       polymorphic_Struct194() = default;
};
/*
inline int do_work(Struct194& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*194; i=i+1) {}
         return reps*2;
}*/


struct Struct195 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*195; i=i+1) {}
        return reps*2;
    }

    Struct195(int val) : field(val) {}
    Struct195() = default;
};

struct polymorphic_Struct195 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*195; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct195(int val) : field(val) {}
       polymorphic_Struct195() = default;
};
/*
inline int do_work(Struct195& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*195; i=i+1) {}
         return reps*2;
}*/


struct Struct196 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*196; i=i+1) {}
        return reps*2;
    }

    Struct196(int val) : field(val) {}
    Struct196() = default;
};

struct polymorphic_Struct196 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*196; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct196(int val) : field(val) {}
       polymorphic_Struct196() = default;
};
/*
inline int do_work(Struct196& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*196; i=i+1) {}
         return reps*2;
}*/


struct Struct197 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*197; i=i+1) {}
        return reps*2;
    }

    Struct197(int val) : field(val) {}
    Struct197() = default;
};

struct polymorphic_Struct197 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*197; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct197(int val) : field(val) {}
       polymorphic_Struct197() = default;
};
/*
inline int do_work(Struct197& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*197; i=i+1) {}
         return reps*2;
}*/


struct Struct198 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*198; i=i+1) {}
        return reps*2;
    }

    Struct198(int val) : field(val) {}
    Struct198() = default;
};

struct polymorphic_Struct198 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*198; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct198(int val) : field(val) {}
       polymorphic_Struct198() = default;
};
/*
inline int do_work(Struct198& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*198; i=i+1) {}
         return reps*2;
}*/


struct Struct199 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*199; i=i+1) {}
        return reps*2;
    }

    Struct199(int val) : field(val) {}
    Struct199() = default;
};

struct polymorphic_Struct199 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*199; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct199(int val) : field(val) {}
       polymorphic_Struct199() = default;
};
/*
inline int do_work(Struct199& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*199; i=i+1) {}
         return reps*2;
}*/


struct Struct200 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*200; i=i+1) {}
        return reps*2;
    }

    Struct200(int val) : field(val) {}
    Struct200() = default;
};

struct polymorphic_Struct200 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*200; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct200(int val) : field(val) {}
       polymorphic_Struct200() = default;
};
/*
inline int do_work(Struct200& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*200; i=i+1) {}
         return reps*2;
}*/


struct Struct201 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*201; i=i+1) {}
        return reps*2;
    }

    Struct201(int val) : field(val) {}
    Struct201() = default;
};

struct polymorphic_Struct201 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*201; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct201(int val) : field(val) {}
       polymorphic_Struct201() = default;
};
/*
inline int do_work(Struct201& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*201; i=i+1) {}
         return reps*2;
}*/


struct Struct202 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*202; i=i+1) {}
        return reps*2;
    }

    Struct202(int val) : field(val) {}
    Struct202() = default;
};

struct polymorphic_Struct202 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*202; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct202(int val) : field(val) {}
       polymorphic_Struct202() = default;
};
/*
inline int do_work(Struct202& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*202; i=i+1) {}
         return reps*2;
}*/


struct Struct203 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*203; i=i+1) {}
        return reps*2;
    }

    Struct203(int val) : field(val) {}
    Struct203() = default;
};

struct polymorphic_Struct203 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*203; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct203(int val) : field(val) {}
       polymorphic_Struct203() = default;
};
/*
inline int do_work(Struct203& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*203; i=i+1) {}
         return reps*2;
}*/


struct Struct204 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*204; i=i+1) {}
        return reps*2;
    }

    Struct204(int val) : field(val) {}
    Struct204() = default;
};

struct polymorphic_Struct204 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*204; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct204(int val) : field(val) {}
       polymorphic_Struct204() = default;
};
/*
inline int do_work(Struct204& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*204; i=i+1) {}
         return reps*2;
}*/


struct Struct205 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*205; i=i+1) {}
        return reps*2;
    }

    Struct205(int val) : field(val) {}
    Struct205() = default;
};

struct polymorphic_Struct205 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*205; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct205(int val) : field(val) {}
       polymorphic_Struct205() = default;
};
/*
inline int do_work(Struct205& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*205; i=i+1) {}
         return reps*2;
}*/


struct Struct206 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*206; i=i+1) {}
        return reps*2;
    }

    Struct206(int val) : field(val) {}
    Struct206() = default;
};

struct polymorphic_Struct206 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*206; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct206(int val) : field(val) {}
       polymorphic_Struct206() = default;
};
/*
inline int do_work(Struct206& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*206; i=i+1) {}
         return reps*2;
}*/


struct Struct207 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*207; i=i+1) {}
        return reps*2;
    }

    Struct207(int val) : field(val) {}
    Struct207() = default;
};

struct polymorphic_Struct207 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*207; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct207(int val) : field(val) {}
       polymorphic_Struct207() = default;
};
/*
inline int do_work(Struct207& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*207; i=i+1) {}
         return reps*2;
}*/


struct Struct208 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*208; i=i+1) {}
        return reps*2;
    }

    Struct208(int val) : field(val) {}
    Struct208() = default;
};

struct polymorphic_Struct208 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*208; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct208(int val) : field(val) {}
       polymorphic_Struct208() = default;
};
/*
inline int do_work(Struct208& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*208; i=i+1) {}
         return reps*2;
}*/


struct Struct209 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*209; i=i+1) {}
        return reps*2;
    }

    Struct209(int val) : field(val) {}
    Struct209() = default;
};

struct polymorphic_Struct209 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*209; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct209(int val) : field(val) {}
       polymorphic_Struct209() = default;
};
/*
inline int do_work(Struct209& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*209; i=i+1) {}
         return reps*2;
}*/


struct Struct210 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*210; i=i+1) {}
        return reps*2;
    }

    Struct210(int val) : field(val) {}
    Struct210() = default;
};

struct polymorphic_Struct210 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*210; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct210(int val) : field(val) {}
       polymorphic_Struct210() = default;
};
/*
inline int do_work(Struct210& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*210; i=i+1) {}
         return reps*2;
}*/


struct Struct211 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*211; i=i+1) {}
        return reps*2;
    }

    Struct211(int val) : field(val) {}
    Struct211() = default;
};

struct polymorphic_Struct211 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*211; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct211(int val) : field(val) {}
       polymorphic_Struct211() = default;
};
/*
inline int do_work(Struct211& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*211; i=i+1) {}
         return reps*2;
}*/


struct Struct212 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*212; i=i+1) {}
        return reps*2;
    }

    Struct212(int val) : field(val) {}
    Struct212() = default;
};

struct polymorphic_Struct212 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*212; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct212(int val) : field(val) {}
       polymorphic_Struct212() = default;
};
/*
inline int do_work(Struct212& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*212; i=i+1) {}
         return reps*2;
}*/


struct Struct213 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*213; i=i+1) {}
        return reps*2;
    }

    Struct213(int val) : field(val) {}
    Struct213() = default;
};

struct polymorphic_Struct213 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*213; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct213(int val) : field(val) {}
       polymorphic_Struct213() = default;
};
/*
inline int do_work(Struct213& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*213; i=i+1) {}
         return reps*2;
}*/


struct Struct214 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*214; i=i+1) {}
        return reps*2;
    }

    Struct214(int val) : field(val) {}
    Struct214() = default;
};

struct polymorphic_Struct214 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*214; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct214(int val) : field(val) {}
       polymorphic_Struct214() = default;
};
/*
inline int do_work(Struct214& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*214; i=i+1) {}
         return reps*2;
}*/


struct Struct215 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*215; i=i+1) {}
        return reps*2;
    }

    Struct215(int val) : field(val) {}
    Struct215() = default;
};

struct polymorphic_Struct215 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*215; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct215(int val) : field(val) {}
       polymorphic_Struct215() = default;
};
/*
inline int do_work(Struct215& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*215; i=i+1) {}
         return reps*2;
}*/


struct Struct216 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*216; i=i+1) {}
        return reps*2;
    }

    Struct216(int val) : field(val) {}
    Struct216() = default;
};

struct polymorphic_Struct216 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*216; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct216(int val) : field(val) {}
       polymorphic_Struct216() = default;
};
/*
inline int do_work(Struct216& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*216; i=i+1) {}
         return reps*2;
}*/


struct Struct217 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*217; i=i+1) {}
        return reps*2;
    }

    Struct217(int val) : field(val) {}
    Struct217() = default;
};

struct polymorphic_Struct217 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*217; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct217(int val) : field(val) {}
       polymorphic_Struct217() = default;
};
/*
inline int do_work(Struct217& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*217; i=i+1) {}
         return reps*2;
}*/


struct Struct218 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*218; i=i+1) {}
        return reps*2;
    }

    Struct218(int val) : field(val) {}
    Struct218() = default;
};

struct polymorphic_Struct218 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*218; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct218(int val) : field(val) {}
       polymorphic_Struct218() = default;
};
/*
inline int do_work(Struct218& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*218; i=i+1) {}
         return reps*2;
}*/


struct Struct219 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*219; i=i+1) {}
        return reps*2;
    }

    Struct219(int val) : field(val) {}
    Struct219() = default;
};

struct polymorphic_Struct219 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*219; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct219(int val) : field(val) {}
       polymorphic_Struct219() = default;
};
/*
inline int do_work(Struct219& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*219; i=i+1) {}
         return reps*2;
}*/


struct Struct220 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*220; i=i+1) {}
        return reps*2;
    }

    Struct220(int val) : field(val) {}
    Struct220() = default;
};

struct polymorphic_Struct220 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*220; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct220(int val) : field(val) {}
       polymorphic_Struct220() = default;
};
/*
inline int do_work(Struct220& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*220; i=i+1) {}
         return reps*2;
}*/


struct Struct221 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*221; i=i+1) {}
        return reps*2;
    }

    Struct221(int val) : field(val) {}
    Struct221() = default;
};

struct polymorphic_Struct221 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*221; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct221(int val) : field(val) {}
       polymorphic_Struct221() = default;
};
/*
inline int do_work(Struct221& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*221; i=i+1) {}
         return reps*2;
}*/


struct Struct222 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*222; i=i+1) {}
        return reps*2;
    }

    Struct222(int val) : field(val) {}
    Struct222() = default;
};

struct polymorphic_Struct222 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*222; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct222(int val) : field(val) {}
       polymorphic_Struct222() = default;
};
/*
inline int do_work(Struct222& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*222; i=i+1) {}
         return reps*2;
}*/


struct Struct223 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*223; i=i+1) {}
        return reps*2;
    }

    Struct223(int val) : field(val) {}
    Struct223() = default;
};

struct polymorphic_Struct223 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*223; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct223(int val) : field(val) {}
       polymorphic_Struct223() = default;
};
/*
inline int do_work(Struct223& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*223; i=i+1) {}
         return reps*2;
}*/


struct Struct224 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*224; i=i+1) {}
        return reps*2;
    }

    Struct224(int val) : field(val) {}
    Struct224() = default;
};

struct polymorphic_Struct224 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*224; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct224(int val) : field(val) {}
       polymorphic_Struct224() = default;
};
/*
inline int do_work(Struct224& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*224; i=i+1) {}
         return reps*2;
}*/


struct Struct225 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*225; i=i+1) {}
        return reps*2;
    }

    Struct225(int val) : field(val) {}
    Struct225() = default;
};

struct polymorphic_Struct225 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*225; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct225(int val) : field(val) {}
       polymorphic_Struct225() = default;
};
/*
inline int do_work(Struct225& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*225; i=i+1) {}
         return reps*2;
}*/


struct Struct226 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*226; i=i+1) {}
        return reps*2;
    }

    Struct226(int val) : field(val) {}
    Struct226() = default;
};

struct polymorphic_Struct226 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*226; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct226(int val) : field(val) {}
       polymorphic_Struct226() = default;
};
/*
inline int do_work(Struct226& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*226; i=i+1) {}
         return reps*2;
}*/


struct Struct227 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*227; i=i+1) {}
        return reps*2;
    }

    Struct227(int val) : field(val) {}
    Struct227() = default;
};

struct polymorphic_Struct227 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*227; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct227(int val) : field(val) {}
       polymorphic_Struct227() = default;
};
/*
inline int do_work(Struct227& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*227; i=i+1) {}
         return reps*2;
}*/


struct Struct228 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*228; i=i+1) {}
        return reps*2;
    }

    Struct228(int val) : field(val) {}
    Struct228() = default;
};

struct polymorphic_Struct228 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*228; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct228(int val) : field(val) {}
       polymorphic_Struct228() = default;
};
/*
inline int do_work(Struct228& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*228; i=i+1) {}
         return reps*2;
}*/


struct Struct229 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*229; i=i+1) {}
        return reps*2;
    }

    Struct229(int val) : field(val) {}
    Struct229() = default;
};

struct polymorphic_Struct229 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*229; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct229(int val) : field(val) {}
       polymorphic_Struct229() = default;
};
/*
inline int do_work(Struct229& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*229; i=i+1) {}
         return reps*2;
}*/


struct Struct230 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*230; i=i+1) {}
        return reps*2;
    }

    Struct230(int val) : field(val) {}
    Struct230() = default;
};

struct polymorphic_Struct230 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*230; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct230(int val) : field(val) {}
       polymorphic_Struct230() = default;
};
/*
inline int do_work(Struct230& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*230; i=i+1) {}
         return reps*2;
}*/


struct Struct231 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*231; i=i+1) {}
        return reps*2;
    }

    Struct231(int val) : field(val) {}
    Struct231() = default;
};

struct polymorphic_Struct231 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*231; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct231(int val) : field(val) {}
       polymorphic_Struct231() = default;
};
/*
inline int do_work(Struct231& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*231; i=i+1) {}
         return reps*2;
}*/


struct Struct232 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*232; i=i+1) {}
        return reps*2;
    }

    Struct232(int val) : field(val) {}
    Struct232() = default;
};

struct polymorphic_Struct232 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*232; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct232(int val) : field(val) {}
       polymorphic_Struct232() = default;
};
/*
inline int do_work(Struct232& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*232; i=i+1) {}
         return reps*2;
}*/


struct Struct233 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*233; i=i+1) {}
        return reps*2;
    }

    Struct233(int val) : field(val) {}
    Struct233() = default;
};

struct polymorphic_Struct233 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*233; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct233(int val) : field(val) {}
       polymorphic_Struct233() = default;
};
/*
inline int do_work(Struct233& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*233; i=i+1) {}
         return reps*2;
}*/


struct Struct234 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*234; i=i+1) {}
        return reps*2;
    }

    Struct234(int val) : field(val) {}
    Struct234() = default;
};

struct polymorphic_Struct234 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*234; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct234(int val) : field(val) {}
       polymorphic_Struct234() = default;
};
/*
inline int do_work(Struct234& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*234; i=i+1) {}
         return reps*2;
}*/


struct Struct235 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*235; i=i+1) {}
        return reps*2;
    }

    Struct235(int val) : field(val) {}
    Struct235() = default;
};

struct polymorphic_Struct235 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*235; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct235(int val) : field(val) {}
       polymorphic_Struct235() = default;
};
/*
inline int do_work(Struct235& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*235; i=i+1) {}
         return reps*2;
}*/


struct Struct236 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*236; i=i+1) {}
        return reps*2;
    }

    Struct236(int val) : field(val) {}
    Struct236() = default;
};

struct polymorphic_Struct236 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*236; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct236(int val) : field(val) {}
       polymorphic_Struct236() = default;
};
/*
inline int do_work(Struct236& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*236; i=i+1) {}
         return reps*2;
}*/


struct Struct237 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*237; i=i+1) {}
        return reps*2;
    }

    Struct237(int val) : field(val) {}
    Struct237() = default;
};

struct polymorphic_Struct237 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*237; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct237(int val) : field(val) {}
       polymorphic_Struct237() = default;
};
/*
inline int do_work(Struct237& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*237; i=i+1) {}
         return reps*2;
}*/


struct Struct238 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*238; i=i+1) {}
        return reps*2;
    }

    Struct238(int val) : field(val) {}
    Struct238() = default;
};

struct polymorphic_Struct238 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*238; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct238(int val) : field(val) {}
       polymorphic_Struct238() = default;
};
/*
inline int do_work(Struct238& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*238; i=i+1) {}
         return reps*2;
}*/


struct Struct239 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*239; i=i+1) {}
        return reps*2;
    }

    Struct239(int val) : field(val) {}
    Struct239() = default;
};

struct polymorphic_Struct239 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*239; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct239(int val) : field(val) {}
       polymorphic_Struct239() = default;
};
/*
inline int do_work(Struct239& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*239; i=i+1) {}
         return reps*2;
}*/


struct Struct240 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*240; i=i+1) {}
        return reps*2;
    }

    Struct240(int val) : field(val) {}
    Struct240() = default;
};

struct polymorphic_Struct240 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*240; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct240(int val) : field(val) {}
       polymorphic_Struct240() = default;
};
/*
inline int do_work(Struct240& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*240; i=i+1) {}
         return reps*2;
}*/


struct Struct241 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*241; i=i+1) {}
        return reps*2;
    }

    Struct241(int val) : field(val) {}
    Struct241() = default;
};

struct polymorphic_Struct241 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*241; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct241(int val) : field(val) {}
       polymorphic_Struct241() = default;
};
/*
inline int do_work(Struct241& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*241; i=i+1) {}
         return reps*2;
}*/


struct Struct242 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*242; i=i+1) {}
        return reps*2;
    }

    Struct242(int val) : field(val) {}
    Struct242() = default;
};

struct polymorphic_Struct242 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*242; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct242(int val) : field(val) {}
       polymorphic_Struct242() = default;
};
/*
inline int do_work(Struct242& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*242; i=i+1) {}
         return reps*2;
}*/


struct Struct243 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*243; i=i+1) {}
        return reps*2;
    }

    Struct243(int val) : field(val) {}
    Struct243() = default;
};

struct polymorphic_Struct243 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*243; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct243(int val) : field(val) {}
       polymorphic_Struct243() = default;
};
/*
inline int do_work(Struct243& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*243; i=i+1) {}
         return reps*2;
}*/


struct Struct244 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*244; i=i+1) {}
        return reps*2;
    }

    Struct244(int val) : field(val) {}
    Struct244() = default;
};

struct polymorphic_Struct244 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*244; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct244(int val) : field(val) {}
       polymorphic_Struct244() = default;
};
/*
inline int do_work(Struct244& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*244; i=i+1) {}
         return reps*2;
}*/


struct Struct245 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*245; i=i+1) {}
        return reps*2;
    }

    Struct245(int val) : field(val) {}
    Struct245() = default;
};

struct polymorphic_Struct245 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*245; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct245(int val) : field(val) {}
       polymorphic_Struct245() = default;
};
/*
inline int do_work(Struct245& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*245; i=i+1) {}
         return reps*2;
}*/


struct Struct246 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*246; i=i+1) {}
        return reps*2;
    }

    Struct246(int val) : field(val) {}
    Struct246() = default;
};

struct polymorphic_Struct246 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*246; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct246(int val) : field(val) {}
       polymorphic_Struct246() = default;
};
/*
inline int do_work(Struct246& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*246; i=i+1) {}
         return reps*2;
}*/


struct Struct247 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*247; i=i+1) {}
        return reps*2;
    }

    Struct247(int val) : field(val) {}
    Struct247() = default;
};

struct polymorphic_Struct247 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*247; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct247(int val) : field(val) {}
       polymorphic_Struct247() = default;
};
/*
inline int do_work(Struct247& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*247; i=i+1) {}
         return reps*2;
}*/


struct Struct248 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*248; i=i+1) {}
        return reps*2;
    }

    Struct248(int val) : field(val) {}
    Struct248() = default;
};

struct polymorphic_Struct248 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*248; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct248(int val) : field(val) {}
       polymorphic_Struct248() = default;
};
/*
inline int do_work(Struct248& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*248; i=i+1) {}
         return reps*2;
}*/


struct Struct249 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*249; i=i+1) {}
        return reps*2;
    }

    Struct249(int val) : field(val) {}
    Struct249() = default;
};

struct polymorphic_Struct249 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*249; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct249(int val) : field(val) {}
       polymorphic_Struct249() = default;
};
/*
inline int do_work(Struct249& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*249; i=i+1) {}
         return reps*2;
}*/


struct Struct250 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*250; i=i+1) {}
        return reps*2;
    }

    Struct250(int val) : field(val) {}
    Struct250() = default;
};

struct polymorphic_Struct250 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*250; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct250(int val) : field(val) {}
       polymorphic_Struct250() = default;
};
/*
inline int do_work(Struct250& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*250; i=i+1) {}
         return reps*2;
}*/


struct Struct251 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*251; i=i+1) {}
        return reps*2;
    }

    Struct251(int val) : field(val) {}
    Struct251() = default;
};

struct polymorphic_Struct251 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*251; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct251(int val) : field(val) {}
       polymorphic_Struct251() = default;
};
/*
inline int do_work(Struct251& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*251; i=i+1) {}
         return reps*2;
}*/


struct Struct252 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*252; i=i+1) {}
        return reps*2;
    }

    Struct252(int val) : field(val) {}
    Struct252() = default;
};

struct polymorphic_Struct252 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*252; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct252(int val) : field(val) {}
       polymorphic_Struct252() = default;
};
/*
inline int do_work(Struct252& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*252; i=i+1) {}
         return reps*2;
}*/


struct Struct253 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*253; i=i+1) {}
        return reps*2;
    }

    Struct253(int val) : field(val) {}
    Struct253() = default;
};

struct polymorphic_Struct253 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*253; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct253(int val) : field(val) {}
       polymorphic_Struct253() = default;
};
/*
inline int do_work(Struct253& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*253; i=i+1) {}
         return reps*2;
}*/


struct Struct254 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*254; i=i+1) {}
        return reps*2;
    }

    Struct254(int val) : field(val) {}
    Struct254() = default;
};

struct polymorphic_Struct254 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*254; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct254(int val) : field(val) {}
       polymorphic_Struct254() = default;
};
/*
inline int do_work(Struct254& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*254; i=i+1) {}
         return reps*2;
}*/


struct Struct255 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*255; i=i+1) {}
        return reps*2;
    }

    Struct255(int val) : field(val) {}
    Struct255() = default;
};

struct polymorphic_Struct255 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*255; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct255(int val) : field(val) {}
       polymorphic_Struct255() = default;
};
/*
inline int do_work(Struct255& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*255; i=i+1) {}
         return reps*2;
}*/


struct Struct256 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*256; i=i+1) {}
        return reps*2;
    }

    Struct256(int val) : field(val) {}
    Struct256() = default;
};

struct polymorphic_Struct256 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*256; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct256(int val) : field(val) {}
       polymorphic_Struct256() = default;
};
/*
inline int do_work(Struct256& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*256; i=i+1) {}
         return reps*2;
}*/


struct Struct257 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*257; i=i+1) {}
        return reps*2;
    }

    Struct257(int val) : field(val) {}
    Struct257() = default;
};

struct polymorphic_Struct257 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*257; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct257(int val) : field(val) {}
       polymorphic_Struct257() = default;
};
/*
inline int do_work(Struct257& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*257; i=i+1) {}
         return reps*2;
}*/


struct Struct258 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*258; i=i+1) {}
        return reps*2;
    }

    Struct258(int val) : field(val) {}
    Struct258() = default;
};

struct polymorphic_Struct258 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*258; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct258(int val) : field(val) {}
       polymorphic_Struct258() = default;
};
/*
inline int do_work(Struct258& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*258; i=i+1) {}
         return reps*2;
}*/


struct Struct259 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*259; i=i+1) {}
        return reps*2;
    }

    Struct259(int val) : field(val) {}
    Struct259() = default;
};

struct polymorphic_Struct259 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*259; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct259(int val) : field(val) {}
       polymorphic_Struct259() = default;
};
/*
inline int do_work(Struct259& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*259; i=i+1) {}
         return reps*2;
}*/


struct Struct260 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*260; i=i+1) {}
        return reps*2;
    }

    Struct260(int val) : field(val) {}
    Struct260() = default;
};

struct polymorphic_Struct260 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*260; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct260(int val) : field(val) {}
       polymorphic_Struct260() = default;
};
/*
inline int do_work(Struct260& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*260; i=i+1) {}
         return reps*2;
}*/


struct Struct261 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*261; i=i+1) {}
        return reps*2;
    }

    Struct261(int val) : field(val) {}
    Struct261() = default;
};

struct polymorphic_Struct261 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*261; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct261(int val) : field(val) {}
       polymorphic_Struct261() = default;
};
/*
inline int do_work(Struct261& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*261; i=i+1) {}
         return reps*2;
}*/


struct Struct262 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*262; i=i+1) {}
        return reps*2;
    }

    Struct262(int val) : field(val) {}
    Struct262() = default;
};

struct polymorphic_Struct262 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*262; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct262(int val) : field(val) {}
       polymorphic_Struct262() = default;
};
/*
inline int do_work(Struct262& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*262; i=i+1) {}
         return reps*2;
}*/


struct Struct263 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*263; i=i+1) {}
        return reps*2;
    }

    Struct263(int val) : field(val) {}
    Struct263() = default;
};

struct polymorphic_Struct263 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*263; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct263(int val) : field(val) {}
       polymorphic_Struct263() = default;
};
/*
inline int do_work(Struct263& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*263; i=i+1) {}
         return reps*2;
}*/


struct Struct264 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*264; i=i+1) {}
        return reps*2;
    }

    Struct264(int val) : field(val) {}
    Struct264() = default;
};

struct polymorphic_Struct264 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*264; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct264(int val) : field(val) {}
       polymorphic_Struct264() = default;
};
/*
inline int do_work(Struct264& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*264; i=i+1) {}
         return reps*2;
}*/


struct Struct265 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*265; i=i+1) {}
        return reps*2;
    }

    Struct265(int val) : field(val) {}
    Struct265() = default;
};

struct polymorphic_Struct265 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*265; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct265(int val) : field(val) {}
       polymorphic_Struct265() = default;
};
/*
inline int do_work(Struct265& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*265; i=i+1) {}
         return reps*2;
}*/


struct Struct266 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*266; i=i+1) {}
        return reps*2;
    }

    Struct266(int val) : field(val) {}
    Struct266() = default;
};

struct polymorphic_Struct266 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*266; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct266(int val) : field(val) {}
       polymorphic_Struct266() = default;
};
/*
inline int do_work(Struct266& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*266; i=i+1) {}
         return reps*2;
}*/


struct Struct267 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*267; i=i+1) {}
        return reps*2;
    }

    Struct267(int val) : field(val) {}
    Struct267() = default;
};

struct polymorphic_Struct267 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*267; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct267(int val) : field(val) {}
       polymorphic_Struct267() = default;
};
/*
inline int do_work(Struct267& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*267; i=i+1) {}
         return reps*2;
}*/


struct Struct268 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*268; i=i+1) {}
        return reps*2;
    }

    Struct268(int val) : field(val) {}
    Struct268() = default;
};

struct polymorphic_Struct268 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*268; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct268(int val) : field(val) {}
       polymorphic_Struct268() = default;
};
/*
inline int do_work(Struct268& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*268; i=i+1) {}
         return reps*2;
}*/


struct Struct269 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*269; i=i+1) {}
        return reps*2;
    }

    Struct269(int val) : field(val) {}
    Struct269() = default;
};

struct polymorphic_Struct269 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*269; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct269(int val) : field(val) {}
       polymorphic_Struct269() = default;
};
/*
inline int do_work(Struct269& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*269; i=i+1) {}
         return reps*2;
}*/


struct Struct270 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*270; i=i+1) {}
        return reps*2;
    }

    Struct270(int val) : field(val) {}
    Struct270() = default;
};

struct polymorphic_Struct270 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*270; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct270(int val) : field(val) {}
       polymorphic_Struct270() = default;
};
/*
inline int do_work(Struct270& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*270; i=i+1) {}
         return reps*2;
}*/


struct Struct271 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*271; i=i+1) {}
        return reps*2;
    }

    Struct271(int val) : field(val) {}
    Struct271() = default;
};

struct polymorphic_Struct271 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*271; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct271(int val) : field(val) {}
       polymorphic_Struct271() = default;
};
/*
inline int do_work(Struct271& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*271; i=i+1) {}
         return reps*2;
}*/


struct Struct272 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*272; i=i+1) {}
        return reps*2;
    }

    Struct272(int val) : field(val) {}
    Struct272() = default;
};

struct polymorphic_Struct272 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*272; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct272(int val) : field(val) {}
       polymorphic_Struct272() = default;
};
/*
inline int do_work(Struct272& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*272; i=i+1) {}
         return reps*2;
}*/


struct Struct273 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*273; i=i+1) {}
        return reps*2;
    }

    Struct273(int val) : field(val) {}
    Struct273() = default;
};

struct polymorphic_Struct273 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*273; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct273(int val) : field(val) {}
       polymorphic_Struct273() = default;
};
/*
inline int do_work(Struct273& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*273; i=i+1) {}
         return reps*2;
}*/


struct Struct274 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*274; i=i+1) {}
        return reps*2;
    }

    Struct274(int val) : field(val) {}
    Struct274() = default;
};

struct polymorphic_Struct274 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*274; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct274(int val) : field(val) {}
       polymorphic_Struct274() = default;
};
/*
inline int do_work(Struct274& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*274; i=i+1) {}
         return reps*2;
}*/


struct Struct275 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*275; i=i+1) {}
        return reps*2;
    }

    Struct275(int val) : field(val) {}
    Struct275() = default;
};

struct polymorphic_Struct275 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*275; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct275(int val) : field(val) {}
       polymorphic_Struct275() = default;
};
/*
inline int do_work(Struct275& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*275; i=i+1) {}
         return reps*2;
}*/


struct Struct276 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*276; i=i+1) {}
        return reps*2;
    }

    Struct276(int val) : field(val) {}
    Struct276() = default;
};

struct polymorphic_Struct276 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*276; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct276(int val) : field(val) {}
       polymorphic_Struct276() = default;
};
/*
inline int do_work(Struct276& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*276; i=i+1) {}
         return reps*2;
}*/


struct Struct277 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*277; i=i+1) {}
        return reps*2;
    }

    Struct277(int val) : field(val) {}
    Struct277() = default;
};

struct polymorphic_Struct277 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*277; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct277(int val) : field(val) {}
       polymorphic_Struct277() = default;
};
/*
inline int do_work(Struct277& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*277; i=i+1) {}
         return reps*2;
}*/


struct Struct278 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*278; i=i+1) {}
        return reps*2;
    }

    Struct278(int val) : field(val) {}
    Struct278() = default;
};

struct polymorphic_Struct278 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*278; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct278(int val) : field(val) {}
       polymorphic_Struct278() = default;
};
/*
inline int do_work(Struct278& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*278; i=i+1) {}
         return reps*2;
}*/


struct Struct279 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*279; i=i+1) {}
        return reps*2;
    }

    Struct279(int val) : field(val) {}
    Struct279() = default;
};

struct polymorphic_Struct279 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*279; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct279(int val) : field(val) {}
       polymorphic_Struct279() = default;
};
/*
inline int do_work(Struct279& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*279; i=i+1) {}
         return reps*2;
}*/


struct Struct280 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*280; i=i+1) {}
        return reps*2;
    }

    Struct280(int val) : field(val) {}
    Struct280() = default;
};

struct polymorphic_Struct280 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*280; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct280(int val) : field(val) {}
       polymorphic_Struct280() = default;
};
/*
inline int do_work(Struct280& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*280; i=i+1) {}
         return reps*2;
}*/


struct Struct281 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*281; i=i+1) {}
        return reps*2;
    }

    Struct281(int val) : field(val) {}
    Struct281() = default;
};

struct polymorphic_Struct281 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*281; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct281(int val) : field(val) {}
       polymorphic_Struct281() = default;
};
/*
inline int do_work(Struct281& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*281; i=i+1) {}
         return reps*2;
}*/


struct Struct282 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*282; i=i+1) {}
        return reps*2;
    }

    Struct282(int val) : field(val) {}
    Struct282() = default;
};

struct polymorphic_Struct282 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*282; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct282(int val) : field(val) {}
       polymorphic_Struct282() = default;
};
/*
inline int do_work(Struct282& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*282; i=i+1) {}
         return reps*2;
}*/


struct Struct283 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*283; i=i+1) {}
        return reps*2;
    }

    Struct283(int val) : field(val) {}
    Struct283() = default;
};

struct polymorphic_Struct283 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*283; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct283(int val) : field(val) {}
       polymorphic_Struct283() = default;
};
/*
inline int do_work(Struct283& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*283; i=i+1) {}
         return reps*2;
}*/


struct Struct284 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*284; i=i+1) {}
        return reps*2;
    }

    Struct284(int val) : field(val) {}
    Struct284() = default;
};

struct polymorphic_Struct284 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*284; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct284(int val) : field(val) {}
       polymorphic_Struct284() = default;
};
/*
inline int do_work(Struct284& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*284; i=i+1) {}
         return reps*2;
}*/


struct Struct285 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*285; i=i+1) {}
        return reps*2;
    }

    Struct285(int val) : field(val) {}
    Struct285() = default;
};

struct polymorphic_Struct285 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*285; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct285(int val) : field(val) {}
       polymorphic_Struct285() = default;
};
/*
inline int do_work(Struct285& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*285; i=i+1) {}
         return reps*2;
}*/


struct Struct286 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*286; i=i+1) {}
        return reps*2;
    }

    Struct286(int val) : field(val) {}
    Struct286() = default;
};

struct polymorphic_Struct286 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*286; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct286(int val) : field(val) {}
       polymorphic_Struct286() = default;
};
/*
inline int do_work(Struct286& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*286; i=i+1) {}
         return reps*2;
}*/


struct Struct287 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*287; i=i+1) {}
        return reps*2;
    }

    Struct287(int val) : field(val) {}
    Struct287() = default;
};

struct polymorphic_Struct287 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*287; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct287(int val) : field(val) {}
       polymorphic_Struct287() = default;
};
/*
inline int do_work(Struct287& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*287; i=i+1) {}
         return reps*2;
}*/


struct Struct288 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*288; i=i+1) {}
        return reps*2;
    }

    Struct288(int val) : field(val) {}
    Struct288() = default;
};

struct polymorphic_Struct288 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*288; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct288(int val) : field(val) {}
       polymorphic_Struct288() = default;
};
/*
inline int do_work(Struct288& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*288; i=i+1) {}
         return reps*2;
}*/


struct Struct289 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*289; i=i+1) {}
        return reps*2;
    }

    Struct289(int val) : field(val) {}
    Struct289() = default;
};

struct polymorphic_Struct289 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*289; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct289(int val) : field(val) {}
       polymorphic_Struct289() = default;
};
/*
inline int do_work(Struct289& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*289; i=i+1) {}
         return reps*2;
}*/


struct Struct290 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*290; i=i+1) {}
        return reps*2;
    }

    Struct290(int val) : field(val) {}
    Struct290() = default;
};

struct polymorphic_Struct290 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*290; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct290(int val) : field(val) {}
       polymorphic_Struct290() = default;
};
/*
inline int do_work(Struct290& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*290; i=i+1) {}
         return reps*2;
}*/


struct Struct291 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*291; i=i+1) {}
        return reps*2;
    }

    Struct291(int val) : field(val) {}
    Struct291() = default;
};

struct polymorphic_Struct291 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*291; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct291(int val) : field(val) {}
       polymorphic_Struct291() = default;
};
/*
inline int do_work(Struct291& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*291; i=i+1) {}
         return reps*2;
}*/


struct Struct292 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*292; i=i+1) {}
        return reps*2;
    }

    Struct292(int val) : field(val) {}
    Struct292() = default;
};

struct polymorphic_Struct292 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*292; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct292(int val) : field(val) {}
       polymorphic_Struct292() = default;
};
/*
inline int do_work(Struct292& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*292; i=i+1) {}
         return reps*2;
}*/


struct Struct293 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*293; i=i+1) {}
        return reps*2;
    }

    Struct293(int val) : field(val) {}
    Struct293() = default;
};

struct polymorphic_Struct293 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*293; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct293(int val) : field(val) {}
       polymorphic_Struct293() = default;
};
/*
inline int do_work(Struct293& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*293; i=i+1) {}
         return reps*2;
}*/


struct Struct294 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*294; i=i+1) {}
        return reps*2;
    }

    Struct294(int val) : field(val) {}
    Struct294() = default;
};

struct polymorphic_Struct294 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*294; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct294(int val) : field(val) {}
       polymorphic_Struct294() = default;
};
/*
inline int do_work(Struct294& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*294; i=i+1) {}
         return reps*2;
}*/


struct Struct295 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*295; i=i+1) {}
        return reps*2;
    }

    Struct295(int val) : field(val) {}
    Struct295() = default;
};

struct polymorphic_Struct295 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*295; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct295(int val) : field(val) {}
       polymorphic_Struct295() = default;
};
/*
inline int do_work(Struct295& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*295; i=i+1) {}
         return reps*2;
}*/


struct Struct296 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*296; i=i+1) {}
        return reps*2;
    }

    Struct296(int val) : field(val) {}
    Struct296() = default;
};

struct polymorphic_Struct296 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*296; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct296(int val) : field(val) {}
       polymorphic_Struct296() = default;
};
/*
inline int do_work(Struct296& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*296; i=i+1) {}
         return reps*2;
}*/


struct Struct297 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*297; i=i+1) {}
        return reps*2;
    }

    Struct297(int val) : field(val) {}
    Struct297() = default;
};

struct polymorphic_Struct297 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*297; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct297(int val) : field(val) {}
       polymorphic_Struct297() = default;
};
/*
inline int do_work(Struct297& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*297; i=i+1) {}
         return reps*2;
}*/


struct Struct298 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*298; i=i+1) {}
        return reps*2;
    }

    Struct298(int val) : field(val) {}
    Struct298() = default;
};

struct polymorphic_Struct298 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*298; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct298(int val) : field(val) {}
       polymorphic_Struct298() = default;
};
/*
inline int do_work(Struct298& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*298; i=i+1) {}
         return reps*2;
}*/


struct Struct299 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*299; i=i+1) {}
        return reps*2;
    }

    Struct299(int val) : field(val) {}
    Struct299() = default;
};

struct polymorphic_Struct299 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*299; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct299(int val) : field(val) {}
       polymorphic_Struct299() = default;
};
/*
inline int do_work(Struct299& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*299; i=i+1) {}
         return reps*2;
}*/


struct Struct300 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*300; i=i+1) {}
        return reps*2;
    }

    Struct300(int val) : field(val) {}
    Struct300() = default;
};

struct polymorphic_Struct300 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*300; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct300(int val) : field(val) {}
       polymorphic_Struct300() = default;
};
/*
inline int do_work(Struct300& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*300; i=i+1) {}
         return reps*2;
}*/


struct Struct301 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*301; i=i+1) {}
        return reps*2;
    }

    Struct301(int val) : field(val) {}
    Struct301() = default;
};

struct polymorphic_Struct301 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*301; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct301(int val) : field(val) {}
       polymorphic_Struct301() = default;
};
/*
inline int do_work(Struct301& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*301; i=i+1) {}
         return reps*2;
}*/


struct Struct302 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*302; i=i+1) {}
        return reps*2;
    }

    Struct302(int val) : field(val) {}
    Struct302() = default;
};

struct polymorphic_Struct302 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*302; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct302(int val) : field(val) {}
       polymorphic_Struct302() = default;
};
/*
inline int do_work(Struct302& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*302; i=i+1) {}
         return reps*2;
}*/


struct Struct303 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*303; i=i+1) {}
        return reps*2;
    }

    Struct303(int val) : field(val) {}
    Struct303() = default;
};

struct polymorphic_Struct303 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*303; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct303(int val) : field(val) {}
       polymorphic_Struct303() = default;
};
/*
inline int do_work(Struct303& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*303; i=i+1) {}
         return reps*2;
}*/


struct Struct304 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*304; i=i+1) {}
        return reps*2;
    }

    Struct304(int val) : field(val) {}
    Struct304() = default;
};

struct polymorphic_Struct304 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*304; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct304(int val) : field(val) {}
       polymorphic_Struct304() = default;
};
/*
inline int do_work(Struct304& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*304; i=i+1) {}
         return reps*2;
}*/


struct Struct305 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*305; i=i+1) {}
        return reps*2;
    }

    Struct305(int val) : field(val) {}
    Struct305() = default;
};

struct polymorphic_Struct305 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*305; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct305(int val) : field(val) {}
       polymorphic_Struct305() = default;
};
/*
inline int do_work(Struct305& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*305; i=i+1) {}
         return reps*2;
}*/


struct Struct306 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*306; i=i+1) {}
        return reps*2;
    }

    Struct306(int val) : field(val) {}
    Struct306() = default;
};

struct polymorphic_Struct306 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*306; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct306(int val) : field(val) {}
       polymorphic_Struct306() = default;
};
/*
inline int do_work(Struct306& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*306; i=i+1) {}
         return reps*2;
}*/


struct Struct307 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*307; i=i+1) {}
        return reps*2;
    }

    Struct307(int val) : field(val) {}
    Struct307() = default;
};

struct polymorphic_Struct307 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*307; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct307(int val) : field(val) {}
       polymorphic_Struct307() = default;
};
/*
inline int do_work(Struct307& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*307; i=i+1) {}
         return reps*2;
}*/


struct Struct308 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*308; i=i+1) {}
        return reps*2;
    }

    Struct308(int val) : field(val) {}
    Struct308() = default;
};

struct polymorphic_Struct308 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*308; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct308(int val) : field(val) {}
       polymorphic_Struct308() = default;
};
/*
inline int do_work(Struct308& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*308; i=i+1) {}
         return reps*2;
}*/


struct Struct309 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*309; i=i+1) {}
        return reps*2;
    }

    Struct309(int val) : field(val) {}
    Struct309() = default;
};

struct polymorphic_Struct309 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*309; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct309(int val) : field(val) {}
       polymorphic_Struct309() = default;
};
/*
inline int do_work(Struct309& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*309; i=i+1) {}
         return reps*2;
}*/


struct Struct310 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*310; i=i+1) {}
        return reps*2;
    }

    Struct310(int val) : field(val) {}
    Struct310() = default;
};

struct polymorphic_Struct310 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*310; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct310(int val) : field(val) {}
       polymorphic_Struct310() = default;
};
/*
inline int do_work(Struct310& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*310; i=i+1) {}
         return reps*2;
}*/


struct Struct311 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*311; i=i+1) {}
        return reps*2;
    }

    Struct311(int val) : field(val) {}
    Struct311() = default;
};

struct polymorphic_Struct311 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*311; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct311(int val) : field(val) {}
       polymorphic_Struct311() = default;
};
/*
inline int do_work(Struct311& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*311; i=i+1) {}
         return reps*2;
}*/


struct Struct312 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*312; i=i+1) {}
        return reps*2;
    }

    Struct312(int val) : field(val) {}
    Struct312() = default;
};

struct polymorphic_Struct312 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*312; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct312(int val) : field(val) {}
       polymorphic_Struct312() = default;
};
/*
inline int do_work(Struct312& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*312; i=i+1) {}
         return reps*2;
}*/


struct Struct313 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*313; i=i+1) {}
        return reps*2;
    }

    Struct313(int val) : field(val) {}
    Struct313() = default;
};

struct polymorphic_Struct313 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*313; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct313(int val) : field(val) {}
       polymorphic_Struct313() = default;
};
/*
inline int do_work(Struct313& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*313; i=i+1) {}
         return reps*2;
}*/


struct Struct314 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*314; i=i+1) {}
        return reps*2;
    }

    Struct314(int val) : field(val) {}
    Struct314() = default;
};

struct polymorphic_Struct314 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*314; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct314(int val) : field(val) {}
       polymorphic_Struct314() = default;
};
/*
inline int do_work(Struct314& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*314; i=i+1) {}
         return reps*2;
}*/


struct Struct315 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*315; i=i+1) {}
        return reps*2;
    }

    Struct315(int val) : field(val) {}
    Struct315() = default;
};

struct polymorphic_Struct315 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*315; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct315(int val) : field(val) {}
       polymorphic_Struct315() = default;
};
/*
inline int do_work(Struct315& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*315; i=i+1) {}
         return reps*2;
}*/


struct Struct316 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*316; i=i+1) {}
        return reps*2;
    }

    Struct316(int val) : field(val) {}
    Struct316() = default;
};

struct polymorphic_Struct316 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*316; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct316(int val) : field(val) {}
       polymorphic_Struct316() = default;
};
/*
inline int do_work(Struct316& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*316; i=i+1) {}
         return reps*2;
}*/


struct Struct317 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*317; i=i+1) {}
        return reps*2;
    }

    Struct317(int val) : field(val) {}
    Struct317() = default;
};

struct polymorphic_Struct317 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*317; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct317(int val) : field(val) {}
       polymorphic_Struct317() = default;
};
/*
inline int do_work(Struct317& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*317; i=i+1) {}
         return reps*2;
}*/


struct Struct318 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*318; i=i+1) {}
        return reps*2;
    }

    Struct318(int val) : field(val) {}
    Struct318() = default;
};

struct polymorphic_Struct318 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*318; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct318(int val) : field(val) {}
       polymorphic_Struct318() = default;
};
/*
inline int do_work(Struct318& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*318; i=i+1) {}
         return reps*2;
}*/


struct Struct319 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*319; i=i+1) {}
        return reps*2;
    }

    Struct319(int val) : field(val) {}
    Struct319() = default;
};

struct polymorphic_Struct319 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*319; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct319(int val) : field(val) {}
       polymorphic_Struct319() = default;
};
/*
inline int do_work(Struct319& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*319; i=i+1) {}
         return reps*2;
}*/


struct Struct320 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*320; i=i+1) {}
        return reps*2;
    }

    Struct320(int val) : field(val) {}
    Struct320() = default;
};

struct polymorphic_Struct320 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*320; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct320(int val) : field(val) {}
       polymorphic_Struct320() = default;
};
/*
inline int do_work(Struct320& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*320; i=i+1) {}
         return reps*2;
}*/


struct Struct321 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*321; i=i+1) {}
        return reps*2;
    }

    Struct321(int val) : field(val) {}
    Struct321() = default;
};

struct polymorphic_Struct321 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*321; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct321(int val) : field(val) {}
       polymorphic_Struct321() = default;
};
/*
inline int do_work(Struct321& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*321; i=i+1) {}
         return reps*2;
}*/


struct Struct322 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*322; i=i+1) {}
        return reps*2;
    }

    Struct322(int val) : field(val) {}
    Struct322() = default;
};

struct polymorphic_Struct322 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*322; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct322(int val) : field(val) {}
       polymorphic_Struct322() = default;
};
/*
inline int do_work(Struct322& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*322; i=i+1) {}
         return reps*2;
}*/


struct Struct323 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*323; i=i+1) {}
        return reps*2;
    }

    Struct323(int val) : field(val) {}
    Struct323() = default;
};

struct polymorphic_Struct323 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*323; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct323(int val) : field(val) {}
       polymorphic_Struct323() = default;
};
/*
inline int do_work(Struct323& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*323; i=i+1) {}
         return reps*2;
}*/


struct Struct324 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*324; i=i+1) {}
        return reps*2;
    }

    Struct324(int val) : field(val) {}
    Struct324() = default;
};

struct polymorphic_Struct324 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*324; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct324(int val) : field(val) {}
       polymorphic_Struct324() = default;
};
/*
inline int do_work(Struct324& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*324; i=i+1) {}
         return reps*2;
}*/


struct Struct325 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*325; i=i+1) {}
        return reps*2;
    }

    Struct325(int val) : field(val) {}
    Struct325() = default;
};

struct polymorphic_Struct325 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*325; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct325(int val) : field(val) {}
       polymorphic_Struct325() = default;
};
/*
inline int do_work(Struct325& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*325; i=i+1) {}
         return reps*2;
}*/


struct Struct326 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*326; i=i+1) {}
        return reps*2;
    }

    Struct326(int val) : field(val) {}
    Struct326() = default;
};

struct polymorphic_Struct326 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*326; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct326(int val) : field(val) {}
       polymorphic_Struct326() = default;
};
/*
inline int do_work(Struct326& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*326; i=i+1) {}
         return reps*2;
}*/


struct Struct327 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*327; i=i+1) {}
        return reps*2;
    }

    Struct327(int val) : field(val) {}
    Struct327() = default;
};

struct polymorphic_Struct327 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*327; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct327(int val) : field(val) {}
       polymorphic_Struct327() = default;
};
/*
inline int do_work(Struct327& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*327; i=i+1) {}
         return reps*2;
}*/


struct Struct328 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*328; i=i+1) {}
        return reps*2;
    }

    Struct328(int val) : field(val) {}
    Struct328() = default;
};

struct polymorphic_Struct328 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*328; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct328(int val) : field(val) {}
       polymorphic_Struct328() = default;
};
/*
inline int do_work(Struct328& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*328; i=i+1) {}
         return reps*2;
}*/


struct Struct329 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*329; i=i+1) {}
        return reps*2;
    }

    Struct329(int val) : field(val) {}
    Struct329() = default;
};

struct polymorphic_Struct329 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*329; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct329(int val) : field(val) {}
       polymorphic_Struct329() = default;
};
/*
inline int do_work(Struct329& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*329; i=i+1) {}
         return reps*2;
}*/


struct Struct330 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*330; i=i+1) {}
        return reps*2;
    }

    Struct330(int val) : field(val) {}
    Struct330() = default;
};

struct polymorphic_Struct330 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*330; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct330(int val) : field(val) {}
       polymorphic_Struct330() = default;
};
/*
inline int do_work(Struct330& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*330; i=i+1) {}
         return reps*2;
}*/


struct Struct331 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*331; i=i+1) {}
        return reps*2;
    }

    Struct331(int val) : field(val) {}
    Struct331() = default;
};

struct polymorphic_Struct331 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*331; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct331(int val) : field(val) {}
       polymorphic_Struct331() = default;
};
/*
inline int do_work(Struct331& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*331; i=i+1) {}
         return reps*2;
}*/


struct Struct332 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*332; i=i+1) {}
        return reps*2;
    }

    Struct332(int val) : field(val) {}
    Struct332() = default;
};

struct polymorphic_Struct332 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*332; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct332(int val) : field(val) {}
       polymorphic_Struct332() = default;
};
/*
inline int do_work(Struct332& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*332; i=i+1) {}
         return reps*2;
}*/


struct Struct333 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*333; i=i+1) {}
        return reps*2;
    }

    Struct333(int val) : field(val) {}
    Struct333() = default;
};

struct polymorphic_Struct333 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*333; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct333(int val) : field(val) {}
       polymorphic_Struct333() = default;
};
/*
inline int do_work(Struct333& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*333; i=i+1) {}
         return reps*2;
}*/


struct Struct334 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*334; i=i+1) {}
        return reps*2;
    }

    Struct334(int val) : field(val) {}
    Struct334() = default;
};

struct polymorphic_Struct334 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*334; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct334(int val) : field(val) {}
       polymorphic_Struct334() = default;
};
/*
inline int do_work(Struct334& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*334; i=i+1) {}
         return reps*2;
}*/


struct Struct335 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*335; i=i+1) {}
        return reps*2;
    }

    Struct335(int val) : field(val) {}
    Struct335() = default;
};

struct polymorphic_Struct335 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*335; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct335(int val) : field(val) {}
       polymorphic_Struct335() = default;
};
/*
inline int do_work(Struct335& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*335; i=i+1) {}
         return reps*2;
}*/


struct Struct336 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*336; i=i+1) {}
        return reps*2;
    }

    Struct336(int val) : field(val) {}
    Struct336() = default;
};

struct polymorphic_Struct336 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*336; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct336(int val) : field(val) {}
       polymorphic_Struct336() = default;
};
/*
inline int do_work(Struct336& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*336; i=i+1) {}
         return reps*2;
}*/


struct Struct337 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*337; i=i+1) {}
        return reps*2;
    }

    Struct337(int val) : field(val) {}
    Struct337() = default;
};

struct polymorphic_Struct337 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*337; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct337(int val) : field(val) {}
       polymorphic_Struct337() = default;
};
/*
inline int do_work(Struct337& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*337; i=i+1) {}
         return reps*2;
}*/


struct Struct338 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*338; i=i+1) {}
        return reps*2;
    }

    Struct338(int val) : field(val) {}
    Struct338() = default;
};

struct polymorphic_Struct338 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*338; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct338(int val) : field(val) {}
       polymorphic_Struct338() = default;
};
/*
inline int do_work(Struct338& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*338; i=i+1) {}
         return reps*2;
}*/


struct Struct339 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*339; i=i+1) {}
        return reps*2;
    }

    Struct339(int val) : field(val) {}
    Struct339() = default;
};

struct polymorphic_Struct339 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*339; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct339(int val) : field(val) {}
       polymorphic_Struct339() = default;
};
/*
inline int do_work(Struct339& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*339; i=i+1) {}
         return reps*2;
}*/


struct Struct340 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*340; i=i+1) {}
        return reps*2;
    }

    Struct340(int val) : field(val) {}
    Struct340() = default;
};

struct polymorphic_Struct340 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*340; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct340(int val) : field(val) {}
       polymorphic_Struct340() = default;
};
/*
inline int do_work(Struct340& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*340; i=i+1) {}
         return reps*2;
}*/


struct Struct341 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*341; i=i+1) {}
        return reps*2;
    }

    Struct341(int val) : field(val) {}
    Struct341() = default;
};

struct polymorphic_Struct341 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*341; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct341(int val) : field(val) {}
       polymorphic_Struct341() = default;
};
/*
inline int do_work(Struct341& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*341; i=i+1) {}
         return reps*2;
}*/


struct Struct342 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*342; i=i+1) {}
        return reps*2;
    }

    Struct342(int val) : field(val) {}
    Struct342() = default;
};

struct polymorphic_Struct342 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*342; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct342(int val) : field(val) {}
       polymorphic_Struct342() = default;
};
/*
inline int do_work(Struct342& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*342; i=i+1) {}
         return reps*2;
}*/


struct Struct343 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*343; i=i+1) {}
        return reps*2;
    }

    Struct343(int val) : field(val) {}
    Struct343() = default;
};

struct polymorphic_Struct343 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*343; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct343(int val) : field(val) {}
       polymorphic_Struct343() = default;
};
/*
inline int do_work(Struct343& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*343; i=i+1) {}
         return reps*2;
}*/


struct Struct344 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*344; i=i+1) {}
        return reps*2;
    }

    Struct344(int val) : field(val) {}
    Struct344() = default;
};

struct polymorphic_Struct344 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*344; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct344(int val) : field(val) {}
       polymorphic_Struct344() = default;
};
/*
inline int do_work(Struct344& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*344; i=i+1) {}
         return reps*2;
}*/


struct Struct345 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*345; i=i+1) {}
        return reps*2;
    }

    Struct345(int val) : field(val) {}
    Struct345() = default;
};

struct polymorphic_Struct345 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*345; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct345(int val) : field(val) {}
       polymorphic_Struct345() = default;
};
/*
inline int do_work(Struct345& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*345; i=i+1) {}
         return reps*2;
}*/


struct Struct346 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*346; i=i+1) {}
        return reps*2;
    }

    Struct346(int val) : field(val) {}
    Struct346() = default;
};

struct polymorphic_Struct346 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*346; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct346(int val) : field(val) {}
       polymorphic_Struct346() = default;
};
/*
inline int do_work(Struct346& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*346; i=i+1) {}
         return reps*2;
}*/


struct Struct347 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*347; i=i+1) {}
        return reps*2;
    }

    Struct347(int val) : field(val) {}
    Struct347() = default;
};

struct polymorphic_Struct347 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*347; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct347(int val) : field(val) {}
       polymorphic_Struct347() = default;
};
/*
inline int do_work(Struct347& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*347; i=i+1) {}
         return reps*2;
}*/


struct Struct348 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*348; i=i+1) {}
        return reps*2;
    }

    Struct348(int val) : field(val) {}
    Struct348() = default;
};

struct polymorphic_Struct348 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*348; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct348(int val) : field(val) {}
       polymorphic_Struct348() = default;
};
/*
inline int do_work(Struct348& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*348; i=i+1) {}
         return reps*2;
}*/


struct Struct349 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*349; i=i+1) {}
        return reps*2;
    }

    Struct349(int val) : field(val) {}
    Struct349() = default;
};

struct polymorphic_Struct349 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*349; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct349(int val) : field(val) {}
       polymorphic_Struct349() = default;
};
/*
inline int do_work(Struct349& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*349; i=i+1) {}
         return reps*2;
}*/


struct Struct350 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*350; i=i+1) {}
        return reps*2;
    }

    Struct350(int val) : field(val) {}
    Struct350() = default;
};

struct polymorphic_Struct350 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*350; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct350(int val) : field(val) {}
       polymorphic_Struct350() = default;
};
/*
inline int do_work(Struct350& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*350; i=i+1) {}
         return reps*2;
}*/


struct Struct351 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*351; i=i+1) {}
        return reps*2;
    }

    Struct351(int val) : field(val) {}
    Struct351() = default;
};

struct polymorphic_Struct351 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*351; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct351(int val) : field(val) {}
       polymorphic_Struct351() = default;
};
/*
inline int do_work(Struct351& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*351; i=i+1) {}
         return reps*2;
}*/


struct Struct352 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*352; i=i+1) {}
        return reps*2;
    }

    Struct352(int val) : field(val) {}
    Struct352() = default;
};

struct polymorphic_Struct352 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*352; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct352(int val) : field(val) {}
       polymorphic_Struct352() = default;
};
/*
inline int do_work(Struct352& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*352; i=i+1) {}
         return reps*2;
}*/


struct Struct353 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*353; i=i+1) {}
        return reps*2;
    }

    Struct353(int val) : field(val) {}
    Struct353() = default;
};

struct polymorphic_Struct353 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*353; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct353(int val) : field(val) {}
       polymorphic_Struct353() = default;
};
/*
inline int do_work(Struct353& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*353; i=i+1) {}
         return reps*2;
}*/


struct Struct354 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*354; i=i+1) {}
        return reps*2;
    }

    Struct354(int val) : field(val) {}
    Struct354() = default;
};

struct polymorphic_Struct354 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*354; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct354(int val) : field(val) {}
       polymorphic_Struct354() = default;
};
/*
inline int do_work(Struct354& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*354; i=i+1) {}
         return reps*2;
}*/


struct Struct355 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*355; i=i+1) {}
        return reps*2;
    }

    Struct355(int val) : field(val) {}
    Struct355() = default;
};

struct polymorphic_Struct355 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*355; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct355(int val) : field(val) {}
       polymorphic_Struct355() = default;
};
/*
inline int do_work(Struct355& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*355; i=i+1) {}
         return reps*2;
}*/


struct Struct356 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*356; i=i+1) {}
        return reps*2;
    }

    Struct356(int val) : field(val) {}
    Struct356() = default;
};

struct polymorphic_Struct356 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*356; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct356(int val) : field(val) {}
       polymorphic_Struct356() = default;
};
/*
inline int do_work(Struct356& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*356; i=i+1) {}
         return reps*2;
}*/


struct Struct357 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*357; i=i+1) {}
        return reps*2;
    }

    Struct357(int val) : field(val) {}
    Struct357() = default;
};

struct polymorphic_Struct357 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*357; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct357(int val) : field(val) {}
       polymorphic_Struct357() = default;
};
/*
inline int do_work(Struct357& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*357; i=i+1) {}
         return reps*2;
}*/


struct Struct358 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*358; i=i+1) {}
        return reps*2;
    }

    Struct358(int val) : field(val) {}
    Struct358() = default;
};

struct polymorphic_Struct358 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*358; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct358(int val) : field(val) {}
       polymorphic_Struct358() = default;
};
/*
inline int do_work(Struct358& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*358; i=i+1) {}
         return reps*2;
}*/


struct Struct359 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*359; i=i+1) {}
        return reps*2;
    }

    Struct359(int val) : field(val) {}
    Struct359() = default;
};

struct polymorphic_Struct359 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*359; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct359(int val) : field(val) {}
       polymorphic_Struct359() = default;
};
/*
inline int do_work(Struct359& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*359; i=i+1) {}
         return reps*2;
}*/


struct Struct360 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*360; i=i+1) {}
        return reps*2;
    }

    Struct360(int val) : field(val) {}
    Struct360() = default;
};

struct polymorphic_Struct360 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*360; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct360(int val) : field(val) {}
       polymorphic_Struct360() = default;
};
/*
inline int do_work(Struct360& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*360; i=i+1) {}
         return reps*2;
}*/


struct Struct361 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*361; i=i+1) {}
        return reps*2;
    }

    Struct361(int val) : field(val) {}
    Struct361() = default;
};

struct polymorphic_Struct361 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*361; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct361(int val) : field(val) {}
       polymorphic_Struct361() = default;
};
/*
inline int do_work(Struct361& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*361; i=i+1) {}
         return reps*2;
}*/


struct Struct362 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*362; i=i+1) {}
        return reps*2;
    }

    Struct362(int val) : field(val) {}
    Struct362() = default;
};

struct polymorphic_Struct362 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*362; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct362(int val) : field(val) {}
       polymorphic_Struct362() = default;
};
/*
inline int do_work(Struct362& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*362; i=i+1) {}
         return reps*2;
}*/


struct Struct363 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*363; i=i+1) {}
        return reps*2;
    }

    Struct363(int val) : field(val) {}
    Struct363() = default;
};

struct polymorphic_Struct363 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*363; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct363(int val) : field(val) {}
       polymorphic_Struct363() = default;
};
/*
inline int do_work(Struct363& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*363; i=i+1) {}
         return reps*2;
}*/


struct Struct364 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*364; i=i+1) {}
        return reps*2;
    }

    Struct364(int val) : field(val) {}
    Struct364() = default;
};

struct polymorphic_Struct364 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*364; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct364(int val) : field(val) {}
       polymorphic_Struct364() = default;
};
/*
inline int do_work(Struct364& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*364; i=i+1) {}
         return reps*2;
}*/


struct Struct365 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*365; i=i+1) {}
        return reps*2;
    }

    Struct365(int val) : field(val) {}
    Struct365() = default;
};

struct polymorphic_Struct365 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*365; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct365(int val) : field(val) {}
       polymorphic_Struct365() = default;
};
/*
inline int do_work(Struct365& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*365; i=i+1) {}
         return reps*2;
}*/


struct Struct366 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*366; i=i+1) {}
        return reps*2;
    }

    Struct366(int val) : field(val) {}
    Struct366() = default;
};

struct polymorphic_Struct366 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*366; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct366(int val) : field(val) {}
       polymorphic_Struct366() = default;
};
/*
inline int do_work(Struct366& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*366; i=i+1) {}
         return reps*2;
}*/


struct Struct367 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*367; i=i+1) {}
        return reps*2;
    }

    Struct367(int val) : field(val) {}
    Struct367() = default;
};

struct polymorphic_Struct367 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*367; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct367(int val) : field(val) {}
       polymorphic_Struct367() = default;
};
/*
inline int do_work(Struct367& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*367; i=i+1) {}
         return reps*2;
}*/


struct Struct368 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*368; i=i+1) {}
        return reps*2;
    }

    Struct368(int val) : field(val) {}
    Struct368() = default;
};

struct polymorphic_Struct368 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*368; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct368(int val) : field(val) {}
       polymorphic_Struct368() = default;
};
/*
inline int do_work(Struct368& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*368; i=i+1) {}
         return reps*2;
}*/


struct Struct369 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*369; i=i+1) {}
        return reps*2;
    }

    Struct369(int val) : field(val) {}
    Struct369() = default;
};

struct polymorphic_Struct369 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*369; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct369(int val) : field(val) {}
       polymorphic_Struct369() = default;
};
/*
inline int do_work(Struct369& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*369; i=i+1) {}
         return reps*2;
}*/


struct Struct370 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*370; i=i+1) {}
        return reps*2;
    }

    Struct370(int val) : field(val) {}
    Struct370() = default;
};

struct polymorphic_Struct370 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*370; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct370(int val) : field(val) {}
       polymorphic_Struct370() = default;
};
/*
inline int do_work(Struct370& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*370; i=i+1) {}
         return reps*2;
}*/


struct Struct371 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*371; i=i+1) {}
        return reps*2;
    }

    Struct371(int val) : field(val) {}
    Struct371() = default;
};

struct polymorphic_Struct371 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*371; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct371(int val) : field(val) {}
       polymorphic_Struct371() = default;
};
/*
inline int do_work(Struct371& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*371; i=i+1) {}
         return reps*2;
}*/


struct Struct372 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*372; i=i+1) {}
        return reps*2;
    }

    Struct372(int val) : field(val) {}
    Struct372() = default;
};

struct polymorphic_Struct372 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*372; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct372(int val) : field(val) {}
       polymorphic_Struct372() = default;
};
/*
inline int do_work(Struct372& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*372; i=i+1) {}
         return reps*2;
}*/


struct Struct373 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*373; i=i+1) {}
        return reps*2;
    }

    Struct373(int val) : field(val) {}
    Struct373() = default;
};

struct polymorphic_Struct373 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*373; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct373(int val) : field(val) {}
       polymorphic_Struct373() = default;
};
/*
inline int do_work(Struct373& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*373; i=i+1) {}
         return reps*2;
}*/


struct Struct374 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*374; i=i+1) {}
        return reps*2;
    }

    Struct374(int val) : field(val) {}
    Struct374() = default;
};

struct polymorphic_Struct374 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*374; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct374(int val) : field(val) {}
       polymorphic_Struct374() = default;
};
/*
inline int do_work(Struct374& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*374; i=i+1) {}
         return reps*2;
}*/


struct Struct375 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*375; i=i+1) {}
        return reps*2;
    }

    Struct375(int val) : field(val) {}
    Struct375() = default;
};

struct polymorphic_Struct375 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*375; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct375(int val) : field(val) {}
       polymorphic_Struct375() = default;
};
/*
inline int do_work(Struct375& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*375; i=i+1) {}
         return reps*2;
}*/


struct Struct376 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*376; i=i+1) {}
        return reps*2;
    }

    Struct376(int val) : field(val) {}
    Struct376() = default;
};

struct polymorphic_Struct376 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*376; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct376(int val) : field(val) {}
       polymorphic_Struct376() = default;
};
/*
inline int do_work(Struct376& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*376; i=i+1) {}
         return reps*2;
}*/


struct Struct377 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*377; i=i+1) {}
        return reps*2;
    }

    Struct377(int val) : field(val) {}
    Struct377() = default;
};

struct polymorphic_Struct377 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*377; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct377(int val) : field(val) {}
       polymorphic_Struct377() = default;
};
/*
inline int do_work(Struct377& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*377; i=i+1) {}
         return reps*2;
}*/


struct Struct378 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*378; i=i+1) {}
        return reps*2;
    }

    Struct378(int val) : field(val) {}
    Struct378() = default;
};

struct polymorphic_Struct378 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*378; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct378(int val) : field(val) {}
       polymorphic_Struct378() = default;
};
/*
inline int do_work(Struct378& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*378; i=i+1) {}
         return reps*2;
}*/


struct Struct379 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*379; i=i+1) {}
        return reps*2;
    }

    Struct379(int val) : field(val) {}
    Struct379() = default;
};

struct polymorphic_Struct379 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*379; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct379(int val) : field(val) {}
       polymorphic_Struct379() = default;
};
/*
inline int do_work(Struct379& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*379; i=i+1) {}
         return reps*2;
}*/


struct Struct380 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*380; i=i+1) {}
        return reps*2;
    }

    Struct380(int val) : field(val) {}
    Struct380() = default;
};

struct polymorphic_Struct380 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*380; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct380(int val) : field(val) {}
       polymorphic_Struct380() = default;
};
/*
inline int do_work(Struct380& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*380; i=i+1) {}
         return reps*2;
}*/


struct Struct381 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*381; i=i+1) {}
        return reps*2;
    }

    Struct381(int val) : field(val) {}
    Struct381() = default;
};

struct polymorphic_Struct381 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*381; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct381(int val) : field(val) {}
       polymorphic_Struct381() = default;
};
/*
inline int do_work(Struct381& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*381; i=i+1) {}
         return reps*2;
}*/


struct Struct382 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*382; i=i+1) {}
        return reps*2;
    }

    Struct382(int val) : field(val) {}
    Struct382() = default;
};

struct polymorphic_Struct382 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*382; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct382(int val) : field(val) {}
       polymorphic_Struct382() = default;
};
/*
inline int do_work(Struct382& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*382; i=i+1) {}
         return reps*2;
}*/


struct Struct383 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*383; i=i+1) {}
        return reps*2;
    }

    Struct383(int val) : field(val) {}
    Struct383() = default;
};

struct polymorphic_Struct383 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*383; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct383(int val) : field(val) {}
       polymorphic_Struct383() = default;
};
/*
inline int do_work(Struct383& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*383; i=i+1) {}
         return reps*2;
}*/


struct Struct384 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*384; i=i+1) {}
        return reps*2;
    }

    Struct384(int val) : field(val) {}
    Struct384() = default;
};

struct polymorphic_Struct384 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*384; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct384(int val) : field(val) {}
       polymorphic_Struct384() = default;
};
/*
inline int do_work(Struct384& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*384; i=i+1) {}
         return reps*2;
}*/


struct Struct385 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*385; i=i+1) {}
        return reps*2;
    }

    Struct385(int val) : field(val) {}
    Struct385() = default;
};

struct polymorphic_Struct385 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*385; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct385(int val) : field(val) {}
       polymorphic_Struct385() = default;
};
/*
inline int do_work(Struct385& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*385; i=i+1) {}
         return reps*2;
}*/


struct Struct386 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*386; i=i+1) {}
        return reps*2;
    }

    Struct386(int val) : field(val) {}
    Struct386() = default;
};

struct polymorphic_Struct386 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*386; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct386(int val) : field(val) {}
       polymorphic_Struct386() = default;
};
/*
inline int do_work(Struct386& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*386; i=i+1) {}
         return reps*2;
}*/


struct Struct387 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*387; i=i+1) {}
        return reps*2;
    }

    Struct387(int val) : field(val) {}
    Struct387() = default;
};

struct polymorphic_Struct387 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*387; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct387(int val) : field(val) {}
       polymorphic_Struct387() = default;
};
/*
inline int do_work(Struct387& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*387; i=i+1) {}
         return reps*2;
}*/


struct Struct388 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*388; i=i+1) {}
        return reps*2;
    }

    Struct388(int val) : field(val) {}
    Struct388() = default;
};

struct polymorphic_Struct388 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*388; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct388(int val) : field(val) {}
       polymorphic_Struct388() = default;
};
/*
inline int do_work(Struct388& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*388; i=i+1) {}
         return reps*2;
}*/


struct Struct389 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*389; i=i+1) {}
        return reps*2;
    }

    Struct389(int val) : field(val) {}
    Struct389() = default;
};

struct polymorphic_Struct389 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*389; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct389(int val) : field(val) {}
       polymorphic_Struct389() = default;
};
/*
inline int do_work(Struct389& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*389; i=i+1) {}
         return reps*2;
}*/


struct Struct390 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*390; i=i+1) {}
        return reps*2;
    }

    Struct390(int val) : field(val) {}
    Struct390() = default;
};

struct polymorphic_Struct390 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*390; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct390(int val) : field(val) {}
       polymorphic_Struct390() = default;
};
/*
inline int do_work(Struct390& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*390; i=i+1) {}
         return reps*2;
}*/


struct Struct391 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*391; i=i+1) {}
        return reps*2;
    }

    Struct391(int val) : field(val) {}
    Struct391() = default;
};

struct polymorphic_Struct391 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*391; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct391(int val) : field(val) {}
       polymorphic_Struct391() = default;
};
/*
inline int do_work(Struct391& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*391; i=i+1) {}
         return reps*2;
}*/


struct Struct392 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*392; i=i+1) {}
        return reps*2;
    }

    Struct392(int val) : field(val) {}
    Struct392() = default;
};

struct polymorphic_Struct392 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*392; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct392(int val) : field(val) {}
       polymorphic_Struct392() = default;
};
/*
inline int do_work(Struct392& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*392; i=i+1) {}
         return reps*2;
}*/


struct Struct393 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*393; i=i+1) {}
        return reps*2;
    }

    Struct393(int val) : field(val) {}
    Struct393() = default;
};

struct polymorphic_Struct393 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*393; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct393(int val) : field(val) {}
       polymorphic_Struct393() = default;
};
/*
inline int do_work(Struct393& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*393; i=i+1) {}
         return reps*2;
}*/


struct Struct394 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*394; i=i+1) {}
        return reps*2;
    }

    Struct394(int val) : field(val) {}
    Struct394() = default;
};

struct polymorphic_Struct394 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*394; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct394(int val) : field(val) {}
       polymorphic_Struct394() = default;
};
/*
inline int do_work(Struct394& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*394; i=i+1) {}
         return reps*2;
}*/


struct Struct395 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*395; i=i+1) {}
        return reps*2;
    }

    Struct395(int val) : field(val) {}
    Struct395() = default;
};

struct polymorphic_Struct395 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*395; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct395(int val) : field(val) {}
       polymorphic_Struct395() = default;
};
/*
inline int do_work(Struct395& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*395; i=i+1) {}
         return reps*2;
}*/


struct Struct396 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*396; i=i+1) {}
        return reps*2;
    }

    Struct396(int val) : field(val) {}
    Struct396() = default;
};

struct polymorphic_Struct396 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*396; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct396(int val) : field(val) {}
       polymorphic_Struct396() = default;
};
/*
inline int do_work(Struct396& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*396; i=i+1) {}
         return reps*2;
}*/


struct Struct397 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*397; i=i+1) {}
        return reps*2;
    }

    Struct397(int val) : field(val) {}
    Struct397() = default;
};

struct polymorphic_Struct397 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*397; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct397(int val) : field(val) {}
       polymorphic_Struct397() = default;
};
/*
inline int do_work(Struct397& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*397; i=i+1) {}
         return reps*2;
}*/


struct Struct398 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*398; i=i+1) {}
        return reps*2;
    }

    Struct398(int val) : field(val) {}
    Struct398() = default;
};

struct polymorphic_Struct398 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*398; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct398(int val) : field(val) {}
       polymorphic_Struct398() = default;
};
/*
inline int do_work(Struct398& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*398; i=i+1) {}
         return reps*2;
}*/


struct Struct399 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*399; i=i+1) {}
        return reps*2;
    }

    Struct399(int val) : field(val) {}
    Struct399() = default;
};

struct polymorphic_Struct399 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*399; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct399(int val) : field(val) {}
       polymorphic_Struct399() = default;
};
/*
inline int do_work(Struct399& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*399; i=i+1) {}
         return reps*2;
}*/


struct Struct400 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*400; i=i+1) {}
        return reps*2;
    }

    Struct400(int val) : field(val) {}
    Struct400() = default;
};

struct polymorphic_Struct400 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*400; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct400(int val) : field(val) {}
       polymorphic_Struct400() = default;
};
/*
inline int do_work(Struct400& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*400; i=i+1) {}
         return reps*2;
}*/


struct Struct401 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*401; i=i+1) {}
        return reps*2;
    }

    Struct401(int val) : field(val) {}
    Struct401() = default;
};

struct polymorphic_Struct401 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*401; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct401(int val) : field(val) {}
       polymorphic_Struct401() = default;
};
/*
inline int do_work(Struct401& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*401; i=i+1) {}
         return reps*2;
}*/


struct Struct402 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*402; i=i+1) {}
        return reps*2;
    }

    Struct402(int val) : field(val) {}
    Struct402() = default;
};

struct polymorphic_Struct402 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*402; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct402(int val) : field(val) {}
       polymorphic_Struct402() = default;
};
/*
inline int do_work(Struct402& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*402; i=i+1) {}
         return reps*2;
}*/


struct Struct403 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*403; i=i+1) {}
        return reps*2;
    }

    Struct403(int val) : field(val) {}
    Struct403() = default;
};

struct polymorphic_Struct403 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*403; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct403(int val) : field(val) {}
       polymorphic_Struct403() = default;
};
/*
inline int do_work(Struct403& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*403; i=i+1) {}
         return reps*2;
}*/


struct Struct404 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*404; i=i+1) {}
        return reps*2;
    }

    Struct404(int val) : field(val) {}
    Struct404() = default;
};

struct polymorphic_Struct404 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*404; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct404(int val) : field(val) {}
       polymorphic_Struct404() = default;
};
/*
inline int do_work(Struct404& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*404; i=i+1) {}
         return reps*2;
}*/


struct Struct405 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*405; i=i+1) {}
        return reps*2;
    }

    Struct405(int val) : field(val) {}
    Struct405() = default;
};

struct polymorphic_Struct405 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*405; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct405(int val) : field(val) {}
       polymorphic_Struct405() = default;
};
/*
inline int do_work(Struct405& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*405; i=i+1) {}
         return reps*2;
}*/


struct Struct406 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*406; i=i+1) {}
        return reps*2;
    }

    Struct406(int val) : field(val) {}
    Struct406() = default;
};

struct polymorphic_Struct406 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*406; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct406(int val) : field(val) {}
       polymorphic_Struct406() = default;
};
/*
inline int do_work(Struct406& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*406; i=i+1) {}
         return reps*2;
}*/


struct Struct407 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*407; i=i+1) {}
        return reps*2;
    }

    Struct407(int val) : field(val) {}
    Struct407() = default;
};

struct polymorphic_Struct407 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*407; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct407(int val) : field(val) {}
       polymorphic_Struct407() = default;
};
/*
inline int do_work(Struct407& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*407; i=i+1) {}
         return reps*2;
}*/


struct Struct408 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*408; i=i+1) {}
        return reps*2;
    }

    Struct408(int val) : field(val) {}
    Struct408() = default;
};

struct polymorphic_Struct408 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*408; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct408(int val) : field(val) {}
       polymorphic_Struct408() = default;
};
/*
inline int do_work(Struct408& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*408; i=i+1) {}
         return reps*2;
}*/


struct Struct409 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*409; i=i+1) {}
        return reps*2;
    }

    Struct409(int val) : field(val) {}
    Struct409() = default;
};

struct polymorphic_Struct409 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*409; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct409(int val) : field(val) {}
       polymorphic_Struct409() = default;
};
/*
inline int do_work(Struct409& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*409; i=i+1) {}
         return reps*2;
}*/


struct Struct410 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*410; i=i+1) {}
        return reps*2;
    }

    Struct410(int val) : field(val) {}
    Struct410() = default;
};

struct polymorphic_Struct410 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*410; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct410(int val) : field(val) {}
       polymorphic_Struct410() = default;
};
/*
inline int do_work(Struct410& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*410; i=i+1) {}
         return reps*2;
}*/


struct Struct411 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*411; i=i+1) {}
        return reps*2;
    }

    Struct411(int val) : field(val) {}
    Struct411() = default;
};

struct polymorphic_Struct411 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*411; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct411(int val) : field(val) {}
       polymorphic_Struct411() = default;
};
/*
inline int do_work(Struct411& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*411; i=i+1) {}
         return reps*2;
}*/


struct Struct412 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*412; i=i+1) {}
        return reps*2;
    }

    Struct412(int val) : field(val) {}
    Struct412() = default;
};

struct polymorphic_Struct412 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*412; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct412(int val) : field(val) {}
       polymorphic_Struct412() = default;
};
/*
inline int do_work(Struct412& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*412; i=i+1) {}
         return reps*2;
}*/


struct Struct413 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*413; i=i+1) {}
        return reps*2;
    }

    Struct413(int val) : field(val) {}
    Struct413() = default;
};

struct polymorphic_Struct413 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*413; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct413(int val) : field(val) {}
       polymorphic_Struct413() = default;
};
/*
inline int do_work(Struct413& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*413; i=i+1) {}
         return reps*2;
}*/


struct Struct414 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*414; i=i+1) {}
        return reps*2;
    }

    Struct414(int val) : field(val) {}
    Struct414() = default;
};

struct polymorphic_Struct414 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*414; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct414(int val) : field(val) {}
       polymorphic_Struct414() = default;
};
/*
inline int do_work(Struct414& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*414; i=i+1) {}
         return reps*2;
}*/


struct Struct415 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*415; i=i+1) {}
        return reps*2;
    }

    Struct415(int val) : field(val) {}
    Struct415() = default;
};

struct polymorphic_Struct415 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*415; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct415(int val) : field(val) {}
       polymorphic_Struct415() = default;
};
/*
inline int do_work(Struct415& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*415; i=i+1) {}
         return reps*2;
}*/


struct Struct416 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*416; i=i+1) {}
        return reps*2;
    }

    Struct416(int val) : field(val) {}
    Struct416() = default;
};

struct polymorphic_Struct416 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*416; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct416(int val) : field(val) {}
       polymorphic_Struct416() = default;
};
/*
inline int do_work(Struct416& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*416; i=i+1) {}
         return reps*2;
}*/


struct Struct417 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*417; i=i+1) {}
        return reps*2;
    }

    Struct417(int val) : field(val) {}
    Struct417() = default;
};

struct polymorphic_Struct417 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*417; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct417(int val) : field(val) {}
       polymorphic_Struct417() = default;
};
/*
inline int do_work(Struct417& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*417; i=i+1) {}
         return reps*2;
}*/


struct Struct418 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*418; i=i+1) {}
        return reps*2;
    }

    Struct418(int val) : field(val) {}
    Struct418() = default;
};

struct polymorphic_Struct418 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*418; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct418(int val) : field(val) {}
       polymorphic_Struct418() = default;
};
/*
inline int do_work(Struct418& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*418; i=i+1) {}
         return reps*2;
}*/


struct Struct419 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*419; i=i+1) {}
        return reps*2;
    }

    Struct419(int val) : field(val) {}
    Struct419() = default;
};

struct polymorphic_Struct419 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*419; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct419(int val) : field(val) {}
       polymorphic_Struct419() = default;
};
/*
inline int do_work(Struct419& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*419; i=i+1) {}
         return reps*2;
}*/


struct Struct420 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*420; i=i+1) {}
        return reps*2;
    }

    Struct420(int val) : field(val) {}
    Struct420() = default;
};

struct polymorphic_Struct420 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*420; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct420(int val) : field(val) {}
       polymorphic_Struct420() = default;
};
/*
inline int do_work(Struct420& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*420; i=i+1) {}
         return reps*2;
}*/


struct Struct421 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*421; i=i+1) {}
        return reps*2;
    }

    Struct421(int val) : field(val) {}
    Struct421() = default;
};

struct polymorphic_Struct421 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*421; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct421(int val) : field(val) {}
       polymorphic_Struct421() = default;
};
/*
inline int do_work(Struct421& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*421; i=i+1) {}
         return reps*2;
}*/


struct Struct422 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*422; i=i+1) {}
        return reps*2;
    }

    Struct422(int val) : field(val) {}
    Struct422() = default;
};

struct polymorphic_Struct422 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*422; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct422(int val) : field(val) {}
       polymorphic_Struct422() = default;
};
/*
inline int do_work(Struct422& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*422; i=i+1) {}
         return reps*2;
}*/


struct Struct423 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*423; i=i+1) {}
        return reps*2;
    }

    Struct423(int val) : field(val) {}
    Struct423() = default;
};

struct polymorphic_Struct423 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*423; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct423(int val) : field(val) {}
       polymorphic_Struct423() = default;
};
/*
inline int do_work(Struct423& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*423; i=i+1) {}
         return reps*2;
}*/


struct Struct424 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*424; i=i+1) {}
        return reps*2;
    }

    Struct424(int val) : field(val) {}
    Struct424() = default;
};

struct polymorphic_Struct424 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*424; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct424(int val) : field(val) {}
       polymorphic_Struct424() = default;
};
/*
inline int do_work(Struct424& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*424; i=i+1) {}
         return reps*2;
}*/


struct Struct425 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*425; i=i+1) {}
        return reps*2;
    }

    Struct425(int val) : field(val) {}
    Struct425() = default;
};

struct polymorphic_Struct425 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*425; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct425(int val) : field(val) {}
       polymorphic_Struct425() = default;
};
/*
inline int do_work(Struct425& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*425; i=i+1) {}
         return reps*2;
}*/


struct Struct426 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*426; i=i+1) {}
        return reps*2;
    }

    Struct426(int val) : field(val) {}
    Struct426() = default;
};

struct polymorphic_Struct426 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*426; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct426(int val) : field(val) {}
       polymorphic_Struct426() = default;
};
/*
inline int do_work(Struct426& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*426; i=i+1) {}
         return reps*2;
}*/


struct Struct427 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*427; i=i+1) {}
        return reps*2;
    }

    Struct427(int val) : field(val) {}
    Struct427() = default;
};

struct polymorphic_Struct427 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*427; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct427(int val) : field(val) {}
       polymorphic_Struct427() = default;
};
/*
inline int do_work(Struct427& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*427; i=i+1) {}
         return reps*2;
}*/


struct Struct428 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*428; i=i+1) {}
        return reps*2;
    }

    Struct428(int val) : field(val) {}
    Struct428() = default;
};

struct polymorphic_Struct428 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*428; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct428(int val) : field(val) {}
       polymorphic_Struct428() = default;
};
/*
inline int do_work(Struct428& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*428; i=i+1) {}
         return reps*2;
}*/


struct Struct429 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*429; i=i+1) {}
        return reps*2;
    }

    Struct429(int val) : field(val) {}
    Struct429() = default;
};

struct polymorphic_Struct429 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*429; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct429(int val) : field(val) {}
       polymorphic_Struct429() = default;
};
/*
inline int do_work(Struct429& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*429; i=i+1) {}
         return reps*2;
}*/


struct Struct430 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*430; i=i+1) {}
        return reps*2;
    }

    Struct430(int val) : field(val) {}
    Struct430() = default;
};

struct polymorphic_Struct430 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*430; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct430(int val) : field(val) {}
       polymorphic_Struct430() = default;
};
/*
inline int do_work(Struct430& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*430; i=i+1) {}
         return reps*2;
}*/


struct Struct431 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*431; i=i+1) {}
        return reps*2;
    }

    Struct431(int val) : field(val) {}
    Struct431() = default;
};

struct polymorphic_Struct431 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*431; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct431(int val) : field(val) {}
       polymorphic_Struct431() = default;
};
/*
inline int do_work(Struct431& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*431; i=i+1) {}
         return reps*2;
}*/


struct Struct432 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*432; i=i+1) {}
        return reps*2;
    }

    Struct432(int val) : field(val) {}
    Struct432() = default;
};

struct polymorphic_Struct432 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*432; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct432(int val) : field(val) {}
       polymorphic_Struct432() = default;
};
/*
inline int do_work(Struct432& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*432; i=i+1) {}
         return reps*2;
}*/


struct Struct433 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*433; i=i+1) {}
        return reps*2;
    }

    Struct433(int val) : field(val) {}
    Struct433() = default;
};

struct polymorphic_Struct433 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*433; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct433(int val) : field(val) {}
       polymorphic_Struct433() = default;
};
/*
inline int do_work(Struct433& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*433; i=i+1) {}
         return reps*2;
}*/


struct Struct434 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*434; i=i+1) {}
        return reps*2;
    }

    Struct434(int val) : field(val) {}
    Struct434() = default;
};

struct polymorphic_Struct434 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*434; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct434(int val) : field(val) {}
       polymorphic_Struct434() = default;
};
/*
inline int do_work(Struct434& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*434; i=i+1) {}
         return reps*2;
}*/


struct Struct435 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*435; i=i+1) {}
        return reps*2;
    }

    Struct435(int val) : field(val) {}
    Struct435() = default;
};

struct polymorphic_Struct435 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*435; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct435(int val) : field(val) {}
       polymorphic_Struct435() = default;
};
/*
inline int do_work(Struct435& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*435; i=i+1) {}
         return reps*2;
}*/


struct Struct436 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*436; i=i+1) {}
        return reps*2;
    }

    Struct436(int val) : field(val) {}
    Struct436() = default;
};

struct polymorphic_Struct436 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*436; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct436(int val) : field(val) {}
       polymorphic_Struct436() = default;
};
/*
inline int do_work(Struct436& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*436; i=i+1) {}
         return reps*2;
}*/


struct Struct437 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*437; i=i+1) {}
        return reps*2;
    }

    Struct437(int val) : field(val) {}
    Struct437() = default;
};

struct polymorphic_Struct437 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*437; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct437(int val) : field(val) {}
       polymorphic_Struct437() = default;
};
/*
inline int do_work(Struct437& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*437; i=i+1) {}
         return reps*2;
}*/


struct Struct438 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*438; i=i+1) {}
        return reps*2;
    }

    Struct438(int val) : field(val) {}
    Struct438() = default;
};

struct polymorphic_Struct438 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*438; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct438(int val) : field(val) {}
       polymorphic_Struct438() = default;
};
/*
inline int do_work(Struct438& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*438; i=i+1) {}
         return reps*2;
}*/


struct Struct439 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*439; i=i+1) {}
        return reps*2;
    }

    Struct439(int val) : field(val) {}
    Struct439() = default;
};

struct polymorphic_Struct439 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*439; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct439(int val) : field(val) {}
       polymorphic_Struct439() = default;
};
/*
inline int do_work(Struct439& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*439; i=i+1) {}
         return reps*2;
}*/


struct Struct440 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*440; i=i+1) {}
        return reps*2;
    }

    Struct440(int val) : field(val) {}
    Struct440() = default;
};

struct polymorphic_Struct440 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*440; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct440(int val) : field(val) {}
       polymorphic_Struct440() = default;
};
/*
inline int do_work(Struct440& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*440; i=i+1) {}
         return reps*2;
}*/


struct Struct441 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*441; i=i+1) {}
        return reps*2;
    }

    Struct441(int val) : field(val) {}
    Struct441() = default;
};

struct polymorphic_Struct441 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*441; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct441(int val) : field(val) {}
       polymorphic_Struct441() = default;
};
/*
inline int do_work(Struct441& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*441; i=i+1) {}
         return reps*2;
}*/


struct Struct442 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*442; i=i+1) {}
        return reps*2;
    }

    Struct442(int val) : field(val) {}
    Struct442() = default;
};

struct polymorphic_Struct442 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*442; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct442(int val) : field(val) {}
       polymorphic_Struct442() = default;
};
/*
inline int do_work(Struct442& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*442; i=i+1) {}
         return reps*2;
}*/


struct Struct443 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*443; i=i+1) {}
        return reps*2;
    }

    Struct443(int val) : field(val) {}
    Struct443() = default;
};

struct polymorphic_Struct443 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*443; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct443(int val) : field(val) {}
       polymorphic_Struct443() = default;
};
/*
inline int do_work(Struct443& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*443; i=i+1) {}
         return reps*2;
}*/


struct Struct444 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*444; i=i+1) {}
        return reps*2;
    }

    Struct444(int val) : field(val) {}
    Struct444() = default;
};

struct polymorphic_Struct444 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*444; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct444(int val) : field(val) {}
       polymorphic_Struct444() = default;
};
/*
inline int do_work(Struct444& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*444; i=i+1) {}
         return reps*2;
}*/


struct Struct445 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*445; i=i+1) {}
        return reps*2;
    }

    Struct445(int val) : field(val) {}
    Struct445() = default;
};

struct polymorphic_Struct445 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*445; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct445(int val) : field(val) {}
       polymorphic_Struct445() = default;
};
/*
inline int do_work(Struct445& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*445; i=i+1) {}
         return reps*2;
}*/


struct Struct446 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*446; i=i+1) {}
        return reps*2;
    }

    Struct446(int val) : field(val) {}
    Struct446() = default;
};

struct polymorphic_Struct446 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*446; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct446(int val) : field(val) {}
       polymorphic_Struct446() = default;
};
/*
inline int do_work(Struct446& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*446; i=i+1) {}
         return reps*2;
}*/


struct Struct447 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*447; i=i+1) {}
        return reps*2;
    }

    Struct447(int val) : field(val) {}
    Struct447() = default;
};

struct polymorphic_Struct447 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*447; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct447(int val) : field(val) {}
       polymorphic_Struct447() = default;
};
/*
inline int do_work(Struct447& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*447; i=i+1) {}
         return reps*2;
}*/


struct Struct448 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*448; i=i+1) {}
        return reps*2;
    }

    Struct448(int val) : field(val) {}
    Struct448() = default;
};

struct polymorphic_Struct448 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*448; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct448(int val) : field(val) {}
       polymorphic_Struct448() = default;
};
/*
inline int do_work(Struct448& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*448; i=i+1) {}
         return reps*2;
}*/


struct Struct449 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*449; i=i+1) {}
        return reps*2;
    }

    Struct449(int val) : field(val) {}
    Struct449() = default;
};

struct polymorphic_Struct449 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*449; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct449(int val) : field(val) {}
       polymorphic_Struct449() = default;
};
/*
inline int do_work(Struct449& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*449; i=i+1) {}
         return reps*2;
}*/


struct Struct450 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*450; i=i+1) {}
        return reps*2;
    }

    Struct450(int val) : field(val) {}
    Struct450() = default;
};

struct polymorphic_Struct450 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*450; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct450(int val) : field(val) {}
       polymorphic_Struct450() = default;
};
/*
inline int do_work(Struct450& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*450; i=i+1) {}
         return reps*2;
}*/


struct Struct451 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*451; i=i+1) {}
        return reps*2;
    }

    Struct451(int val) : field(val) {}
    Struct451() = default;
};

struct polymorphic_Struct451 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*451; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct451(int val) : field(val) {}
       polymorphic_Struct451() = default;
};
/*
inline int do_work(Struct451& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*451; i=i+1) {}
         return reps*2;
}*/


struct Struct452 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*452; i=i+1) {}
        return reps*2;
    }

    Struct452(int val) : field(val) {}
    Struct452() = default;
};

struct polymorphic_Struct452 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*452; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct452(int val) : field(val) {}
       polymorphic_Struct452() = default;
};
/*
inline int do_work(Struct452& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*452; i=i+1) {}
         return reps*2;
}*/


struct Struct453 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*453; i=i+1) {}
        return reps*2;
    }

    Struct453(int val) : field(val) {}
    Struct453() = default;
};

struct polymorphic_Struct453 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*453; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct453(int val) : field(val) {}
       polymorphic_Struct453() = default;
};
/*
inline int do_work(Struct453& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*453; i=i+1) {}
         return reps*2;
}*/


struct Struct454 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*454; i=i+1) {}
        return reps*2;
    }

    Struct454(int val) : field(val) {}
    Struct454() = default;
};

struct polymorphic_Struct454 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*454; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct454(int val) : field(val) {}
       polymorphic_Struct454() = default;
};
/*
inline int do_work(Struct454& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*454; i=i+1) {}
         return reps*2;
}*/


struct Struct455 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*455; i=i+1) {}
        return reps*2;
    }

    Struct455(int val) : field(val) {}
    Struct455() = default;
};

struct polymorphic_Struct455 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*455; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct455(int val) : field(val) {}
       polymorphic_Struct455() = default;
};
/*
inline int do_work(Struct455& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*455; i=i+1) {}
         return reps*2;
}*/


struct Struct456 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*456; i=i+1) {}
        return reps*2;
    }

    Struct456(int val) : field(val) {}
    Struct456() = default;
};

struct polymorphic_Struct456 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*456; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct456(int val) : field(val) {}
       polymorphic_Struct456() = default;
};
/*
inline int do_work(Struct456& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*456; i=i+1) {}
         return reps*2;
}*/


struct Struct457 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*457; i=i+1) {}
        return reps*2;
    }

    Struct457(int val) : field(val) {}
    Struct457() = default;
};

struct polymorphic_Struct457 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*457; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct457(int val) : field(val) {}
       polymorphic_Struct457() = default;
};
/*
inline int do_work(Struct457& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*457; i=i+1) {}
         return reps*2;
}*/


struct Struct458 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*458; i=i+1) {}
        return reps*2;
    }

    Struct458(int val) : field(val) {}
    Struct458() = default;
};

struct polymorphic_Struct458 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*458; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct458(int val) : field(val) {}
       polymorphic_Struct458() = default;
};
/*
inline int do_work(Struct458& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*458; i=i+1) {}
         return reps*2;
}*/


struct Struct459 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*459; i=i+1) {}
        return reps*2;
    }

    Struct459(int val) : field(val) {}
    Struct459() = default;
};

struct polymorphic_Struct459 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*459; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct459(int val) : field(val) {}
       polymorphic_Struct459() = default;
};
/*
inline int do_work(Struct459& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*459; i=i+1) {}
         return reps*2;
}*/


struct Struct460 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*460; i=i+1) {}
        return reps*2;
    }

    Struct460(int val) : field(val) {}
    Struct460() = default;
};

struct polymorphic_Struct460 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*460; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct460(int val) : field(val) {}
       polymorphic_Struct460() = default;
};
/*
inline int do_work(Struct460& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*460; i=i+1) {}
         return reps*2;
}*/


struct Struct461 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*461; i=i+1) {}
        return reps*2;
    }

    Struct461(int val) : field(val) {}
    Struct461() = default;
};

struct polymorphic_Struct461 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*461; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct461(int val) : field(val) {}
       polymorphic_Struct461() = default;
};
/*
inline int do_work(Struct461& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*461; i=i+1) {}
         return reps*2;
}*/


struct Struct462 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*462; i=i+1) {}
        return reps*2;
    }

    Struct462(int val) : field(val) {}
    Struct462() = default;
};

struct polymorphic_Struct462 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*462; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct462(int val) : field(val) {}
       polymorphic_Struct462() = default;
};
/*
inline int do_work(Struct462& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*462; i=i+1) {}
         return reps*2;
}*/


struct Struct463 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*463; i=i+1) {}
        return reps*2;
    }

    Struct463(int val) : field(val) {}
    Struct463() = default;
};

struct polymorphic_Struct463 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*463; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct463(int val) : field(val) {}
       polymorphic_Struct463() = default;
};
/*
inline int do_work(Struct463& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*463; i=i+1) {}
         return reps*2;
}*/


struct Struct464 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*464; i=i+1) {}
        return reps*2;
    }

    Struct464(int val) : field(val) {}
    Struct464() = default;
};

struct polymorphic_Struct464 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*464; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct464(int val) : field(val) {}
       polymorphic_Struct464() = default;
};
/*
inline int do_work(Struct464& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*464; i=i+1) {}
         return reps*2;
}*/


struct Struct465 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*465; i=i+1) {}
        return reps*2;
    }

    Struct465(int val) : field(val) {}
    Struct465() = default;
};

struct polymorphic_Struct465 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*465; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct465(int val) : field(val) {}
       polymorphic_Struct465() = default;
};
/*
inline int do_work(Struct465& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*465; i=i+1) {}
         return reps*2;
}*/


struct Struct466 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*466; i=i+1) {}
        return reps*2;
    }

    Struct466(int val) : field(val) {}
    Struct466() = default;
};

struct polymorphic_Struct466 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*466; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct466(int val) : field(val) {}
       polymorphic_Struct466() = default;
};
/*
inline int do_work(Struct466& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*466; i=i+1) {}
         return reps*2;
}*/


struct Struct467 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*467; i=i+1) {}
        return reps*2;
    }

    Struct467(int val) : field(val) {}
    Struct467() = default;
};

struct polymorphic_Struct467 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*467; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct467(int val) : field(val) {}
       polymorphic_Struct467() = default;
};
/*
inline int do_work(Struct467& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*467; i=i+1) {}
         return reps*2;
}*/


struct Struct468 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*468; i=i+1) {}
        return reps*2;
    }

    Struct468(int val) : field(val) {}
    Struct468() = default;
};

struct polymorphic_Struct468 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*468; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct468(int val) : field(val) {}
       polymorphic_Struct468() = default;
};
/*
inline int do_work(Struct468& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*468; i=i+1) {}
         return reps*2;
}*/


struct Struct469 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*469; i=i+1) {}
        return reps*2;
    }

    Struct469(int val) : field(val) {}
    Struct469() = default;
};

struct polymorphic_Struct469 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*469; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct469(int val) : field(val) {}
       polymorphic_Struct469() = default;
};
/*
inline int do_work(Struct469& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*469; i=i+1) {}
         return reps*2;
}*/


struct Struct470 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*470; i=i+1) {}
        return reps*2;
    }

    Struct470(int val) : field(val) {}
    Struct470() = default;
};

struct polymorphic_Struct470 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*470; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct470(int val) : field(val) {}
       polymorphic_Struct470() = default;
};
/*
inline int do_work(Struct470& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*470; i=i+1) {}
         return reps*2;
}*/


struct Struct471 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*471; i=i+1) {}
        return reps*2;
    }

    Struct471(int val) : field(val) {}
    Struct471() = default;
};

struct polymorphic_Struct471 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*471; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct471(int val) : field(val) {}
       polymorphic_Struct471() = default;
};
/*
inline int do_work(Struct471& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*471; i=i+1) {}
         return reps*2;
}*/


struct Struct472 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*472; i=i+1) {}
        return reps*2;
    }

    Struct472(int val) : field(val) {}
    Struct472() = default;
};

struct polymorphic_Struct472 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*472; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct472(int val) : field(val) {}
       polymorphic_Struct472() = default;
};
/*
inline int do_work(Struct472& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*472; i=i+1) {}
         return reps*2;
}*/


struct Struct473 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*473; i=i+1) {}
        return reps*2;
    }

    Struct473(int val) : field(val) {}
    Struct473() = default;
};

struct polymorphic_Struct473 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*473; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct473(int val) : field(val) {}
       polymorphic_Struct473() = default;
};
/*
inline int do_work(Struct473& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*473; i=i+1) {}
         return reps*2;
}*/


struct Struct474 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*474; i=i+1) {}
        return reps*2;
    }

    Struct474(int val) : field(val) {}
    Struct474() = default;
};

struct polymorphic_Struct474 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*474; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct474(int val) : field(val) {}
       polymorphic_Struct474() = default;
};
/*
inline int do_work(Struct474& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*474; i=i+1) {}
         return reps*2;
}*/


struct Struct475 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*475; i=i+1) {}
        return reps*2;
    }

    Struct475(int val) : field(val) {}
    Struct475() = default;
};

struct polymorphic_Struct475 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*475; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct475(int val) : field(val) {}
       polymorphic_Struct475() = default;
};
/*
inline int do_work(Struct475& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*475; i=i+1) {}
         return reps*2;
}*/


struct Struct476 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*476; i=i+1) {}
        return reps*2;
    }

    Struct476(int val) : field(val) {}
    Struct476() = default;
};

struct polymorphic_Struct476 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*476; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct476(int val) : field(val) {}
       polymorphic_Struct476() = default;
};
/*
inline int do_work(Struct476& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*476; i=i+1) {}
         return reps*2;
}*/


struct Struct477 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*477; i=i+1) {}
        return reps*2;
    }

    Struct477(int val) : field(val) {}
    Struct477() = default;
};

struct polymorphic_Struct477 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*477; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct477(int val) : field(val) {}
       polymorphic_Struct477() = default;
};
/*
inline int do_work(Struct477& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*477; i=i+1) {}
         return reps*2;
}*/


struct Struct478 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*478; i=i+1) {}
        return reps*2;
    }

    Struct478(int val) : field(val) {}
    Struct478() = default;
};

struct polymorphic_Struct478 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*478; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct478(int val) : field(val) {}
       polymorphic_Struct478() = default;
};
/*
inline int do_work(Struct478& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*478; i=i+1) {}
         return reps*2;
}*/


struct Struct479 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*479; i=i+1) {}
        return reps*2;
    }

    Struct479(int val) : field(val) {}
    Struct479() = default;
};

struct polymorphic_Struct479 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*479; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct479(int val) : field(val) {}
       polymorphic_Struct479() = default;
};
/*
inline int do_work(Struct479& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*479; i=i+1) {}
         return reps*2;
}*/


struct Struct480 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*480; i=i+1) {}
        return reps*2;
    }

    Struct480(int val) : field(val) {}
    Struct480() = default;
};

struct polymorphic_Struct480 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*480; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct480(int val) : field(val) {}
       polymorphic_Struct480() = default;
};
/*
inline int do_work(Struct480& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*480; i=i+1) {}
         return reps*2;
}*/


struct Struct481 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*481; i=i+1) {}
        return reps*2;
    }

    Struct481(int val) : field(val) {}
    Struct481() = default;
};

struct polymorphic_Struct481 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*481; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct481(int val) : field(val) {}
       polymorphic_Struct481() = default;
};
/*
inline int do_work(Struct481& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*481; i=i+1) {}
         return reps*2;
}*/


struct Struct482 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*482; i=i+1) {}
        return reps*2;
    }

    Struct482(int val) : field(val) {}
    Struct482() = default;
};

struct polymorphic_Struct482 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*482; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct482(int val) : field(val) {}
       polymorphic_Struct482() = default;
};
/*
inline int do_work(Struct482& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*482; i=i+1) {}
         return reps*2;
}*/


struct Struct483 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*483; i=i+1) {}
        return reps*2;
    }

    Struct483(int val) : field(val) {}
    Struct483() = default;
};

struct polymorphic_Struct483 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*483; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct483(int val) : field(val) {}
       polymorphic_Struct483() = default;
};
/*
inline int do_work(Struct483& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*483; i=i+1) {}
         return reps*2;
}*/


struct Struct484 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*484; i=i+1) {}
        return reps*2;
    }

    Struct484(int val) : field(val) {}
    Struct484() = default;
};

struct polymorphic_Struct484 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*484; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct484(int val) : field(val) {}
       polymorphic_Struct484() = default;
};
/*
inline int do_work(Struct484& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*484; i=i+1) {}
         return reps*2;
}*/


struct Struct485 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*485; i=i+1) {}
        return reps*2;
    }

    Struct485(int val) : field(val) {}
    Struct485() = default;
};

struct polymorphic_Struct485 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*485; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct485(int val) : field(val) {}
       polymorphic_Struct485() = default;
};
/*
inline int do_work(Struct485& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*485; i=i+1) {}
         return reps*2;
}*/


struct Struct486 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*486; i=i+1) {}
        return reps*2;
    }

    Struct486(int val) : field(val) {}
    Struct486() = default;
};

struct polymorphic_Struct486 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*486; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct486(int val) : field(val) {}
       polymorphic_Struct486() = default;
};
/*
inline int do_work(Struct486& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*486; i=i+1) {}
         return reps*2;
}*/


struct Struct487 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*487; i=i+1) {}
        return reps*2;
    }

    Struct487(int val) : field(val) {}
    Struct487() = default;
};

struct polymorphic_Struct487 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*487; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct487(int val) : field(val) {}
       polymorphic_Struct487() = default;
};
/*
inline int do_work(Struct487& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*487; i=i+1) {}
         return reps*2;
}*/


struct Struct488 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*488; i=i+1) {}
        return reps*2;
    }

    Struct488(int val) : field(val) {}
    Struct488() = default;
};

struct polymorphic_Struct488 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*488; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct488(int val) : field(val) {}
       polymorphic_Struct488() = default;
};
/*
inline int do_work(Struct488& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*488; i=i+1) {}
         return reps*2;
}*/


struct Struct489 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*489; i=i+1) {}
        return reps*2;
    }

    Struct489(int val) : field(val) {}
    Struct489() = default;
};

struct polymorphic_Struct489 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*489; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct489(int val) : field(val) {}
       polymorphic_Struct489() = default;
};
/*
inline int do_work(Struct489& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*489; i=i+1) {}
         return reps*2;
}*/


struct Struct490 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*490; i=i+1) {}
        return reps*2;
    }

    Struct490(int val) : field(val) {}
    Struct490() = default;
};

struct polymorphic_Struct490 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*490; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct490(int val) : field(val) {}
       polymorphic_Struct490() = default;
};
/*
inline int do_work(Struct490& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*490; i=i+1) {}
         return reps*2;
}*/


struct Struct491 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*491; i=i+1) {}
        return reps*2;
    }

    Struct491(int val) : field(val) {}
    Struct491() = default;
};

struct polymorphic_Struct491 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*491; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct491(int val) : field(val) {}
       polymorphic_Struct491() = default;
};
/*
inline int do_work(Struct491& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*491; i=i+1) {}
         return reps*2;
}*/


struct Struct492 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*492; i=i+1) {}
        return reps*2;
    }

    Struct492(int val) : field(val) {}
    Struct492() = default;
};

struct polymorphic_Struct492 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*492; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct492(int val) : field(val) {}
       polymorphic_Struct492() = default;
};
/*
inline int do_work(Struct492& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*492; i=i+1) {}
         return reps*2;
}*/


struct Struct493 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*493; i=i+1) {}
        return reps*2;
    }

    Struct493(int val) : field(val) {}
    Struct493() = default;
};

struct polymorphic_Struct493 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*493; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct493(int val) : field(val) {}
       polymorphic_Struct493() = default;
};
/*
inline int do_work(Struct493& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*493; i=i+1) {}
         return reps*2;
}*/


struct Struct494 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*494; i=i+1) {}
        return reps*2;
    }

    Struct494(int val) : field(val) {}
    Struct494() = default;
};

struct polymorphic_Struct494 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*494; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct494(int val) : field(val) {}
       polymorphic_Struct494() = default;
};
/*
inline int do_work(Struct494& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*494; i=i+1) {}
         return reps*2;
}*/


struct Struct495 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*495; i=i+1) {}
        return reps*2;
    }

    Struct495(int val) : field(val) {}
    Struct495() = default;
};

struct polymorphic_Struct495 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*495; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct495(int val) : field(val) {}
       polymorphic_Struct495() = default;
};
/*
inline int do_work(Struct495& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*495; i=i+1) {}
         return reps*2;
}*/


struct Struct496 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*496; i=i+1) {}
        return reps*2;
    }

    Struct496(int val) : field(val) {}
    Struct496() = default;
};

struct polymorphic_Struct496 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*496; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct496(int val) : field(val) {}
       polymorphic_Struct496() = default;
};
/*
inline int do_work(Struct496& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*496; i=i+1) {}
         return reps*2;
}*/


struct Struct497 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*497; i=i+1) {}
        return reps*2;
    }

    Struct497(int val) : field(val) {}
    Struct497() = default;
};

struct polymorphic_Struct497 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*497; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct497(int val) : field(val) {}
       polymorphic_Struct497() = default;
};
/*
inline int do_work(Struct497& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*497; i=i+1) {}
         return reps*2;
}*/


struct Struct498 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*498; i=i+1) {}
        return reps*2;
    }

    Struct498(int val) : field(val) {}
    Struct498() = default;
};

struct polymorphic_Struct498 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*498; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct498(int val) : field(val) {}
       polymorphic_Struct498() = default;
};
/*
inline int do_work(Struct498& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*498; i=i+1) {}
         return reps*2;
}*/


struct Struct499 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*499; i=i+1) {}
        return reps*2;
    }

    Struct499(int val) : field(val) {}
    Struct499() = default;
};

struct polymorphic_Struct499 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*499; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct499(int val) : field(val) {}
       polymorphic_Struct499() = default;
};
/*
inline int do_work(Struct499& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*499; i=i+1) {}
         return reps*2;
}*/


struct Struct500 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*500; i=i+1) {}
        return reps*2;
    }

    Struct500(int val) : field(val) {}
    Struct500() = default;
};

struct polymorphic_Struct500 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*500; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct500(int val) : field(val) {}
       polymorphic_Struct500() = default;
};
/*
inline int do_work(Struct500& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*500; i=i+1) {}
         return reps*2;
}*/


struct Struct501 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*501; i=i+1) {}
        return reps*2;
    }

    Struct501(int val) : field(val) {}
    Struct501() = default;
};

struct polymorphic_Struct501 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*501; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct501(int val) : field(val) {}
       polymorphic_Struct501() = default;
};
/*
inline int do_work(Struct501& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*501; i=i+1) {}
         return reps*2;
}*/


struct Struct502 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*502; i=i+1) {}
        return reps*2;
    }

    Struct502(int val) : field(val) {}
    Struct502() = default;
};

struct polymorphic_Struct502 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*502; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct502(int val) : field(val) {}
       polymorphic_Struct502() = default;
};
/*
inline int do_work(Struct502& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*502; i=i+1) {}
         return reps*2;
}*/


struct Struct503 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*503; i=i+1) {}
        return reps*2;
    }

    Struct503(int val) : field(val) {}
    Struct503() = default;
};

struct polymorphic_Struct503 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*503; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct503(int val) : field(val) {}
       polymorphic_Struct503() = default;
};
/*
inline int do_work(Struct503& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*503; i=i+1) {}
         return reps*2;
}*/


struct Struct504 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*504; i=i+1) {}
        return reps*2;
    }

    Struct504(int val) : field(val) {}
    Struct504() = default;
};

struct polymorphic_Struct504 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*504; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct504(int val) : field(val) {}
       polymorphic_Struct504() = default;
};
/*
inline int do_work(Struct504& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*504; i=i+1) {}
         return reps*2;
}*/


struct Struct505 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*505; i=i+1) {}
        return reps*2;
    }

    Struct505(int val) : field(val) {}
    Struct505() = default;
};

struct polymorphic_Struct505 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*505; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct505(int val) : field(val) {}
       polymorphic_Struct505() = default;
};
/*
inline int do_work(Struct505& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*505; i=i+1) {}
         return reps*2;
}*/


struct Struct506 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*506; i=i+1) {}
        return reps*2;
    }

    Struct506(int val) : field(val) {}
    Struct506() = default;
};

struct polymorphic_Struct506 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*506; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct506(int val) : field(val) {}
       polymorphic_Struct506() = default;
};
/*
inline int do_work(Struct506& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*506; i=i+1) {}
         return reps*2;
}*/


struct Struct507 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*507; i=i+1) {}
        return reps*2;
    }

    Struct507(int val) : field(val) {}
    Struct507() = default;
};

struct polymorphic_Struct507 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*507; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct507(int val) : field(val) {}
       polymorphic_Struct507() = default;
};
/*
inline int do_work(Struct507& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*507; i=i+1) {}
         return reps*2;
}*/


struct Struct508 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*508; i=i+1) {}
        return reps*2;
    }

    Struct508(int val) : field(val) {}
    Struct508() = default;
};

struct polymorphic_Struct508 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*508; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct508(int val) : field(val) {}
       polymorphic_Struct508() = default;
};
/*
inline int do_work(Struct508& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*508; i=i+1) {}
         return reps*2;
}*/


struct Struct509 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*509; i=i+1) {}
        return reps*2;
    }

    Struct509(int val) : field(val) {}
    Struct509() = default;
};

struct polymorphic_Struct509 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*509; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct509(int val) : field(val) {}
       polymorphic_Struct509() = default;
};
/*
inline int do_work(Struct509& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*509; i=i+1) {}
         return reps*2;
}*/


struct Struct510 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*510; i=i+1) {}
        return reps*2;
    }

    Struct510(int val) : field(val) {}
    Struct510() = default;
};

struct polymorphic_Struct510 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*510; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct510(int val) : field(val) {}
       polymorphic_Struct510() = default;
};
/*
inline int do_work(Struct510& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*510; i=i+1) {}
         return reps*2;
}*/


struct Struct511 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*511; i=i+1) {}
        return reps*2;
    }

    Struct511(int val) : field(val) {}
    Struct511() = default;
};

struct polymorphic_Struct511 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*511; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct511(int val) : field(val) {}
       polymorphic_Struct511() = default;
};
/*
inline int do_work(Struct511& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*511; i=i+1) {}
         return reps*2;
}*/


struct Struct512 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*512; i=i+1) {}
        return reps*2;
    }

    Struct512(int val) : field(val) {}
    Struct512() = default;
};

struct polymorphic_Struct512 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*512; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct512(int val) : field(val) {}
       polymorphic_Struct512() = default;
};
/*
inline int do_work(Struct512& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*512; i=i+1) {}
         return reps*2;
}*/


struct Struct513 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*513; i=i+1) {}
        return reps*2;
    }

    Struct513(int val) : field(val) {}
    Struct513() = default;
};

struct polymorphic_Struct513 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*513; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct513(int val) : field(val) {}
       polymorphic_Struct513() = default;
};
/*
inline int do_work(Struct513& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*513; i=i+1) {}
         return reps*2;
}*/


struct Struct514 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*514; i=i+1) {}
        return reps*2;
    }

    Struct514(int val) : field(val) {}
    Struct514() = default;
};

struct polymorphic_Struct514 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*514; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct514(int val) : field(val) {}
       polymorphic_Struct514() = default;
};
/*
inline int do_work(Struct514& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*514; i=i+1) {}
         return reps*2;
}*/


struct Struct515 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*515; i=i+1) {}
        return reps*2;
    }

    Struct515(int val) : field(val) {}
    Struct515() = default;
};

struct polymorphic_Struct515 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*515; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct515(int val) : field(val) {}
       polymorphic_Struct515() = default;
};
/*
inline int do_work(Struct515& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*515; i=i+1) {}
         return reps*2;
}*/


struct Struct516 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*516; i=i+1) {}
        return reps*2;
    }

    Struct516(int val) : field(val) {}
    Struct516() = default;
};

struct polymorphic_Struct516 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*516; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct516(int val) : field(val) {}
       polymorphic_Struct516() = default;
};
/*
inline int do_work(Struct516& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*516; i=i+1) {}
         return reps*2;
}*/


struct Struct517 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*517; i=i+1) {}
        return reps*2;
    }

    Struct517(int val) : field(val) {}
    Struct517() = default;
};

struct polymorphic_Struct517 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*517; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct517(int val) : field(val) {}
       polymorphic_Struct517() = default;
};
/*
inline int do_work(Struct517& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*517; i=i+1) {}
         return reps*2;
}*/


struct Struct518 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*518; i=i+1) {}
        return reps*2;
    }

    Struct518(int val) : field(val) {}
    Struct518() = default;
};

struct polymorphic_Struct518 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*518; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct518(int val) : field(val) {}
       polymorphic_Struct518() = default;
};
/*
inline int do_work(Struct518& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*518; i=i+1) {}
         return reps*2;
}*/


struct Struct519 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*519; i=i+1) {}
        return reps*2;
    }

    Struct519(int val) : field(val) {}
    Struct519() = default;
};

struct polymorphic_Struct519 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*519; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct519(int val) : field(val) {}
       polymorphic_Struct519() = default;
};
/*
inline int do_work(Struct519& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*519; i=i+1) {}
         return reps*2;
}*/


struct Struct520 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*520; i=i+1) {}
        return reps*2;
    }

    Struct520(int val) : field(val) {}
    Struct520() = default;
};

struct polymorphic_Struct520 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*520; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct520(int val) : field(val) {}
       polymorphic_Struct520() = default;
};
/*
inline int do_work(Struct520& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*520; i=i+1) {}
         return reps*2;
}*/


struct Struct521 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*521; i=i+1) {}
        return reps*2;
    }

    Struct521(int val) : field(val) {}
    Struct521() = default;
};

struct polymorphic_Struct521 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*521; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct521(int val) : field(val) {}
       polymorphic_Struct521() = default;
};
/*
inline int do_work(Struct521& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*521; i=i+1) {}
         return reps*2;
}*/


struct Struct522 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*522; i=i+1) {}
        return reps*2;
    }

    Struct522(int val) : field(val) {}
    Struct522() = default;
};

struct polymorphic_Struct522 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*522; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct522(int val) : field(val) {}
       polymorphic_Struct522() = default;
};
/*
inline int do_work(Struct522& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*522; i=i+1) {}
         return reps*2;
}*/


struct Struct523 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*523; i=i+1) {}
        return reps*2;
    }

    Struct523(int val) : field(val) {}
    Struct523() = default;
};

struct polymorphic_Struct523 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*523; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct523(int val) : field(val) {}
       polymorphic_Struct523() = default;
};
/*
inline int do_work(Struct523& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*523; i=i+1) {}
         return reps*2;
}*/


struct Struct524 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*524; i=i+1) {}
        return reps*2;
    }

    Struct524(int val) : field(val) {}
    Struct524() = default;
};

struct polymorphic_Struct524 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*524; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct524(int val) : field(val) {}
       polymorphic_Struct524() = default;
};
/*
inline int do_work(Struct524& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*524; i=i+1) {}
         return reps*2;
}*/


struct Struct525 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*525; i=i+1) {}
        return reps*2;
    }

    Struct525(int val) : field(val) {}
    Struct525() = default;
};

struct polymorphic_Struct525 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*525; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct525(int val) : field(val) {}
       polymorphic_Struct525() = default;
};
/*
inline int do_work(Struct525& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*525; i=i+1) {}
         return reps*2;
}*/


struct Struct526 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*526; i=i+1) {}
        return reps*2;
    }

    Struct526(int val) : field(val) {}
    Struct526() = default;
};

struct polymorphic_Struct526 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*526; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct526(int val) : field(val) {}
       polymorphic_Struct526() = default;
};
/*
inline int do_work(Struct526& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*526; i=i+1) {}
         return reps*2;
}*/


struct Struct527 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*527; i=i+1) {}
        return reps*2;
    }

    Struct527(int val) : field(val) {}
    Struct527() = default;
};

struct polymorphic_Struct527 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*527; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct527(int val) : field(val) {}
       polymorphic_Struct527() = default;
};
/*
inline int do_work(Struct527& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*527; i=i+1) {}
         return reps*2;
}*/


struct Struct528 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*528; i=i+1) {}
        return reps*2;
    }

    Struct528(int val) : field(val) {}
    Struct528() = default;
};

struct polymorphic_Struct528 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*528; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct528(int val) : field(val) {}
       polymorphic_Struct528() = default;
};
/*
inline int do_work(Struct528& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*528; i=i+1) {}
         return reps*2;
}*/


struct Struct529 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*529; i=i+1) {}
        return reps*2;
    }

    Struct529(int val) : field(val) {}
    Struct529() = default;
};

struct polymorphic_Struct529 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*529; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct529(int val) : field(val) {}
       polymorphic_Struct529() = default;
};
/*
inline int do_work(Struct529& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*529; i=i+1) {}
         return reps*2;
}*/


struct Struct530 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*530; i=i+1) {}
        return reps*2;
    }

    Struct530(int val) : field(val) {}
    Struct530() = default;
};

struct polymorphic_Struct530 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*530; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct530(int val) : field(val) {}
       polymorphic_Struct530() = default;
};
/*
inline int do_work(Struct530& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*530; i=i+1) {}
         return reps*2;
}*/


struct Struct531 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*531; i=i+1) {}
        return reps*2;
    }

    Struct531(int val) : field(val) {}
    Struct531() = default;
};

struct polymorphic_Struct531 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*531; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct531(int val) : field(val) {}
       polymorphic_Struct531() = default;
};
/*
inline int do_work(Struct531& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*531; i=i+1) {}
         return reps*2;
}*/


struct Struct532 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*532; i=i+1) {}
        return reps*2;
    }

    Struct532(int val) : field(val) {}
    Struct532() = default;
};

struct polymorphic_Struct532 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*532; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct532(int val) : field(val) {}
       polymorphic_Struct532() = default;
};
/*
inline int do_work(Struct532& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*532; i=i+1) {}
         return reps*2;
}*/


struct Struct533 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*533; i=i+1) {}
        return reps*2;
    }

    Struct533(int val) : field(val) {}
    Struct533() = default;
};

struct polymorphic_Struct533 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*533; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct533(int val) : field(val) {}
       polymorphic_Struct533() = default;
};
/*
inline int do_work(Struct533& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*533; i=i+1) {}
         return reps*2;
}*/


struct Struct534 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*534; i=i+1) {}
        return reps*2;
    }

    Struct534(int val) : field(val) {}
    Struct534() = default;
};

struct polymorphic_Struct534 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*534; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct534(int val) : field(val) {}
       polymorphic_Struct534() = default;
};
/*
inline int do_work(Struct534& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*534; i=i+1) {}
         return reps*2;
}*/


struct Struct535 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*535; i=i+1) {}
        return reps*2;
    }

    Struct535(int val) : field(val) {}
    Struct535() = default;
};

struct polymorphic_Struct535 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*535; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct535(int val) : field(val) {}
       polymorphic_Struct535() = default;
};
/*
inline int do_work(Struct535& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*535; i=i+1) {}
         return reps*2;
}*/


struct Struct536 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*536; i=i+1) {}
        return reps*2;
    }

    Struct536(int val) : field(val) {}
    Struct536() = default;
};

struct polymorphic_Struct536 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*536; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct536(int val) : field(val) {}
       polymorphic_Struct536() = default;
};
/*
inline int do_work(Struct536& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*536; i=i+1) {}
         return reps*2;
}*/


struct Struct537 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*537; i=i+1) {}
        return reps*2;
    }

    Struct537(int val) : field(val) {}
    Struct537() = default;
};

struct polymorphic_Struct537 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*537; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct537(int val) : field(val) {}
       polymorphic_Struct537() = default;
};
/*
inline int do_work(Struct537& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*537; i=i+1) {}
         return reps*2;
}*/


struct Struct538 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*538; i=i+1) {}
        return reps*2;
    }

    Struct538(int val) : field(val) {}
    Struct538() = default;
};

struct polymorphic_Struct538 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*538; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct538(int val) : field(val) {}
       polymorphic_Struct538() = default;
};
/*
inline int do_work(Struct538& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*538; i=i+1) {}
         return reps*2;
}*/


struct Struct539 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*539; i=i+1) {}
        return reps*2;
    }

    Struct539(int val) : field(val) {}
    Struct539() = default;
};

struct polymorphic_Struct539 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*539; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct539(int val) : field(val) {}
       polymorphic_Struct539() = default;
};
/*
inline int do_work(Struct539& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*539; i=i+1) {}
         return reps*2;
}*/


struct Struct540 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*540; i=i+1) {}
        return reps*2;
    }

    Struct540(int val) : field(val) {}
    Struct540() = default;
};

struct polymorphic_Struct540 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*540; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct540(int val) : field(val) {}
       polymorphic_Struct540() = default;
};
/*
inline int do_work(Struct540& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*540; i=i+1) {}
         return reps*2;
}*/


struct Struct541 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*541; i=i+1) {}
        return reps*2;
    }

    Struct541(int val) : field(val) {}
    Struct541() = default;
};

struct polymorphic_Struct541 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*541; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct541(int val) : field(val) {}
       polymorphic_Struct541() = default;
};
/*
inline int do_work(Struct541& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*541; i=i+1) {}
         return reps*2;
}*/


struct Struct542 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*542; i=i+1) {}
        return reps*2;
    }

    Struct542(int val) : field(val) {}
    Struct542() = default;
};

struct polymorphic_Struct542 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*542; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct542(int val) : field(val) {}
       polymorphic_Struct542() = default;
};
/*
inline int do_work(Struct542& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*542; i=i+1) {}
         return reps*2;
}*/


struct Struct543 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*543; i=i+1) {}
        return reps*2;
    }

    Struct543(int val) : field(val) {}
    Struct543() = default;
};

struct polymorphic_Struct543 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*543; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct543(int val) : field(val) {}
       polymorphic_Struct543() = default;
};
/*
inline int do_work(Struct543& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*543; i=i+1) {}
         return reps*2;
}*/


struct Struct544 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*544; i=i+1) {}
        return reps*2;
    }

    Struct544(int val) : field(val) {}
    Struct544() = default;
};

struct polymorphic_Struct544 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*544; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct544(int val) : field(val) {}
       polymorphic_Struct544() = default;
};
/*
inline int do_work(Struct544& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*544; i=i+1) {}
         return reps*2;
}*/


struct Struct545 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*545; i=i+1) {}
        return reps*2;
    }

    Struct545(int val) : field(val) {}
    Struct545() = default;
};

struct polymorphic_Struct545 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*545; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct545(int val) : field(val) {}
       polymorphic_Struct545() = default;
};
/*
inline int do_work(Struct545& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*545; i=i+1) {}
         return reps*2;
}*/


struct Struct546 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*546; i=i+1) {}
        return reps*2;
    }

    Struct546(int val) : field(val) {}
    Struct546() = default;
};

struct polymorphic_Struct546 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*546; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct546(int val) : field(val) {}
       polymorphic_Struct546() = default;
};
/*
inline int do_work(Struct546& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*546; i=i+1) {}
         return reps*2;
}*/


struct Struct547 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*547; i=i+1) {}
        return reps*2;
    }

    Struct547(int val) : field(val) {}
    Struct547() = default;
};

struct polymorphic_Struct547 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*547; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct547(int val) : field(val) {}
       polymorphic_Struct547() = default;
};
/*
inline int do_work(Struct547& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*547; i=i+1) {}
         return reps*2;
}*/


struct Struct548 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*548; i=i+1) {}
        return reps*2;
    }

    Struct548(int val) : field(val) {}
    Struct548() = default;
};

struct polymorphic_Struct548 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*548; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct548(int val) : field(val) {}
       polymorphic_Struct548() = default;
};
/*
inline int do_work(Struct548& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*548; i=i+1) {}
         return reps*2;
}*/


struct Struct549 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*549; i=i+1) {}
        return reps*2;
    }

    Struct549(int val) : field(val) {}
    Struct549() = default;
};

struct polymorphic_Struct549 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*549; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct549(int val) : field(val) {}
       polymorphic_Struct549() = default;
};
/*
inline int do_work(Struct549& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*549; i=i+1) {}
         return reps*2;
}*/


struct Struct550 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*550; i=i+1) {}
        return reps*2;
    }

    Struct550(int val) : field(val) {}
    Struct550() = default;
};

struct polymorphic_Struct550 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*550; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct550(int val) : field(val) {}
       polymorphic_Struct550() = default;
};
/*
inline int do_work(Struct550& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*550; i=i+1) {}
         return reps*2;
}*/


struct Struct551 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*551; i=i+1) {}
        return reps*2;
    }

    Struct551(int val) : field(val) {}
    Struct551() = default;
};

struct polymorphic_Struct551 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*551; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct551(int val) : field(val) {}
       polymorphic_Struct551() = default;
};
/*
inline int do_work(Struct551& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*551; i=i+1) {}
         return reps*2;
}*/


struct Struct552 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*552; i=i+1) {}
        return reps*2;
    }

    Struct552(int val) : field(val) {}
    Struct552() = default;
};

struct polymorphic_Struct552 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*552; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct552(int val) : field(val) {}
       polymorphic_Struct552() = default;
};
/*
inline int do_work(Struct552& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*552; i=i+1) {}
         return reps*2;
}*/


struct Struct553 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*553; i=i+1) {}
        return reps*2;
    }

    Struct553(int val) : field(val) {}
    Struct553() = default;
};

struct polymorphic_Struct553 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*553; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct553(int val) : field(val) {}
       polymorphic_Struct553() = default;
};
/*
inline int do_work(Struct553& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*553; i=i+1) {}
         return reps*2;
}*/


struct Struct554 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*554; i=i+1) {}
        return reps*2;
    }

    Struct554(int val) : field(val) {}
    Struct554() = default;
};

struct polymorphic_Struct554 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*554; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct554(int val) : field(val) {}
       polymorphic_Struct554() = default;
};
/*
inline int do_work(Struct554& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*554; i=i+1) {}
         return reps*2;
}*/


struct Struct555 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*555; i=i+1) {}
        return reps*2;
    }

    Struct555(int val) : field(val) {}
    Struct555() = default;
};

struct polymorphic_Struct555 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*555; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct555(int val) : field(val) {}
       polymorphic_Struct555() = default;
};
/*
inline int do_work(Struct555& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*555; i=i+1) {}
         return reps*2;
}*/


struct Struct556 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*556; i=i+1) {}
        return reps*2;
    }

    Struct556(int val) : field(val) {}
    Struct556() = default;
};

struct polymorphic_Struct556 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*556; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct556(int val) : field(val) {}
       polymorphic_Struct556() = default;
};
/*
inline int do_work(Struct556& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*556; i=i+1) {}
         return reps*2;
}*/


struct Struct557 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*557; i=i+1) {}
        return reps*2;
    }

    Struct557(int val) : field(val) {}
    Struct557() = default;
};

struct polymorphic_Struct557 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*557; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct557(int val) : field(val) {}
       polymorphic_Struct557() = default;
};
/*
inline int do_work(Struct557& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*557; i=i+1) {}
         return reps*2;
}*/


struct Struct558 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*558; i=i+1) {}
        return reps*2;
    }

    Struct558(int val) : field(val) {}
    Struct558() = default;
};

struct polymorphic_Struct558 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*558; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct558(int val) : field(val) {}
       polymorphic_Struct558() = default;
};
/*
inline int do_work(Struct558& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*558; i=i+1) {}
         return reps*2;
}*/


struct Struct559 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*559; i=i+1) {}
        return reps*2;
    }

    Struct559(int val) : field(val) {}
    Struct559() = default;
};

struct polymorphic_Struct559 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*559; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct559(int val) : field(val) {}
       polymorphic_Struct559() = default;
};
/*
inline int do_work(Struct559& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*559; i=i+1) {}
         return reps*2;
}*/


struct Struct560 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*560; i=i+1) {}
        return reps*2;
    }

    Struct560(int val) : field(val) {}
    Struct560() = default;
};

struct polymorphic_Struct560 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*560; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct560(int val) : field(val) {}
       polymorphic_Struct560() = default;
};
/*
inline int do_work(Struct560& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*560; i=i+1) {}
         return reps*2;
}*/


struct Struct561 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*561; i=i+1) {}
        return reps*2;
    }

    Struct561(int val) : field(val) {}
    Struct561() = default;
};

struct polymorphic_Struct561 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*561; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct561(int val) : field(val) {}
       polymorphic_Struct561() = default;
};
/*
inline int do_work(Struct561& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*561; i=i+1) {}
         return reps*2;
}*/


struct Struct562 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*562; i=i+1) {}
        return reps*2;
    }

    Struct562(int val) : field(val) {}
    Struct562() = default;
};

struct polymorphic_Struct562 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*562; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct562(int val) : field(val) {}
       polymorphic_Struct562() = default;
};
/*
inline int do_work(Struct562& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*562; i=i+1) {}
         return reps*2;
}*/


struct Struct563 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*563; i=i+1) {}
        return reps*2;
    }

    Struct563(int val) : field(val) {}
    Struct563() = default;
};

struct polymorphic_Struct563 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*563; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct563(int val) : field(val) {}
       polymorphic_Struct563() = default;
};
/*
inline int do_work(Struct563& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*563; i=i+1) {}
         return reps*2;
}*/


struct Struct564 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*564; i=i+1) {}
        return reps*2;
    }

    Struct564(int val) : field(val) {}
    Struct564() = default;
};

struct polymorphic_Struct564 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*564; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct564(int val) : field(val) {}
       polymorphic_Struct564() = default;
};
/*
inline int do_work(Struct564& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*564; i=i+1) {}
         return reps*2;
}*/


struct Struct565 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*565; i=i+1) {}
        return reps*2;
    }

    Struct565(int val) : field(val) {}
    Struct565() = default;
};

struct polymorphic_Struct565 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*565; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct565(int val) : field(val) {}
       polymorphic_Struct565() = default;
};
/*
inline int do_work(Struct565& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*565; i=i+1) {}
         return reps*2;
}*/


struct Struct566 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*566; i=i+1) {}
        return reps*2;
    }

    Struct566(int val) : field(val) {}
    Struct566() = default;
};

struct polymorphic_Struct566 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*566; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct566(int val) : field(val) {}
       polymorphic_Struct566() = default;
};
/*
inline int do_work(Struct566& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*566; i=i+1) {}
         return reps*2;
}*/


struct Struct567 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*567; i=i+1) {}
        return reps*2;
    }

    Struct567(int val) : field(val) {}
    Struct567() = default;
};

struct polymorphic_Struct567 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*567; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct567(int val) : field(val) {}
       polymorphic_Struct567() = default;
};
/*
inline int do_work(Struct567& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*567; i=i+1) {}
         return reps*2;
}*/


struct Struct568 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*568; i=i+1) {}
        return reps*2;
    }

    Struct568(int val) : field(val) {}
    Struct568() = default;
};

struct polymorphic_Struct568 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*568; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct568(int val) : field(val) {}
       polymorphic_Struct568() = default;
};
/*
inline int do_work(Struct568& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*568; i=i+1) {}
         return reps*2;
}*/


struct Struct569 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*569; i=i+1) {}
        return reps*2;
    }

    Struct569(int val) : field(val) {}
    Struct569() = default;
};

struct polymorphic_Struct569 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*569; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct569(int val) : field(val) {}
       polymorphic_Struct569() = default;
};
/*
inline int do_work(Struct569& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*569; i=i+1) {}
         return reps*2;
}*/


struct Struct570 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*570; i=i+1) {}
        return reps*2;
    }

    Struct570(int val) : field(val) {}
    Struct570() = default;
};

struct polymorphic_Struct570 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*570; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct570(int val) : field(val) {}
       polymorphic_Struct570() = default;
};
/*
inline int do_work(Struct570& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*570; i=i+1) {}
         return reps*2;
}*/


struct Struct571 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*571; i=i+1) {}
        return reps*2;
    }

    Struct571(int val) : field(val) {}
    Struct571() = default;
};

struct polymorphic_Struct571 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*571; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct571(int val) : field(val) {}
       polymorphic_Struct571() = default;
};
/*
inline int do_work(Struct571& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*571; i=i+1) {}
         return reps*2;
}*/


struct Struct572 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*572; i=i+1) {}
        return reps*2;
    }

    Struct572(int val) : field(val) {}
    Struct572() = default;
};

struct polymorphic_Struct572 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*572; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct572(int val) : field(val) {}
       polymorphic_Struct572() = default;
};
/*
inline int do_work(Struct572& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*572; i=i+1) {}
         return reps*2;
}*/


struct Struct573 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*573; i=i+1) {}
        return reps*2;
    }

    Struct573(int val) : field(val) {}
    Struct573() = default;
};

struct polymorphic_Struct573 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*573; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct573(int val) : field(val) {}
       polymorphic_Struct573() = default;
};
/*
inline int do_work(Struct573& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*573; i=i+1) {}
         return reps*2;
}*/


struct Struct574 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*574; i=i+1) {}
        return reps*2;
    }

    Struct574(int val) : field(val) {}
    Struct574() = default;
};

struct polymorphic_Struct574 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*574; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct574(int val) : field(val) {}
       polymorphic_Struct574() = default;
};
/*
inline int do_work(Struct574& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*574; i=i+1) {}
         return reps*2;
}*/


struct Struct575 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*575; i=i+1) {}
        return reps*2;
    }

    Struct575(int val) : field(val) {}
    Struct575() = default;
};

struct polymorphic_Struct575 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*575; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct575(int val) : field(val) {}
       polymorphic_Struct575() = default;
};
/*
inline int do_work(Struct575& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*575; i=i+1) {}
         return reps*2;
}*/


struct Struct576 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*576; i=i+1) {}
        return reps*2;
    }

    Struct576(int val) : field(val) {}
    Struct576() = default;
};

struct polymorphic_Struct576 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*576; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct576(int val) : field(val) {}
       polymorphic_Struct576() = default;
};
/*
inline int do_work(Struct576& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*576; i=i+1) {}
         return reps*2;
}*/


struct Struct577 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*577; i=i+1) {}
        return reps*2;
    }

    Struct577(int val) : field(val) {}
    Struct577() = default;
};

struct polymorphic_Struct577 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*577; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct577(int val) : field(val) {}
       polymorphic_Struct577() = default;
};
/*
inline int do_work(Struct577& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*577; i=i+1) {}
         return reps*2;
}*/


struct Struct578 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*578; i=i+1) {}
        return reps*2;
    }

    Struct578(int val) : field(val) {}
    Struct578() = default;
};

struct polymorphic_Struct578 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*578; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct578(int val) : field(val) {}
       polymorphic_Struct578() = default;
};
/*
inline int do_work(Struct578& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*578; i=i+1) {}
         return reps*2;
}*/


struct Struct579 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*579; i=i+1) {}
        return reps*2;
    }

    Struct579(int val) : field(val) {}
    Struct579() = default;
};

struct polymorphic_Struct579 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*579; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct579(int val) : field(val) {}
       polymorphic_Struct579() = default;
};
/*
inline int do_work(Struct579& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*579; i=i+1) {}
         return reps*2;
}*/


struct Struct580 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*580; i=i+1) {}
        return reps*2;
    }

    Struct580(int val) : field(val) {}
    Struct580() = default;
};

struct polymorphic_Struct580 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*580; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct580(int val) : field(val) {}
       polymorphic_Struct580() = default;
};
/*
inline int do_work(Struct580& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*580; i=i+1) {}
         return reps*2;
}*/


struct Struct581 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*581; i=i+1) {}
        return reps*2;
    }

    Struct581(int val) : field(val) {}
    Struct581() = default;
};

struct polymorphic_Struct581 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*581; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct581(int val) : field(val) {}
       polymorphic_Struct581() = default;
};
/*
inline int do_work(Struct581& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*581; i=i+1) {}
         return reps*2;
}*/


struct Struct582 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*582; i=i+1) {}
        return reps*2;
    }

    Struct582(int val) : field(val) {}
    Struct582() = default;
};

struct polymorphic_Struct582 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*582; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct582(int val) : field(val) {}
       polymorphic_Struct582() = default;
};
/*
inline int do_work(Struct582& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*582; i=i+1) {}
         return reps*2;
}*/


struct Struct583 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*583; i=i+1) {}
        return reps*2;
    }

    Struct583(int val) : field(val) {}
    Struct583() = default;
};

struct polymorphic_Struct583 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*583; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct583(int val) : field(val) {}
       polymorphic_Struct583() = default;
};
/*
inline int do_work(Struct583& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*583; i=i+1) {}
         return reps*2;
}*/


struct Struct584 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*584; i=i+1) {}
        return reps*2;
    }

    Struct584(int val) : field(val) {}
    Struct584() = default;
};

struct polymorphic_Struct584 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*584; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct584(int val) : field(val) {}
       polymorphic_Struct584() = default;
};
/*
inline int do_work(Struct584& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*584; i=i+1) {}
         return reps*2;
}*/


struct Struct585 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*585; i=i+1) {}
        return reps*2;
    }

    Struct585(int val) : field(val) {}
    Struct585() = default;
};

struct polymorphic_Struct585 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*585; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct585(int val) : field(val) {}
       polymorphic_Struct585() = default;
};
/*
inline int do_work(Struct585& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*585; i=i+1) {}
         return reps*2;
}*/


struct Struct586 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*586; i=i+1) {}
        return reps*2;
    }

    Struct586(int val) : field(val) {}
    Struct586() = default;
};

struct polymorphic_Struct586 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*586; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct586(int val) : field(val) {}
       polymorphic_Struct586() = default;
};
/*
inline int do_work(Struct586& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*586; i=i+1) {}
         return reps*2;
}*/


struct Struct587 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*587; i=i+1) {}
        return reps*2;
    }

    Struct587(int val) : field(val) {}
    Struct587() = default;
};

struct polymorphic_Struct587 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*587; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct587(int val) : field(val) {}
       polymorphic_Struct587() = default;
};
/*
inline int do_work(Struct587& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*587; i=i+1) {}
         return reps*2;
}*/


struct Struct588 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*588; i=i+1) {}
        return reps*2;
    }

    Struct588(int val) : field(val) {}
    Struct588() = default;
};

struct polymorphic_Struct588 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*588; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct588(int val) : field(val) {}
       polymorphic_Struct588() = default;
};
/*
inline int do_work(Struct588& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*588; i=i+1) {}
         return reps*2;
}*/


struct Struct589 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*589; i=i+1) {}
        return reps*2;
    }

    Struct589(int val) : field(val) {}
    Struct589() = default;
};

struct polymorphic_Struct589 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*589; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct589(int val) : field(val) {}
       polymorphic_Struct589() = default;
};
/*
inline int do_work(Struct589& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*589; i=i+1) {}
         return reps*2;
}*/


struct Struct590 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*590; i=i+1) {}
        return reps*2;
    }

    Struct590(int val) : field(val) {}
    Struct590() = default;
};

struct polymorphic_Struct590 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*590; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct590(int val) : field(val) {}
       polymorphic_Struct590() = default;
};
/*
inline int do_work(Struct590& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*590; i=i+1) {}
         return reps*2;
}*/


struct Struct591 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*591; i=i+1) {}
        return reps*2;
    }

    Struct591(int val) : field(val) {}
    Struct591() = default;
};

struct polymorphic_Struct591 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*591; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct591(int val) : field(val) {}
       polymorphic_Struct591() = default;
};
/*
inline int do_work(Struct591& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*591; i=i+1) {}
         return reps*2;
}*/


struct Struct592 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*592; i=i+1) {}
        return reps*2;
    }

    Struct592(int val) : field(val) {}
    Struct592() = default;
};

struct polymorphic_Struct592 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*592; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct592(int val) : field(val) {}
       polymorphic_Struct592() = default;
};
/*
inline int do_work(Struct592& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*592; i=i+1) {}
         return reps*2;
}*/


struct Struct593 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*593; i=i+1) {}
        return reps*2;
    }

    Struct593(int val) : field(val) {}
    Struct593() = default;
};

struct polymorphic_Struct593 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*593; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct593(int val) : field(val) {}
       polymorphic_Struct593() = default;
};
/*
inline int do_work(Struct593& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*593; i=i+1) {}
         return reps*2;
}*/


struct Struct594 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*594; i=i+1) {}
        return reps*2;
    }

    Struct594(int val) : field(val) {}
    Struct594() = default;
};

struct polymorphic_Struct594 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*594; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct594(int val) : field(val) {}
       polymorphic_Struct594() = default;
};
/*
inline int do_work(Struct594& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*594; i=i+1) {}
         return reps*2;
}*/


struct Struct595 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*595; i=i+1) {}
        return reps*2;
    }

    Struct595(int val) : field(val) {}
    Struct595() = default;
};

struct polymorphic_Struct595 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*595; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct595(int val) : field(val) {}
       polymorphic_Struct595() = default;
};
/*
inline int do_work(Struct595& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*595; i=i+1) {}
         return reps*2;
}*/


struct Struct596 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*596; i=i+1) {}
        return reps*2;
    }

    Struct596(int val) : field(val) {}
    Struct596() = default;
};

struct polymorphic_Struct596 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*596; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct596(int val) : field(val) {}
       polymorphic_Struct596() = default;
};
/*
inline int do_work(Struct596& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*596; i=i+1) {}
         return reps*2;
}*/


struct Struct597 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*597; i=i+1) {}
        return reps*2;
    }

    Struct597(int val) : field(val) {}
    Struct597() = default;
};

struct polymorphic_Struct597 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*597; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct597(int val) : field(val) {}
       polymorphic_Struct597() = default;
};
/*
inline int do_work(Struct597& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*597; i=i+1) {}
         return reps*2;
}*/


struct Struct598 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*598; i=i+1) {}
        return reps*2;
    }

    Struct598(int val) : field(val) {}
    Struct598() = default;
};

struct polymorphic_Struct598 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*598; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct598(int val) : field(val) {}
       polymorphic_Struct598() = default;
};
/*
inline int do_work(Struct598& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*598; i=i+1) {}
         return reps*2;
}*/


struct Struct599 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*599; i=i+1) {}
        return reps*2;
    }

    Struct599(int val) : field(val) {}
    Struct599() = default;
};

struct polymorphic_Struct599 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*599; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct599(int val) : field(val) {}
       polymorphic_Struct599() = default;
};
/*
inline int do_work(Struct599& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*599; i=i+1) {}
         return reps*2;
}*/


struct Struct600 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*600; i=i+1) {}
        return reps*2;
    }

    Struct600(int val) : field(val) {}
    Struct600() = default;
};

struct polymorphic_Struct600 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*600; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct600(int val) : field(val) {}
       polymorphic_Struct600() = default;
};
/*
inline int do_work(Struct600& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*600; i=i+1) {}
         return reps*2;
}*/


struct Struct601 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*601; i=i+1) {}
        return reps*2;
    }

    Struct601(int val) : field(val) {}
    Struct601() = default;
};

struct polymorphic_Struct601 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*601; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct601(int val) : field(val) {}
       polymorphic_Struct601() = default;
};
/*
inline int do_work(Struct601& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*601; i=i+1) {}
         return reps*2;
}*/


struct Struct602 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*602; i=i+1) {}
        return reps*2;
    }

    Struct602(int val) : field(val) {}
    Struct602() = default;
};

struct polymorphic_Struct602 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*602; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct602(int val) : field(val) {}
       polymorphic_Struct602() = default;
};
/*
inline int do_work(Struct602& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*602; i=i+1) {}
         return reps*2;
}*/


struct Struct603 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*603; i=i+1) {}
        return reps*2;
    }

    Struct603(int val) : field(val) {}
    Struct603() = default;
};

struct polymorphic_Struct603 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*603; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct603(int val) : field(val) {}
       polymorphic_Struct603() = default;
};
/*
inline int do_work(Struct603& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*603; i=i+1) {}
         return reps*2;
}*/


struct Struct604 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*604; i=i+1) {}
        return reps*2;
    }

    Struct604(int val) : field(val) {}
    Struct604() = default;
};

struct polymorphic_Struct604 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*604; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct604(int val) : field(val) {}
       polymorphic_Struct604() = default;
};
/*
inline int do_work(Struct604& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*604; i=i+1) {}
         return reps*2;
}*/


struct Struct605 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*605; i=i+1) {}
        return reps*2;
    }

    Struct605(int val) : field(val) {}
    Struct605() = default;
};

struct polymorphic_Struct605 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*605; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct605(int val) : field(val) {}
       polymorphic_Struct605() = default;
};
/*
inline int do_work(Struct605& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*605; i=i+1) {}
         return reps*2;
}*/


struct Struct606 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*606; i=i+1) {}
        return reps*2;
    }

    Struct606(int val) : field(val) {}
    Struct606() = default;
};

struct polymorphic_Struct606 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*606; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct606(int val) : field(val) {}
       polymorphic_Struct606() = default;
};
/*
inline int do_work(Struct606& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*606; i=i+1) {}
         return reps*2;
}*/


struct Struct607 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*607; i=i+1) {}
        return reps*2;
    }

    Struct607(int val) : field(val) {}
    Struct607() = default;
};

struct polymorphic_Struct607 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*607; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct607(int val) : field(val) {}
       polymorphic_Struct607() = default;
};
/*
inline int do_work(Struct607& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*607; i=i+1) {}
         return reps*2;
}*/


struct Struct608 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*608; i=i+1) {}
        return reps*2;
    }

    Struct608(int val) : field(val) {}
    Struct608() = default;
};

struct polymorphic_Struct608 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*608; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct608(int val) : field(val) {}
       polymorphic_Struct608() = default;
};
/*
inline int do_work(Struct608& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*608; i=i+1) {}
         return reps*2;
}*/


struct Struct609 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*609; i=i+1) {}
        return reps*2;
    }

    Struct609(int val) : field(val) {}
    Struct609() = default;
};

struct polymorphic_Struct609 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*609; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct609(int val) : field(val) {}
       polymorphic_Struct609() = default;
};
/*
inline int do_work(Struct609& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*609; i=i+1) {}
         return reps*2;
}*/


struct Struct610 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*610; i=i+1) {}
        return reps*2;
    }

    Struct610(int val) : field(val) {}
    Struct610() = default;
};

struct polymorphic_Struct610 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*610; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct610(int val) : field(val) {}
       polymorphic_Struct610() = default;
};
/*
inline int do_work(Struct610& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*610; i=i+1) {}
         return reps*2;
}*/


struct Struct611 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*611; i=i+1) {}
        return reps*2;
    }

    Struct611(int val) : field(val) {}
    Struct611() = default;
};

struct polymorphic_Struct611 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*611; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct611(int val) : field(val) {}
       polymorphic_Struct611() = default;
};
/*
inline int do_work(Struct611& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*611; i=i+1) {}
         return reps*2;
}*/


struct Struct612 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*612; i=i+1) {}
        return reps*2;
    }

    Struct612(int val) : field(val) {}
    Struct612() = default;
};

struct polymorphic_Struct612 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*612; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct612(int val) : field(val) {}
       polymorphic_Struct612() = default;
};
/*
inline int do_work(Struct612& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*612; i=i+1) {}
         return reps*2;
}*/


struct Struct613 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*613; i=i+1) {}
        return reps*2;
    }

    Struct613(int val) : field(val) {}
    Struct613() = default;
};

struct polymorphic_Struct613 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*613; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct613(int val) : field(val) {}
       polymorphic_Struct613() = default;
};
/*
inline int do_work(Struct613& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*613; i=i+1) {}
         return reps*2;
}*/


struct Struct614 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*614; i=i+1) {}
        return reps*2;
    }

    Struct614(int val) : field(val) {}
    Struct614() = default;
};

struct polymorphic_Struct614 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*614; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct614(int val) : field(val) {}
       polymorphic_Struct614() = default;
};
/*
inline int do_work(Struct614& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*614; i=i+1) {}
         return reps*2;
}*/


struct Struct615 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*615; i=i+1) {}
        return reps*2;
    }

    Struct615(int val) : field(val) {}
    Struct615() = default;
};

struct polymorphic_Struct615 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*615; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct615(int val) : field(val) {}
       polymorphic_Struct615() = default;
};
/*
inline int do_work(Struct615& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*615; i=i+1) {}
         return reps*2;
}*/


struct Struct616 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*616; i=i+1) {}
        return reps*2;
    }

    Struct616(int val) : field(val) {}
    Struct616() = default;
};

struct polymorphic_Struct616 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*616; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct616(int val) : field(val) {}
       polymorphic_Struct616() = default;
};
/*
inline int do_work(Struct616& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*616; i=i+1) {}
         return reps*2;
}*/


struct Struct617 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*617; i=i+1) {}
        return reps*2;
    }

    Struct617(int val) : field(val) {}
    Struct617() = default;
};

struct polymorphic_Struct617 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*617; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct617(int val) : field(val) {}
       polymorphic_Struct617() = default;
};
/*
inline int do_work(Struct617& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*617; i=i+1) {}
         return reps*2;
}*/


struct Struct618 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*618; i=i+1) {}
        return reps*2;
    }

    Struct618(int val) : field(val) {}
    Struct618() = default;
};

struct polymorphic_Struct618 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*618; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct618(int val) : field(val) {}
       polymorphic_Struct618() = default;
};
/*
inline int do_work(Struct618& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*618; i=i+1) {}
         return reps*2;
}*/


struct Struct619 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*619; i=i+1) {}
        return reps*2;
    }

    Struct619(int val) : field(val) {}
    Struct619() = default;
};

struct polymorphic_Struct619 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*619; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct619(int val) : field(val) {}
       polymorphic_Struct619() = default;
};
/*
inline int do_work(Struct619& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*619; i=i+1) {}
         return reps*2;
}*/


struct Struct620 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*620; i=i+1) {}
        return reps*2;
    }

    Struct620(int val) : field(val) {}
    Struct620() = default;
};

struct polymorphic_Struct620 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*620; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct620(int val) : field(val) {}
       polymorphic_Struct620() = default;
};
/*
inline int do_work(Struct620& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*620; i=i+1) {}
         return reps*2;
}*/


struct Struct621 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*621; i=i+1) {}
        return reps*2;
    }

    Struct621(int val) : field(val) {}
    Struct621() = default;
};

struct polymorphic_Struct621 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*621; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct621(int val) : field(val) {}
       polymorphic_Struct621() = default;
};
/*
inline int do_work(Struct621& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*621; i=i+1) {}
         return reps*2;
}*/


struct Struct622 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*622; i=i+1) {}
        return reps*2;
    }

    Struct622(int val) : field(val) {}
    Struct622() = default;
};

struct polymorphic_Struct622 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*622; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct622(int val) : field(val) {}
       polymorphic_Struct622() = default;
};
/*
inline int do_work(Struct622& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*622; i=i+1) {}
         return reps*2;
}*/


struct Struct623 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*623; i=i+1) {}
        return reps*2;
    }

    Struct623(int val) : field(val) {}
    Struct623() = default;
};

struct polymorphic_Struct623 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*623; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct623(int val) : field(val) {}
       polymorphic_Struct623() = default;
};
/*
inline int do_work(Struct623& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*623; i=i+1) {}
         return reps*2;
}*/


struct Struct624 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*624; i=i+1) {}
        return reps*2;
    }

    Struct624(int val) : field(val) {}
    Struct624() = default;
};

struct polymorphic_Struct624 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*624; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct624(int val) : field(val) {}
       polymorphic_Struct624() = default;
};
/*
inline int do_work(Struct624& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*624; i=i+1) {}
         return reps*2;
}*/


struct Struct625 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*625; i=i+1) {}
        return reps*2;
    }

    Struct625(int val) : field(val) {}
    Struct625() = default;
};

struct polymorphic_Struct625 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*625; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct625(int val) : field(val) {}
       polymorphic_Struct625() = default;
};
/*
inline int do_work(Struct625& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*625; i=i+1) {}
         return reps*2;
}*/


struct Struct626 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*626; i=i+1) {}
        return reps*2;
    }

    Struct626(int val) : field(val) {}
    Struct626() = default;
};

struct polymorphic_Struct626 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*626; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct626(int val) : field(val) {}
       polymorphic_Struct626() = default;
};
/*
inline int do_work(Struct626& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*626; i=i+1) {}
         return reps*2;
}*/


struct Struct627 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*627; i=i+1) {}
        return reps*2;
    }

    Struct627(int val) : field(val) {}
    Struct627() = default;
};

struct polymorphic_Struct627 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*627; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct627(int val) : field(val) {}
       polymorphic_Struct627() = default;
};
/*
inline int do_work(Struct627& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*627; i=i+1) {}
         return reps*2;
}*/


struct Struct628 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*628; i=i+1) {}
        return reps*2;
    }

    Struct628(int val) : field(val) {}
    Struct628() = default;
};

struct polymorphic_Struct628 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*628; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct628(int val) : field(val) {}
       polymorphic_Struct628() = default;
};
/*
inline int do_work(Struct628& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*628; i=i+1) {}
         return reps*2;
}*/


struct Struct629 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*629; i=i+1) {}
        return reps*2;
    }

    Struct629(int val) : field(val) {}
    Struct629() = default;
};

struct polymorphic_Struct629 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*629; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct629(int val) : field(val) {}
       polymorphic_Struct629() = default;
};
/*
inline int do_work(Struct629& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*629; i=i+1) {}
         return reps*2;
}*/


struct Struct630 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*630; i=i+1) {}
        return reps*2;
    }

    Struct630(int val) : field(val) {}
    Struct630() = default;
};

struct polymorphic_Struct630 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*630; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct630(int val) : field(val) {}
       polymorphic_Struct630() = default;
};
/*
inline int do_work(Struct630& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*630; i=i+1) {}
         return reps*2;
}*/


struct Struct631 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*631; i=i+1) {}
        return reps*2;
    }

    Struct631(int val) : field(val) {}
    Struct631() = default;
};

struct polymorphic_Struct631 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*631; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct631(int val) : field(val) {}
       polymorphic_Struct631() = default;
};
/*
inline int do_work(Struct631& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*631; i=i+1) {}
         return reps*2;
}*/


struct Struct632 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*632; i=i+1) {}
        return reps*2;
    }

    Struct632(int val) : field(val) {}
    Struct632() = default;
};

struct polymorphic_Struct632 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*632; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct632(int val) : field(val) {}
       polymorphic_Struct632() = default;
};
/*
inline int do_work(Struct632& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*632; i=i+1) {}
         return reps*2;
}*/


struct Struct633 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*633; i=i+1) {}
        return reps*2;
    }

    Struct633(int val) : field(val) {}
    Struct633() = default;
};

struct polymorphic_Struct633 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*633; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct633(int val) : field(val) {}
       polymorphic_Struct633() = default;
};
/*
inline int do_work(Struct633& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*633; i=i+1) {}
         return reps*2;
}*/


struct Struct634 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*634; i=i+1) {}
        return reps*2;
    }

    Struct634(int val) : field(val) {}
    Struct634() = default;
};

struct polymorphic_Struct634 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*634; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct634(int val) : field(val) {}
       polymorphic_Struct634() = default;
};
/*
inline int do_work(Struct634& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*634; i=i+1) {}
         return reps*2;
}*/


struct Struct635 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*635; i=i+1) {}
        return reps*2;
    }

    Struct635(int val) : field(val) {}
    Struct635() = default;
};

struct polymorphic_Struct635 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*635; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct635(int val) : field(val) {}
       polymorphic_Struct635() = default;
};
/*
inline int do_work(Struct635& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*635; i=i+1) {}
         return reps*2;
}*/


struct Struct636 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*636; i=i+1) {}
        return reps*2;
    }

    Struct636(int val) : field(val) {}
    Struct636() = default;
};

struct polymorphic_Struct636 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*636; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct636(int val) : field(val) {}
       polymorphic_Struct636() = default;
};
/*
inline int do_work(Struct636& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*636; i=i+1) {}
         return reps*2;
}*/


struct Struct637 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*637; i=i+1) {}
        return reps*2;
    }

    Struct637(int val) : field(val) {}
    Struct637() = default;
};

struct polymorphic_Struct637 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*637; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct637(int val) : field(val) {}
       polymorphic_Struct637() = default;
};
/*
inline int do_work(Struct637& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*637; i=i+1) {}
         return reps*2;
}*/


struct Struct638 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*638; i=i+1) {}
        return reps*2;
    }

    Struct638(int val) : field(val) {}
    Struct638() = default;
};

struct polymorphic_Struct638 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*638; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct638(int val) : field(val) {}
       polymorphic_Struct638() = default;
};
/*
inline int do_work(Struct638& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*638; i=i+1) {}
         return reps*2;
}*/


struct Struct639 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*639; i=i+1) {}
        return reps*2;
    }

    Struct639(int val) : field(val) {}
    Struct639() = default;
};

struct polymorphic_Struct639 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*639; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct639(int val) : field(val) {}
       polymorphic_Struct639() = default;
};
/*
inline int do_work(Struct639& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*639; i=i+1) {}
         return reps*2;
}*/


struct Struct640 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*640; i=i+1) {}
        return reps*2;
    }

    Struct640(int val) : field(val) {}
    Struct640() = default;
};

struct polymorphic_Struct640 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*640; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct640(int val) : field(val) {}
       polymorphic_Struct640() = default;
};
/*
inline int do_work(Struct640& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*640; i=i+1) {}
         return reps*2;
}*/


struct Struct641 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*641; i=i+1) {}
        return reps*2;
    }

    Struct641(int val) : field(val) {}
    Struct641() = default;
};

struct polymorphic_Struct641 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*641; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct641(int val) : field(val) {}
       polymorphic_Struct641() = default;
};
/*
inline int do_work(Struct641& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*641; i=i+1) {}
         return reps*2;
}*/


struct Struct642 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*642; i=i+1) {}
        return reps*2;
    }

    Struct642(int val) : field(val) {}
    Struct642() = default;
};

struct polymorphic_Struct642 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*642; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct642(int val) : field(val) {}
       polymorphic_Struct642() = default;
};
/*
inline int do_work(Struct642& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*642; i=i+1) {}
         return reps*2;
}*/


struct Struct643 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*643; i=i+1) {}
        return reps*2;
    }

    Struct643(int val) : field(val) {}
    Struct643() = default;
};

struct polymorphic_Struct643 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*643; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct643(int val) : field(val) {}
       polymorphic_Struct643() = default;
};
/*
inline int do_work(Struct643& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*643; i=i+1) {}
         return reps*2;
}*/


struct Struct644 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*644; i=i+1) {}
        return reps*2;
    }

    Struct644(int val) : field(val) {}
    Struct644() = default;
};

struct polymorphic_Struct644 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*644; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct644(int val) : field(val) {}
       polymorphic_Struct644() = default;
};
/*
inline int do_work(Struct644& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*644; i=i+1) {}
         return reps*2;
}*/


struct Struct645 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*645; i=i+1) {}
        return reps*2;
    }

    Struct645(int val) : field(val) {}
    Struct645() = default;
};

struct polymorphic_Struct645 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*645; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct645(int val) : field(val) {}
       polymorphic_Struct645() = default;
};
/*
inline int do_work(Struct645& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*645; i=i+1) {}
         return reps*2;
}*/


struct Struct646 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*646; i=i+1) {}
        return reps*2;
    }

    Struct646(int val) : field(val) {}
    Struct646() = default;
};

struct polymorphic_Struct646 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*646; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct646(int val) : field(val) {}
       polymorphic_Struct646() = default;
};
/*
inline int do_work(Struct646& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*646; i=i+1) {}
         return reps*2;
}*/


struct Struct647 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*647; i=i+1) {}
        return reps*2;
    }

    Struct647(int val) : field(val) {}
    Struct647() = default;
};

struct polymorphic_Struct647 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*647; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct647(int val) : field(val) {}
       polymorphic_Struct647() = default;
};
/*
inline int do_work(Struct647& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*647; i=i+1) {}
         return reps*2;
}*/


struct Struct648 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*648; i=i+1) {}
        return reps*2;
    }

    Struct648(int val) : field(val) {}
    Struct648() = default;
};

struct polymorphic_Struct648 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*648; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct648(int val) : field(val) {}
       polymorphic_Struct648() = default;
};
/*
inline int do_work(Struct648& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*648; i=i+1) {}
         return reps*2;
}*/


struct Struct649 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*649; i=i+1) {}
        return reps*2;
    }

    Struct649(int val) : field(val) {}
    Struct649() = default;
};

struct polymorphic_Struct649 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*649; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct649(int val) : field(val) {}
       polymorphic_Struct649() = default;
};
/*
inline int do_work(Struct649& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*649; i=i+1) {}
         return reps*2;
}*/


struct Struct650 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*650; i=i+1) {}
        return reps*2;
    }

    Struct650(int val) : field(val) {}
    Struct650() = default;
};

struct polymorphic_Struct650 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*650; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct650(int val) : field(val) {}
       polymorphic_Struct650() = default;
};
/*
inline int do_work(Struct650& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*650; i=i+1) {}
         return reps*2;
}*/


struct Struct651 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*651; i=i+1) {}
        return reps*2;
    }

    Struct651(int val) : field(val) {}
    Struct651() = default;
};

struct polymorphic_Struct651 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*651; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct651(int val) : field(val) {}
       polymorphic_Struct651() = default;
};
/*
inline int do_work(Struct651& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*651; i=i+1) {}
         return reps*2;
}*/


struct Struct652 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*652; i=i+1) {}
        return reps*2;
    }

    Struct652(int val) : field(val) {}
    Struct652() = default;
};

struct polymorphic_Struct652 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*652; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct652(int val) : field(val) {}
       polymorphic_Struct652() = default;
};
/*
inline int do_work(Struct652& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*652; i=i+1) {}
         return reps*2;
}*/


struct Struct653 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*653; i=i+1) {}
        return reps*2;
    }

    Struct653(int val) : field(val) {}
    Struct653() = default;
};

struct polymorphic_Struct653 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*653; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct653(int val) : field(val) {}
       polymorphic_Struct653() = default;
};
/*
inline int do_work(Struct653& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*653; i=i+1) {}
         return reps*2;
}*/


struct Struct654 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*654; i=i+1) {}
        return reps*2;
    }

    Struct654(int val) : field(val) {}
    Struct654() = default;
};

struct polymorphic_Struct654 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*654; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct654(int val) : field(val) {}
       polymorphic_Struct654() = default;
};
/*
inline int do_work(Struct654& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*654; i=i+1) {}
         return reps*2;
}*/


struct Struct655 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*655; i=i+1) {}
        return reps*2;
    }

    Struct655(int val) : field(val) {}
    Struct655() = default;
};

struct polymorphic_Struct655 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*655; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct655(int val) : field(val) {}
       polymorphic_Struct655() = default;
};
/*
inline int do_work(Struct655& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*655; i=i+1) {}
         return reps*2;
}*/


struct Struct656 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*656; i=i+1) {}
        return reps*2;
    }

    Struct656(int val) : field(val) {}
    Struct656() = default;
};

struct polymorphic_Struct656 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*656; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct656(int val) : field(val) {}
       polymorphic_Struct656() = default;
};
/*
inline int do_work(Struct656& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*656; i=i+1) {}
         return reps*2;
}*/


struct Struct657 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*657; i=i+1) {}
        return reps*2;
    }

    Struct657(int val) : field(val) {}
    Struct657() = default;
};

struct polymorphic_Struct657 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*657; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct657(int val) : field(val) {}
       polymorphic_Struct657() = default;
};
/*
inline int do_work(Struct657& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*657; i=i+1) {}
         return reps*2;
}*/


struct Struct658 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*658; i=i+1) {}
        return reps*2;
    }

    Struct658(int val) : field(val) {}
    Struct658() = default;
};

struct polymorphic_Struct658 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*658; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct658(int val) : field(val) {}
       polymorphic_Struct658() = default;
};
/*
inline int do_work(Struct658& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*658; i=i+1) {}
         return reps*2;
}*/


struct Struct659 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*659; i=i+1) {}
        return reps*2;
    }

    Struct659(int val) : field(val) {}
    Struct659() = default;
};

struct polymorphic_Struct659 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*659; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct659(int val) : field(val) {}
       polymorphic_Struct659() = default;
};
/*
inline int do_work(Struct659& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*659; i=i+1) {}
         return reps*2;
}*/


struct Struct660 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*660; i=i+1) {}
        return reps*2;
    }

    Struct660(int val) : field(val) {}
    Struct660() = default;
};

struct polymorphic_Struct660 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*660; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct660(int val) : field(val) {}
       polymorphic_Struct660() = default;
};
/*
inline int do_work(Struct660& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*660; i=i+1) {}
         return reps*2;
}*/


struct Struct661 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*661; i=i+1) {}
        return reps*2;
    }

    Struct661(int val) : field(val) {}
    Struct661() = default;
};

struct polymorphic_Struct661 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*661; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct661(int val) : field(val) {}
       polymorphic_Struct661() = default;
};
/*
inline int do_work(Struct661& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*661; i=i+1) {}
         return reps*2;
}*/


struct Struct662 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*662; i=i+1) {}
        return reps*2;
    }

    Struct662(int val) : field(val) {}
    Struct662() = default;
};

struct polymorphic_Struct662 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*662; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct662(int val) : field(val) {}
       polymorphic_Struct662() = default;
};
/*
inline int do_work(Struct662& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*662; i=i+1) {}
         return reps*2;
}*/


struct Struct663 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*663; i=i+1) {}
        return reps*2;
    }

    Struct663(int val) : field(val) {}
    Struct663() = default;
};

struct polymorphic_Struct663 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*663; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct663(int val) : field(val) {}
       polymorphic_Struct663() = default;
};
/*
inline int do_work(Struct663& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*663; i=i+1) {}
         return reps*2;
}*/


struct Struct664 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*664; i=i+1) {}
        return reps*2;
    }

    Struct664(int val) : field(val) {}
    Struct664() = default;
};

struct polymorphic_Struct664 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*664; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct664(int val) : field(val) {}
       polymorphic_Struct664() = default;
};
/*
inline int do_work(Struct664& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*664; i=i+1) {}
         return reps*2;
}*/


struct Struct665 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*665; i=i+1) {}
        return reps*2;
    }

    Struct665(int val) : field(val) {}
    Struct665() = default;
};

struct polymorphic_Struct665 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*665; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct665(int val) : field(val) {}
       polymorphic_Struct665() = default;
};
/*
inline int do_work(Struct665& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*665; i=i+1) {}
         return reps*2;
}*/


struct Struct666 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*666; i=i+1) {}
        return reps*2;
    }

    Struct666(int val) : field(val) {}
    Struct666() = default;
};

struct polymorphic_Struct666 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*666; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct666(int val) : field(val) {}
       polymorphic_Struct666() = default;
};
/*
inline int do_work(Struct666& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*666; i=i+1) {}
         return reps*2;
}*/


struct Struct667 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*667; i=i+1) {}
        return reps*2;
    }

    Struct667(int val) : field(val) {}
    Struct667() = default;
};

struct polymorphic_Struct667 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*667; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct667(int val) : field(val) {}
       polymorphic_Struct667() = default;
};
/*
inline int do_work(Struct667& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*667; i=i+1) {}
         return reps*2;
}*/


struct Struct668 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*668; i=i+1) {}
        return reps*2;
    }

    Struct668(int val) : field(val) {}
    Struct668() = default;
};

struct polymorphic_Struct668 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*668; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct668(int val) : field(val) {}
       polymorphic_Struct668() = default;
};
/*
inline int do_work(Struct668& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*668; i=i+1) {}
         return reps*2;
}*/


struct Struct669 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*669; i=i+1) {}
        return reps*2;
    }

    Struct669(int val) : field(val) {}
    Struct669() = default;
};

struct polymorphic_Struct669 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*669; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct669(int val) : field(val) {}
       polymorphic_Struct669() = default;
};
/*
inline int do_work(Struct669& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*669; i=i+1) {}
         return reps*2;
}*/


struct Struct670 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*670; i=i+1) {}
        return reps*2;
    }

    Struct670(int val) : field(val) {}
    Struct670() = default;
};

struct polymorphic_Struct670 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*670; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct670(int val) : field(val) {}
       polymorphic_Struct670() = default;
};
/*
inline int do_work(Struct670& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*670; i=i+1) {}
         return reps*2;
}*/


struct Struct671 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*671; i=i+1) {}
        return reps*2;
    }

    Struct671(int val) : field(val) {}
    Struct671() = default;
};

struct polymorphic_Struct671 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*671; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct671(int val) : field(val) {}
       polymorphic_Struct671() = default;
};
/*
inline int do_work(Struct671& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*671; i=i+1) {}
         return reps*2;
}*/


struct Struct672 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*672; i=i+1) {}
        return reps*2;
    }

    Struct672(int val) : field(val) {}
    Struct672() = default;
};

struct polymorphic_Struct672 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*672; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct672(int val) : field(val) {}
       polymorphic_Struct672() = default;
};
/*
inline int do_work(Struct672& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*672; i=i+1) {}
         return reps*2;
}*/


struct Struct673 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*673; i=i+1) {}
        return reps*2;
    }

    Struct673(int val) : field(val) {}
    Struct673() = default;
};

struct polymorphic_Struct673 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*673; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct673(int val) : field(val) {}
       polymorphic_Struct673() = default;
};
/*
inline int do_work(Struct673& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*673; i=i+1) {}
         return reps*2;
}*/


struct Struct674 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*674; i=i+1) {}
        return reps*2;
    }

    Struct674(int val) : field(val) {}
    Struct674() = default;
};

struct polymorphic_Struct674 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*674; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct674(int val) : field(val) {}
       polymorphic_Struct674() = default;
};
/*
inline int do_work(Struct674& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*674; i=i+1) {}
         return reps*2;
}*/


struct Struct675 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*675; i=i+1) {}
        return reps*2;
    }

    Struct675(int val) : field(val) {}
    Struct675() = default;
};

struct polymorphic_Struct675 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*675; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct675(int val) : field(val) {}
       polymorphic_Struct675() = default;
};
/*
inline int do_work(Struct675& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*675; i=i+1) {}
         return reps*2;
}*/


struct Struct676 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*676; i=i+1) {}
        return reps*2;
    }

    Struct676(int val) : field(val) {}
    Struct676() = default;
};

struct polymorphic_Struct676 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*676; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct676(int val) : field(val) {}
       polymorphic_Struct676() = default;
};
/*
inline int do_work(Struct676& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*676; i=i+1) {}
         return reps*2;
}*/


struct Struct677 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*677; i=i+1) {}
        return reps*2;
    }

    Struct677(int val) : field(val) {}
    Struct677() = default;
};

struct polymorphic_Struct677 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*677; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct677(int val) : field(val) {}
       polymorphic_Struct677() = default;
};
/*
inline int do_work(Struct677& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*677; i=i+1) {}
         return reps*2;
}*/


struct Struct678 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*678; i=i+1) {}
        return reps*2;
    }

    Struct678(int val) : field(val) {}
    Struct678() = default;
};

struct polymorphic_Struct678 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*678; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct678(int val) : field(val) {}
       polymorphic_Struct678() = default;
};
/*
inline int do_work(Struct678& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*678; i=i+1) {}
         return reps*2;
}*/


struct Struct679 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*679; i=i+1) {}
        return reps*2;
    }

    Struct679(int val) : field(val) {}
    Struct679() = default;
};

struct polymorphic_Struct679 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*679; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct679(int val) : field(val) {}
       polymorphic_Struct679() = default;
};
/*
inline int do_work(Struct679& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*679; i=i+1) {}
         return reps*2;
}*/


struct Struct680 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*680; i=i+1) {}
        return reps*2;
    }

    Struct680(int val) : field(val) {}
    Struct680() = default;
};

struct polymorphic_Struct680 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*680; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct680(int val) : field(val) {}
       polymorphic_Struct680() = default;
};
/*
inline int do_work(Struct680& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*680; i=i+1) {}
         return reps*2;
}*/


struct Struct681 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*681; i=i+1) {}
        return reps*2;
    }

    Struct681(int val) : field(val) {}
    Struct681() = default;
};

struct polymorphic_Struct681 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*681; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct681(int val) : field(val) {}
       polymorphic_Struct681() = default;
};
/*
inline int do_work(Struct681& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*681; i=i+1) {}
         return reps*2;
}*/


struct Struct682 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*682; i=i+1) {}
        return reps*2;
    }

    Struct682(int val) : field(val) {}
    Struct682() = default;
};

struct polymorphic_Struct682 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*682; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct682(int val) : field(val) {}
       polymorphic_Struct682() = default;
};
/*
inline int do_work(Struct682& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*682; i=i+1) {}
         return reps*2;
}*/


struct Struct683 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*683; i=i+1) {}
        return reps*2;
    }

    Struct683(int val) : field(val) {}
    Struct683() = default;
};

struct polymorphic_Struct683 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*683; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct683(int val) : field(val) {}
       polymorphic_Struct683() = default;
};
/*
inline int do_work(Struct683& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*683; i=i+1) {}
         return reps*2;
}*/


struct Struct684 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*684; i=i+1) {}
        return reps*2;
    }

    Struct684(int val) : field(val) {}
    Struct684() = default;
};

struct polymorphic_Struct684 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*684; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct684(int val) : field(val) {}
       polymorphic_Struct684() = default;
};
/*
inline int do_work(Struct684& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*684; i=i+1) {}
         return reps*2;
}*/


struct Struct685 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*685; i=i+1) {}
        return reps*2;
    }

    Struct685(int val) : field(val) {}
    Struct685() = default;
};

struct polymorphic_Struct685 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*685; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct685(int val) : field(val) {}
       polymorphic_Struct685() = default;
};
/*
inline int do_work(Struct685& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*685; i=i+1) {}
         return reps*2;
}*/


struct Struct686 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*686; i=i+1) {}
        return reps*2;
    }

    Struct686(int val) : field(val) {}
    Struct686() = default;
};

struct polymorphic_Struct686 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*686; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct686(int val) : field(val) {}
       polymorphic_Struct686() = default;
};
/*
inline int do_work(Struct686& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*686; i=i+1) {}
         return reps*2;
}*/


struct Struct687 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*687; i=i+1) {}
        return reps*2;
    }

    Struct687(int val) : field(val) {}
    Struct687() = default;
};

struct polymorphic_Struct687 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*687; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct687(int val) : field(val) {}
       polymorphic_Struct687() = default;
};
/*
inline int do_work(Struct687& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*687; i=i+1) {}
         return reps*2;
}*/


struct Struct688 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*688; i=i+1) {}
        return reps*2;
    }

    Struct688(int val) : field(val) {}
    Struct688() = default;
};

struct polymorphic_Struct688 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*688; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct688(int val) : field(val) {}
       polymorphic_Struct688() = default;
};
/*
inline int do_work(Struct688& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*688; i=i+1) {}
         return reps*2;
}*/


struct Struct689 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*689; i=i+1) {}
        return reps*2;
    }

    Struct689(int val) : field(val) {}
    Struct689() = default;
};

struct polymorphic_Struct689 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*689; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct689(int val) : field(val) {}
       polymorphic_Struct689() = default;
};
/*
inline int do_work(Struct689& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*689; i=i+1) {}
         return reps*2;
}*/


struct Struct690 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*690; i=i+1) {}
        return reps*2;
    }

    Struct690(int val) : field(val) {}
    Struct690() = default;
};

struct polymorphic_Struct690 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*690; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct690(int val) : field(val) {}
       polymorphic_Struct690() = default;
};
/*
inline int do_work(Struct690& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*690; i=i+1) {}
         return reps*2;
}*/


struct Struct691 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*691; i=i+1) {}
        return reps*2;
    }

    Struct691(int val) : field(val) {}
    Struct691() = default;
};

struct polymorphic_Struct691 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*691; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct691(int val) : field(val) {}
       polymorphic_Struct691() = default;
};
/*
inline int do_work(Struct691& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*691; i=i+1) {}
         return reps*2;
}*/


struct Struct692 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*692; i=i+1) {}
        return reps*2;
    }

    Struct692(int val) : field(val) {}
    Struct692() = default;
};

struct polymorphic_Struct692 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*692; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct692(int val) : field(val) {}
       polymorphic_Struct692() = default;
};
/*
inline int do_work(Struct692& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*692; i=i+1) {}
         return reps*2;
}*/


struct Struct693 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*693; i=i+1) {}
        return reps*2;
    }

    Struct693(int val) : field(val) {}
    Struct693() = default;
};

struct polymorphic_Struct693 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*693; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct693(int val) : field(val) {}
       polymorphic_Struct693() = default;
};
/*
inline int do_work(Struct693& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*693; i=i+1) {}
         return reps*2;
}*/


struct Struct694 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*694; i=i+1) {}
        return reps*2;
    }

    Struct694(int val) : field(val) {}
    Struct694() = default;
};

struct polymorphic_Struct694 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*694; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct694(int val) : field(val) {}
       polymorphic_Struct694() = default;
};
/*
inline int do_work(Struct694& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*694; i=i+1) {}
         return reps*2;
}*/


struct Struct695 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*695; i=i+1) {}
        return reps*2;
    }

    Struct695(int val) : field(val) {}
    Struct695() = default;
};

struct polymorphic_Struct695 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*695; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct695(int val) : field(val) {}
       polymorphic_Struct695() = default;
};
/*
inline int do_work(Struct695& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*695; i=i+1) {}
         return reps*2;
}*/


struct Struct696 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*696; i=i+1) {}
        return reps*2;
    }

    Struct696(int val) : field(val) {}
    Struct696() = default;
};

struct polymorphic_Struct696 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*696; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct696(int val) : field(val) {}
       polymorphic_Struct696() = default;
};
/*
inline int do_work(Struct696& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*696; i=i+1) {}
         return reps*2;
}*/


struct Struct697 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*697; i=i+1) {}
        return reps*2;
    }

    Struct697(int val) : field(val) {}
    Struct697() = default;
};

struct polymorphic_Struct697 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*697; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct697(int val) : field(val) {}
       polymorphic_Struct697() = default;
};
/*
inline int do_work(Struct697& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*697; i=i+1) {}
         return reps*2;
}*/


struct Struct698 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*698; i=i+1) {}
        return reps*2;
    }

    Struct698(int val) : field(val) {}
    Struct698() = default;
};

struct polymorphic_Struct698 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*698; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct698(int val) : field(val) {}
       polymorphic_Struct698() = default;
};
/*
inline int do_work(Struct698& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*698; i=i+1) {}
         return reps*2;
}*/


struct Struct699 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*699; i=i+1) {}
        return reps*2;
    }

    Struct699(int val) : field(val) {}
    Struct699() = default;
};

struct polymorphic_Struct699 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*699; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct699(int val) : field(val) {}
       polymorphic_Struct699() = default;
};
/*
inline int do_work(Struct699& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*699; i=i+1) {}
         return reps*2;
}*/


struct Struct700 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*700; i=i+1) {}
        return reps*2;
    }

    Struct700(int val) : field(val) {}
    Struct700() = default;
};

struct polymorphic_Struct700 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*700; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct700(int val) : field(val) {}
       polymorphic_Struct700() = default;
};
/*
inline int do_work(Struct700& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*700; i=i+1) {}
         return reps*2;
}*/


struct Struct701 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*701; i=i+1) {}
        return reps*2;
    }

    Struct701(int val) : field(val) {}
    Struct701() = default;
};

struct polymorphic_Struct701 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*701; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct701(int val) : field(val) {}
       polymorphic_Struct701() = default;
};
/*
inline int do_work(Struct701& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*701; i=i+1) {}
         return reps*2;
}*/


struct Struct702 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*702; i=i+1) {}
        return reps*2;
    }

    Struct702(int val) : field(val) {}
    Struct702() = default;
};

struct polymorphic_Struct702 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*702; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct702(int val) : field(val) {}
       polymorphic_Struct702() = default;
};
/*
inline int do_work(Struct702& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*702; i=i+1) {}
         return reps*2;
}*/


struct Struct703 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*703; i=i+1) {}
        return reps*2;
    }

    Struct703(int val) : field(val) {}
    Struct703() = default;
};

struct polymorphic_Struct703 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*703; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct703(int val) : field(val) {}
       polymorphic_Struct703() = default;
};
/*
inline int do_work(Struct703& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*703; i=i+1) {}
         return reps*2;
}*/


struct Struct704 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*704; i=i+1) {}
        return reps*2;
    }

    Struct704(int val) : field(val) {}
    Struct704() = default;
};

struct polymorphic_Struct704 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*704; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct704(int val) : field(val) {}
       polymorphic_Struct704() = default;
};
/*
inline int do_work(Struct704& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*704; i=i+1) {}
         return reps*2;
}*/


struct Struct705 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*705; i=i+1) {}
        return reps*2;
    }

    Struct705(int val) : field(val) {}
    Struct705() = default;
};

struct polymorphic_Struct705 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*705; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct705(int val) : field(val) {}
       polymorphic_Struct705() = default;
};
/*
inline int do_work(Struct705& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*705; i=i+1) {}
         return reps*2;
}*/


struct Struct706 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*706; i=i+1) {}
        return reps*2;
    }

    Struct706(int val) : field(val) {}
    Struct706() = default;
};

struct polymorphic_Struct706 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*706; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct706(int val) : field(val) {}
       polymorphic_Struct706() = default;
};
/*
inline int do_work(Struct706& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*706; i=i+1) {}
         return reps*2;
}*/


struct Struct707 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*707; i=i+1) {}
        return reps*2;
    }

    Struct707(int val) : field(val) {}
    Struct707() = default;
};

struct polymorphic_Struct707 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*707; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct707(int val) : field(val) {}
       polymorphic_Struct707() = default;
};
/*
inline int do_work(Struct707& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*707; i=i+1) {}
         return reps*2;
}*/


struct Struct708 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*708; i=i+1) {}
        return reps*2;
    }

    Struct708(int val) : field(val) {}
    Struct708() = default;
};

struct polymorphic_Struct708 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*708; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct708(int val) : field(val) {}
       polymorphic_Struct708() = default;
};
/*
inline int do_work(Struct708& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*708; i=i+1) {}
         return reps*2;
}*/


struct Struct709 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*709; i=i+1) {}
        return reps*2;
    }

    Struct709(int val) : field(val) {}
    Struct709() = default;
};

struct polymorphic_Struct709 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*709; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct709(int val) : field(val) {}
       polymorphic_Struct709() = default;
};
/*
inline int do_work(Struct709& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*709; i=i+1) {}
         return reps*2;
}*/


struct Struct710 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*710; i=i+1) {}
        return reps*2;
    }

    Struct710(int val) : field(val) {}
    Struct710() = default;
};

struct polymorphic_Struct710 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*710; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct710(int val) : field(val) {}
       polymorphic_Struct710() = default;
};
/*
inline int do_work(Struct710& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*710; i=i+1) {}
         return reps*2;
}*/


struct Struct711 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*711; i=i+1) {}
        return reps*2;
    }

    Struct711(int val) : field(val) {}
    Struct711() = default;
};

struct polymorphic_Struct711 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*711; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct711(int val) : field(val) {}
       polymorphic_Struct711() = default;
};
/*
inline int do_work(Struct711& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*711; i=i+1) {}
         return reps*2;
}*/


struct Struct712 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*712; i=i+1) {}
        return reps*2;
    }

    Struct712(int val) : field(val) {}
    Struct712() = default;
};

struct polymorphic_Struct712 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*712; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct712(int val) : field(val) {}
       polymorphic_Struct712() = default;
};
/*
inline int do_work(Struct712& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*712; i=i+1) {}
         return reps*2;
}*/


struct Struct713 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*713; i=i+1) {}
        return reps*2;
    }

    Struct713(int val) : field(val) {}
    Struct713() = default;
};

struct polymorphic_Struct713 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*713; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct713(int val) : field(val) {}
       polymorphic_Struct713() = default;
};
/*
inline int do_work(Struct713& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*713; i=i+1) {}
         return reps*2;
}*/


struct Struct714 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*714; i=i+1) {}
        return reps*2;
    }

    Struct714(int val) : field(val) {}
    Struct714() = default;
};

struct polymorphic_Struct714 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*714; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct714(int val) : field(val) {}
       polymorphic_Struct714() = default;
};
/*
inline int do_work(Struct714& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*714; i=i+1) {}
         return reps*2;
}*/


struct Struct715 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*715; i=i+1) {}
        return reps*2;
    }

    Struct715(int val) : field(val) {}
    Struct715() = default;
};

struct polymorphic_Struct715 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*715; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct715(int val) : field(val) {}
       polymorphic_Struct715() = default;
};
/*
inline int do_work(Struct715& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*715; i=i+1) {}
         return reps*2;
}*/


struct Struct716 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*716; i=i+1) {}
        return reps*2;
    }

    Struct716(int val) : field(val) {}
    Struct716() = default;
};

struct polymorphic_Struct716 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*716; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct716(int val) : field(val) {}
       polymorphic_Struct716() = default;
};
/*
inline int do_work(Struct716& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*716; i=i+1) {}
         return reps*2;
}*/


struct Struct717 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*717; i=i+1) {}
        return reps*2;
    }

    Struct717(int val) : field(val) {}
    Struct717() = default;
};

struct polymorphic_Struct717 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*717; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct717(int val) : field(val) {}
       polymorphic_Struct717() = default;
};
/*
inline int do_work(Struct717& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*717; i=i+1) {}
         return reps*2;
}*/


struct Struct718 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*718; i=i+1) {}
        return reps*2;
    }

    Struct718(int val) : field(val) {}
    Struct718() = default;
};

struct polymorphic_Struct718 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*718; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct718(int val) : field(val) {}
       polymorphic_Struct718() = default;
};
/*
inline int do_work(Struct718& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*718; i=i+1) {}
         return reps*2;
}*/


struct Struct719 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*719; i=i+1) {}
        return reps*2;
    }

    Struct719(int val) : field(val) {}
    Struct719() = default;
};

struct polymorphic_Struct719 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*719; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct719(int val) : field(val) {}
       polymorphic_Struct719() = default;
};
/*
inline int do_work(Struct719& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*719; i=i+1) {}
         return reps*2;
}*/


struct Struct720 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*720; i=i+1) {}
        return reps*2;
    }

    Struct720(int val) : field(val) {}
    Struct720() = default;
};

struct polymorphic_Struct720 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*720; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct720(int val) : field(val) {}
       polymorphic_Struct720() = default;
};
/*
inline int do_work(Struct720& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*720; i=i+1) {}
         return reps*2;
}*/


struct Struct721 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*721; i=i+1) {}
        return reps*2;
    }

    Struct721(int val) : field(val) {}
    Struct721() = default;
};

struct polymorphic_Struct721 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*721; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct721(int val) : field(val) {}
       polymorphic_Struct721() = default;
};
/*
inline int do_work(Struct721& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*721; i=i+1) {}
         return reps*2;
}*/


struct Struct722 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*722; i=i+1) {}
        return reps*2;
    }

    Struct722(int val) : field(val) {}
    Struct722() = default;
};

struct polymorphic_Struct722 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*722; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct722(int val) : field(val) {}
       polymorphic_Struct722() = default;
};
/*
inline int do_work(Struct722& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*722; i=i+1) {}
         return reps*2;
}*/


struct Struct723 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*723; i=i+1) {}
        return reps*2;
    }

    Struct723(int val) : field(val) {}
    Struct723() = default;
};

struct polymorphic_Struct723 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*723; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct723(int val) : field(val) {}
       polymorphic_Struct723() = default;
};
/*
inline int do_work(Struct723& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*723; i=i+1) {}
         return reps*2;
}*/


struct Struct724 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*724; i=i+1) {}
        return reps*2;
    }

    Struct724(int val) : field(val) {}
    Struct724() = default;
};

struct polymorphic_Struct724 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*724; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct724(int val) : field(val) {}
       polymorphic_Struct724() = default;
};
/*
inline int do_work(Struct724& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*724; i=i+1) {}
         return reps*2;
}*/


struct Struct725 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*725; i=i+1) {}
        return reps*2;
    }

    Struct725(int val) : field(val) {}
    Struct725() = default;
};

struct polymorphic_Struct725 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*725; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct725(int val) : field(val) {}
       polymorphic_Struct725() = default;
};
/*
inline int do_work(Struct725& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*725; i=i+1) {}
         return reps*2;
}*/


struct Struct726 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*726; i=i+1) {}
        return reps*2;
    }

    Struct726(int val) : field(val) {}
    Struct726() = default;
};

struct polymorphic_Struct726 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*726; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct726(int val) : field(val) {}
       polymorphic_Struct726() = default;
};
/*
inline int do_work(Struct726& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*726; i=i+1) {}
         return reps*2;
}*/


struct Struct727 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*727; i=i+1) {}
        return reps*2;
    }

    Struct727(int val) : field(val) {}
    Struct727() = default;
};

struct polymorphic_Struct727 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*727; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct727(int val) : field(val) {}
       polymorphic_Struct727() = default;
};
/*
inline int do_work(Struct727& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*727; i=i+1) {}
         return reps*2;
}*/


struct Struct728 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*728; i=i+1) {}
        return reps*2;
    }

    Struct728(int val) : field(val) {}
    Struct728() = default;
};

struct polymorphic_Struct728 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*728; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct728(int val) : field(val) {}
       polymorphic_Struct728() = default;
};
/*
inline int do_work(Struct728& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*728; i=i+1) {}
         return reps*2;
}*/


struct Struct729 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*729; i=i+1) {}
        return reps*2;
    }

    Struct729(int val) : field(val) {}
    Struct729() = default;
};

struct polymorphic_Struct729 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*729; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct729(int val) : field(val) {}
       polymorphic_Struct729() = default;
};
/*
inline int do_work(Struct729& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*729; i=i+1) {}
         return reps*2;
}*/


struct Struct730 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*730; i=i+1) {}
        return reps*2;
    }

    Struct730(int val) : field(val) {}
    Struct730() = default;
};

struct polymorphic_Struct730 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*730; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct730(int val) : field(val) {}
       polymorphic_Struct730() = default;
};
/*
inline int do_work(Struct730& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*730; i=i+1) {}
         return reps*2;
}*/


struct Struct731 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*731; i=i+1) {}
        return reps*2;
    }

    Struct731(int val) : field(val) {}
    Struct731() = default;
};

struct polymorphic_Struct731 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*731; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct731(int val) : field(val) {}
       polymorphic_Struct731() = default;
};
/*
inline int do_work(Struct731& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*731; i=i+1) {}
         return reps*2;
}*/


struct Struct732 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*732; i=i+1) {}
        return reps*2;
    }

    Struct732(int val) : field(val) {}
    Struct732() = default;
};

struct polymorphic_Struct732 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*732; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct732(int val) : field(val) {}
       polymorphic_Struct732() = default;
};
/*
inline int do_work(Struct732& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*732; i=i+1) {}
         return reps*2;
}*/


struct Struct733 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*733; i=i+1) {}
        return reps*2;
    }

    Struct733(int val) : field(val) {}
    Struct733() = default;
};

struct polymorphic_Struct733 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*733; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct733(int val) : field(val) {}
       polymorphic_Struct733() = default;
};
/*
inline int do_work(Struct733& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*733; i=i+1) {}
         return reps*2;
}*/


struct Struct734 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*734; i=i+1) {}
        return reps*2;
    }

    Struct734(int val) : field(val) {}
    Struct734() = default;
};

struct polymorphic_Struct734 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*734; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct734(int val) : field(val) {}
       polymorphic_Struct734() = default;
};
/*
inline int do_work(Struct734& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*734; i=i+1) {}
         return reps*2;
}*/


struct Struct735 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*735; i=i+1) {}
        return reps*2;
    }

    Struct735(int val) : field(val) {}
    Struct735() = default;
};

struct polymorphic_Struct735 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*735; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct735(int val) : field(val) {}
       polymorphic_Struct735() = default;
};
/*
inline int do_work(Struct735& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*735; i=i+1) {}
         return reps*2;
}*/


struct Struct736 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*736; i=i+1) {}
        return reps*2;
    }

    Struct736(int val) : field(val) {}
    Struct736() = default;
};

struct polymorphic_Struct736 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*736; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct736(int val) : field(val) {}
       polymorphic_Struct736() = default;
};
/*
inline int do_work(Struct736& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*736; i=i+1) {}
         return reps*2;
}*/


struct Struct737 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*737; i=i+1) {}
        return reps*2;
    }

    Struct737(int val) : field(val) {}
    Struct737() = default;
};

struct polymorphic_Struct737 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*737; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct737(int val) : field(val) {}
       polymorphic_Struct737() = default;
};
/*
inline int do_work(Struct737& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*737; i=i+1) {}
         return reps*2;
}*/


struct Struct738 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*738; i=i+1) {}
        return reps*2;
    }

    Struct738(int val) : field(val) {}
    Struct738() = default;
};

struct polymorphic_Struct738 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*738; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct738(int val) : field(val) {}
       polymorphic_Struct738() = default;
};
/*
inline int do_work(Struct738& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*738; i=i+1) {}
         return reps*2;
}*/


struct Struct739 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*739; i=i+1) {}
        return reps*2;
    }

    Struct739(int val) : field(val) {}
    Struct739() = default;
};

struct polymorphic_Struct739 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*739; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct739(int val) : field(val) {}
       polymorphic_Struct739() = default;
};
/*
inline int do_work(Struct739& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*739; i=i+1) {}
         return reps*2;
}*/


struct Struct740 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*740; i=i+1) {}
        return reps*2;
    }

    Struct740(int val) : field(val) {}
    Struct740() = default;
};

struct polymorphic_Struct740 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*740; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct740(int val) : field(val) {}
       polymorphic_Struct740() = default;
};
/*
inline int do_work(Struct740& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*740; i=i+1) {}
         return reps*2;
}*/


struct Struct741 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*741; i=i+1) {}
        return reps*2;
    }

    Struct741(int val) : field(val) {}
    Struct741() = default;
};

struct polymorphic_Struct741 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*741; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct741(int val) : field(val) {}
       polymorphic_Struct741() = default;
};
/*
inline int do_work(Struct741& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*741; i=i+1) {}
         return reps*2;
}*/


struct Struct742 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*742; i=i+1) {}
        return reps*2;
    }

    Struct742(int val) : field(val) {}
    Struct742() = default;
};

struct polymorphic_Struct742 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*742; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct742(int val) : field(val) {}
       polymorphic_Struct742() = default;
};
/*
inline int do_work(Struct742& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*742; i=i+1) {}
         return reps*2;
}*/


struct Struct743 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*743; i=i+1) {}
        return reps*2;
    }

    Struct743(int val) : field(val) {}
    Struct743() = default;
};

struct polymorphic_Struct743 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*743; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct743(int val) : field(val) {}
       polymorphic_Struct743() = default;
};
/*
inline int do_work(Struct743& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*743; i=i+1) {}
         return reps*2;
}*/


struct Struct744 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*744; i=i+1) {}
        return reps*2;
    }

    Struct744(int val) : field(val) {}
    Struct744() = default;
};

struct polymorphic_Struct744 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*744; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct744(int val) : field(val) {}
       polymorphic_Struct744() = default;
};
/*
inline int do_work(Struct744& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*744; i=i+1) {}
         return reps*2;
}*/


struct Struct745 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*745; i=i+1) {}
        return reps*2;
    }

    Struct745(int val) : field(val) {}
    Struct745() = default;
};

struct polymorphic_Struct745 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*745; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct745(int val) : field(val) {}
       polymorphic_Struct745() = default;
};
/*
inline int do_work(Struct745& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*745; i=i+1) {}
         return reps*2;
}*/


struct Struct746 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*746; i=i+1) {}
        return reps*2;
    }

    Struct746(int val) : field(val) {}
    Struct746() = default;
};

struct polymorphic_Struct746 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*746; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct746(int val) : field(val) {}
       polymorphic_Struct746() = default;
};
/*
inline int do_work(Struct746& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*746; i=i+1) {}
         return reps*2;
}*/


struct Struct747 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*747; i=i+1) {}
        return reps*2;
    }

    Struct747(int val) : field(val) {}
    Struct747() = default;
};

struct polymorphic_Struct747 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*747; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct747(int val) : field(val) {}
       polymorphic_Struct747() = default;
};
/*
inline int do_work(Struct747& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*747; i=i+1) {}
         return reps*2;
}*/


struct Struct748 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*748; i=i+1) {}
        return reps*2;
    }

    Struct748(int val) : field(val) {}
    Struct748() = default;
};

struct polymorphic_Struct748 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*748; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct748(int val) : field(val) {}
       polymorphic_Struct748() = default;
};
/*
inline int do_work(Struct748& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*748; i=i+1) {}
         return reps*2;
}*/


struct Struct749 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*749; i=i+1) {}
        return reps*2;
    }

    Struct749(int val) : field(val) {}
    Struct749() = default;
};

struct polymorphic_Struct749 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*749; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct749(int val) : field(val) {}
       polymorphic_Struct749() = default;
};
/*
inline int do_work(Struct749& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*749; i=i+1) {}
         return reps*2;
}*/


struct Struct750 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*750; i=i+1) {}
        return reps*2;
    }

    Struct750(int val) : field(val) {}
    Struct750() = default;
};

struct polymorphic_Struct750 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*750; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct750(int val) : field(val) {}
       polymorphic_Struct750() = default;
};
/*
inline int do_work(Struct750& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*750; i=i+1) {}
         return reps*2;
}*/


struct Struct751 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*751; i=i+1) {}
        return reps*2;
    }

    Struct751(int val) : field(val) {}
    Struct751() = default;
};

struct polymorphic_Struct751 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*751; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct751(int val) : field(val) {}
       polymorphic_Struct751() = default;
};
/*
inline int do_work(Struct751& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*751; i=i+1) {}
         return reps*2;
}*/


struct Struct752 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*752; i=i+1) {}
        return reps*2;
    }

    Struct752(int val) : field(val) {}
    Struct752() = default;
};

struct polymorphic_Struct752 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*752; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct752(int val) : field(val) {}
       polymorphic_Struct752() = default;
};
/*
inline int do_work(Struct752& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*752; i=i+1) {}
         return reps*2;
}*/


struct Struct753 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*753; i=i+1) {}
        return reps*2;
    }

    Struct753(int val) : field(val) {}
    Struct753() = default;
};

struct polymorphic_Struct753 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*753; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct753(int val) : field(val) {}
       polymorphic_Struct753() = default;
};
/*
inline int do_work(Struct753& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*753; i=i+1) {}
         return reps*2;
}*/


struct Struct754 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*754; i=i+1) {}
        return reps*2;
    }

    Struct754(int val) : field(val) {}
    Struct754() = default;
};

struct polymorphic_Struct754 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*754; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct754(int val) : field(val) {}
       polymorphic_Struct754() = default;
};
/*
inline int do_work(Struct754& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*754; i=i+1) {}
         return reps*2;
}*/


struct Struct755 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*755; i=i+1) {}
        return reps*2;
    }

    Struct755(int val) : field(val) {}
    Struct755() = default;
};

struct polymorphic_Struct755 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*755; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct755(int val) : field(val) {}
       polymorphic_Struct755() = default;
};
/*
inline int do_work(Struct755& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*755; i=i+1) {}
         return reps*2;
}*/


struct Struct756 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*756; i=i+1) {}
        return reps*2;
    }

    Struct756(int val) : field(val) {}
    Struct756() = default;
};

struct polymorphic_Struct756 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*756; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct756(int val) : field(val) {}
       polymorphic_Struct756() = default;
};
/*
inline int do_work(Struct756& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*756; i=i+1) {}
         return reps*2;
}*/


struct Struct757 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*757; i=i+1) {}
        return reps*2;
    }

    Struct757(int val) : field(val) {}
    Struct757() = default;
};

struct polymorphic_Struct757 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*757; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct757(int val) : field(val) {}
       polymorphic_Struct757() = default;
};
/*
inline int do_work(Struct757& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*757; i=i+1) {}
         return reps*2;
}*/


struct Struct758 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*758; i=i+1) {}
        return reps*2;
    }

    Struct758(int val) : field(val) {}
    Struct758() = default;
};

struct polymorphic_Struct758 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*758; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct758(int val) : field(val) {}
       polymorphic_Struct758() = default;
};
/*
inline int do_work(Struct758& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*758; i=i+1) {}
         return reps*2;
}*/


struct Struct759 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*759; i=i+1) {}
        return reps*2;
    }

    Struct759(int val) : field(val) {}
    Struct759() = default;
};

struct polymorphic_Struct759 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*759; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct759(int val) : field(val) {}
       polymorphic_Struct759() = default;
};
/*
inline int do_work(Struct759& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*759; i=i+1) {}
         return reps*2;
}*/


struct Struct760 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*760; i=i+1) {}
        return reps*2;
    }

    Struct760(int val) : field(val) {}
    Struct760() = default;
};

struct polymorphic_Struct760 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*760; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct760(int val) : field(val) {}
       polymorphic_Struct760() = default;
};
/*
inline int do_work(Struct760& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*760; i=i+1) {}
         return reps*2;
}*/


struct Struct761 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*761; i=i+1) {}
        return reps*2;
    }

    Struct761(int val) : field(val) {}
    Struct761() = default;
};

struct polymorphic_Struct761 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*761; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct761(int val) : field(val) {}
       polymorphic_Struct761() = default;
};
/*
inline int do_work(Struct761& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*761; i=i+1) {}
         return reps*2;
}*/


struct Struct762 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*762; i=i+1) {}
        return reps*2;
    }

    Struct762(int val) : field(val) {}
    Struct762() = default;
};

struct polymorphic_Struct762 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*762; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct762(int val) : field(val) {}
       polymorphic_Struct762() = default;
};
/*
inline int do_work(Struct762& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*762; i=i+1) {}
         return reps*2;
}*/


struct Struct763 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*763; i=i+1) {}
        return reps*2;
    }

    Struct763(int val) : field(val) {}
    Struct763() = default;
};

struct polymorphic_Struct763 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*763; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct763(int val) : field(val) {}
       polymorphic_Struct763() = default;
};
/*
inline int do_work(Struct763& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*763; i=i+1) {}
         return reps*2;
}*/


struct Struct764 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*764; i=i+1) {}
        return reps*2;
    }

    Struct764(int val) : field(val) {}
    Struct764() = default;
};

struct polymorphic_Struct764 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*764; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct764(int val) : field(val) {}
       polymorphic_Struct764() = default;
};
/*
inline int do_work(Struct764& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*764; i=i+1) {}
         return reps*2;
}*/


struct Struct765 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*765; i=i+1) {}
        return reps*2;
    }

    Struct765(int val) : field(val) {}
    Struct765() = default;
};

struct polymorphic_Struct765 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*765; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct765(int val) : field(val) {}
       polymorphic_Struct765() = default;
};
/*
inline int do_work(Struct765& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*765; i=i+1) {}
         return reps*2;
}*/


struct Struct766 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*766; i=i+1) {}
        return reps*2;
    }

    Struct766(int val) : field(val) {}
    Struct766() = default;
};

struct polymorphic_Struct766 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*766; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct766(int val) : field(val) {}
       polymorphic_Struct766() = default;
};
/*
inline int do_work(Struct766& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*766; i=i+1) {}
         return reps*2;
}*/


struct Struct767 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*767; i=i+1) {}
        return reps*2;
    }

    Struct767(int val) : field(val) {}
    Struct767() = default;
};

struct polymorphic_Struct767 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*767; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct767(int val) : field(val) {}
       polymorphic_Struct767() = default;
};
/*
inline int do_work(Struct767& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*767; i=i+1) {}
         return reps*2;
}*/


struct Struct768 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*768; i=i+1) {}
        return reps*2;
    }

    Struct768(int val) : field(val) {}
    Struct768() = default;
};

struct polymorphic_Struct768 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*768; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct768(int val) : field(val) {}
       polymorphic_Struct768() = default;
};
/*
inline int do_work(Struct768& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*768; i=i+1) {}
         return reps*2;
}*/


struct Struct769 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*769; i=i+1) {}
        return reps*2;
    }

    Struct769(int val) : field(val) {}
    Struct769() = default;
};

struct polymorphic_Struct769 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*769; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct769(int val) : field(val) {}
       polymorphic_Struct769() = default;
};
/*
inline int do_work(Struct769& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*769; i=i+1) {}
         return reps*2;
}*/


struct Struct770 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*770; i=i+1) {}
        return reps*2;
    }

    Struct770(int val) : field(val) {}
    Struct770() = default;
};

struct polymorphic_Struct770 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*770; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct770(int val) : field(val) {}
       polymorphic_Struct770() = default;
};
/*
inline int do_work(Struct770& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*770; i=i+1) {}
         return reps*2;
}*/


struct Struct771 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*771; i=i+1) {}
        return reps*2;
    }

    Struct771(int val) : field(val) {}
    Struct771() = default;
};

struct polymorphic_Struct771 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*771; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct771(int val) : field(val) {}
       polymorphic_Struct771() = default;
};
/*
inline int do_work(Struct771& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*771; i=i+1) {}
         return reps*2;
}*/


struct Struct772 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*772; i=i+1) {}
        return reps*2;
    }

    Struct772(int val) : field(val) {}
    Struct772() = default;
};

struct polymorphic_Struct772 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*772; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct772(int val) : field(val) {}
       polymorphic_Struct772() = default;
};
/*
inline int do_work(Struct772& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*772; i=i+1) {}
         return reps*2;
}*/


struct Struct773 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*773; i=i+1) {}
        return reps*2;
    }

    Struct773(int val) : field(val) {}
    Struct773() = default;
};

struct polymorphic_Struct773 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*773; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct773(int val) : field(val) {}
       polymorphic_Struct773() = default;
};
/*
inline int do_work(Struct773& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*773; i=i+1) {}
         return reps*2;
}*/


struct Struct774 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*774; i=i+1) {}
        return reps*2;
    }

    Struct774(int val) : field(val) {}
    Struct774() = default;
};

struct polymorphic_Struct774 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*774; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct774(int val) : field(val) {}
       polymorphic_Struct774() = default;
};
/*
inline int do_work(Struct774& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*774; i=i+1) {}
         return reps*2;
}*/


struct Struct775 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*775; i=i+1) {}
        return reps*2;
    }

    Struct775(int val) : field(val) {}
    Struct775() = default;
};

struct polymorphic_Struct775 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*775; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct775(int val) : field(val) {}
       polymorphic_Struct775() = default;
};
/*
inline int do_work(Struct775& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*775; i=i+1) {}
         return reps*2;
}*/


struct Struct776 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*776; i=i+1) {}
        return reps*2;
    }

    Struct776(int val) : field(val) {}
    Struct776() = default;
};

struct polymorphic_Struct776 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*776; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct776(int val) : field(val) {}
       polymorphic_Struct776() = default;
};
/*
inline int do_work(Struct776& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*776; i=i+1) {}
         return reps*2;
}*/


struct Struct777 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*777; i=i+1) {}
        return reps*2;
    }

    Struct777(int val) : field(val) {}
    Struct777() = default;
};

struct polymorphic_Struct777 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*777; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct777(int val) : field(val) {}
       polymorphic_Struct777() = default;
};
/*
inline int do_work(Struct777& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*777; i=i+1) {}
         return reps*2;
}*/


struct Struct778 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*778; i=i+1) {}
        return reps*2;
    }

    Struct778(int val) : field(val) {}
    Struct778() = default;
};

struct polymorphic_Struct778 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*778; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct778(int val) : field(val) {}
       polymorphic_Struct778() = default;
};
/*
inline int do_work(Struct778& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*778; i=i+1) {}
         return reps*2;
}*/


struct Struct779 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*779; i=i+1) {}
        return reps*2;
    }

    Struct779(int val) : field(val) {}
    Struct779() = default;
};

struct polymorphic_Struct779 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*779; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct779(int val) : field(val) {}
       polymorphic_Struct779() = default;
};
/*
inline int do_work(Struct779& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*779; i=i+1) {}
         return reps*2;
}*/


struct Struct780 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*780; i=i+1) {}
        return reps*2;
    }

    Struct780(int val) : field(val) {}
    Struct780() = default;
};

struct polymorphic_Struct780 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*780; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct780(int val) : field(val) {}
       polymorphic_Struct780() = default;
};
/*
inline int do_work(Struct780& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*780; i=i+1) {}
         return reps*2;
}*/


struct Struct781 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*781; i=i+1) {}
        return reps*2;
    }

    Struct781(int val) : field(val) {}
    Struct781() = default;
};

struct polymorphic_Struct781 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*781; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct781(int val) : field(val) {}
       polymorphic_Struct781() = default;
};
/*
inline int do_work(Struct781& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*781; i=i+1) {}
         return reps*2;
}*/


struct Struct782 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*782; i=i+1) {}
        return reps*2;
    }

    Struct782(int val) : field(val) {}
    Struct782() = default;
};

struct polymorphic_Struct782 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*782; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct782(int val) : field(val) {}
       polymorphic_Struct782() = default;
};
/*
inline int do_work(Struct782& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*782; i=i+1) {}
         return reps*2;
}*/


struct Struct783 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*783; i=i+1) {}
        return reps*2;
    }

    Struct783(int val) : field(val) {}
    Struct783() = default;
};

struct polymorphic_Struct783 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*783; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct783(int val) : field(val) {}
       polymorphic_Struct783() = default;
};
/*
inline int do_work(Struct783& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*783; i=i+1) {}
         return reps*2;
}*/


struct Struct784 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*784; i=i+1) {}
        return reps*2;
    }

    Struct784(int val) : field(val) {}
    Struct784() = default;
};

struct polymorphic_Struct784 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*784; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct784(int val) : field(val) {}
       polymorphic_Struct784() = default;
};
/*
inline int do_work(Struct784& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*784; i=i+1) {}
         return reps*2;
}*/


struct Struct785 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*785; i=i+1) {}
        return reps*2;
    }

    Struct785(int val) : field(val) {}
    Struct785() = default;
};

struct polymorphic_Struct785 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*785; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct785(int val) : field(val) {}
       polymorphic_Struct785() = default;
};
/*
inline int do_work(Struct785& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*785; i=i+1) {}
         return reps*2;
}*/


struct Struct786 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*786; i=i+1) {}
        return reps*2;
    }

    Struct786(int val) : field(val) {}
    Struct786() = default;
};

struct polymorphic_Struct786 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*786; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct786(int val) : field(val) {}
       polymorphic_Struct786() = default;
};
/*
inline int do_work(Struct786& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*786; i=i+1) {}
         return reps*2;
}*/


struct Struct787 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*787; i=i+1) {}
        return reps*2;
    }

    Struct787(int val) : field(val) {}
    Struct787() = default;
};

struct polymorphic_Struct787 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*787; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct787(int val) : field(val) {}
       polymorphic_Struct787() = default;
};
/*
inline int do_work(Struct787& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*787; i=i+1) {}
         return reps*2;
}*/


struct Struct788 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*788; i=i+1) {}
        return reps*2;
    }

    Struct788(int val) : field(val) {}
    Struct788() = default;
};

struct polymorphic_Struct788 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*788; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct788(int val) : field(val) {}
       polymorphic_Struct788() = default;
};
/*
inline int do_work(Struct788& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*788; i=i+1) {}
         return reps*2;
}*/


struct Struct789 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*789; i=i+1) {}
        return reps*2;
    }

    Struct789(int val) : field(val) {}
    Struct789() = default;
};

struct polymorphic_Struct789 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*789; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct789(int val) : field(val) {}
       polymorphic_Struct789() = default;
};
/*
inline int do_work(Struct789& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*789; i=i+1) {}
         return reps*2;
}*/


struct Struct790 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*790; i=i+1) {}
        return reps*2;
    }

    Struct790(int val) : field(val) {}
    Struct790() = default;
};

struct polymorphic_Struct790 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*790; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct790(int val) : field(val) {}
       polymorphic_Struct790() = default;
};
/*
inline int do_work(Struct790& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*790; i=i+1) {}
         return reps*2;
}*/


struct Struct791 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*791; i=i+1) {}
        return reps*2;
    }

    Struct791(int val) : field(val) {}
    Struct791() = default;
};

struct polymorphic_Struct791 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*791; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct791(int val) : field(val) {}
       polymorphic_Struct791() = default;
};
/*
inline int do_work(Struct791& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*791; i=i+1) {}
         return reps*2;
}*/


struct Struct792 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*792; i=i+1) {}
        return reps*2;
    }

    Struct792(int val) : field(val) {}
    Struct792() = default;
};

struct polymorphic_Struct792 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*792; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct792(int val) : field(val) {}
       polymorphic_Struct792() = default;
};
/*
inline int do_work(Struct792& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*792; i=i+1) {}
         return reps*2;
}*/


struct Struct793 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*793; i=i+1) {}
        return reps*2;
    }

    Struct793(int val) : field(val) {}
    Struct793() = default;
};

struct polymorphic_Struct793 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*793; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct793(int val) : field(val) {}
       polymorphic_Struct793() = default;
};
/*
inline int do_work(Struct793& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*793; i=i+1) {}
         return reps*2;
}*/


struct Struct794 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*794; i=i+1) {}
        return reps*2;
    }

    Struct794(int val) : field(val) {}
    Struct794() = default;
};

struct polymorphic_Struct794 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*794; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct794(int val) : field(val) {}
       polymorphic_Struct794() = default;
};
/*
inline int do_work(Struct794& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*794; i=i+1) {}
         return reps*2;
}*/


struct Struct795 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*795; i=i+1) {}
        return reps*2;
    }

    Struct795(int val) : field(val) {}
    Struct795() = default;
};

struct polymorphic_Struct795 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*795; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct795(int val) : field(val) {}
       polymorphic_Struct795() = default;
};
/*
inline int do_work(Struct795& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*795; i=i+1) {}
         return reps*2;
}*/


struct Struct796 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*796; i=i+1) {}
        return reps*2;
    }

    Struct796(int val) : field(val) {}
    Struct796() = default;
};

struct polymorphic_Struct796 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*796; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct796(int val) : field(val) {}
       polymorphic_Struct796() = default;
};
/*
inline int do_work(Struct796& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*796; i=i+1) {}
         return reps*2;
}*/


struct Struct797 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*797; i=i+1) {}
        return reps*2;
    }

    Struct797(int val) : field(val) {}
    Struct797() = default;
};

struct polymorphic_Struct797 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*797; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct797(int val) : field(val) {}
       polymorphic_Struct797() = default;
};
/*
inline int do_work(Struct797& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*797; i=i+1) {}
         return reps*2;
}*/


struct Struct798 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*798; i=i+1) {}
        return reps*2;
    }

    Struct798(int val) : field(val) {}
    Struct798() = default;
};

struct polymorphic_Struct798 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*798; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct798(int val) : field(val) {}
       polymorphic_Struct798() = default;
};
/*
inline int do_work(Struct798& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*798; i=i+1) {}
         return reps*2;
}*/


struct Struct799 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*799; i=i+1) {}
        return reps*2;
    }

    Struct799(int val) : field(val) {}
    Struct799() = default;
};

struct polymorphic_Struct799 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*799; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct799(int val) : field(val) {}
       polymorphic_Struct799() = default;
};
/*
inline int do_work(Struct799& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*799; i=i+1) {}
         return reps*2;
}*/


struct Struct800 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*800; i=i+1) {}
        return reps*2;
    }

    Struct800(int val) : field(val) {}
    Struct800() = default;
};

struct polymorphic_Struct800 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*800; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct800(int val) : field(val) {}
       polymorphic_Struct800() = default;
};
/*
inline int do_work(Struct800& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*800; i=i+1) {}
         return reps*2;
}*/


struct Struct801 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*801; i=i+1) {}
        return reps*2;
    }

    Struct801(int val) : field(val) {}
    Struct801() = default;
};

struct polymorphic_Struct801 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*801; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct801(int val) : field(val) {}
       polymorphic_Struct801() = default;
};
/*
inline int do_work(Struct801& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*801; i=i+1) {}
         return reps*2;
}*/


struct Struct802 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*802; i=i+1) {}
        return reps*2;
    }

    Struct802(int val) : field(val) {}
    Struct802() = default;
};

struct polymorphic_Struct802 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*802; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct802(int val) : field(val) {}
       polymorphic_Struct802() = default;
};
/*
inline int do_work(Struct802& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*802; i=i+1) {}
         return reps*2;
}*/


struct Struct803 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*803; i=i+1) {}
        return reps*2;
    }

    Struct803(int val) : field(val) {}
    Struct803() = default;
};

struct polymorphic_Struct803 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*803; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct803(int val) : field(val) {}
       polymorphic_Struct803() = default;
};
/*
inline int do_work(Struct803& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*803; i=i+1) {}
         return reps*2;
}*/


struct Struct804 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*804; i=i+1) {}
        return reps*2;
    }

    Struct804(int val) : field(val) {}
    Struct804() = default;
};

struct polymorphic_Struct804 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*804; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct804(int val) : field(val) {}
       polymorphic_Struct804() = default;
};
/*
inline int do_work(Struct804& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*804; i=i+1) {}
         return reps*2;
}*/


struct Struct805 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*805; i=i+1) {}
        return reps*2;
    }

    Struct805(int val) : field(val) {}
    Struct805() = default;
};

struct polymorphic_Struct805 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*805; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct805(int val) : field(val) {}
       polymorphic_Struct805() = default;
};
/*
inline int do_work(Struct805& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*805; i=i+1) {}
         return reps*2;
}*/


struct Struct806 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*806; i=i+1) {}
        return reps*2;
    }

    Struct806(int val) : field(val) {}
    Struct806() = default;
};

struct polymorphic_Struct806 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*806; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct806(int val) : field(val) {}
       polymorphic_Struct806() = default;
};
/*
inline int do_work(Struct806& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*806; i=i+1) {}
         return reps*2;
}*/


struct Struct807 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*807; i=i+1) {}
        return reps*2;
    }

    Struct807(int val) : field(val) {}
    Struct807() = default;
};

struct polymorphic_Struct807 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*807; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct807(int val) : field(val) {}
       polymorphic_Struct807() = default;
};
/*
inline int do_work(Struct807& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*807; i=i+1) {}
         return reps*2;
}*/


struct Struct808 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*808; i=i+1) {}
        return reps*2;
    }

    Struct808(int val) : field(val) {}
    Struct808() = default;
};

struct polymorphic_Struct808 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*808; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct808(int val) : field(val) {}
       polymorphic_Struct808() = default;
};
/*
inline int do_work(Struct808& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*808; i=i+1) {}
         return reps*2;
}*/


struct Struct809 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*809; i=i+1) {}
        return reps*2;
    }

    Struct809(int val) : field(val) {}
    Struct809() = default;
};

struct polymorphic_Struct809 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*809; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct809(int val) : field(val) {}
       polymorphic_Struct809() = default;
};
/*
inline int do_work(Struct809& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*809; i=i+1) {}
         return reps*2;
}*/


struct Struct810 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*810; i=i+1) {}
        return reps*2;
    }

    Struct810(int val) : field(val) {}
    Struct810() = default;
};

struct polymorphic_Struct810 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*810; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct810(int val) : field(val) {}
       polymorphic_Struct810() = default;
};
/*
inline int do_work(Struct810& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*810; i=i+1) {}
         return reps*2;
}*/


struct Struct811 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*811; i=i+1) {}
        return reps*2;
    }

    Struct811(int val) : field(val) {}
    Struct811() = default;
};

struct polymorphic_Struct811 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*811; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct811(int val) : field(val) {}
       polymorphic_Struct811() = default;
};
/*
inline int do_work(Struct811& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*811; i=i+1) {}
         return reps*2;
}*/


struct Struct812 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*812; i=i+1) {}
        return reps*2;
    }

    Struct812(int val) : field(val) {}
    Struct812() = default;
};

struct polymorphic_Struct812 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*812; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct812(int val) : field(val) {}
       polymorphic_Struct812() = default;
};
/*
inline int do_work(Struct812& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*812; i=i+1) {}
         return reps*2;
}*/


struct Struct813 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*813; i=i+1) {}
        return reps*2;
    }

    Struct813(int val) : field(val) {}
    Struct813() = default;
};

struct polymorphic_Struct813 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*813; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct813(int val) : field(val) {}
       polymorphic_Struct813() = default;
};
/*
inline int do_work(Struct813& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*813; i=i+1) {}
         return reps*2;
}*/


struct Struct814 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*814; i=i+1) {}
        return reps*2;
    }

    Struct814(int val) : field(val) {}
    Struct814() = default;
};

struct polymorphic_Struct814 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*814; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct814(int val) : field(val) {}
       polymorphic_Struct814() = default;
};
/*
inline int do_work(Struct814& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*814; i=i+1) {}
         return reps*2;
}*/


struct Struct815 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*815; i=i+1) {}
        return reps*2;
    }

    Struct815(int val) : field(val) {}
    Struct815() = default;
};

struct polymorphic_Struct815 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*815; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct815(int val) : field(val) {}
       polymorphic_Struct815() = default;
};
/*
inline int do_work(Struct815& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*815; i=i+1) {}
         return reps*2;
}*/


struct Struct816 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*816; i=i+1) {}
        return reps*2;
    }

    Struct816(int val) : field(val) {}
    Struct816() = default;
};

struct polymorphic_Struct816 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*816; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct816(int val) : field(val) {}
       polymorphic_Struct816() = default;
};
/*
inline int do_work(Struct816& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*816; i=i+1) {}
         return reps*2;
}*/


struct Struct817 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*817; i=i+1) {}
        return reps*2;
    }

    Struct817(int val) : field(val) {}
    Struct817() = default;
};

struct polymorphic_Struct817 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*817; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct817(int val) : field(val) {}
       polymorphic_Struct817() = default;
};
/*
inline int do_work(Struct817& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*817; i=i+1) {}
         return reps*2;
}*/


struct Struct818 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*818; i=i+1) {}
        return reps*2;
    }

    Struct818(int val) : field(val) {}
    Struct818() = default;
};

struct polymorphic_Struct818 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*818; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct818(int val) : field(val) {}
       polymorphic_Struct818() = default;
};
/*
inline int do_work(Struct818& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*818; i=i+1) {}
         return reps*2;
}*/


struct Struct819 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*819; i=i+1) {}
        return reps*2;
    }

    Struct819(int val) : field(val) {}
    Struct819() = default;
};

struct polymorphic_Struct819 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*819; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct819(int val) : field(val) {}
       polymorphic_Struct819() = default;
};
/*
inline int do_work(Struct819& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*819; i=i+1) {}
         return reps*2;
}*/


struct Struct820 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*820; i=i+1) {}
        return reps*2;
    }

    Struct820(int val) : field(val) {}
    Struct820() = default;
};

struct polymorphic_Struct820 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*820; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct820(int val) : field(val) {}
       polymorphic_Struct820() = default;
};
/*
inline int do_work(Struct820& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*820; i=i+1) {}
         return reps*2;
}*/


struct Struct821 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*821; i=i+1) {}
        return reps*2;
    }

    Struct821(int val) : field(val) {}
    Struct821() = default;
};

struct polymorphic_Struct821 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*821; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct821(int val) : field(val) {}
       polymorphic_Struct821() = default;
};
/*
inline int do_work(Struct821& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*821; i=i+1) {}
         return reps*2;
}*/


struct Struct822 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*822; i=i+1) {}
        return reps*2;
    }

    Struct822(int val) : field(val) {}
    Struct822() = default;
};

struct polymorphic_Struct822 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*822; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct822(int val) : field(val) {}
       polymorphic_Struct822() = default;
};
/*
inline int do_work(Struct822& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*822; i=i+1) {}
         return reps*2;
}*/


struct Struct823 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*823; i=i+1) {}
        return reps*2;
    }

    Struct823(int val) : field(val) {}
    Struct823() = default;
};

struct polymorphic_Struct823 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*823; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct823(int val) : field(val) {}
       polymorphic_Struct823() = default;
};
/*
inline int do_work(Struct823& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*823; i=i+1) {}
         return reps*2;
}*/


struct Struct824 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*824; i=i+1) {}
        return reps*2;
    }

    Struct824(int val) : field(val) {}
    Struct824() = default;
};

struct polymorphic_Struct824 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*824; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct824(int val) : field(val) {}
       polymorphic_Struct824() = default;
};
/*
inline int do_work(Struct824& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*824; i=i+1) {}
         return reps*2;
}*/


struct Struct825 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*825; i=i+1) {}
        return reps*2;
    }

    Struct825(int val) : field(val) {}
    Struct825() = default;
};

struct polymorphic_Struct825 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*825; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct825(int val) : field(val) {}
       polymorphic_Struct825() = default;
};
/*
inline int do_work(Struct825& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*825; i=i+1) {}
         return reps*2;
}*/


struct Struct826 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*826; i=i+1) {}
        return reps*2;
    }

    Struct826(int val) : field(val) {}
    Struct826() = default;
};

struct polymorphic_Struct826 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*826; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct826(int val) : field(val) {}
       polymorphic_Struct826() = default;
};
/*
inline int do_work(Struct826& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*826; i=i+1) {}
         return reps*2;
}*/


struct Struct827 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*827; i=i+1) {}
        return reps*2;
    }

    Struct827(int val) : field(val) {}
    Struct827() = default;
};

struct polymorphic_Struct827 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*827; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct827(int val) : field(val) {}
       polymorphic_Struct827() = default;
};
/*
inline int do_work(Struct827& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*827; i=i+1) {}
         return reps*2;
}*/


struct Struct828 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*828; i=i+1) {}
        return reps*2;
    }

    Struct828(int val) : field(val) {}
    Struct828() = default;
};

struct polymorphic_Struct828 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*828; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct828(int val) : field(val) {}
       polymorphic_Struct828() = default;
};
/*
inline int do_work(Struct828& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*828; i=i+1) {}
         return reps*2;
}*/


struct Struct829 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*829; i=i+1) {}
        return reps*2;
    }

    Struct829(int val) : field(val) {}
    Struct829() = default;
};

struct polymorphic_Struct829 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*829; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct829(int val) : field(val) {}
       polymorphic_Struct829() = default;
};
/*
inline int do_work(Struct829& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*829; i=i+1) {}
         return reps*2;
}*/


struct Struct830 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*830; i=i+1) {}
        return reps*2;
    }

    Struct830(int val) : field(val) {}
    Struct830() = default;
};

struct polymorphic_Struct830 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*830; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct830(int val) : field(val) {}
       polymorphic_Struct830() = default;
};
/*
inline int do_work(Struct830& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*830; i=i+1) {}
         return reps*2;
}*/


struct Struct831 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*831; i=i+1) {}
        return reps*2;
    }

    Struct831(int val) : field(val) {}
    Struct831() = default;
};

struct polymorphic_Struct831 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*831; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct831(int val) : field(val) {}
       polymorphic_Struct831() = default;
};
/*
inline int do_work(Struct831& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*831; i=i+1) {}
         return reps*2;
}*/


struct Struct832 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*832; i=i+1) {}
        return reps*2;
    }

    Struct832(int val) : field(val) {}
    Struct832() = default;
};

struct polymorphic_Struct832 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*832; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct832(int val) : field(val) {}
       polymorphic_Struct832() = default;
};
/*
inline int do_work(Struct832& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*832; i=i+1) {}
         return reps*2;
}*/


struct Struct833 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*833; i=i+1) {}
        return reps*2;
    }

    Struct833(int val) : field(val) {}
    Struct833() = default;
};

struct polymorphic_Struct833 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*833; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct833(int val) : field(val) {}
       polymorphic_Struct833() = default;
};
/*
inline int do_work(Struct833& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*833; i=i+1) {}
         return reps*2;
}*/


struct Struct834 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*834; i=i+1) {}
        return reps*2;
    }

    Struct834(int val) : field(val) {}
    Struct834() = default;
};

struct polymorphic_Struct834 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*834; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct834(int val) : field(val) {}
       polymorphic_Struct834() = default;
};
/*
inline int do_work(Struct834& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*834; i=i+1) {}
         return reps*2;
}*/


struct Struct835 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*835; i=i+1) {}
        return reps*2;
    }

    Struct835(int val) : field(val) {}
    Struct835() = default;
};

struct polymorphic_Struct835 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*835; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct835(int val) : field(val) {}
       polymorphic_Struct835() = default;
};
/*
inline int do_work(Struct835& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*835; i=i+1) {}
         return reps*2;
}*/


struct Struct836 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*836; i=i+1) {}
        return reps*2;
    }

    Struct836(int val) : field(val) {}
    Struct836() = default;
};

struct polymorphic_Struct836 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*836; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct836(int val) : field(val) {}
       polymorphic_Struct836() = default;
};
/*
inline int do_work(Struct836& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*836; i=i+1) {}
         return reps*2;
}*/


struct Struct837 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*837; i=i+1) {}
        return reps*2;
    }

    Struct837(int val) : field(val) {}
    Struct837() = default;
};

struct polymorphic_Struct837 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*837; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct837(int val) : field(val) {}
       polymorphic_Struct837() = default;
};
/*
inline int do_work(Struct837& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*837; i=i+1) {}
         return reps*2;
}*/


struct Struct838 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*838; i=i+1) {}
        return reps*2;
    }

    Struct838(int val) : field(val) {}
    Struct838() = default;
};

struct polymorphic_Struct838 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*838; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct838(int val) : field(val) {}
       polymorphic_Struct838() = default;
};
/*
inline int do_work(Struct838& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*838; i=i+1) {}
         return reps*2;
}*/


struct Struct839 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*839; i=i+1) {}
        return reps*2;
    }

    Struct839(int val) : field(val) {}
    Struct839() = default;
};

struct polymorphic_Struct839 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*839; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct839(int val) : field(val) {}
       polymorphic_Struct839() = default;
};
/*
inline int do_work(Struct839& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*839; i=i+1) {}
         return reps*2;
}*/


struct Struct840 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*840; i=i+1) {}
        return reps*2;
    }

    Struct840(int val) : field(val) {}
    Struct840() = default;
};

struct polymorphic_Struct840 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*840; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct840(int val) : field(val) {}
       polymorphic_Struct840() = default;
};
/*
inline int do_work(Struct840& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*840; i=i+1) {}
         return reps*2;
}*/


struct Struct841 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*841; i=i+1) {}
        return reps*2;
    }

    Struct841(int val) : field(val) {}
    Struct841() = default;
};

struct polymorphic_Struct841 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*841; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct841(int val) : field(val) {}
       polymorphic_Struct841() = default;
};
/*
inline int do_work(Struct841& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*841; i=i+1) {}
         return reps*2;
}*/


struct Struct842 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*842; i=i+1) {}
        return reps*2;
    }

    Struct842(int val) : field(val) {}
    Struct842() = default;
};

struct polymorphic_Struct842 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*842; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct842(int val) : field(val) {}
       polymorphic_Struct842() = default;
};
/*
inline int do_work(Struct842& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*842; i=i+1) {}
         return reps*2;
}*/


struct Struct843 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*843; i=i+1) {}
        return reps*2;
    }

    Struct843(int val) : field(val) {}
    Struct843() = default;
};

struct polymorphic_Struct843 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*843; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct843(int val) : field(val) {}
       polymorphic_Struct843() = default;
};
/*
inline int do_work(Struct843& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*843; i=i+1) {}
         return reps*2;
}*/


struct Struct844 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*844; i=i+1) {}
        return reps*2;
    }

    Struct844(int val) : field(val) {}
    Struct844() = default;
};

struct polymorphic_Struct844 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*844; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct844(int val) : field(val) {}
       polymorphic_Struct844() = default;
};
/*
inline int do_work(Struct844& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*844; i=i+1) {}
         return reps*2;
}*/


struct Struct845 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*845; i=i+1) {}
        return reps*2;
    }

    Struct845(int val) : field(val) {}
    Struct845() = default;
};

struct polymorphic_Struct845 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*845; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct845(int val) : field(val) {}
       polymorphic_Struct845() = default;
};
/*
inline int do_work(Struct845& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*845; i=i+1) {}
         return reps*2;
}*/


struct Struct846 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*846; i=i+1) {}
        return reps*2;
    }

    Struct846(int val) : field(val) {}
    Struct846() = default;
};

struct polymorphic_Struct846 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*846; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct846(int val) : field(val) {}
       polymorphic_Struct846() = default;
};
/*
inline int do_work(Struct846& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*846; i=i+1) {}
         return reps*2;
}*/


struct Struct847 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*847; i=i+1) {}
        return reps*2;
    }

    Struct847(int val) : field(val) {}
    Struct847() = default;
};

struct polymorphic_Struct847 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*847; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct847(int val) : field(val) {}
       polymorphic_Struct847() = default;
};
/*
inline int do_work(Struct847& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*847; i=i+1) {}
         return reps*2;
}*/


struct Struct848 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*848; i=i+1) {}
        return reps*2;
    }

    Struct848(int val) : field(val) {}
    Struct848() = default;
};

struct polymorphic_Struct848 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*848; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct848(int val) : field(val) {}
       polymorphic_Struct848() = default;
};
/*
inline int do_work(Struct848& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*848; i=i+1) {}
         return reps*2;
}*/


struct Struct849 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*849; i=i+1) {}
        return reps*2;
    }

    Struct849(int val) : field(val) {}
    Struct849() = default;
};

struct polymorphic_Struct849 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*849; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct849(int val) : field(val) {}
       polymorphic_Struct849() = default;
};
/*
inline int do_work(Struct849& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*849; i=i+1) {}
         return reps*2;
}*/


struct Struct850 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*850; i=i+1) {}
        return reps*2;
    }

    Struct850(int val) : field(val) {}
    Struct850() = default;
};

struct polymorphic_Struct850 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*850; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct850(int val) : field(val) {}
       polymorphic_Struct850() = default;
};
/*
inline int do_work(Struct850& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*850; i=i+1) {}
         return reps*2;
}*/


struct Struct851 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*851; i=i+1) {}
        return reps*2;
    }

    Struct851(int val) : field(val) {}
    Struct851() = default;
};

struct polymorphic_Struct851 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*851; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct851(int val) : field(val) {}
       polymorphic_Struct851() = default;
};
/*
inline int do_work(Struct851& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*851; i=i+1) {}
         return reps*2;
}*/


struct Struct852 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*852; i=i+1) {}
        return reps*2;
    }

    Struct852(int val) : field(val) {}
    Struct852() = default;
};

struct polymorphic_Struct852 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*852; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct852(int val) : field(val) {}
       polymorphic_Struct852() = default;
};
/*
inline int do_work(Struct852& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*852; i=i+1) {}
         return reps*2;
}*/


struct Struct853 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*853; i=i+1) {}
        return reps*2;
    }

    Struct853(int val) : field(val) {}
    Struct853() = default;
};

struct polymorphic_Struct853 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*853; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct853(int val) : field(val) {}
       polymorphic_Struct853() = default;
};
/*
inline int do_work(Struct853& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*853; i=i+1) {}
         return reps*2;
}*/


struct Struct854 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*854; i=i+1) {}
        return reps*2;
    }

    Struct854(int val) : field(val) {}
    Struct854() = default;
};

struct polymorphic_Struct854 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*854; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct854(int val) : field(val) {}
       polymorphic_Struct854() = default;
};
/*
inline int do_work(Struct854& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*854; i=i+1) {}
         return reps*2;
}*/


struct Struct855 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*855; i=i+1) {}
        return reps*2;
    }

    Struct855(int val) : field(val) {}
    Struct855() = default;
};

struct polymorphic_Struct855 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*855; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct855(int val) : field(val) {}
       polymorphic_Struct855() = default;
};
/*
inline int do_work(Struct855& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*855; i=i+1) {}
         return reps*2;
}*/


struct Struct856 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*856; i=i+1) {}
        return reps*2;
    }

    Struct856(int val) : field(val) {}
    Struct856() = default;
};

struct polymorphic_Struct856 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*856; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct856(int val) : field(val) {}
       polymorphic_Struct856() = default;
};
/*
inline int do_work(Struct856& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*856; i=i+1) {}
         return reps*2;
}*/


struct Struct857 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*857; i=i+1) {}
        return reps*2;
    }

    Struct857(int val) : field(val) {}
    Struct857() = default;
};

struct polymorphic_Struct857 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*857; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct857(int val) : field(val) {}
       polymorphic_Struct857() = default;
};
/*
inline int do_work(Struct857& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*857; i=i+1) {}
         return reps*2;
}*/


struct Struct858 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*858; i=i+1) {}
        return reps*2;
    }

    Struct858(int val) : field(val) {}
    Struct858() = default;
};

struct polymorphic_Struct858 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*858; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct858(int val) : field(val) {}
       polymorphic_Struct858() = default;
};
/*
inline int do_work(Struct858& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*858; i=i+1) {}
         return reps*2;
}*/


struct Struct859 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*859; i=i+1) {}
        return reps*2;
    }

    Struct859(int val) : field(val) {}
    Struct859() = default;
};

struct polymorphic_Struct859 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*859; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct859(int val) : field(val) {}
       polymorphic_Struct859() = default;
};
/*
inline int do_work(Struct859& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*859; i=i+1) {}
         return reps*2;
}*/


struct Struct860 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*860; i=i+1) {}
        return reps*2;
    }

    Struct860(int val) : field(val) {}
    Struct860() = default;
};

struct polymorphic_Struct860 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*860; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct860(int val) : field(val) {}
       polymorphic_Struct860() = default;
};
/*
inline int do_work(Struct860& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*860; i=i+1) {}
         return reps*2;
}*/


struct Struct861 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*861; i=i+1) {}
        return reps*2;
    }

    Struct861(int val) : field(val) {}
    Struct861() = default;
};

struct polymorphic_Struct861 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*861; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct861(int val) : field(val) {}
       polymorphic_Struct861() = default;
};
/*
inline int do_work(Struct861& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*861; i=i+1) {}
         return reps*2;
}*/


struct Struct862 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*862; i=i+1) {}
        return reps*2;
    }

    Struct862(int val) : field(val) {}
    Struct862() = default;
};

struct polymorphic_Struct862 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*862; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct862(int val) : field(val) {}
       polymorphic_Struct862() = default;
};
/*
inline int do_work(Struct862& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*862; i=i+1) {}
         return reps*2;
}*/


struct Struct863 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*863; i=i+1) {}
        return reps*2;
    }

    Struct863(int val) : field(val) {}
    Struct863() = default;
};

struct polymorphic_Struct863 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*863; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct863(int val) : field(val) {}
       polymorphic_Struct863() = default;
};
/*
inline int do_work(Struct863& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*863; i=i+1) {}
         return reps*2;
}*/


struct Struct864 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*864; i=i+1) {}
        return reps*2;
    }

    Struct864(int val) : field(val) {}
    Struct864() = default;
};

struct polymorphic_Struct864 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*864; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct864(int val) : field(val) {}
       polymorphic_Struct864() = default;
};
/*
inline int do_work(Struct864& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*864; i=i+1) {}
         return reps*2;
}*/


struct Struct865 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*865; i=i+1) {}
        return reps*2;
    }

    Struct865(int val) : field(val) {}
    Struct865() = default;
};

struct polymorphic_Struct865 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*865; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct865(int val) : field(val) {}
       polymorphic_Struct865() = default;
};
/*
inline int do_work(Struct865& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*865; i=i+1) {}
         return reps*2;
}*/


struct Struct866 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*866; i=i+1) {}
        return reps*2;
    }

    Struct866(int val) : field(val) {}
    Struct866() = default;
};

struct polymorphic_Struct866 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*866; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct866(int val) : field(val) {}
       polymorphic_Struct866() = default;
};
/*
inline int do_work(Struct866& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*866; i=i+1) {}
         return reps*2;
}*/


struct Struct867 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*867; i=i+1) {}
        return reps*2;
    }

    Struct867(int val) : field(val) {}
    Struct867() = default;
};

struct polymorphic_Struct867 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*867; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct867(int val) : field(val) {}
       polymorphic_Struct867() = default;
};
/*
inline int do_work(Struct867& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*867; i=i+1) {}
         return reps*2;
}*/


struct Struct868 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*868; i=i+1) {}
        return reps*2;
    }

    Struct868(int val) : field(val) {}
    Struct868() = default;
};

struct polymorphic_Struct868 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*868; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct868(int val) : field(val) {}
       polymorphic_Struct868() = default;
};
/*
inline int do_work(Struct868& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*868; i=i+1) {}
         return reps*2;
}*/


struct Struct869 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*869; i=i+1) {}
        return reps*2;
    }

    Struct869(int val) : field(val) {}
    Struct869() = default;
};

struct polymorphic_Struct869 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*869; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct869(int val) : field(val) {}
       polymorphic_Struct869() = default;
};
/*
inline int do_work(Struct869& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*869; i=i+1) {}
         return reps*2;
}*/


struct Struct870 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*870; i=i+1) {}
        return reps*2;
    }

    Struct870(int val) : field(val) {}
    Struct870() = default;
};

struct polymorphic_Struct870 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*870; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct870(int val) : field(val) {}
       polymorphic_Struct870() = default;
};
/*
inline int do_work(Struct870& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*870; i=i+1) {}
         return reps*2;
}*/


struct Struct871 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*871; i=i+1) {}
        return reps*2;
    }

    Struct871(int val) : field(val) {}
    Struct871() = default;
};

struct polymorphic_Struct871 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*871; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct871(int val) : field(val) {}
       polymorphic_Struct871() = default;
};
/*
inline int do_work(Struct871& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*871; i=i+1) {}
         return reps*2;
}*/


struct Struct872 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*872; i=i+1) {}
        return reps*2;
    }

    Struct872(int val) : field(val) {}
    Struct872() = default;
};

struct polymorphic_Struct872 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*872; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct872(int val) : field(val) {}
       polymorphic_Struct872() = default;
};
/*
inline int do_work(Struct872& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*872; i=i+1) {}
         return reps*2;
}*/


struct Struct873 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*873; i=i+1) {}
        return reps*2;
    }

    Struct873(int val) : field(val) {}
    Struct873() = default;
};

struct polymorphic_Struct873 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*873; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct873(int val) : field(val) {}
       polymorphic_Struct873() = default;
};
/*
inline int do_work(Struct873& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*873; i=i+1) {}
         return reps*2;
}*/


struct Struct874 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*874; i=i+1) {}
        return reps*2;
    }

    Struct874(int val) : field(val) {}
    Struct874() = default;
};

struct polymorphic_Struct874 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*874; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct874(int val) : field(val) {}
       polymorphic_Struct874() = default;
};
/*
inline int do_work(Struct874& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*874; i=i+1) {}
         return reps*2;
}*/


struct Struct875 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*875; i=i+1) {}
        return reps*2;
    }

    Struct875(int val) : field(val) {}
    Struct875() = default;
};

struct polymorphic_Struct875 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*875; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct875(int val) : field(val) {}
       polymorphic_Struct875() = default;
};
/*
inline int do_work(Struct875& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*875; i=i+1) {}
         return reps*2;
}*/


struct Struct876 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*876; i=i+1) {}
        return reps*2;
    }

    Struct876(int val) : field(val) {}
    Struct876() = default;
};

struct polymorphic_Struct876 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*876; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct876(int val) : field(val) {}
       polymorphic_Struct876() = default;
};
/*
inline int do_work(Struct876& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*876; i=i+1) {}
         return reps*2;
}*/


struct Struct877 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*877; i=i+1) {}
        return reps*2;
    }

    Struct877(int val) : field(val) {}
    Struct877() = default;
};

struct polymorphic_Struct877 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*877; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct877(int val) : field(val) {}
       polymorphic_Struct877() = default;
};
/*
inline int do_work(Struct877& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*877; i=i+1) {}
         return reps*2;
}*/


struct Struct878 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*878; i=i+1) {}
        return reps*2;
    }

    Struct878(int val) : field(val) {}
    Struct878() = default;
};

struct polymorphic_Struct878 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*878; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct878(int val) : field(val) {}
       polymorphic_Struct878() = default;
};
/*
inline int do_work(Struct878& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*878; i=i+1) {}
         return reps*2;
}*/


struct Struct879 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*879; i=i+1) {}
        return reps*2;
    }

    Struct879(int val) : field(val) {}
    Struct879() = default;
};

struct polymorphic_Struct879 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*879; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct879(int val) : field(val) {}
       polymorphic_Struct879() = default;
};
/*
inline int do_work(Struct879& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*879; i=i+1) {}
         return reps*2;
}*/


struct Struct880 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*880; i=i+1) {}
        return reps*2;
    }

    Struct880(int val) : field(val) {}
    Struct880() = default;
};

struct polymorphic_Struct880 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*880; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct880(int val) : field(val) {}
       polymorphic_Struct880() = default;
};
/*
inline int do_work(Struct880& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*880; i=i+1) {}
         return reps*2;
}*/


struct Struct881 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*881; i=i+1) {}
        return reps*2;
    }

    Struct881(int val) : field(val) {}
    Struct881() = default;
};

struct polymorphic_Struct881 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*881; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct881(int val) : field(val) {}
       polymorphic_Struct881() = default;
};
/*
inline int do_work(Struct881& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*881; i=i+1) {}
         return reps*2;
}*/


struct Struct882 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*882; i=i+1) {}
        return reps*2;
    }

    Struct882(int val) : field(val) {}
    Struct882() = default;
};

struct polymorphic_Struct882 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*882; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct882(int val) : field(val) {}
       polymorphic_Struct882() = default;
};
/*
inline int do_work(Struct882& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*882; i=i+1) {}
         return reps*2;
}*/


struct Struct883 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*883; i=i+1) {}
        return reps*2;
    }

    Struct883(int val) : field(val) {}
    Struct883() = default;
};

struct polymorphic_Struct883 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*883; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct883(int val) : field(val) {}
       polymorphic_Struct883() = default;
};
/*
inline int do_work(Struct883& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*883; i=i+1) {}
         return reps*2;
}*/


struct Struct884 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*884; i=i+1) {}
        return reps*2;
    }

    Struct884(int val) : field(val) {}
    Struct884() = default;
};

struct polymorphic_Struct884 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*884; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct884(int val) : field(val) {}
       polymorphic_Struct884() = default;
};
/*
inline int do_work(Struct884& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*884; i=i+1) {}
         return reps*2;
}*/


struct Struct885 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*885; i=i+1) {}
        return reps*2;
    }

    Struct885(int val) : field(val) {}
    Struct885() = default;
};

struct polymorphic_Struct885 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*885; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct885(int val) : field(val) {}
       polymorphic_Struct885() = default;
};
/*
inline int do_work(Struct885& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*885; i=i+1) {}
         return reps*2;
}*/


struct Struct886 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*886; i=i+1) {}
        return reps*2;
    }

    Struct886(int val) : field(val) {}
    Struct886() = default;
};

struct polymorphic_Struct886 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*886; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct886(int val) : field(val) {}
       polymorphic_Struct886() = default;
};
/*
inline int do_work(Struct886& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*886; i=i+1) {}
         return reps*2;
}*/


struct Struct887 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*887; i=i+1) {}
        return reps*2;
    }

    Struct887(int val) : field(val) {}
    Struct887() = default;
};

struct polymorphic_Struct887 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*887; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct887(int val) : field(val) {}
       polymorphic_Struct887() = default;
};
/*
inline int do_work(Struct887& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*887; i=i+1) {}
         return reps*2;
}*/


struct Struct888 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*888; i=i+1) {}
        return reps*2;
    }

    Struct888(int val) : field(val) {}
    Struct888() = default;
};

struct polymorphic_Struct888 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*888; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct888(int val) : field(val) {}
       polymorphic_Struct888() = default;
};
/*
inline int do_work(Struct888& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*888; i=i+1) {}
         return reps*2;
}*/


struct Struct889 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*889; i=i+1) {}
        return reps*2;
    }

    Struct889(int val) : field(val) {}
    Struct889() = default;
};

struct polymorphic_Struct889 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*889; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct889(int val) : field(val) {}
       polymorphic_Struct889() = default;
};
/*
inline int do_work(Struct889& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*889; i=i+1) {}
         return reps*2;
}*/


struct Struct890 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*890; i=i+1) {}
        return reps*2;
    }

    Struct890(int val) : field(val) {}
    Struct890() = default;
};

struct polymorphic_Struct890 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*890; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct890(int val) : field(val) {}
       polymorphic_Struct890() = default;
};
/*
inline int do_work(Struct890& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*890; i=i+1) {}
         return reps*2;
}*/


struct Struct891 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*891; i=i+1) {}
        return reps*2;
    }

    Struct891(int val) : field(val) {}
    Struct891() = default;
};

struct polymorphic_Struct891 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*891; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct891(int val) : field(val) {}
       polymorphic_Struct891() = default;
};
/*
inline int do_work(Struct891& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*891; i=i+1) {}
         return reps*2;
}*/


struct Struct892 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*892; i=i+1) {}
        return reps*2;
    }

    Struct892(int val) : field(val) {}
    Struct892() = default;
};

struct polymorphic_Struct892 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*892; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct892(int val) : field(val) {}
       polymorphic_Struct892() = default;
};
/*
inline int do_work(Struct892& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*892; i=i+1) {}
         return reps*2;
}*/


struct Struct893 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*893; i=i+1) {}
        return reps*2;
    }

    Struct893(int val) : field(val) {}
    Struct893() = default;
};

struct polymorphic_Struct893 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*893; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct893(int val) : field(val) {}
       polymorphic_Struct893() = default;
};
/*
inline int do_work(Struct893& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*893; i=i+1) {}
         return reps*2;
}*/


struct Struct894 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*894; i=i+1) {}
        return reps*2;
    }

    Struct894(int val) : field(val) {}
    Struct894() = default;
};

struct polymorphic_Struct894 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*894; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct894(int val) : field(val) {}
       polymorphic_Struct894() = default;
};
/*
inline int do_work(Struct894& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*894; i=i+1) {}
         return reps*2;
}*/


struct Struct895 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*895; i=i+1) {}
        return reps*2;
    }

    Struct895(int val) : field(val) {}
    Struct895() = default;
};

struct polymorphic_Struct895 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*895; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct895(int val) : field(val) {}
       polymorphic_Struct895() = default;
};
/*
inline int do_work(Struct895& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*895; i=i+1) {}
         return reps*2;
}*/


struct Struct896 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*896; i=i+1) {}
        return reps*2;
    }

    Struct896(int val) : field(val) {}
    Struct896() = default;
};

struct polymorphic_Struct896 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*896; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct896(int val) : field(val) {}
       polymorphic_Struct896() = default;
};
/*
inline int do_work(Struct896& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*896; i=i+1) {}
         return reps*2;
}*/


struct Struct897 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*897; i=i+1) {}
        return reps*2;
    }

    Struct897(int val) : field(val) {}
    Struct897() = default;
};

struct polymorphic_Struct897 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*897; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct897(int val) : field(val) {}
       polymorphic_Struct897() = default;
};
/*
inline int do_work(Struct897& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*897; i=i+1) {}
         return reps*2;
}*/


struct Struct898 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*898; i=i+1) {}
        return reps*2;
    }

    Struct898(int val) : field(val) {}
    Struct898() = default;
};

struct polymorphic_Struct898 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*898; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct898(int val) : field(val) {}
       polymorphic_Struct898() = default;
};
/*
inline int do_work(Struct898& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*898; i=i+1) {}
         return reps*2;
}*/


struct Struct899 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*899; i=i+1) {}
        return reps*2;
    }

    Struct899(int val) : field(val) {}
    Struct899() = default;
};

struct polymorphic_Struct899 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*899; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct899(int val) : field(val) {}
       polymorphic_Struct899() = default;
};
/*
inline int do_work(Struct899& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*899; i=i+1) {}
         return reps*2;
}*/


struct Struct900 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*900; i=i+1) {}
        return reps*2;
    }

    Struct900(int val) : field(val) {}
    Struct900() = default;
};

struct polymorphic_Struct900 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*900; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct900(int val) : field(val) {}
       polymorphic_Struct900() = default;
};
/*
inline int do_work(Struct900& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*900; i=i+1) {}
         return reps*2;
}*/


struct Struct901 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*901; i=i+1) {}
        return reps*2;
    }

    Struct901(int val) : field(val) {}
    Struct901() = default;
};

struct polymorphic_Struct901 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*901; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct901(int val) : field(val) {}
       polymorphic_Struct901() = default;
};
/*
inline int do_work(Struct901& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*901; i=i+1) {}
         return reps*2;
}*/


struct Struct902 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*902; i=i+1) {}
        return reps*2;
    }

    Struct902(int val) : field(val) {}
    Struct902() = default;
};

struct polymorphic_Struct902 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*902; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct902(int val) : field(val) {}
       polymorphic_Struct902() = default;
};
/*
inline int do_work(Struct902& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*902; i=i+1) {}
         return reps*2;
}*/


struct Struct903 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*903; i=i+1) {}
        return reps*2;
    }

    Struct903(int val) : field(val) {}
    Struct903() = default;
};

struct polymorphic_Struct903 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*903; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct903(int val) : field(val) {}
       polymorphic_Struct903() = default;
};
/*
inline int do_work(Struct903& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*903; i=i+1) {}
         return reps*2;
}*/


struct Struct904 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*904; i=i+1) {}
        return reps*2;
    }

    Struct904(int val) : field(val) {}
    Struct904() = default;
};

struct polymorphic_Struct904 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*904; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct904(int val) : field(val) {}
       polymorphic_Struct904() = default;
};
/*
inline int do_work(Struct904& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*904; i=i+1) {}
         return reps*2;
}*/


struct Struct905 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*905; i=i+1) {}
        return reps*2;
    }

    Struct905(int val) : field(val) {}
    Struct905() = default;
};

struct polymorphic_Struct905 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*905; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct905(int val) : field(val) {}
       polymorphic_Struct905() = default;
};
/*
inline int do_work(Struct905& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*905; i=i+1) {}
         return reps*2;
}*/


struct Struct906 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*906; i=i+1) {}
        return reps*2;
    }

    Struct906(int val) : field(val) {}
    Struct906() = default;
};

struct polymorphic_Struct906 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*906; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct906(int val) : field(val) {}
       polymorphic_Struct906() = default;
};
/*
inline int do_work(Struct906& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*906; i=i+1) {}
         return reps*2;
}*/


struct Struct907 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*907; i=i+1) {}
        return reps*2;
    }

    Struct907(int val) : field(val) {}
    Struct907() = default;
};

struct polymorphic_Struct907 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*907; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct907(int val) : field(val) {}
       polymorphic_Struct907() = default;
};
/*
inline int do_work(Struct907& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*907; i=i+1) {}
         return reps*2;
}*/


struct Struct908 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*908; i=i+1) {}
        return reps*2;
    }

    Struct908(int val) : field(val) {}
    Struct908() = default;
};

struct polymorphic_Struct908 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*908; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct908(int val) : field(val) {}
       polymorphic_Struct908() = default;
};
/*
inline int do_work(Struct908& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*908; i=i+1) {}
         return reps*2;
}*/


struct Struct909 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*909; i=i+1) {}
        return reps*2;
    }

    Struct909(int val) : field(val) {}
    Struct909() = default;
};

struct polymorphic_Struct909 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*909; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct909(int val) : field(val) {}
       polymorphic_Struct909() = default;
};
/*
inline int do_work(Struct909& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*909; i=i+1) {}
         return reps*2;
}*/


struct Struct910 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*910; i=i+1) {}
        return reps*2;
    }

    Struct910(int val) : field(val) {}
    Struct910() = default;
};

struct polymorphic_Struct910 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*910; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct910(int val) : field(val) {}
       polymorphic_Struct910() = default;
};
/*
inline int do_work(Struct910& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*910; i=i+1) {}
         return reps*2;
}*/


struct Struct911 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*911; i=i+1) {}
        return reps*2;
    }

    Struct911(int val) : field(val) {}
    Struct911() = default;
};

struct polymorphic_Struct911 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*911; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct911(int val) : field(val) {}
       polymorphic_Struct911() = default;
};
/*
inline int do_work(Struct911& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*911; i=i+1) {}
         return reps*2;
}*/


struct Struct912 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*912; i=i+1) {}
        return reps*2;
    }

    Struct912(int val) : field(val) {}
    Struct912() = default;
};

struct polymorphic_Struct912 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*912; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct912(int val) : field(val) {}
       polymorphic_Struct912() = default;
};
/*
inline int do_work(Struct912& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*912; i=i+1) {}
         return reps*2;
}*/


struct Struct913 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*913; i=i+1) {}
        return reps*2;
    }

    Struct913(int val) : field(val) {}
    Struct913() = default;
};

struct polymorphic_Struct913 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*913; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct913(int val) : field(val) {}
       polymorphic_Struct913() = default;
};
/*
inline int do_work(Struct913& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*913; i=i+1) {}
         return reps*2;
}*/


struct Struct914 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*914; i=i+1) {}
        return reps*2;
    }

    Struct914(int val) : field(val) {}
    Struct914() = default;
};

struct polymorphic_Struct914 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*914; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct914(int val) : field(val) {}
       polymorphic_Struct914() = default;
};
/*
inline int do_work(Struct914& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*914; i=i+1) {}
         return reps*2;
}*/


struct Struct915 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*915; i=i+1) {}
        return reps*2;
    }

    Struct915(int val) : field(val) {}
    Struct915() = default;
};

struct polymorphic_Struct915 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*915; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct915(int val) : field(val) {}
       polymorphic_Struct915() = default;
};
/*
inline int do_work(Struct915& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*915; i=i+1) {}
         return reps*2;
}*/


struct Struct916 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*916; i=i+1) {}
        return reps*2;
    }

    Struct916(int val) : field(val) {}
    Struct916() = default;
};

struct polymorphic_Struct916 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*916; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct916(int val) : field(val) {}
       polymorphic_Struct916() = default;
};
/*
inline int do_work(Struct916& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*916; i=i+1) {}
         return reps*2;
}*/


struct Struct917 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*917; i=i+1) {}
        return reps*2;
    }

    Struct917(int val) : field(val) {}
    Struct917() = default;
};

struct polymorphic_Struct917 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*917; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct917(int val) : field(val) {}
       polymorphic_Struct917() = default;
};
/*
inline int do_work(Struct917& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*917; i=i+1) {}
         return reps*2;
}*/


struct Struct918 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*918; i=i+1) {}
        return reps*2;
    }

    Struct918(int val) : field(val) {}
    Struct918() = default;
};

struct polymorphic_Struct918 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*918; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct918(int val) : field(val) {}
       polymorphic_Struct918() = default;
};
/*
inline int do_work(Struct918& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*918; i=i+1) {}
         return reps*2;
}*/


struct Struct919 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*919; i=i+1) {}
        return reps*2;
    }

    Struct919(int val) : field(val) {}
    Struct919() = default;
};

struct polymorphic_Struct919 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*919; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct919(int val) : field(val) {}
       polymorphic_Struct919() = default;
};
/*
inline int do_work(Struct919& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*919; i=i+1) {}
         return reps*2;
}*/


struct Struct920 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*920; i=i+1) {}
        return reps*2;
    }

    Struct920(int val) : field(val) {}
    Struct920() = default;
};

struct polymorphic_Struct920 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*920; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct920(int val) : field(val) {}
       polymorphic_Struct920() = default;
};
/*
inline int do_work(Struct920& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*920; i=i+1) {}
         return reps*2;
}*/


struct Struct921 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*921; i=i+1) {}
        return reps*2;
    }

    Struct921(int val) : field(val) {}
    Struct921() = default;
};

struct polymorphic_Struct921 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*921; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct921(int val) : field(val) {}
       polymorphic_Struct921() = default;
};
/*
inline int do_work(Struct921& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*921; i=i+1) {}
         return reps*2;
}*/


struct Struct922 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*922; i=i+1) {}
        return reps*2;
    }

    Struct922(int val) : field(val) {}
    Struct922() = default;
};

struct polymorphic_Struct922 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*922; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct922(int val) : field(val) {}
       polymorphic_Struct922() = default;
};
/*
inline int do_work(Struct922& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*922; i=i+1) {}
         return reps*2;
}*/


struct Struct923 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*923; i=i+1) {}
        return reps*2;
    }

    Struct923(int val) : field(val) {}
    Struct923() = default;
};

struct polymorphic_Struct923 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*923; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct923(int val) : field(val) {}
       polymorphic_Struct923() = default;
};
/*
inline int do_work(Struct923& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*923; i=i+1) {}
         return reps*2;
}*/


struct Struct924 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*924; i=i+1) {}
        return reps*2;
    }

    Struct924(int val) : field(val) {}
    Struct924() = default;
};

struct polymorphic_Struct924 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*924; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct924(int val) : field(val) {}
       polymorphic_Struct924() = default;
};
/*
inline int do_work(Struct924& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*924; i=i+1) {}
         return reps*2;
}*/


struct Struct925 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*925; i=i+1) {}
        return reps*2;
    }

    Struct925(int val) : field(val) {}
    Struct925() = default;
};

struct polymorphic_Struct925 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*925; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct925(int val) : field(val) {}
       polymorphic_Struct925() = default;
};
/*
inline int do_work(Struct925& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*925; i=i+1) {}
         return reps*2;
}*/


struct Struct926 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*926; i=i+1) {}
        return reps*2;
    }

    Struct926(int val) : field(val) {}
    Struct926() = default;
};

struct polymorphic_Struct926 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*926; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct926(int val) : field(val) {}
       polymorphic_Struct926() = default;
};
/*
inline int do_work(Struct926& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*926; i=i+1) {}
         return reps*2;
}*/


struct Struct927 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*927; i=i+1) {}
        return reps*2;
    }

    Struct927(int val) : field(val) {}
    Struct927() = default;
};

struct polymorphic_Struct927 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*927; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct927(int val) : field(val) {}
       polymorphic_Struct927() = default;
};
/*
inline int do_work(Struct927& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*927; i=i+1) {}
         return reps*2;
}*/


struct Struct928 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*928; i=i+1) {}
        return reps*2;
    }

    Struct928(int val) : field(val) {}
    Struct928() = default;
};

struct polymorphic_Struct928 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*928; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct928(int val) : field(val) {}
       polymorphic_Struct928() = default;
};
/*
inline int do_work(Struct928& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*928; i=i+1) {}
         return reps*2;
}*/


struct Struct929 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*929; i=i+1) {}
        return reps*2;
    }

    Struct929(int val) : field(val) {}
    Struct929() = default;
};

struct polymorphic_Struct929 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*929; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct929(int val) : field(val) {}
       polymorphic_Struct929() = default;
};
/*
inline int do_work(Struct929& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*929; i=i+1) {}
         return reps*2;
}*/


struct Struct930 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*930; i=i+1) {}
        return reps*2;
    }

    Struct930(int val) : field(val) {}
    Struct930() = default;
};

struct polymorphic_Struct930 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*930; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct930(int val) : field(val) {}
       polymorphic_Struct930() = default;
};
/*
inline int do_work(Struct930& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*930; i=i+1) {}
         return reps*2;
}*/


struct Struct931 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*931; i=i+1) {}
        return reps*2;
    }

    Struct931(int val) : field(val) {}
    Struct931() = default;
};

struct polymorphic_Struct931 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*931; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct931(int val) : field(val) {}
       polymorphic_Struct931() = default;
};
/*
inline int do_work(Struct931& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*931; i=i+1) {}
         return reps*2;
}*/


struct Struct932 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*932; i=i+1) {}
        return reps*2;
    }

    Struct932(int val) : field(val) {}
    Struct932() = default;
};

struct polymorphic_Struct932 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*932; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct932(int val) : field(val) {}
       polymorphic_Struct932() = default;
};
/*
inline int do_work(Struct932& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*932; i=i+1) {}
         return reps*2;
}*/


struct Struct933 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*933; i=i+1) {}
        return reps*2;
    }

    Struct933(int val) : field(val) {}
    Struct933() = default;
};

struct polymorphic_Struct933 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*933; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct933(int val) : field(val) {}
       polymorphic_Struct933() = default;
};
/*
inline int do_work(Struct933& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*933; i=i+1) {}
         return reps*2;
}*/


struct Struct934 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*934; i=i+1) {}
        return reps*2;
    }

    Struct934(int val) : field(val) {}
    Struct934() = default;
};

struct polymorphic_Struct934 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*934; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct934(int val) : field(val) {}
       polymorphic_Struct934() = default;
};
/*
inline int do_work(Struct934& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*934; i=i+1) {}
         return reps*2;
}*/


struct Struct935 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*935; i=i+1) {}
        return reps*2;
    }

    Struct935(int val) : field(val) {}
    Struct935() = default;
};

struct polymorphic_Struct935 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*935; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct935(int val) : field(val) {}
       polymorphic_Struct935() = default;
};
/*
inline int do_work(Struct935& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*935; i=i+1) {}
         return reps*2;
}*/


struct Struct936 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*936; i=i+1) {}
        return reps*2;
    }

    Struct936(int val) : field(val) {}
    Struct936() = default;
};

struct polymorphic_Struct936 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*936; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct936(int val) : field(val) {}
       polymorphic_Struct936() = default;
};
/*
inline int do_work(Struct936& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*936; i=i+1) {}
         return reps*2;
}*/


struct Struct937 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*937; i=i+1) {}
        return reps*2;
    }

    Struct937(int val) : field(val) {}
    Struct937() = default;
};

struct polymorphic_Struct937 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*937; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct937(int val) : field(val) {}
       polymorphic_Struct937() = default;
};
/*
inline int do_work(Struct937& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*937; i=i+1) {}
         return reps*2;
}*/


struct Struct938 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*938; i=i+1) {}
        return reps*2;
    }

    Struct938(int val) : field(val) {}
    Struct938() = default;
};

struct polymorphic_Struct938 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*938; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct938(int val) : field(val) {}
       polymorphic_Struct938() = default;
};
/*
inline int do_work(Struct938& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*938; i=i+1) {}
         return reps*2;
}*/


struct Struct939 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*939; i=i+1) {}
        return reps*2;
    }

    Struct939(int val) : field(val) {}
    Struct939() = default;
};

struct polymorphic_Struct939 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*939; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct939(int val) : field(val) {}
       polymorphic_Struct939() = default;
};
/*
inline int do_work(Struct939& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*939; i=i+1) {}
         return reps*2;
}*/


struct Struct940 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*940; i=i+1) {}
        return reps*2;
    }

    Struct940(int val) : field(val) {}
    Struct940() = default;
};

struct polymorphic_Struct940 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*940; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct940(int val) : field(val) {}
       polymorphic_Struct940() = default;
};
/*
inline int do_work(Struct940& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*940; i=i+1) {}
         return reps*2;
}*/


struct Struct941 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*941; i=i+1) {}
        return reps*2;
    }

    Struct941(int val) : field(val) {}
    Struct941() = default;
};

struct polymorphic_Struct941 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*941; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct941(int val) : field(val) {}
       polymorphic_Struct941() = default;
};
/*
inline int do_work(Struct941& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*941; i=i+1) {}
         return reps*2;
}*/


struct Struct942 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*942; i=i+1) {}
        return reps*2;
    }

    Struct942(int val) : field(val) {}
    Struct942() = default;
};

struct polymorphic_Struct942 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*942; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct942(int val) : field(val) {}
       polymorphic_Struct942() = default;
};
/*
inline int do_work(Struct942& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*942; i=i+1) {}
         return reps*2;
}*/


struct Struct943 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*943; i=i+1) {}
        return reps*2;
    }

    Struct943(int val) : field(val) {}
    Struct943() = default;
};

struct polymorphic_Struct943 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*943; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct943(int val) : field(val) {}
       polymorphic_Struct943() = default;
};
/*
inline int do_work(Struct943& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*943; i=i+1) {}
         return reps*2;
}*/


struct Struct944 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*944; i=i+1) {}
        return reps*2;
    }

    Struct944(int val) : field(val) {}
    Struct944() = default;
};

struct polymorphic_Struct944 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*944; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct944(int val) : field(val) {}
       polymorphic_Struct944() = default;
};
/*
inline int do_work(Struct944& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*944; i=i+1) {}
         return reps*2;
}*/


struct Struct945 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*945; i=i+1) {}
        return reps*2;
    }

    Struct945(int val) : field(val) {}
    Struct945() = default;
};

struct polymorphic_Struct945 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*945; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct945(int val) : field(val) {}
       polymorphic_Struct945() = default;
};
/*
inline int do_work(Struct945& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*945; i=i+1) {}
         return reps*2;
}*/


struct Struct946 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*946; i=i+1) {}
        return reps*2;
    }

    Struct946(int val) : field(val) {}
    Struct946() = default;
};

struct polymorphic_Struct946 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*946; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct946(int val) : field(val) {}
       polymorphic_Struct946() = default;
};
/*
inline int do_work(Struct946& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*946; i=i+1) {}
         return reps*2;
}*/


struct Struct947 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*947; i=i+1) {}
        return reps*2;
    }

    Struct947(int val) : field(val) {}
    Struct947() = default;
};

struct polymorphic_Struct947 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*947; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct947(int val) : field(val) {}
       polymorphic_Struct947() = default;
};
/*
inline int do_work(Struct947& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*947; i=i+1) {}
         return reps*2;
}*/


struct Struct948 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*948; i=i+1) {}
        return reps*2;
    }

    Struct948(int val) : field(val) {}
    Struct948() = default;
};

struct polymorphic_Struct948 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*948; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct948(int val) : field(val) {}
       polymorphic_Struct948() = default;
};
/*
inline int do_work(Struct948& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*948; i=i+1) {}
         return reps*2;
}*/


struct Struct949 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*949; i=i+1) {}
        return reps*2;
    }

    Struct949(int val) : field(val) {}
    Struct949() = default;
};

struct polymorphic_Struct949 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*949; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct949(int val) : field(val) {}
       polymorphic_Struct949() = default;
};
/*
inline int do_work(Struct949& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*949; i=i+1) {}
         return reps*2;
}*/


struct Struct950 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*950; i=i+1) {}
        return reps*2;
    }

    Struct950(int val) : field(val) {}
    Struct950() = default;
};

struct polymorphic_Struct950 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*950; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct950(int val) : field(val) {}
       polymorphic_Struct950() = default;
};
/*
inline int do_work(Struct950& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*950; i=i+1) {}
         return reps*2;
}*/


struct Struct951 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*951; i=i+1) {}
        return reps*2;
    }

    Struct951(int val) : field(val) {}
    Struct951() = default;
};

struct polymorphic_Struct951 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*951; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct951(int val) : field(val) {}
       polymorphic_Struct951() = default;
};
/*
inline int do_work(Struct951& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*951; i=i+1) {}
         return reps*2;
}*/


struct Struct952 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*952; i=i+1) {}
        return reps*2;
    }

    Struct952(int val) : field(val) {}
    Struct952() = default;
};

struct polymorphic_Struct952 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*952; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct952(int val) : field(val) {}
       polymorphic_Struct952() = default;
};
/*
inline int do_work(Struct952& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*952; i=i+1) {}
         return reps*2;
}*/


struct Struct953 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*953; i=i+1) {}
        return reps*2;
    }

    Struct953(int val) : field(val) {}
    Struct953() = default;
};

struct polymorphic_Struct953 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*953; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct953(int val) : field(val) {}
       polymorphic_Struct953() = default;
};
/*
inline int do_work(Struct953& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*953; i=i+1) {}
         return reps*2;
}*/


struct Struct954 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*954; i=i+1) {}
        return reps*2;
    }

    Struct954(int val) : field(val) {}
    Struct954() = default;
};

struct polymorphic_Struct954 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*954; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct954(int val) : field(val) {}
       polymorphic_Struct954() = default;
};
/*
inline int do_work(Struct954& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*954; i=i+1) {}
         return reps*2;
}*/


struct Struct955 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*955; i=i+1) {}
        return reps*2;
    }

    Struct955(int val) : field(val) {}
    Struct955() = default;
};

struct polymorphic_Struct955 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*955; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct955(int val) : field(val) {}
       polymorphic_Struct955() = default;
};
/*
inline int do_work(Struct955& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*955; i=i+1) {}
         return reps*2;
}*/


struct Struct956 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*956; i=i+1) {}
        return reps*2;
    }

    Struct956(int val) : field(val) {}
    Struct956() = default;
};

struct polymorphic_Struct956 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*956; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct956(int val) : field(val) {}
       polymorphic_Struct956() = default;
};
/*
inline int do_work(Struct956& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*956; i=i+1) {}
         return reps*2;
}*/


struct Struct957 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*957; i=i+1) {}
        return reps*2;
    }

    Struct957(int val) : field(val) {}
    Struct957() = default;
};

struct polymorphic_Struct957 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*957; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct957(int val) : field(val) {}
       polymorphic_Struct957() = default;
};
/*
inline int do_work(Struct957& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*957; i=i+1) {}
         return reps*2;
}*/


struct Struct958 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*958; i=i+1) {}
        return reps*2;
    }

    Struct958(int val) : field(val) {}
    Struct958() = default;
};

struct polymorphic_Struct958 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*958; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct958(int val) : field(val) {}
       polymorphic_Struct958() = default;
};
/*
inline int do_work(Struct958& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*958; i=i+1) {}
         return reps*2;
}*/


struct Struct959 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*959; i=i+1) {}
        return reps*2;
    }

    Struct959(int val) : field(val) {}
    Struct959() = default;
};

struct polymorphic_Struct959 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*959; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct959(int val) : field(val) {}
       polymorphic_Struct959() = default;
};
/*
inline int do_work(Struct959& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*959; i=i+1) {}
         return reps*2;
}*/


struct Struct960 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*960; i=i+1) {}
        return reps*2;
    }

    Struct960(int val) : field(val) {}
    Struct960() = default;
};

struct polymorphic_Struct960 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*960; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct960(int val) : field(val) {}
       polymorphic_Struct960() = default;
};
/*
inline int do_work(Struct960& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*960; i=i+1) {}
         return reps*2;
}*/


struct Struct961 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*961; i=i+1) {}
        return reps*2;
    }

    Struct961(int val) : field(val) {}
    Struct961() = default;
};

struct polymorphic_Struct961 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*961; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct961(int val) : field(val) {}
       polymorphic_Struct961() = default;
};
/*
inline int do_work(Struct961& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*961; i=i+1) {}
         return reps*2;
}*/


struct Struct962 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*962; i=i+1) {}
        return reps*2;
    }

    Struct962(int val) : field(val) {}
    Struct962() = default;
};

struct polymorphic_Struct962 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*962; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct962(int val) : field(val) {}
       polymorphic_Struct962() = default;
};
/*
inline int do_work(Struct962& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*962; i=i+1) {}
         return reps*2;
}*/


struct Struct963 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*963; i=i+1) {}
        return reps*2;
    }

    Struct963(int val) : field(val) {}
    Struct963() = default;
};

struct polymorphic_Struct963 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*963; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct963(int val) : field(val) {}
       polymorphic_Struct963() = default;
};
/*
inline int do_work(Struct963& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*963; i=i+1) {}
         return reps*2;
}*/


struct Struct964 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*964; i=i+1) {}
        return reps*2;
    }

    Struct964(int val) : field(val) {}
    Struct964() = default;
};

struct polymorphic_Struct964 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*964; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct964(int val) : field(val) {}
       polymorphic_Struct964() = default;
};
/*
inline int do_work(Struct964& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*964; i=i+1) {}
         return reps*2;
}*/


struct Struct965 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*965; i=i+1) {}
        return reps*2;
    }

    Struct965(int val) : field(val) {}
    Struct965() = default;
};

struct polymorphic_Struct965 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*965; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct965(int val) : field(val) {}
       polymorphic_Struct965() = default;
};
/*
inline int do_work(Struct965& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*965; i=i+1) {}
         return reps*2;
}*/


struct Struct966 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*966; i=i+1) {}
        return reps*2;
    }

    Struct966(int val) : field(val) {}
    Struct966() = default;
};

struct polymorphic_Struct966 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*966; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct966(int val) : field(val) {}
       polymorphic_Struct966() = default;
};
/*
inline int do_work(Struct966& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*966; i=i+1) {}
         return reps*2;
}*/


struct Struct967 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*967; i=i+1) {}
        return reps*2;
    }

    Struct967(int val) : field(val) {}
    Struct967() = default;
};

struct polymorphic_Struct967 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*967; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct967(int val) : field(val) {}
       polymorphic_Struct967() = default;
};
/*
inline int do_work(Struct967& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*967; i=i+1) {}
         return reps*2;
}*/


struct Struct968 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*968; i=i+1) {}
        return reps*2;
    }

    Struct968(int val) : field(val) {}
    Struct968() = default;
};

struct polymorphic_Struct968 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*968; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct968(int val) : field(val) {}
       polymorphic_Struct968() = default;
};
/*
inline int do_work(Struct968& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*968; i=i+1) {}
         return reps*2;
}*/


struct Struct969 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*969; i=i+1) {}
        return reps*2;
    }

    Struct969(int val) : field(val) {}
    Struct969() = default;
};

struct polymorphic_Struct969 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*969; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct969(int val) : field(val) {}
       polymorphic_Struct969() = default;
};
/*
inline int do_work(Struct969& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*969; i=i+1) {}
         return reps*2;
}*/


struct Struct970 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*970; i=i+1) {}
        return reps*2;
    }

    Struct970(int val) : field(val) {}
    Struct970() = default;
};

struct polymorphic_Struct970 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*970; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct970(int val) : field(val) {}
       polymorphic_Struct970() = default;
};
/*
inline int do_work(Struct970& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*970; i=i+1) {}
         return reps*2;
}*/


struct Struct971 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*971; i=i+1) {}
        return reps*2;
    }

    Struct971(int val) : field(val) {}
    Struct971() = default;
};

struct polymorphic_Struct971 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*971; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct971(int val) : field(val) {}
       polymorphic_Struct971() = default;
};
/*
inline int do_work(Struct971& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*971; i=i+1) {}
         return reps*2;
}*/


struct Struct972 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*972; i=i+1) {}
        return reps*2;
    }

    Struct972(int val) : field(val) {}
    Struct972() = default;
};

struct polymorphic_Struct972 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*972; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct972(int val) : field(val) {}
       polymorphic_Struct972() = default;
};
/*
inline int do_work(Struct972& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*972; i=i+1) {}
         return reps*2;
}*/


struct Struct973 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*973; i=i+1) {}
        return reps*2;
    }

    Struct973(int val) : field(val) {}
    Struct973() = default;
};

struct polymorphic_Struct973 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*973; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct973(int val) : field(val) {}
       polymorphic_Struct973() = default;
};
/*
inline int do_work(Struct973& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*973; i=i+1) {}
         return reps*2;
}*/


struct Struct974 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*974; i=i+1) {}
        return reps*2;
    }

    Struct974(int val) : field(val) {}
    Struct974() = default;
};

struct polymorphic_Struct974 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*974; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct974(int val) : field(val) {}
       polymorphic_Struct974() = default;
};
/*
inline int do_work(Struct974& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*974; i=i+1) {}
         return reps*2;
}*/


struct Struct975 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*975; i=i+1) {}
        return reps*2;
    }

    Struct975(int val) : field(val) {}
    Struct975() = default;
};

struct polymorphic_Struct975 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*975; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct975(int val) : field(val) {}
       polymorphic_Struct975() = default;
};
/*
inline int do_work(Struct975& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*975; i=i+1) {}
         return reps*2;
}*/


struct Struct976 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*976; i=i+1) {}
        return reps*2;
    }

    Struct976(int val) : field(val) {}
    Struct976() = default;
};

struct polymorphic_Struct976 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*976; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct976(int val) : field(val) {}
       polymorphic_Struct976() = default;
};
/*
inline int do_work(Struct976& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*976; i=i+1) {}
         return reps*2;
}*/


struct Struct977 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*977; i=i+1) {}
        return reps*2;
    }

    Struct977(int val) : field(val) {}
    Struct977() = default;
};

struct polymorphic_Struct977 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*977; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct977(int val) : field(val) {}
       polymorphic_Struct977() = default;
};
/*
inline int do_work(Struct977& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*977; i=i+1) {}
         return reps*2;
}*/


struct Struct978 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*978; i=i+1) {}
        return reps*2;
    }

    Struct978(int val) : field(val) {}
    Struct978() = default;
};

struct polymorphic_Struct978 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*978; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct978(int val) : field(val) {}
       polymorphic_Struct978() = default;
};
/*
inline int do_work(Struct978& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*978; i=i+1) {}
         return reps*2;
}*/


struct Struct979 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*979; i=i+1) {}
        return reps*2;
    }

    Struct979(int val) : field(val) {}
    Struct979() = default;
};

struct polymorphic_Struct979 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*979; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct979(int val) : field(val) {}
       polymorphic_Struct979() = default;
};
/*
inline int do_work(Struct979& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*979; i=i+1) {}
         return reps*2;
}*/


struct Struct980 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*980; i=i+1) {}
        return reps*2;
    }

    Struct980(int val) : field(val) {}
    Struct980() = default;
};

struct polymorphic_Struct980 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*980; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct980(int val) : field(val) {}
       polymorphic_Struct980() = default;
};
/*
inline int do_work(Struct980& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*980; i=i+1) {}
         return reps*2;
}*/


struct Struct981 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*981; i=i+1) {}
        return reps*2;
    }

    Struct981(int val) : field(val) {}
    Struct981() = default;
};

struct polymorphic_Struct981 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*981; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct981(int val) : field(val) {}
       polymorphic_Struct981() = default;
};
/*
inline int do_work(Struct981& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*981; i=i+1) {}
         return reps*2;
}*/


struct Struct982 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*982; i=i+1) {}
        return reps*2;
    }

    Struct982(int val) : field(val) {}
    Struct982() = default;
};

struct polymorphic_Struct982 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*982; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct982(int val) : field(val) {}
       polymorphic_Struct982() = default;
};
/*
inline int do_work(Struct982& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*982; i=i+1) {}
         return reps*2;
}*/


struct Struct983 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*983; i=i+1) {}
        return reps*2;
    }

    Struct983(int val) : field(val) {}
    Struct983() = default;
};

struct polymorphic_Struct983 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*983; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct983(int val) : field(val) {}
       polymorphic_Struct983() = default;
};
/*
inline int do_work(Struct983& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*983; i=i+1) {}
         return reps*2;
}*/


struct Struct984 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*984; i=i+1) {}
        return reps*2;
    }

    Struct984(int val) : field(val) {}
    Struct984() = default;
};

struct polymorphic_Struct984 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*984; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct984(int val) : field(val) {}
       polymorphic_Struct984() = default;
};
/*
inline int do_work(Struct984& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*984; i=i+1) {}
         return reps*2;
}*/


struct Struct985 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*985; i=i+1) {}
        return reps*2;
    }

    Struct985(int val) : field(val) {}
    Struct985() = default;
};

struct polymorphic_Struct985 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*985; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct985(int val) : field(val) {}
       polymorphic_Struct985() = default;
};
/*
inline int do_work(Struct985& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*985; i=i+1) {}
         return reps*2;
}*/


struct Struct986 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*986; i=i+1) {}
        return reps*2;
    }

    Struct986(int val) : field(val) {}
    Struct986() = default;
};

struct polymorphic_Struct986 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*986; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct986(int val) : field(val) {}
       polymorphic_Struct986() = default;
};
/*
inline int do_work(Struct986& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*986; i=i+1) {}
         return reps*2;
}*/


struct Struct987 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*987; i=i+1) {}
        return reps*2;
    }

    Struct987(int val) : field(val) {}
    Struct987() = default;
};

struct polymorphic_Struct987 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*987; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct987(int val) : field(val) {}
       polymorphic_Struct987() = default;
};
/*
inline int do_work(Struct987& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*987; i=i+1) {}
         return reps*2;
}*/


struct Struct988 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*988; i=i+1) {}
        return reps*2;
    }

    Struct988(int val) : field(val) {}
    Struct988() = default;
};

struct polymorphic_Struct988 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*988; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct988(int val) : field(val) {}
       polymorphic_Struct988() = default;
};
/*
inline int do_work(Struct988& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*988; i=i+1) {}
         return reps*2;
}*/


struct Struct989 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*989; i=i+1) {}
        return reps*2;
    }

    Struct989(int val) : field(val) {}
    Struct989() = default;
};

struct polymorphic_Struct989 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*989; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct989(int val) : field(val) {}
       polymorphic_Struct989() = default;
};
/*
inline int do_work(Struct989& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*989; i=i+1) {}
         return reps*2;
}*/


struct Struct990 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*990; i=i+1) {}
        return reps*2;
    }

    Struct990(int val) : field(val) {}
    Struct990() = default;
};

struct polymorphic_Struct990 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*990; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct990(int val) : field(val) {}
       polymorphic_Struct990() = default;
};
/*
inline int do_work(Struct990& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*990; i=i+1) {}
         return reps*2;
}*/


struct Struct991 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*991; i=i+1) {}
        return reps*2;
    }

    Struct991(int val) : field(val) {}
    Struct991() = default;
};

struct polymorphic_Struct991 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*991; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct991(int val) : field(val) {}
       polymorphic_Struct991() = default;
};
/*
inline int do_work(Struct991& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*991; i=i+1) {}
         return reps*2;
}*/


struct Struct992 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*992; i=i+1) {}
        return reps*2;
    }

    Struct992(int val) : field(val) {}
    Struct992() = default;
};

struct polymorphic_Struct992 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*992; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct992(int val) : field(val) {}
       polymorphic_Struct992() = default;
};
/*
inline int do_work(Struct992& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*992; i=i+1) {}
         return reps*2;
}*/


struct Struct993 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*993; i=i+1) {}
        return reps*2;
    }

    Struct993(int val) : field(val) {}
    Struct993() = default;
};

struct polymorphic_Struct993 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*993; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct993(int val) : field(val) {}
       polymorphic_Struct993() = default;
};
/*
inline int do_work(Struct993& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*993; i=i+1) {}
         return reps*2;
}*/


struct Struct994 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*994; i=i+1) {}
        return reps*2;
    }

    Struct994(int val) : field(val) {}
    Struct994() = default;
};

struct polymorphic_Struct994 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*994; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct994(int val) : field(val) {}
       polymorphic_Struct994() = default;
};
/*
inline int do_work(Struct994& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*994; i=i+1) {}
         return reps*2;
}*/


struct Struct995 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*995; i=i+1) {}
        return reps*2;
    }

    Struct995(int val) : field(val) {}
    Struct995() = default;
};

struct polymorphic_Struct995 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*995; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct995(int val) : field(val) {}
       polymorphic_Struct995() = default;
};
/*
inline int do_work(Struct995& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*995; i=i+1) {}
         return reps*2;
}*/


struct Struct996 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*996; i=i+1) {}
        return reps*2;
    }

    Struct996(int val) : field(val) {}
    Struct996() = default;
};

struct polymorphic_Struct996 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*996; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct996(int val) : field(val) {}
       polymorphic_Struct996() = default;
};
/*
inline int do_work(Struct996& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*996; i=i+1) {}
         return reps*2;
}*/


struct Struct997 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*997; i=i+1) {}
        return reps*2;
    }

    Struct997(int val) : field(val) {}
    Struct997() = default;
};

struct polymorphic_Struct997 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*997; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct997(int val) : field(val) {}
       polymorphic_Struct997() = default;
};
/*
inline int do_work(Struct997& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*997; i=i+1) {}
         return reps*2;
}*/


struct Struct998 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*998; i=i+1) {}
        return reps*2;
    }

    Struct998(int val) : field(val) {}
    Struct998() = default;
};

struct polymorphic_Struct998 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*998; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct998(int val) : field(val) {}
       polymorphic_Struct998() = default;
};
/*
inline int do_work(Struct998& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*998; i=i+1) {}
         return reps*2;
}*/


struct Struct999 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*999; i=i+1) {}
        return reps*2;
    }

    Struct999(int val) : field(val) {}
    Struct999() = default;
};

struct polymorphic_Struct999 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*999; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct999(int val) : field(val) {}
       polymorphic_Struct999() = default;
};
/*
inline int do_work(Struct999& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*999; i=i+1) {}
         return reps*2;
}*/


struct Struct1000 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1000; i=i+1) {}
        return reps*2;
    }

    Struct1000(int val) : field(val) {}
    Struct1000() = default;
};

struct polymorphic_Struct1000 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1000; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1000(int val) : field(val) {}
       polymorphic_Struct1000() = default;
};
/*
inline int do_work(Struct1000& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1000; i=i+1) {}
         return reps*2;
}*/


struct Struct1001 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1001; i=i+1) {}
        return reps*2;
    }

    Struct1001(int val) : field(val) {}
    Struct1001() = default;
};

struct polymorphic_Struct1001 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1001; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1001(int val) : field(val) {}
       polymorphic_Struct1001() = default;
};
/*
inline int do_work(Struct1001& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1001; i=i+1) {}
         return reps*2;
}*/


struct Struct1002 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1002; i=i+1) {}
        return reps*2;
    }

    Struct1002(int val) : field(val) {}
    Struct1002() = default;
};

struct polymorphic_Struct1002 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1002; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1002(int val) : field(val) {}
       polymorphic_Struct1002() = default;
};
/*
inline int do_work(Struct1002& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1002; i=i+1) {}
         return reps*2;
}*/


struct Struct1003 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1003; i=i+1) {}
        return reps*2;
    }

    Struct1003(int val) : field(val) {}
    Struct1003() = default;
};

struct polymorphic_Struct1003 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1003; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1003(int val) : field(val) {}
       polymorphic_Struct1003() = default;
};
/*
inline int do_work(Struct1003& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1003; i=i+1) {}
         return reps*2;
}*/


struct Struct1004 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1004; i=i+1) {}
        return reps*2;
    }

    Struct1004(int val) : field(val) {}
    Struct1004() = default;
};

struct polymorphic_Struct1004 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1004; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1004(int val) : field(val) {}
       polymorphic_Struct1004() = default;
};
/*
inline int do_work(Struct1004& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1004; i=i+1) {}
         return reps*2;
}*/


struct Struct1005 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1005; i=i+1) {}
        return reps*2;
    }

    Struct1005(int val) : field(val) {}
    Struct1005() = default;
};

struct polymorphic_Struct1005 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1005; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1005(int val) : field(val) {}
       polymorphic_Struct1005() = default;
};
/*
inline int do_work(Struct1005& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1005; i=i+1) {}
         return reps*2;
}*/


struct Struct1006 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1006; i=i+1) {}
        return reps*2;
    }

    Struct1006(int val) : field(val) {}
    Struct1006() = default;
};

struct polymorphic_Struct1006 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1006; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1006(int val) : field(val) {}
       polymorphic_Struct1006() = default;
};
/*
inline int do_work(Struct1006& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1006; i=i+1) {}
         return reps*2;
}*/


struct Struct1007 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1007; i=i+1) {}
        return reps*2;
    }

    Struct1007(int val) : field(val) {}
    Struct1007() = default;
};

struct polymorphic_Struct1007 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1007; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1007(int val) : field(val) {}
       polymorphic_Struct1007() = default;
};
/*
inline int do_work(Struct1007& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1007; i=i+1) {}
         return reps*2;
}*/


struct Struct1008 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1008; i=i+1) {}
        return reps*2;
    }

    Struct1008(int val) : field(val) {}
    Struct1008() = default;
};

struct polymorphic_Struct1008 : public Virtual_Base_Struct {
    bool field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1008; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1008(int val) : field(val) {}
       polymorphic_Struct1008() = default;
};
/*
inline int do_work(Struct1008& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1008; i=i+1) {}
         return reps*2;
}*/


struct Struct1009 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1009; i=i+1) {}
        return reps*2;
    }

    Struct1009(int val) : field(val) {}
    Struct1009() = default;
};

struct polymorphic_Struct1009 : public Virtual_Base_Struct {
    int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1009; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1009(int val) : field(val) {}
       polymorphic_Struct1009() = default;
};
/*
inline int do_work(Struct1009& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1009; i=i+1) {}
         return reps*2;
}*/


struct Struct1010 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1010; i=i+1) {}
        return reps*2;
    }

    Struct1010(int val) : field(val) {}
    Struct1010() = default;
};

struct polymorphic_Struct1010 : public Virtual_Base_Struct {
    long field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1010; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1010(int val) : field(val) {}
       polymorphic_Struct1010() = default;
};
/*
inline int do_work(Struct1010& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1010; i=i+1) {}
         return reps*2;
}*/


struct Struct1011 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1011; i=i+1) {}
        return reps*2;
    }

    Struct1011(int val) : field(val) {}
    Struct1011() = default;
};

struct polymorphic_Struct1011 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1011; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1011(int val) : field(val) {}
       polymorphic_Struct1011() = default;
};
/*
inline int do_work(Struct1011& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1011; i=i+1) {}
         return reps*2;
}*/


struct Struct1012 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1012; i=i+1) {}
        return reps*2;
    }

    Struct1012(int val) : field(val) {}
    Struct1012() = default;
};

struct polymorphic_Struct1012 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1012; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1012(int val) : field(val) {}
       polymorphic_Struct1012() = default;
};
/*
inline int do_work(Struct1012& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1012; i=i+1) {}
         return reps*2;
}*/


struct Struct1013 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1013; i=i+1) {}
        return reps*2;
    }

    Struct1013(int val) : field(val) {}
    Struct1013() = default;
};

struct polymorphic_Struct1013 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1013; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1013(int val) : field(val) {}
       polymorphic_Struct1013() = default;
};
/*
inline int do_work(Struct1013& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1013; i=i+1) {}
         return reps*2;
}*/


struct Struct1014 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1014; i=i+1) {}
        return reps*2;
    }

    Struct1014(int val) : field(val) {}
    Struct1014() = default;
};

struct polymorphic_Struct1014 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1014; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1014(int val) : field(val) {}
       polymorphic_Struct1014() = default;
};
/*
inline int do_work(Struct1014& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1014; i=i+1) {}
         return reps*2;
}*/


struct Struct1015 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1015; i=i+1) {}
        return reps*2;
    }

    Struct1015(int val) : field(val) {}
    Struct1015() = default;
};

struct polymorphic_Struct1015 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1015; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1015(int val) : field(val) {}
       polymorphic_Struct1015() = default;
};
/*
inline int do_work(Struct1015& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1015; i=i+1) {}
         return reps*2;
}*/


struct Struct1016 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1016; i=i+1) {}
        return reps*2;
    }

    Struct1016(int val) : field(val) {}
    Struct1016() = default;
};

struct polymorphic_Struct1016 : public Virtual_Base_Struct {
    char field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1016; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1016(int val) : field(val) {}
       polymorphic_Struct1016() = default;
};
/*
inline int do_work(Struct1016& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1016; i=i+1) {}
         return reps*2;
}*/


struct Struct1017 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1017; i=i+1) {}
        return reps*2;
    }

    Struct1017(int val) : field(val) {}
    Struct1017() = default;
};

struct polymorphic_Struct1017 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1017; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1017(int val) : field(val) {}
       polymorphic_Struct1017() = default;
};
/*
inline int do_work(Struct1017& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1017; i=i+1) {}
         return reps*2;
}*/


struct Struct1018 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1018; i=i+1) {}
        return reps*2;
    }

    Struct1018(int val) : field(val) {}
    Struct1018() = default;
};

struct polymorphic_Struct1018 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1018; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1018(int val) : field(val) {}
       polymorphic_Struct1018() = default;
};
/*
inline int do_work(Struct1018& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1018; i=i+1) {}
         return reps*2;
}*/


struct Struct1019 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1019; i=i+1) {}
        return reps*2;
    }

    Struct1019(int val) : field(val) {}
    Struct1019() = default;
};

struct polymorphic_Struct1019 : public Virtual_Base_Struct {
    short field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1019; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1019(int val) : field(val) {}
       polymorphic_Struct1019() = default;
};
/*
inline int do_work(Struct1019& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1019; i=i+1) {}
         return reps*2;
}*/


struct Struct1020 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1020; i=i+1) {}
        return reps*2;
    }

    Struct1020(int val) : field(val) {}
    Struct1020() = default;
};

struct polymorphic_Struct1020 : public Virtual_Base_Struct {
    unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1020; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1020(int val) : field(val) {}
       polymorphic_Struct1020() = default;
};
/*
inline int do_work(Struct1020& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1020; i=i+1) {}
         return reps*2;
}*/


struct Struct1021 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1021; i=i+1) {}
        return reps*2;
    }

    Struct1021(int val) : field(val) {}
    Struct1021() = default;
};

struct polymorphic_Struct1021 : public Virtual_Base_Struct {
    long long int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1021; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1021(int val) : field(val) {}
       polymorphic_Struct1021() = default;
};
/*
inline int do_work(Struct1021& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1021; i=i+1) {}
         return reps*2;
}*/


struct Struct1022 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1022; i=i+1) {}
        return reps*2;
    }

    Struct1022(int val) : field(val) {}
    Struct1022() = default;
};

struct polymorphic_Struct1022 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1022; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1022(int val) : field(val) {}
       polymorphic_Struct1022() = default;
};
/*
inline int do_work(Struct1022& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1022; i=i+1) {}
         return reps*2;
}*/


struct Struct1023 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1023; i=i+1) {}
        return reps*2;
    }

    Struct1023(int val) : field(val) {}
    Struct1023() = default;
};

struct polymorphic_Struct1023 : public Virtual_Base_Struct {
    long long unsigned int field;

        inline int do_work(unsigned int reps) override {
            for(volatile unsigned int i = 0; i < field*reps*1023; i=i+1) {}
            return reps*2;
        }

        polymorphic_Struct1023(int val) : field(val) {}
       polymorphic_Struct1023() = default;
};
/*
inline int do_work(Struct1023& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1023; i=i+1) {}
         return reps*2;
}*/


