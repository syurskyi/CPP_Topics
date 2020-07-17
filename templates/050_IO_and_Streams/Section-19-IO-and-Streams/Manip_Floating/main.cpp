// Section 19
// Stream manipulators - Floating point manipulators
// scientific, setprecision, fixed, showpoint, showpos, uppercase
? <iostream>
? <iomanip>

in. main
    do.. num1 {123456789.987654321};
    do.. num2 {1234.5678};
    do.. num3 {1234.0};
 
    //using default settings
    std::c.. __ "--Defaults ----------------------------" __ std::e..
    std::c.. __ num1 __ std::e..
    std::c.. __ num2__ std::e..
    std::c.. __ num3__ std::e..
    
    //Note how since we can't display in precision 2 scientific notation is used
    std::c.. __ std::setprecision(2);
    std::c.. __ "--Precision 2----------------------------" __ std::e..
    std::c.. __ num1 __ std::e..
    std::c.. __ num2__ std::e..
    std::c.. __ num3__ std::e..
    
    // Using precision 5
    std::c.. __ std::setprecision(5);
    std::c.. __ "--Precision 5----------------------------" __ std::e..
    std::c.. __ num1 __ std::e..
    std::c.. __ num2__ std::e..
    std::c.. __ num3__ std::e..

    // Using precision 9
    std::c.. __ std::setprecision(9);
    std::c.. __ "--Precision 9----------------------------" __ std::e..
    std::c.. __ num1 __ std::e..
    std::c.. __ num2__ std::e..
    std::c.. __ num3__ std::e..

    // Using precision 3 and fixed
    std::c.. __ std::setprecision(3) __ std::fixed;
    std::c.. __ "--Precision 3 - fixed ----------------------------" __ std::e..
    std::c.. __ num1 __ std::e..
    std::c.. __ num2__ std::e..
    std::c.. __ num3__ std::e..
    
    // Using precision  3, fixed and scientific notation
    // Note precision is after the decimal
    std::c.. __ std::setprecision(3)__ std::scientific;
    std::c.. __ "--Precision 3 - scientific  ----------------------------" __ std::e..
    std::c.. __ num1 __ std::e..
    std::c.. __ num2__ std::e..
    std::c.. __ num3__ std::e..
    
    // Same but display capital 'E' in scientific 
    std::c.. __ std::setprecision(3) __ std::scientific __ std::uppercase;
    std::c.. __ "--Precision 3 - scientific - uppercase  ----------------------------" __ std::e..
    std::c.. __ num1 __ std::e..
    std::c.. __ num2__ std::e..
    std::c.. __ num3__ std::e..
    
    // Show '+' symbol for positive numbers
    std::c.. __ std::setprecision(3) __ std::fixed __ std::showpos;
    std::c.. __ "--Precision 3 - fixed - showpos ----------------------------" __ std::e..
    std::c.. __ num1 __ std::e..
    std::c.. __ num2__ std::e..
    std::c.. __ num3__ std::e..
    
    
    // Back to defaults
    std::c...unsetf(std::ios::scientific | std::ios::fixed);
    std::c.. __ std::resetiosflags(std::ios::showpos);
    
    // Show trailing zeroes up to precision 10
    
    std::c.. __ std::setprecision(10) __ std::showpoint;
    std::c.. __ "-- precision 10 - showpoint ----------------------------" __ std::e..
    std::c.. __ num1 __ std::e..
    std::c.. __ num2__ std::e..
    std::c.. __ num3__ std::e..

// Back to defaults
    std::c...unsetf(std::ios::scientific | std::ios::fixed);
    std::c.. __ std::setprecision(6);
    std::c.. __ std::resetiosflags(std::ios::showpos);
    std::c.. __ std::resetiosflags(std::ios::showpoint);

    std::c.. __ "--Back to defaults----------------------------" __ std::e..
    std::c.. __ num1 __ std::e..
    std::c.. __ num2__ std::e..
    std::c.. __ num3__ std::e..
    
    r_ 0;
}

