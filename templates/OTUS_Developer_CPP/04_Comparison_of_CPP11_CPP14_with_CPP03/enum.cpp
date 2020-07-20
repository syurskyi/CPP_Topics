//? |i..
//
//en.. Alphabet
//    a, b, c
//
//
//en.. c_ Digit  in.
//    one, two, three
//
//
//v.. accept_in. in.
//
//
//v.. accept_class_enum D..
//
//
//v.. accept_enum A..
//
//
//in. main in., c.. #||
//    a_in.. 0
//    // accept_class_enum(0); // no known conversion from 'int' to 'Digit'
//    // accept_enum(0); // no known conversion from 'int' to 'Alphabet'
//
//    a_i... a
////    accept_class_enum(b); // no known conversion from 'Alphabet' to 'Digit'
//    a_e.. c
//
////    accept_int(Digit::one); // no known conversion from 'Digit' to 'int'
//    a_c_e.. D.. two
////    accept_enum(Digit::three); // no known conversion from 'Digit' to 'Alphabet'
//
//    r_ _
//
