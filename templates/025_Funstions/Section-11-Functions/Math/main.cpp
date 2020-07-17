// Section 11
// Math examples

? ios..
? <cmath>        // required

u.. s..

in. main
    
    do.. num {};

    c.. __ "Enter a number (double) : ";
    ci. __ num;
    
    c.. __ "The sqrt of " __ num __ " is: " __ sqrt(num) __ e..
    c.. __ "The cubed root of " __ num __ " is: " __ cbrt(num) __ e..
    
    c.. __ "The sine of " __ num __ " is: " __ sin(num) __ e..
    c.. __ "The cosine of " __ num __ " is: " __ cos(num) __ e..
    
    c.. __ "The ceil of " __ num __ " is: " __ ceil(num) __ e..
    c.. __ "The floor of " __ num __ " is: " __ floor(num) __ e..
    c.. __ "The round of " __ num __ " is: " __ round(num) __ e..

    
    do.. power {};
    c.. __ "\nEnter a power to raise " __ num __ " to: ";
    ci. __ power;
    c.. __ num __ " raised to the " __ power __ " power is: " __ pow(num, power) __ e..
    

    c.. __  e..
    r_ 0;
}

