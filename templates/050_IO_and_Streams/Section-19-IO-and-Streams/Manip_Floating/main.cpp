// Section 19
// Stream manipulators - Floating point manipulators
// scientific, setprecision, fixed, showpoint, showpos, uppercase
? ios..
? iom..

in. main
    do.. num1 {123456789.987654321};
    do.. num2 {1234.5678};
    do.. num3 {1234.0};
 
    //using default settings
    st. c.. __ "--Defaults ----------------------------" __ st. e..
    st. c.. __ num1 __ st. e..
    st. c.. __ num2__ st. e..
    st. c.. __ num3__ st. e..
    
    //Note how since we can't display in precision 2 scientific notation is used
    st. c.. __ st. setprecision(2);
    st. c.. __ "--Precision 2----------------------------" __ st. e..
    st. c.. __ num1 __ st. e..
    st. c.. __ num2__ st. e..
    st. c.. __ num3__ st. e..
    
    // Using precision 5
    st. c.. __ st. setprecision(5);
    st. c.. __ "--Precision 5----------------------------" __ st. e..
    st. c.. __ num1 __ st. e..
    st. c.. __ num2__ st. e..
    st. c.. __ num3__ st. e..

    // Using precision 9
    st. c.. __ st. setprecision(9);
    st. c.. __ "--Precision 9----------------------------" __ st. e..
    st. c.. __ num1 __ st. e..
    st. c.. __ num2__ st. e..
    st. c.. __ num3__ st. e..

    // Using precision 3 and fixed
    st. c.. __ st. setprecision(3) __ st. fixed;
    st. c.. __ "--Precision 3 - fixed ----------------------------" __ st. e..
    st. c.. __ num1 __ st. e..
    st. c.. __ num2__ st. e..
    st. c.. __ num3__ st. e..
    
    // Using precision  3, fixed and scientific notation
    // Note precision is after the decimal
    st. c.. __ st. setprecision(3)__ st. scientific;
    st. c.. __ "--Precision 3 - scientific  ----------------------------" __ st. e..
    st. c.. __ num1 __ st. e..
    st. c.. __ num2__ st. e..
    st. c.. __ num3__ st. e..
    
    // Same but display capital 'E' in scientific 
    st. c.. __ st. setprecision(3) __ st. scientific __ st. uppercase;
    st. c.. __ "--Precision 3 - scientific - uppercase  ----------------------------" __ st. e..
    st. c.. __ num1 __ st. e..
    st. c.. __ num2__ st. e..
    st. c.. __ num3__ st. e..
    
    // Show '+' symbol for positive numbers
    st. c.. __ st. setprecision(3) __ st. fixed __ st. showpos;
    st. c.. __ "--Precision 3 - fixed - showpos ----------------------------" __ st. e..
    st. c.. __ num1 __ st. e..
    st. c.. __ num2__ st. e..
    st. c.. __ num3__ st. e..
    
    
    // Back to defaults
    st. c...unsetf(st. ios::scientific | st. ios::fixed);
    st. c.. __ st. resetiosflags(st. ios::showpos);
    
    // Show trailing zeroes up to precision 10
    
    st. c.. __ st. setprecision(10) __ st. showpoint;
    st. c.. __ "-- precision 10 - showpoint ----------------------------" __ st. e..
    st. c.. __ num1 __ st. e..
    st. c.. __ num2__ st. e..
    st. c.. __ num3__ st. e..

// Back to defaults
    st. c...unsetf(st. ios::scientific | st. ios::fixed);
    st. c.. __ st. setprecision(6);
    st. c.. __ st. resetiosflags(st. ios::showpos);
    st. c.. __ st. resetiosflags(st. ios::showpoint);

    st. c.. __ "--Back to defaults----------------------------" __ st. e..
    st. c.. __ num1 __ st. e..
    st. c.. __ num2__ st. e..
    st. c.. __ num3__ st. e..
    
    r_ 0;
}

