//// Section 16
//// Using Base class references
//
//? ios..
//
//// This class uses dynamic polymorphism for the withdraw method
//// We'll learn about virtual functions in the next video
//c_ Account
//pu..
//    v.. v.. withdraw(do.. amount)
//        st. c.. __ "In Account::withdraw" __ st. e..
//
//    v.. #?
//
//
//c_ Checking pu.. ?
//pu..
//    v.. v.. withdraw do.. amount)
//        st. c.. __ "In Checking::withdraw" __ st. e..
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
//v.. do_withdraw A.. #account, do.. amount)
//    ac__.w.. am..
//
//
//in. main
//
//    ? a
//    ? #ref _ a
//    ?.w.. 1000		    // In Account::withdraw
//
//    T.. t
//    A.. #ref1 _ t
//    _1.w.. 1000        // In Trust::withdraw
//
//   A.. a1
//   S.. a2
//   C.. a3
//   T.. a4
//
//   d_w.. a1 1000       // In Account::withdraw
//   d_w.. a2 2000       // In Savings::withdraw
//   d_w.. a3 3000      // In Checking::withdraw
//   d_w.. a4  4000     // In Trust::withdraw
//
//
//    r_ _
//
//
