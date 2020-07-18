//// Section 14
//// Overloading operators as member methods
//? ios..
//? "Mystring.h"
//
//u.. s..
//
//in. main
//    c.. __ boolalpha __ e..
//
//    ? larry "Larry"
//    ? moe "Moe"
//
//    ? stooge = larry
//    l__.d..                                                                     // Larry
//    moe.d..                                                                     // Moe
//
//    c.. __ (l.. __ m..) __ e..                                         // false
//    c.. __ (l.. __ s..) __ e..                                      // true
//
//    l__.d..                                                                    // Larry
//    ? larry2 _ -l..
//    ?.d..                                                                    // larry
//
//    ? stooges _ l.. + "Moe"                                     // ok with member function
//    //Mystring stooges = "Larry" + moe;                                 // Compiler error
//
//    ? two_stooges _ m.. + " " + "Larry"
//    ?.d..
//                                                   // Moe Larry
//    ? three_stooges = m.. + " " + l.. + " " +  "Curly"
//    ?.d..                                                       //  Moe Larry Curly
//
//    r_ _
//
//
