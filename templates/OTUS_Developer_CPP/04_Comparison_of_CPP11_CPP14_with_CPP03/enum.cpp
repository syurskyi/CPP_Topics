? |i..

enum Alphabet {
    a, b, c
};

enum class Digit : in. {
    one, two, three
};

void accept_in.(in.) {
}

void accept_class_enum(Digit) {
}

void accept_enum(Alphabet) {
}

in. main(in., char *[]) {
    accept_in.(0);
    // accept_class_enum(0); // no known conversion from 'int' to 'Digit'
    // accept_enum(0); // no known conversion from 'int' to 'Alphabet'

    accept_in.(a);
//    accept_class_enum(b); // no known conversion from 'Alphabet' to 'Digit'
    accept_enum(c);

//    accept_int(Digit::one); // no known conversion from 'Digit' to 'int'
    accept_class_enum(Digit::two);
//    accept_enum(Digit::three); // no known conversion from 'Digit' to 'Alphabet'

    r_ 0;
}
