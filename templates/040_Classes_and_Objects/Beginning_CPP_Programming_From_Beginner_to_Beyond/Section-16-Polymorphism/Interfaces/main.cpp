//// Section 16
//// Interfaces - start
//
//? ios..
//
//c_ Account
//    fr.. st. ostream &operator__ st. ostream #os, co.. ? #acc
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Account::withdraw" __ st. e..
//
//    v.. #?
//
//
//st. ostream &operator__ st. ostream #os co.. Account #acc
//    os __ "Account display"
//    r_ ?
//
//
//c_ Checking pu.. ?
//    fr.. st. ostream #operator__ st. ostream #os co.. ? #acc
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Checking::withdraw" __ st. e..
//
//    v.. #?
//
//
//st. ostream #operator__ st. ostream #os co.. ? #acc
//    os __ "Checking display"
//    r_ ?
//
//
//c_ Savings pu.. ?
//    fr.. st. ostream &operator__(st. ostream &os, co.. Savings #acc
//pu..
//    v.. v.. withdraw(do.. amount)
//        st. c.. __ "In Savings::withdraw" __ st. e..
//
//    v.. #?
// ;
//
//st. ostream #operator__ st. ostream &os, co.. ? #acc
//    os __ "Savings display"
//    r_ ?
//
//c_ Trust pu.. ?
//    fr.. st. ostream #operator__ st. ostream #os, co.. ? #acc
//pu..
//    v.. v.. withdraw do.. amount
//        st. c.. __ "In Trust::withdraw" __ st. e..
//
//    v.. #?
//
//
//st. ostream #operator__ st. ostream #os, co.. Trust #acc
//    os __ "Trust display"
//    r_ ?
//
//
//in. main
//    A.. #p1 _ ne. A..
//    st. c.. __ #?__ st. e..
//
//    A.. #p2 _ ne. C..
//    st. c.. __ #?__ st. e..
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
//    de... _1
//    de... _2
//    r_ _
//
//
