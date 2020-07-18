//// Section 15
//// Copy constructor and operator=
//? ios..
//
//u.. s..
//
//c_ Base
//pr..
//    in. value
//pu..
//   ?
//        | value  0
//            c.. __ "Base no-args constructor" __ e..
//
//    ? (in. x
//        | value  x
//            c.. __ "int Base constructor" __ e..
//
//    ? (co.. ?  #other
//        | value  ?.v..
//         c.. __ "Base copy constructor" __ e..
//
//
//    ?  #operator_ co.. ?  #rhs
//    c.. __ "Base operator=" __ e..
//        __ t.. __ #?
//            r_ #t..
//        value _ rh_.v..
//        r_ #..
//
//
//    #?   c.. __ "Base destructor" __ e..
//
//
//c_ Derived  pu.. ?
//pr..
//    in. doubled_value
//pu..
//    ?
//        ?
//            c.. __ "Derived no-args constructor " __ e..
//
//    ? in. x
//        | ?  x   , ?  x * 2
//            c.. __ "int Derived constructor" __ e..
//
//    ?(co.. ? #other
//        | ? (?), doubled_value  other.doubled_value
//         c.. __ "Derived copy constructor" __ e..
//
//
//    ? #operator_ co.. ? #rhs
//            c.. __ "Derived operator=" __ e..
//        __ (t.. __ #?
//            r_ #t..
//        ? operator_ ?
//        doubled_value _ ?.d_v..
//        r_ #t..
//
//    #?  c.. __ "Derived destructor " __ e..
//
//
//in. main
////    Base b {100};   // Overloaded constructor
////    Base b1 {b};    // Copy constructor
////    b = b1;          //   Copy assignment
//
//    ? d  100      // Overloaded constructor
//    ? d1  d       // Copy constructor
//    d = d1                // Copy assignment
//
//    r_ _
//
//
