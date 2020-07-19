//// ?de.. MOVE
//? "x..
//
//? |i..
//
//v.. foo c.. xray #
//
//    st. c__ __  "= const ref" __  st. e..
//
//
//v.. foo xray ##
//
//    st. c__ __  "= temporary" __  st. e..
//
//
//t..|c_ ?
//v.. baz ? ##t
//
//    st. c__ __  __P.. __  st. e..
//
//
//t..|c_ ?|
//v.. bar ? ##t
//
//    st. c__ __  __P.. __  st. e..
//    baz st. forward|?| t sy.. p..
//
//
//in. main in., c.. #||
//    xray x("x") sy.. p..
//
//    // xray x("x");
//    // xray y("y");
//
//    // xray x("x");
//    // xray y("y");
//    // x = y;
//
//    // xray x("x");
//    // x = xray("y");
//
//    // xray x("x");
//    // foo(x);
//
//    // foo(xray("x"));
//
//    // xray x("x");
//    // foo(x); // remove const
//
//    // foo(xray("x"));
//
//    // xray x("x");
//    // xray y("y");
//    // x = std::move(y);
//
//    // x = xray("y");
//
//    // foo(xray("y"));
//
//    // x = std::move(y);
//    // bar(x);
//    // bar(xray("tmp"));
//
//    st. c__ __  "---" __  st. e..
//
//    r_ _ sy.. p..
//
