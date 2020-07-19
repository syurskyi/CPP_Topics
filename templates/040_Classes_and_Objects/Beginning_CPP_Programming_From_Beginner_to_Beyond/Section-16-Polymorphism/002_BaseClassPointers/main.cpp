//// Section 16
//// Using Base class pointers
//
//? ios..
//? ve..
//
//// This class uses dynamic polymorphism for the withdraw method
//// We'll learn about virtual functions in the next video
//c_ Account
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Account::withdraw" __ st. e..
//
//    v.. #?
//
//
//c_ Checking pu.. ?
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Checking::withdraw" __ st. e..
//
//
//    v.. #?
//
//
//c_ Savings pu.. ?
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Savings::withdraw" __ st. e..
//
//    v.. #?
//
//
//c_ Trust pu.. ?
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Trust::withdraw" __ st. e..
//
//    v.. #?
//
//
//in. main
//    st. c.. __ "\n === Pointers ==== " __ st. e..
//    A.. #p1 _ ne. A..
//    A.. #p2 _ ne. S..
//    A.. #p3 _ ne. C..
//    A.. #p4 _ ne. T..
//
//    p1_w.. 1000
//    p2_w.. 1000
//    p3_w.. 1000
//    p4_w.. 1000
//
//    st. c.. __ "\n === Array ==== " __ st. e..
//    A.. #array || _ ? ? ? ?
//    ___ (a.. i_0 ?<4 ###
//        a.. ? __w.. 1000
//
//    st. c.. __ "\n === Array ==== " __ st. e..
//    a.. 0 _ p4
//    ___ a.. i_0 ?<4 ###
//        a.. ? __ w.. 1000
//
//    st. c.. __ "\n === Vector ==== " __ st. e..
//    st. ve..|A.. 3| accounts  ? ? ? ?
//    ___ (a.. acc_ptr a..
//        ?__w.. 1000
//
//    st. c.. __ "\n === Vector ==== " __ st. e..
//    a__.p_b.. p4
//    a__.p_b.. p4
//    ___ (a.. a_p.. a..
//        a_p..__w.. 1000
//
//    st. c.. __ "\n === Clean up ==== " __ st. e..
//    de... ?
//    de... ?
//    de... ?
//    de... ?
//
//    r_ _
//
//
