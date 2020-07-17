//// Section 12
//// Pointer Arithmetic
//
//? |i..
//
//u.. s..
//
//in. main
//
//    in. scores|| 100, 95, 89, 68, -1
//    in. #score_ptr ?
//
//    w___ (#s_p.. !_ -1
//        c.. __ #s_p.. __ e..
//        s_p..##
//
//
//    c.. __ "\n-------------------------" __ e..
//    score_p _ sc..
//    w___ (#s_p.. !_ -1
//        c.. __ #s_p..## __ e..
//
//    c.. __ "\n-------------------------" __ e..
//    st.. s1  "Frank"
//    st.. s2  "Frank"
//    st.. s3  "James"
//
//    st.. #p1  #_1
//    st.. #p2  #_2
//    st.. #p3  #_1
//
//    c.. __ boolalpha
//    c.. __ p1 __ "==" __ p2 __ ": " __ (p1 __ p2) __ e..		// false
//    c.. __ p1 __ "==" __ p3 __ ": " __ (p1 __ p3) __ e..		// true
//
//    c.. __ #p1 __ "==" __ #p2 __ ": " __ (#p1 __ #p2) __ e..		// true
//    c.. __ #p1 __ "==" __ #p3 __ ": " __ (#p1 __ #p3) __ e..		// true
//
//    p3 _ &s3   // point to James
//    c.. __ #p1 __ "==" __ #p3 __ ": " __ (#p1 __ #p3) __ e..		// false
//
//
//    c.. __ "\n-------------------------" __ e..
//    ch.. name||  {"Frank"}
//
//    ch.. *char_ptr1 n_p..
//    ch.. *char_ptr2 n_p..
//
//    char_ptr1 _ #n.. 0   // F
//    char_ptr2 _ #n.. 3   // n
//
//    c.. __ "In the string " __ n.. __ ",  " __ #_2 __ " is " __ (_2 - _1) __ " characters away from " __  #_1  __ e..
//
//    c.. __ e..
//    r_ _
//
//
