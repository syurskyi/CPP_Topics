//// Section 14
//// Overloading copy assignment
//? ios..
//? ve..
//? "M..
//
//u.. s..
//
//in. main
//    ? a "Hello"               // overloaded constructor
//    ? b                            // no-args contructor
//    b _ a                                     // copy assignment
//                                                  // b.operator=(a)
//    b _ "007_This is a test";                // b.operator=("007_This is a test");
//
//    ? empty                      // no-args constructor
//    ? larry("Larry"            // overloaded constructor
//    ? stooge ?            // copy constructor
//    ? stooges                  // no-args constructor
//
//    empty _ stooge                     // copy assignment operator
//
//    e__.d..                      // Larry : 5
//    l__.d..                         // Larry : 5
//    s__.d..                     // Larry : 5
//    e__.d..                      // Larry : 5
//
//    stooges _ "Larry, Moe, and Curly";
//    ?.d..                             // Larry, Moe, and Curly : 21
//
//    ve..|?| stooges_vec
//    s_v_.p_b.. "Larry"
//    s_v_.p_b.. "Moe"
//    s_v_.p_b.. "Curly"
//
//    c.. __ "=== Loop 1 ==================" __ e..
//    ___ co.. ? #s s_v..
//        ?.d..                                        // Larry
//                                                                // Moe
//                                                                //Curly
//    c.. __ "=== Loop 2 ==================" __ e..
//    ___ ? #s s_v..
//        s _ "Changed"                              // copy assignment
//
//    c.. __ "=== Loop 3 ================" __ e..
//    ___ co.. ? #s s_v..
//        ?.d..                                     // Changed
//                                                            // Changed
//                                                            // Changed
//
//    r_ _