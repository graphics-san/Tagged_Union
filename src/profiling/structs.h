struct Struct0 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*0; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct0 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*0; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct0& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*0; i=i+1) {}
         return reps*2;
}


struct Struct1 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*1; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct1 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*1; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct1& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*1; i=i+1) {}
         return reps*2;
}


struct Struct2 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*2; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct2 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*2; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct2& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*2; i=i+1) {}
         return reps*2;
}


struct Struct3 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*3; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct3 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*3; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct3& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*3; i=i+1) {}
         return reps*2;
}


struct Struct4 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*4; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct4 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*4; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct4& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*4; i=i+1) {}
         return reps*2;
}


struct Struct5 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*5; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct5 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*5; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct5& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*5; i=i+1) {}
         return reps*2;
}


struct Struct6 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*6; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct6 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*6; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct6& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*6; i=i+1) {}
         return reps*2;
}


struct Struct7 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*7; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct7 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*7; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct7& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*7; i=i+1) {}
         return reps*2;
}


struct Struct8 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*8; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct8 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*8; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct8& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*8; i=i+1) {}
         return reps*2;
}


struct Struct9 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*9; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct9 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*9; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct9& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*9; i=i+1) {}
         return reps*2;
}


struct Struct10 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*10; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct10 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*10; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct10& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*10; i=i+1) {}
         return reps*2;
}


struct Struct11 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*11; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct11 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*11; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct11& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*11; i=i+1) {}
         return reps*2;
}


struct Struct12 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*12; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct12 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*12; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct12& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*12; i=i+1) {}
         return reps*2;
}


struct Struct13 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*13; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct13 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*13; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct13& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*13; i=i+1) {}
         return reps*2;
}


struct Struct14 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*14; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct14 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*14; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct14& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*14; i=i+1) {}
         return reps*2;
}


struct Struct15 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*15; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct15 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*15; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct15& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*15; i=i+1) {}
         return reps*2;
}


struct Struct16 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*16; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct16 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*16; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct16& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*16; i=i+1) {}
         return reps*2;
}


struct Struct17 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*17; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct17 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*17; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct17& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*17; i=i+1) {}
         return reps*2;
}


struct Struct18 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*18; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct18 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*18; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct18& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*18; i=i+1) {}
         return reps*2;
}


struct Struct19 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*19; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct19 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*19; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct19& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*19; i=i+1) {}
         return reps*2;
}


struct Struct20 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*20; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct20 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*20; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct20& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*20; i=i+1) {}
         return reps*2;
}


struct Struct21 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*21; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct21 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*21; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct21& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*21; i=i+1) {}
         return reps*2;
}


struct Struct22 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*22; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct22 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*22; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct22& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*22; i=i+1) {}
         return reps*2;
}


struct Struct23 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*23; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct23 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*23; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct23& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*23; i=i+1) {}
         return reps*2;
}


struct Struct24 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*24; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct24 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*24; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct24& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*24; i=i+1) {}
         return reps*2;
}


struct Struct25 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*25; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct25 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*25; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct25& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*25; i=i+1) {}
         return reps*2;
}


struct Struct26 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*26; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct26 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*26; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct26& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*26; i=i+1) {}
         return reps*2;
}


struct Struct27 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*27; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct27 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*27; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct27& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*27; i=i+1) {}
         return reps*2;
}


struct Struct28 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*28; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct28 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*28; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct28& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*28; i=i+1) {}
         return reps*2;
}


struct Struct29 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*29; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct29 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*29; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct29& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*29; i=i+1) {}
         return reps*2;
}


struct Struct30 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*30; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct30 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*30; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct30& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*30; i=i+1) {}
         return reps*2;
}


struct Struct31 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*31; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct31 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*31; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct31& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*31; i=i+1) {}
         return reps*2;
}


struct Struct32 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*32; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct32 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*32; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct32& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*32; i=i+1) {}
         return reps*2;
}


