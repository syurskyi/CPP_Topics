//// Section 11
//// Pass-by-reference
//
//? ios..
//? st..
//? ve..
//
//u.. s..
//
//v.. pass_by_ref1 in. @num
//v.. pass_by_ref2(st.. @s
//v.. pass_by_ref3(vectorst.. @v
//v.. print_vector(co.. vectorst.. @v  // const
//
//v.. ? in. @num
//    ? _ 1000
//
//
//v.. ? st.. @s
//    s _ "Changed"
//
//
//v.. ? vectorst.. @v
//    ?.cl..  // delete all vector elements
//
//
//v.. ? co.. vectorst.. @v
//    ___ (a.. s: ?
//        c.. __ s __ " "
//    c.. __ e..
//
//
//in. main
//    in. num 10
//    in. another_num 20
//
//    c.. __ "num before calling pass_by_ref1: " __ ? __ e..
//    ? ?
//    c.. __ "num after calling pass_by_ref1: " __ ? __ e..
//
//    c.. __ "\nanother_num before calling pass_by_ref1: " __ ? __ e..
//    ? ?
//    c.. __ "another_num after calling pass_by_ref1: " __ ? __ e..
//
//    string name {"Frank"};
//    c.. __ "\nname before calling pass_by_ref2: " __ ? __ e..
//    ? ?
//    c.. __ "name after calling pass_by_ref2: " __ ? __ e..
//
//    vectorst.. stooges {"Larry", "Moe", "Curly"
//    c.. __ "\nstooges before calling pass_by_ref3: "
//    pr.. ?
//    _3 ?
//    c.. __ "stooges after calling pass_by_ref3: "
//    pr.. ?
//
//    c.. __ e..
//    r_ _
//
//
