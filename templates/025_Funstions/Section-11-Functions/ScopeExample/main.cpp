// Section 11
// Scope example
? <iostream>

u.. s..

void local_example();
void global_example();
void static_local_example();

in. num {300};    // Global variable - declared outside any class or function

void global_example
    c.. __ "\nGlobal num is: " __ num __ " in global_example - start" __ e..
    num *= 2;
    c.. __ "Global num is: " __ num __ " in global_example - end" __ e..
}

void local_example(in. x) {
    in. num {1000};     // local to local_example
    c.. __ "\nLocal num is: " __ num __ " in local_example - start" __ e..
    num=x;
    c.. __ "Local num is: " __ num __ " in local_example - end" __ e..
    // num1 in main is not within scope - so it can't be used here.
}

void static_local_example
    static in. num {5000};      // local to static_local_example static - retains it value between calls
    c.. __ "\nLocal static  num is: " __ num __ " in static_local_example - start" __ e..
    num += 1000;
    c.. __ "Local static  num is: " __ num __ " in static_local_example - end" __ e..
}

in. main
    
    in. num {100};  // Local to main
    in. num1 {500}; // Local to main
    
    c.. __ "Local num is : " __ num __ " in main" __ e..
    
    {   // creates a new level of scope
        in. num {200};  // local to this inner block
        c.. __ "Local num is: " __ num __ " in inner block in main" __ e..
        c.. __ "Inner block in main can see out - num1 is: " __ num1 __ e..
    }
    
    c.. __ "Local num is : " __ num __ " in main" __ e..

    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    
    static_local_example();
//    static_local_example();
//    static_local_example();

    c.. __ e..
    r_ 0;
}