struct Struct33 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*33; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct33 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*33; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct33& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*33; i=i+1) {}
         return reps*2;
}


struct Struct34 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*34; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct34 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*34; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct34& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*34; i=i+1) {}
         return reps*2;
}


struct Struct35 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*35; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct35 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*35; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct35& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*35; i=i+1) {}
         return reps*2;
}


struct Struct36 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*36; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct36 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*36; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct36& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*36; i=i+1) {}
         return reps*2;
}


struct Struct37 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*37; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct37 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*37; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct37& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*37; i=i+1) {}
         return reps*2;
}


struct Struct38 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*38; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct38 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*38; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct38& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*38; i=i+1) {}
         return reps*2;
}


struct Struct39 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*39; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct39 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*39; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct39& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*39; i=i+1) {}
         return reps*2;
}


struct Struct40 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*40; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct40 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*40; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct40& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*40; i=i+1) {}
         return reps*2;
}


struct Struct41 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*41; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct41 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*41; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct41& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*41; i=i+1) {}
         return reps*2;
}


struct Struct42 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*42; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct42 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*42; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct42& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*42; i=i+1) {}
         return reps*2;
}


struct Struct43 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*43; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct43 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*43; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct43& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*43; i=i+1) {}
         return reps*2;
}


struct Struct44 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*44; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct44 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*44; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct44& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*44; i=i+1) {}
         return reps*2;
}


struct Struct45 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*45; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct45 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*45; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct45& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*45; i=i+1) {}
         return reps*2;
}


struct Struct46 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*46; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct46 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*46; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct46& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*46; i=i+1) {}
         return reps*2;
}


struct Struct47 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*47; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct47 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*47; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct47& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*47; i=i+1) {}
         return reps*2;
}


struct Struct48 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*48; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct48 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*48; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct48& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*48; i=i+1) {}
         return reps*2;
}


struct Struct49 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*49; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct49 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*49; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct49& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*49; i=i+1) {}
         return reps*2;
}


struct Struct50 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*50; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct50 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*50; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct50& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*50; i=i+1) {}
         return reps*2;
}


struct Struct51 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*51; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct51 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*51; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct51& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*51; i=i+1) {}
         return reps*2;
}


struct Struct52 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*52; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct52 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*52; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct52& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*52; i=i+1) {}
         return reps*2;
}


struct Struct53 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*53; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct53 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*53; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct53& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*53; i=i+1) {}
         return reps*2;
}


struct Struct54 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*54; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct54 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*54; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct54& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*54; i=i+1) {}
         return reps*2;
}


struct Struct55 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*55; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct55 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*55; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct55& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*55; i=i+1) {}
         return reps*2;
}


struct Struct56 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*56; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct56 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*56; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct56& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*56; i=i+1) {}
         return reps*2;
}


struct Struct57 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*57; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct57 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*57; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct57& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*57; i=i+1) {}
         return reps*2;
}


struct Struct58 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*58; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct58 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*58; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct58& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*58; i=i+1) {}
         return reps*2;
}


struct Struct59 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*59; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct59 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*59; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct59& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*59; i=i+1) {}
         return reps*2;
}


struct Struct60 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*60; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct60 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*60; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct60& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*60; i=i+1) {}
         return reps*2;
}


struct Struct61 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*61; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct61 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*61; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct61& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*61; i=i+1) {}
         return reps*2;
}


struct Struct62 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*62; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct62 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*62; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct62& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*62; i=i+1) {}
         return reps*2;
}


struct Struct63 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*63; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct63 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*63; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct63& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*63; i=i+1) {}
         return reps*2;
}


struct Struct64 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*64; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct64 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*64; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct64& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*64; i=i+1) {}
         return reps*2;
}


struct Struct65 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*65; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct65 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*65; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct65& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*65; i=i+1) {}
         return reps*2;
}


