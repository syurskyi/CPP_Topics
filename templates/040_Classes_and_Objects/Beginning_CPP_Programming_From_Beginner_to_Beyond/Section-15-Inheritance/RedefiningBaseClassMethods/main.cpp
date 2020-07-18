//// Section 15
//// Redefining and Using Base Class Methods
//? ios..
//? "S..
//
//u.. s..
//
//
//in. main
//    c.. __ "\n===== Account class ===================" __ e..
//    Account a1 1000.0
//    c.. __ a1 __ e..         // Account balance: 1000
//
//    ?.d.. 500.0
//    c.. __ a1 __ e..         // Account balance: 1500
//
//    ?.w.. 1000           // Account balance: 500
//    c.. __ a1 __ e..
//
//    ?.w.. 5000.0         // Insufficient funds
//    c.. __ a1 __ e..         // Account balance: 500
//
// c.. __ "\n===== Savings Account class ===========" __ e..
//    ? s1 1000, 5.0
//    c.. __ s1 __ e..         // Savings Account balance: 1000, Interest rate: 5
//
//    ?.d.. 1000
//    c.. __ s1 __ e..          // Savings Account balance: 2050, Interest rate: 5
//
//    ?.w.. 2000
//    c.. __ s1 __ e..          // Savings Account balance: 50, Interest rate: 5
//
//    ?.w.. 1000            // Insufficient funds
//    c.. __ s1 __ e..         // Savings Account balance: 50, Interest rate: 5
//
//
//    r_ 0
//
//
//
//
