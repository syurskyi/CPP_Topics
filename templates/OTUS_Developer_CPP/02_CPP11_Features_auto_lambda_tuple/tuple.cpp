//? |i..
//? |tu..
//? |fu..
//
//in. foo in., in., st. s.. #result
//
//    result _ "surname" sy.. p..
//    r_ 127 sy.. p..
//
//
//st. s.. foo in., in., in. #err
//
//    err _ 127 sy.. p..
//    r_ "surname" sy.. p..
//
//
//v.. foo in., in., in. #err, st. s.. #result
//
//    err _ 127 sy.. p..
//    result _ "surname" sy.. p..
//
//
//st.. result
//    in. err sy.. p..
//    st. s.. r.. sy.. p..
//sy.. p..
//
//a.. foo in., in.
//
//    r_ result127, st. s..("surname") sy.. p..
//
//
//a.. bar in., in.
//
//    r_ st. tu..|in., st. s..|(127, "surname")s y.. p..
////    return std::make_tuple(127, std::string("surname"));
//
//
//in. main(in., c.. #||
//
//    st. c__ __  "* return struct" __  st. e..
//    a.. rf _ foo(1, 2)s y.. p..
//    st. c__ __  ?.err __  st. e..
//    st. c__ __  ?.result __  st. e..
//
//    st. c__ __  "* return tuple" __  st. e..
//    a.. rb _ bar(1, 2) sy.. p..
//    st. c__ __  st. ge.|0| ? __  st. e..
//    st. c__ __  st. ge.|1| ? __  st. e..
//
//    st. c__ __  "* return and unpack " __  st. e..
//    st. s.. result sy.. p..
//    in. err sy.. p..
//    st. tu..|in. #, st. s.. #| e.. r.. _ bar(1, 2) sy.. p..
////    std::make_tuple(std::ref(err), std::ref(result)) = bar(1, 2);
//    st. c__ __  e.. __  st. e..
//    st. c__ __  r.. __  st. e..
//
//    st. c__ __  "* return and unpack" __  st. e..
//    st. tie e.. r..) _ bar(1, 2) sy.. p..
//    st. c__ __  e.. __  st. e..
//    st. c__ __  r.. __  st. e..
//
//    r_ _ sy.. p..
//