struct Struct66 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*66; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct66 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*66; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct66& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*66; i=i+1) {}
         return reps*2;
}


struct Struct67 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*67; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct67 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*67; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct67& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*67; i=i+1) {}
         return reps*2;
}


struct Struct68 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*68; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct68 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*68; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct68& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*68; i=i+1) {}
         return reps*2;
}


struct Struct69 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*69; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct69 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*69; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct69& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*69; i=i+1) {}
         return reps*2;
}


struct Struct70 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*70; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct70 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*70; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct70& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*70; i=i+1) {}
         return reps*2;
}


struct Struct71 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*71; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct71 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*71; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct71& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*71; i=i+1) {}
         return reps*2;
}


struct Struct72 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*72; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct72 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*72; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct72& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*72; i=i+1) {}
         return reps*2;
}


struct Struct73 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*73; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct73 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*73; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct73& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*73; i=i+1) {}
         return reps*2;
}


struct Struct74 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*74; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct74 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*74; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct74& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*74; i=i+1) {}
         return reps*2;
}


struct Struct75 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*75; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct75 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*75; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct75& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*75; i=i+1) {}
         return reps*2;
}


struct Struct76 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*76; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct76 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*76; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct76& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*76; i=i+1) {}
         return reps*2;
}


struct Struct77 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*77; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct77 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*77; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct77& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*77; i=i+1) {}
         return reps*2;
}


struct Struct78 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*78; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct78 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*78; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct78& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*78; i=i+1) {}
         return reps*2;
}


struct Struct79 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*79; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct79 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*79; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct79& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*79; i=i+1) {}
         return reps*2;
}


struct Struct80 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*80; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct80 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*80; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct80& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*80; i=i+1) {}
         return reps*2;
}


struct Struct81 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*81; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct81 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*81; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct81& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*81; i=i+1) {}
         return reps*2;
}


struct Struct82 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*82; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct82 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*82; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct82& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*82; i=i+1) {}
         return reps*2;
}


struct Struct83 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*83; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct83 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*83; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct83& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*83; i=i+1) {}
         return reps*2;
}


struct Struct84 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*84; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct84 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*84; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct84& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*84; i=i+1) {}
         return reps*2;
}


struct Struct85 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*85; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct85 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*85; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct85& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*85; i=i+1) {}
         return reps*2;
}


struct Struct86 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*86; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct86 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*86; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct86& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*86; i=i+1) {}
         return reps*2;
}


struct Struct87 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*87; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct87 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*87; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct87& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*87; i=i+1) {}
         return reps*2;
}


struct Struct88 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*88; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct88 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*88; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct88& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*88; i=i+1) {}
         return reps*2;
}


struct Struct89 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*89; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct89 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*89; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct89& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*89; i=i+1) {}
         return reps*2;
}


struct Struct90 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*90; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct90 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*90; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct90& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*90; i=i+1) {}
         return reps*2;
}


struct Struct91 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*91; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct91 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*91; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct91& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*91; i=i+1) {}
         return reps*2;
}


struct Struct92 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*92; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct92 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*92; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct92& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*92; i=i+1) {}
         return reps*2;
}


struct Struct93 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*93; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct93 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*93; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct93& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*93; i=i+1) {}
         return reps*2;
}


struct Struct94 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*94; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct94 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*94; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct94& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*94; i=i+1) {}
         return reps*2;
}


struct Struct95 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*95; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct95 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*95; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct95& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*95; i=i+1) {}
         return reps*2;
}


struct Struct96 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*96; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct96 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*96; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct96& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*96; i=i+1) {}
         return reps*2;
}


struct Struct97 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*97; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct97 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*97; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct97& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*97; i=i+1) {}
         return reps*2;
}


struct Struct98 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*98; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct98 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*98; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct98& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*98; i=i+1) {}
         return reps*2;
}


struct Struct99 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*99; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct99 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*99; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct99& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*99; i=i+1) {}
         return reps*2;
}


