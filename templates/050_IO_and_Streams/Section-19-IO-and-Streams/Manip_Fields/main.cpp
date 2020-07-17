// Section 19
// Stream manipulators - Field width, justification and setfill
// setw, left, right, setfill
? <iostream>
? <iomanip>

void ruler
    std::c.. __ "\n12345678901234567890123456789012345678901234567890" __ std::e..
}

in. main
    in. num1 { 1234 };
    do.. num2 {1234.5678};
    std::string hello  {"Hello"};
    
    // Defaults
    std::c.. __ "\n--Defaults -------------------------------------------------------------------" __ std::e..
    ruler();
    std::c.. __ num1
                   __ num2
                   __ hello
                   __ std::e..
    
     // Defaults - one per line
    std::c.. __ "\n--Defaults - one per line-----------------------------------------------------" __ std::e..
    ruler();
    std::c.. __ num1 __std::e..
    std::c.. __ num2 __ std::e..
    std::c.. __ hello __ std::e..
    
   // Set field width to 10 
   // Note the default justification is right for num1 only!
    std::c.. __ "\n--width 10 for num1-----------------------------------------------------------" __ std::e..
    ruler(); 
    std::c.. __ std::setw(10)  __ num1
                   __ num2
                   __ hello
                   __ std::e..
    
    // Set field width to 10 for the first 2 outputs
   // Note the default justification is right for both
    std::c.. __ "\n--width 10 for num1 and num2------------------------------------------------" __ std::e..
    ruler(); 
    std::c.. __ std::setw(10) __ num1
                   __ std::setw(10) __ num2
                   __ hello
                   __ std::e..
                  
   // Set field width to 10 for all 3 outputs
   // Note the default justification is right for all
    std::c.. __ "\n--width 10 for num1 and num2 and hello--------------------------------------" __ std::e..
    ruler(); 
    std::c.. __ std::setw(10) __ num1
                  __ std::setw(10) __ num2
                  __ std::setw(10) __ hello
                  __ std::e..
                  
    // Set field width to 10 for all 3 outputs and justify all left
    std::c.. __ "\n--width 10 for num1 and num2 and hello left for all---------------------------" __ std::e..
    ruler(); 
    std::c.. __ std::setw(10) __ std::left __ num1
                   __ std::setw(10) __ std::left __ num2
                   __ std::setw(10) __ std::left __  hello
                   __ std::e..
                  
    // setfill to a dash
    // this is persistent
    // Then repeat the previous display
    std::c.. __ std::setfill('-');
    std::c.. __ "\n--width 10 for num1 and num2 and hello left for all setfill to dash------------" __ std::e..
    ruler(); 
    std::c.. __ std::setw(10) __ std::left __ num1
                   __ std::setw(10) __ std::left __ num2
                   __ std::setw(10) __ std::left __  hello
                   __ std::e..
//    
    // Set width to 10 for all, left justify all and cary the setfill character
    std::c.. __ "\n--width 10 for num1 and num2 and hello - setfill varies------------------------" __ std::e..
    ruler(); 
    std::c.. __ std::setw(10) __ std::left __ std::setfill('*') __ num1
                  __ std::setw(10) __ std::left __ std::setfill('#' )__ num2
                  __ std::setw(10) __ std::left __  std::setfill('-') __ hello
                  __ std::e..
//    
    std::c.. __ std::endl __ std::e..
    r_ 0;
}

