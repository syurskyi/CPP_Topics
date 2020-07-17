// Section 19
// Stream manipulators - Field width, justification and setfill
// setw, left, right, setfill
? ios..
? iom..

v.. ruler
    st. c.. __ "\n12345678901234567890123456789012345678901234567890" __ st. e..
}

in. main
    in. num1 { 1234 };
    do.. num2 {1234.5678};
    st. st..  hello  {"Hello"};
    
    // Defaults
    st. c.. __ "\n--Defaults -------------------------------------------------------------------" __ st. e..
    ruler();
    st. c.. __ num1
                   __ num2
                   __ hello
                   __ st. e..
    
     // Defaults - one per line
    st. c.. __ "\n--Defaults - one per line-----------------------------------------------------" __ st. e..
    ruler();
    st. c.. __ num1 __std::e..
    st. c.. __ num2 __ st. e..
    st. c.. __ hello __ st. e..
    
   // Set field width to 10 
   // Note the default justification is right for num1 only!
    st. c.. __ "\n--width 10 for num1-----------------------------------------------------------" __ st. e..
    ruler(); 
    st. c.. __ st. setw(10)  __ num1
                   __ num2
                   __ hello
                   __ st. e..
    
    // Set field width to 10 for the first 2 outputs
   // Note the default justification is right for both
    st. c.. __ "\n--width 10 for num1 and num2------------------------------------------------" __ st. e..
    ruler(); 
    st. c.. __ st. setw(10) __ num1
                   __ st. setw(10) __ num2
                   __ hello
                   __ st. e..
                  
   // Set field width to 10 for all 3 outputs
   // Note the default justification is right for all
    st. c.. __ "\n--width 10 for num1 and num2 and hello--------------------------------------" __ st. e..
    ruler(); 
    st. c.. __ st. setw(10) __ num1
                  __ st. setw(10) __ num2
                  __ st. setw(10) __ hello
                  __ st. e..
                  
    // Set field width to 10 for all 3 outputs and justify all left
    st. c.. __ "\n--width 10 for num1 and num2 and hello left for all---------------------------" __ st. e..
    ruler(); 
    st. c.. __ st. setw(10) __ st. left __ num1
                   __ st. setw(10) __ st. left __ num2
                   __ st. setw(10) __ st. left __  hello
                   __ st. e..
                  
    // setfill to a dash
    // this is persistent
    // Then repeat the previous display
    st. c.. __ st. setfill('-');
    st. c.. __ "\n--width 10 for num1 and num2 and hello left for all setfill to dash------------" __ st. e..
    ruler(); 
    st. c.. __ st. setw(10) __ st. left __ num1
                   __ st. setw(10) __ st. left __ num2
                   __ st. setw(10) __ st. left __  hello
                   __ st. e..
//    
    // Set width to 10 for all, left justify all and cary the setfill character
    st. c.. __ "\n--width 10 for num1 and num2 and hello - setfill varies------------------------" __ st. e..
    ruler(); 
    st. c.. __ st. setw(10) __ st. left __ st. setfill('*') __ num1
                  __ st. setw(10) __ st. left __ st. setfill('#' )__ num2
                  __ st. setw(10) __ st. left __  st. setfill('-') __ hello
                  __ st. e..
//    
    st. c.. __ st. endl __ st. e..
    r_ 0;
}

