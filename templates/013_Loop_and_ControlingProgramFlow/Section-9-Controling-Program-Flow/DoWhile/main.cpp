// Section 9
// Do-while
// Simple Menu Example
? ios..


u.. s..

in. main
    
    ch.. selection {};
    do {
        c.. __ "\n---------------------" __ e..
        c.. __ "1. Do this" __ e..
        c.. __ "2. Do that" __ e..
        c.. __ "3. Do something else" __ e..
        c.. __ "Q. Quit" __ e..
        c.. __ "\nEnter your selection: ";
        ci. __ selection;
        
        __ (selection == '1')
            c.. __ "You chose 1 - doing this" __ e..
        ____ __ (selection == '2')
             c.. __ "You chose 2 - doing that" __ e..
        ____ __ (selection == '3')
            c.. __ "You chose 3 - doing something else" __ e..
        ____ __ (selection == 'Q' || selection == 'q')
            c.. __ "Goodbye..." __ e..
        ____
            c.. __ "Unknown option -- try again..." __ e..
    
    } while ( selection != 'q' && selection != 'Q');
    
    c..  __ e..
    r_ 0;
}