struct Struct100 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*100; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct100 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*100; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct100& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*100; i=i+1) {}
         return reps*2;
}


struct Struct101 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*101; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct101 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*101; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct101& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*101; i=i+1) {}
         return reps*2;
}


struct Struct102 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*102; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct102 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*102; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct102& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*102; i=i+1) {}
         return reps*2;
}


struct Struct103 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*103; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct103 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*103; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct103& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*103; i=i+1) {}
         return reps*2;
}


struct Struct104 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*104; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct104 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*104; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct104& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*104; i=i+1) {}
         return reps*2;
}


struct Struct105 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*105; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct105 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*105; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct105& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*105; i=i+1) {}
         return reps*2;
}


struct Struct106 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*106; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct106 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*106; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct106& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*106; i=i+1) {}
         return reps*2;
}


struct Struct107 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*107; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct107 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*107; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct107& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*107; i=i+1) {}
         return reps*2;
}


struct Struct108 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*108; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct108 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*108; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct108& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*108; i=i+1) {}
         return reps*2;
}


struct Struct109 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*109; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct109 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*109; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct109& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*109; i=i+1) {}
         return reps*2;
}


struct Struct110 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*110; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct110 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*110; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct110& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*110; i=i+1) {}
         return reps*2;
}


struct Struct111 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*111; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct111 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*111; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct111& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*111; i=i+1) {}
         return reps*2;
}


struct Struct112 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*112; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct112 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*112; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct112& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*112; i=i+1) {}
         return reps*2;
}


struct Struct113 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*113; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct113 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*113; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct113& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*113; i=i+1) {}
         return reps*2;
}


struct Struct114 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*114; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct114 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*114; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct114& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*114; i=i+1) {}
         return reps*2;
}


struct Struct115 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*115; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct115 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*115; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct115& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*115; i=i+1) {}
         return reps*2;
}


struct Struct116 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*116; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct116 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*116; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct116& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*116; i=i+1) {}
         return reps*2;
}


struct Struct117 {
    long long unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*117; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct117 {
    long long unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*117; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct117& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*117; i=i+1) {}
         return reps*2;
}


struct Struct118 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*118; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct118 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*118; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct118& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*118; i=i+1) {}
         return reps*2;
}


struct Struct119 {
    int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*119; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct119 {
    int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*119; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct119& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*119; i=i+1) {}
         return reps*2;
}


struct Struct120 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*120; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct120 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*120; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct120& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*120; i=i+1) {}
         return reps*2;
}


struct Struct121 {
    long field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*121; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct121 {
    long field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*121; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct121& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*121; i=i+1) {}
         return reps*2;
}


struct Struct122 {
    char field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*122; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct122 {
    char field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*122; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct122& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*122; i=i+1) {}
         return reps*2;
}


struct Struct123 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*123; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct123 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*123; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct123& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*123; i=i+1) {}
         return reps*2;
}


struct Struct124 {
    short field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*124; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct124 {
    short field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*124; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct124& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*124; i=i+1) {}
         return reps*2;
}


struct Struct125 {
    long long int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*125; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct125 {
    long long int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*125; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct125& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*125; i=i+1) {}
         return reps*2;
}


struct Struct126 {
    unsigned int field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*126; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct126 {
    unsigned int field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*126; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct126& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*126; i=i+1) {}
         return reps*2;
}


struct Struct127 {
    bool field;

    inline int do_work(unsigned int reps) {
        for(volatile unsigned int i = 0; i < field*reps*127; i=i+1) {}
        return reps*2;
    }
};

struct polymorphic_Struct127 {
    bool field;

        inline int do_work(unsigned int reps) {
            for(volatile unsigned int i = 0; i < field*reps*127; i=i+1) {}
            return reps*2;
        }
};

inline int do_work(Struct127& arg, unsigned int reps) {
         for(volatile unsigned int i = 0; i < arg.field*reps*127; i=i+1) {}
         return reps*2;
}


