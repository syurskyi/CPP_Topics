//?i.. _MYSTRING_H_
//_de.. _MYSTRING_H_
//
//n.. Mystring
//
//pr..
//    ch.. #str      // pointer to a char[] that hold a C-style string
//p..
//    ?                                                         // No-args constructor
//    ? co.. ch.. #s                                      // Overloaded constructor
//    ? co.. ? #source                     // Copy constructor
//    ?( ? ##source                          // Move constructiror
//    #?                                                      // Destructor
//
//    ? &operator_ co.. ? #rhs    // Copy assignment
//    ? &operator_ ? ##rhs        // Move assignment
//
//    ? operator- co..                             // make lowercase
//    ? operator+ co.. ? #rhs co..       // concatenate
//    bo.. operator__ co.. ? #rhs co..
//
//    v.. display co..
//
//    in. get_length co..                                     // getters
//    co.. ch.. #get_str co..
//
//
//e.. // _MYSTRING_H_
