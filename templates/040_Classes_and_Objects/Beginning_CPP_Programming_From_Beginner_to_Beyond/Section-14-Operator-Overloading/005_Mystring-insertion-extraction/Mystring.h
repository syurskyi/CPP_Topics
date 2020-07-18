//?i.. _MYSTRING_H_
//_de.. _MYSTRING_H_
//
//n.. Mystring
//
//    fr.. st. ostream #operator__ st. ostream #os, co.. ? #rhs
//    fr.. st. istream #operator__ st. istream #in, ? #rhs
//
//pr..
//    ch.. #str     // pointer to a char[] that holds a C-style string
//p..
//    ?                                                         // No-args constructor
//    ? co.. ch.. #s                                     // Overloaded constructor
//    ? co.. ? #source                   // Copy constructor
//    ?  ? ##source                         // Move constructor
//    #?                                                    // Destructor
//
//    ? #operator_ co.. ? #rhs // Copy assignment
//    ? #operator_ ? ##rhs      // Move assignment
//
//    v.. display() co..
//
//    in. get_length co..                                    // getters
//    co.. ch.. #get_str co..
//
//
//e.. // _MYSTRING_H_