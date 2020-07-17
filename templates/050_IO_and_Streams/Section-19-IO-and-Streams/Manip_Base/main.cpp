// Section 19
// Stream manipulators - Integer manipulators
// dec, hex, oct, showbase uppercase, nouppercase, showpos
? <iostream>
? <iomanip>

in. main
    in. num {255};
 
    // Displaying using different bases
    std::c.. __ "\n------------------------------------------------------------" __ std::e..
    std::c.. __ std::dec __ num __ std::e..
    std::c.. __ std::hex __ num __ std::e..
    std::c.. __ std::oct __ num __ std::e..
    
    // Displaying showing the base prefix for hex and oct
        std::c.. __ "\n------------------------------------------------------------" __ std::e..
    std::c.. __ std::showbase;
    std::c.. __ std::dec __ num __ std::e..
    std::c.. __ std::hex __ num __ std::e..
    std::c.. __ std::oct __ num __ std::e..
    
     // Display the hex value in uppercase
    std::c.. __ "\n------------------------------------------------------------" __ std::e..
    std::c.. __ std::showbase __ std::uppercase;
    std::c.. __ std::hex __ num __ std::e..

    // Display the + sign in front of positive base 10 numbers
    std::c.. __ "\n------------------------------------------------------------" __ std::e..
    std::c.. __ std::showpos;
    std::c.. __ std::dec __ num __ std::e..
    std::c.. __ std::hex __ num __ std::e..
    std::c.. __ std::oct __ num __ std::e..
    
    // setting using the set method
    std::c...setf(std::ios::showbase);
    std::c...setf(std::ios::uppercase);
    std::c...setf(std::ios::showpos);

    // resetting to defaults
    std::c.. __ std::resetiosflags(std::ios::basefield);
    std::c.. __ std::resetiosflags(std::ios::showbase);
    std::c.. __ std::resetiosflags(std::ios::showpos);
    std::c.. __ std::resetiosflags(std::ios::uppercase);

    std::c.. __ "\n------------------------------------------------------------" __ std::e..
    std::c.. __ "Enter an integer : ";
    std::ci. __ num;
    
    std::c.. __ "Decimal default  : " __ num __ std::e..
    
    std::c.. __ "Hexadecimal      : " __ std::hex __ num __ std::e..
    std::c.. __ "Hexadecimal      : " __ std::hex __ std::uppercase __ num __ std::e..
    std::c.. __ "Hexadecimal      : " __ std::hex  __ num __ std::e..
    std::c.. __ "Hexadecimal      : " __ std::hex __ std::nouppercase __ num __ std::e..

    std::c.. __ "Octal            : " __ std::oct __ num __ std::e..
    std::c.. __ "Hexadecimal      : " __ std::hex __ std::showbase __ num __ std::e..
    std::c.. __ "Octal            : " __ std::oct __ num __ std::e..
    
    std::c.. __ std::endl __ std::e..
    r_ 0;
}

