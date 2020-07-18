//// Section 15
//// Base class initialization
//? ios..
//
//u.. s..
//
//c_ Base
//pr..
//    in. value
//pu..
//   ?  value 0
//            c.. __ "Base no-args constructor" __ e..
//
//    ?(in. x)   value x
//            c.. __ "Base (int) overloaded constructor" __ e..
//
//    #?
//       c.. __ "Base destructor" __ e..
//
//
//
//c_ Derived  pu.. ?
//pr..
//    in. doubled_value
//pu..
//    ?
//        |?  doubled_value 0
//            c.. __ "Derived no-args constructor " __ e..
//
//    ?(in. x
//        |  ? x  doubled_value x * 2
//            c.. __ "Derived (int) constructor" __ e..
//
//    #?
//        c.. __ "Derived destructor " __ e..
//
//
//
//in. main
//   //  Derived d;
//   D.. d 1000
//    r_ _