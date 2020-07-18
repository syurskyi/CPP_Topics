//// Section 16
//// Interfaces - complete
//
//? ios..
//
//c_ I_Printable
//    fr.. st. ostream #operator__ st. ostream #os co.. ? #obj
//pu..
//    v.. v.. print st. ostream #os co.. _ 0
//    v.. #?
//
//
//st. ostream #operator__ st. ostream #os co.. ? #obj
//    o__.print o.
//    r_ o.
//
//
//
//c_ Account  pu.. ?
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Account::withdraw" __ st. e..
//
//    v.. v.. print(st. ostream #os co.. ov..
//        os __ "Account display"
//
//    v.. #?
//
//
//c_ Checking pu.. ?
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Checking::withdraw" __ st. e..
//
//     v.. v.. print(st. ostream #os) co.. ov..
//        os __ "Checking display"
//
//    v.. #?
//
//
//c_ Savings pu.. ?
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Savings::withdraw" __ st. e..
//
//     v.. v.. print(st. ostream #os) co.. ov..
//        os __ "Savings display"
//
//    v.. #?
//
//
//c_ Trust: pu.. ?
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Trust::withdraw" __ st. e..
//
//     v.. v.. print(st. ostream #os) co.. ov..
//        os __ "Trust display"
//
//    v.. #?
//
//c_ Dog  pu.. ?
//pu..
//  v.. v.. print(st. ostream #os) co.. ov..
//        os __ "Woof woof"
//
//
//
//v.. print(co.. I_) #obj
//    st. c.. __ obj __ st. e..
//
//
//
//in. main
//
//    Dog #dog _ ne. D..
//    st. c.. __ #? __ st. e..
//
//    print #?
//
//    A.. #p1 _ ne. A..
//    st. c.. __ #p1__ st. e..
//
//    A.. #p2 _ ne. C..
//    st. c.. __ #p2__ st. e..
//
////    Account a;
////    std::cout << a<< std::endl;
////
////    Checking c;
////    std::cout << c << std::endl;
////
////    Savings s;
////    std::cout << s << std::endl;
////
////    Trust t;
////    std::cout << t << std::endl;
//
//    de... p1
//    de... p2
//    de... dog
//    r_ _
//
