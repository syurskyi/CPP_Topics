//// Section 16
//// Virtual functions
//
//? ios..
//
//// This class uses dynamic polymorphism for the withdraw method
//c_ Account
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Account::withdraw" __ st. e..
//
//
//
//c_ Checking pu.. A..
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Checking::withdraw" __ st. e..
//
//
//
//c_ Savings pu.. A..
//pu..
//    v.. v.. withdraw(do.. amount
//        st. c.. __ "In Savings::withdraw" __ st. e..
//
//
//
//c_ Trust pu.. A..
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Trust::withdraw" __ st. e..
//
//
//
//in. main
//    st. c.. __ "\n === Pointers ==== " __ st. e..
//    A.. #p1 _ ne. A..
//    A.. #p2 _ ne. S..
//    A.. #p3 _ ne. C.
//    A.. #p4 _ ne. T..
//
//    ?__w.. 1000
//    ?__w.. 1000
//    ?__w.. 1000
//    ?__w.. 1000
//
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
