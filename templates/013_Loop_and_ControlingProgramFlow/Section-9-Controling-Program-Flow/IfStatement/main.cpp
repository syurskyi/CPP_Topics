// Section 9
// If Statement 

? ios..

u.. s..

in. main
    in. num {};
    const in. min {10};
    const in. max {100};
    
    c.. __ "Enter a number between " __ min __ " and " __ max __ ": ";
    ci. __ num;
    
    __ (num >= min) {
        c.. __ "\n=========== If statement 1 =============" __ e..
        c.. __ num __ " is greater than or equal to " __ min __ e..
      
        in. diff {num - min};
        c.. __ num __ " is " __ diff __ " greater than " __ min __ e..
    }
    
    __ (num <= max) {
        c.. __ "\n=========== If statement 2=============" __ e..
        c.. __ num __ " is less than or equal to " __ max __ e..
        
        in. diff { max -num};
        c.. __ num __ " is " __ diff __ " less than " __ max __ e..
    }
    
    __ (num >= min && num <=max) {
      c.. __ "\n=========== If statement 3=============" __ e..
      c.. __ num __ " is in range " __ e..
      c.. __ " This means satements 1 and 2 must also display!!" __ e..
    }
    
    __ (num __ min || num __ max) {
        c.. __ "\n=========== If statement 4 =============" __ e..
        c.. __ num __ " is right on a boundary " __ e..
        c.. __ "This means all 4 statements display " __ e..

    }
    
    c.. __ e..
    r_ 0;
}

