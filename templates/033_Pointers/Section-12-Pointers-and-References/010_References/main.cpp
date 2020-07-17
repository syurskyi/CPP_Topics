//// Section 12
//// 010_References
//// Please see the section 11 examples for references as function paramters
//? |i..
//? <st..>
//? ve..
//
//u.. s..
//
//in. main
//
//    in. num 100
//    in. #ref ?
//
//    c.. __ ? __ e..
//    c.. __ ? __ e..
//
//    num  _ 200
//    c.. __ "\n---------------------------------" __ e..
//    c.. __ ? __ e..
//    c.. __ ? __ e..
//
//    ref _ 300
//    c.. __ "\n---------------------------------" __ e..
//    c.. __ ? __ e..
//    c.. __ ? __ e..
//
//    c.. __ "\n---------------------------------" __ e..
//    ve..|st..| stooges "Larry", "Moe", "Curly"
//
//    ___ (a.. str ?
//        ? _ "Funny"              // str is a COPY of the each vector element
//
//    ___ (a.. str ?        // No change
//        c.. __ ? __ e..
//
//    c.. __ "\n---------------------------------" __ e..
//    ___ (a.. #str ?  // str is a reference to each vector element
//        ? _ "Funny"
//
//    ___ (a.. c.. #str ?   // notice we are using const
//        c.. __ ? __ e..            // now the vector elements have changed
//
//    c.. __ e..
//    r_ _
//
//
