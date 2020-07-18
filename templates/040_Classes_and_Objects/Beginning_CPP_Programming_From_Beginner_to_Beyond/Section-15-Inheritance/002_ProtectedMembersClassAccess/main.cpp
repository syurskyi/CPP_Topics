//// Section 15
//// Protected members and class access
//? ios..
//
//u.. s..
//
//c_ Base
//    // Note friends of Base have access to all
//pu..
//    in. a 0
//    v.. display st. c.. __ a __ ", " __ b __ ", " __ c __ e..  // member method has access to all
//pr..
//    in. b 0
//pr..
//    in. c 0
//
//
//c_ Derived pu.. B..
//    // Note friends of Derived have access to only what Derived has access to
//
//    // a will be public
//    // b will be protected
//    // c will not be accessible
//pu..
//    v.. access_base_members
//        a _ 100    // OK
//        b _ 200    // OK
//     //   c = 300;    // not accessible
//
//
//in. main
//
//    c.. __ "=== Base member access from base objects ===========" __ e..
//    B.. base
//    ?.a = 100   // OK
////    base.b = 200;   // Compiler Error
////    base.c = 300;   // Compiler Error
//
//    c.. __ "=== Base member access from derived objects ===========" __ e..
//    D.. d
//    d.a _ 100  // OK
////    d.b = 200;  // Compiler Error
////    d.c = 300;  // Compiler Error
//    r_ _
//
//
