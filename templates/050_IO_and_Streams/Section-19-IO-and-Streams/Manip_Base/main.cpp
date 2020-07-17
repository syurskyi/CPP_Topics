// Section 19
// Stream manipulators - Integer manipulators
// dec, hex, oct, showbase uppercase, nouppercase, showpos
? ios..
? iom..

in. main
    in. num {255};
 
    // Displaying using different bases
    st. c.. __ "\n------------------------------------------------------------" __ st. e..
    st. c.. __ st. dec __ num __ st. e..
    st. c.. __ st. hex __ num __ st. e..
    st. c.. __ st. oct __ num __ st. e..
    
    // Displaying showing the base prefix for hex and oct
        st. c.. __ "\n------------------------------------------------------------" __ st. e..
    st. c.. __ st. showbase;
    st. c.. __ st. dec __ num __ st. e..
    st. c.. __ st. hex __ num __ st. e..
    st. c.. __ st. oct __ num __ st. e..
    
     // Display the hex value in uppercase
    st. c.. __ "\n------------------------------------------------------------" __ st. e..
    st. c.. __ st. showbase __ st. uppercase;
    st. c.. __ st. hex __ num __ st. e..

    // Display the + sign in front of positive base 10 numbers
    st. c.. __ "\n------------------------------------------------------------" __ st. e..
    st. c.. __ st. showpos;
    st. c.. __ st. dec __ num __ st. e..
    st. c.. __ st. hex __ num __ st. e..
    st. c.. __ st. oct __ num __ st. e..
    
    // setting using the set method
    st. c...setf(st. ios::showbase);
    st. c...setf(st. ios::uppercase);
    st. c...setf(st. ios::showpos);

    // resetting to defaults
    st. c.. __ st. resetiosflags(st. ios::basefield);
    st. c.. __ st. resetiosflags(st. ios::showbase);
    st. c.. __ st. resetiosflags(st. ios::showpos);
    st. c.. __ st. resetiosflags(st. ios::uppercase);

    st. c.. __ "\n------------------------------------------------------------" __ st. e..
    st. c.. __ "Enter an integer : ";
    st. ci. __ num;
    
    st. c.. __ "Decimal default  : " __ num __ st. e..
    
    st. c.. __ "Hexadecimal      : " __ st. hex __ num __ st. e..
    st. c.. __ "Hexadecimal      : " __ st. hex __ st. uppercase __ num __ st. e..
    st. c.. __ "Hexadecimal      : " __ st. hex  __ num __ st. e..
    st. c.. __ "Hexadecimal      : " __ st. hex __ st. nouppercase __ num __ st. e..

    st. c.. __ "Octal            : " __ st. oct __ num __ st. e..
    st. c.. __ "Hexadecimal      : " __ st. hex __ st. showbase __ num __ st. e..
    st. c.. __ "Octal            : " __ st. oct __ num __ st. e..
    
    st. c.. __ st. endl __ st. e..
    r_ 0;
}

