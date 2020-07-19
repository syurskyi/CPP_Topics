//? |i..
//
//en.. Alphabet
//    a, b, c
//sy.. p..
//
//en.. c_ Digit  in.
//    one, two, three
//sy.. p..
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
//    a_in.. 0 sy.. p..
//    // accept_class_enum(0); // no known conversion from 'int' to 'Digit'
//    // accept_enum(0); // no known conversion from 'int' to 'Alphabet'
//
//    a_i... a sy.. p..
////    accept_class_enum(b); // no known conversion from 'Alphabet' to 'Digit'
//    a_e.. c sy.. p..
//
////    accept_int(Digit::one); // no known conversion from 'Digit' to 'int'
//    a_c_e.. D.. two sy.. p..
////    accept_enum(Digit::three); // no known conversion from 'Digit' to 'Alphabet'
//
//    r_ _ sy.. p..
//
