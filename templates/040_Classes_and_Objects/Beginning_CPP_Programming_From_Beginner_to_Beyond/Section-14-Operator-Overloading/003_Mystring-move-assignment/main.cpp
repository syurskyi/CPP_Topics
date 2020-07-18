//// Section 14
//// Overloading move constructor and move assignment operator
//? ios..
//? ve..
//? "Mystring.h"
//
//u.. s..
//
//in. main
//
//    ? a "Hello"                // Overloaded constructor
//    a _ ? "Hola"             // Overloaded constructor then move assignment
//    a _ "Bonjour"                        // Overloaded constructor then move assignment
//
//
//    ? empty                     // no-args constructor
//    ? larry("Larry"             // overloaded constructor
//    ? stooge ?            // copy constructor
//    ? stooges                   // no-args constructor
//
//    empty _ s..                     // copy assignment operator
//                                                  // stooge is an l-value
//
//    empty _ "Funny";                  // move assignment operator
//                                                  // "Funny" is an r-value
//
//    e__.d..
//    l__.d..
//    s__.d..
//    e__.d..
//
//    stooges _ "Larry, Moe, and Curly"
//    ?.d..
//
//    ve..|?| stooges_vec
//    s_v_.p_b.. "Larry"               // Move constructor
//    s_v_.p_b.. "Moe"              // Move constructor
//    s_v_.p_b.. "Curly"              // Move constructor
//
//    c.. __ "=== Loop 1 ==================" __ e..
//    ___ co.. ? #s s_v..
//        s.d..
//
//    c.. __ "=== Loop 2 ==================" __ e..
//    ___ ? #s s_v..
//        s _ "Changed";                                     // move assignment
//
//    c.. __ "=== Loop 3 ==================" __ e..
//    ___ co.. ? #s s_v..
//        s.d..
//
//
//    r_ _
//
//
