//// Section 14
//// Overloading operators as non-member (global) methods
//? ios..
//? ve..
//? "Mystring.h"
//
//u.. s..
//
//in. main
//
//    ? larry "Larry"
//    ?.d..                                        // Larry
//
//    larry _ -l..
//    ?.d..                                       // larry
//
//    c.. __ boolalpha __ e..
//    ? moe "Moe"
//    ? stooge _ larry
//
//    c.. __ l.. __ m.. __ e..             // false
//    c.. __ l.. __ s.. __ e..          // true
//
//  //  Mystring stooges = larry + "Moe";
//    ? stooges _ "Larry" + m..          // Now OK with non-member function
//    ?.d..                                      // LarryMoe
//
//    ? two_stooges _ m.. + " " + "Larry"
//    ?.d..                               // Moe Larry
//    ? three_stooges _ m.. + " " + l.. + " " +  "Curly"
//    ?.d..                           // Moe larry Curly
//
//    r_ _
//
