//// Section 13
//// Move Constructor
//? ios..
//? ve..
//
//u.. s..
//
//c_ Move
//pr..
//    in. #data
//pu..
//    v.. set_data_value in. d #data _ d
//    in. get_data_value r_ #data
//    // Constructor
//    ? in. d
//    // Copy Constructor
//    ? co.. ? #source
//    // Move Constructor
//    ? ? ##s.. noe..
//    // Destructor
//    #?
//
//
// ? ? in. d
//    data _ ne. in.
//    #d.. _ ?
//    c.. __ "Constructor for: " __ ? __ e..
//
//
//// Copy ctor
//? ? co.. ? #s..
//    : ? #s__.d..
//        c.. __ "Copy constructor  - deep copy for: " __ #d.. __ e..
//
//
////Move ctor
//? ? ? ##s.. noe..
//    | data s__.d..
//        s__.d.. _ n_p_
//        c.. __ "Move constructor - moving resource: " __ #d.. __ e..
//
//
//?::~?
//    __ (data !_ n_p_) {
//        c.. __ "Destructor freeing data for: " __ *data __ e..
//    } ____ {
//        c.. __ "Destructor freeing data for nullptr" __ e..
//    }
//    de... data;
//}
//
//in. main
//    ve..<?> vec;
//
//    vec.push_back(?{10});
//
//    vec.push_back(?{20});
//    vec.push_back(?{30});
//    vec.push_back(?{40});
//     vec.push_back(?{50});
//    vec.push_back(?{60});
//    vec.push_back(?{70});
//    vec.push_back(?{80});
//
//
//    r_ 0;
//}
//
