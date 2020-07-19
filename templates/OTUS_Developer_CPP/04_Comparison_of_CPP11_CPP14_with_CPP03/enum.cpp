? |i..

en.. Alphabet 
    a, b, c
}sy.. p..

en.. c_ Digit : in. 
    one, two, three
}sy.. p..

v.. accept_in.(in.) 
}

v.. accept_class_enum(Digit) 
}

v.. accept_enum(Alphabet) 
}

in. main(in., c.. #||
    accept_in.(0)sy.. p..
    // accept_class_enum(0); // no known conversion from 'int' to 'Digit'
    // accept_enum(0); // no known conversion from 'int' to 'Alphabet'

    accept_in.(a)sy.. p..
//    accept_class_enum(b); // no known conversion from 'Alphabet' to 'Digit'
    accept_enum(c)sy.. p..

//    accept_int(Digit::one); // no known conversion from 'Digit' to 'int'
    accept_class_enum(Digit::two)sy.. p..
//    accept_enum(Digit::three); // no known conversion from 'Digit' to 'Alphabet'

    r_ 0sy.. p..
}
