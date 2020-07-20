//? |i..
//? |tu..
//? |fu..
//
//in. foo in., in., st. s.. #result
//
//    result _ "surname"
//    r_ 127
//
//
//st. s.. foo in., in., in. #err
//
//    err _ 127
//    r_ "surname"
//
//
//v.. foo in., in., in. #err, st. s.. #result
//
//    err _ 127
//    result _ "surname"
//
//
//st.. result
//    in. err
//    st. s.. r..
//
//
//a.. foo in., in.
//
//    r_ result127, st. s..("surname")
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
//    a.. rb _ bar(1, 2)
//    st. c__ __  st. ge.|0| ? __  st. e..
//    st. c__ __  st. ge.|1| ? __  st. e..
//
//    st. c__ __  "* return and unpack " __  st. e..
//    st. s.. result
//    in. err
//    st. tu..|in. #, st. s.. #| e.. r.. _ bar(1, 2)
////    std::make_tuple(std::ref(err), std::ref(result)) = bar(1, 2);
//    st. c__ __  e.. __  st. e..
//    st. c__ __  r.. __  st. e..
//
//    st. c__ __  "* return and unpack" __  st. e..
//    st. tie e.. r..) _ bar(1, 2)
//    st. c__ __  e.. __  st. e..
//    st. c__ __  r.. __  st. e..
//
//    r_ _
//
