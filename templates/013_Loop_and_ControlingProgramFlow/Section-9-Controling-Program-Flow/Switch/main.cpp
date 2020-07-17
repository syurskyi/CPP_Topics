// Section 9
// Switch Statement

/* 
    Ask the user what grade they expect on an exam and 
    tell them what they need to score to get it.
*/

? <iostream>

u.. s..

in. main
    
    ch.. letter_grade {};
    
    c.. __ "Enter the letter grade you expect on the exam: ";
    ci. __ letter_grade;
    
    switch (letter_grade) {
        case 'a':
        case 'A':
            c.. __ "You need a 90 or above, study hard!" __ e..
            break;
        case 'b':
        case 'B':
            c.. __ "You need 80-89 for a B, go study!" __ e..
            break;
        case 'c':
        case 'C':
            c.. __ "You need 70-79 for an average grade" __ e..
            break;
        case 'd':
        case 'D':
            c.. __ "Hmm, you should strive for a better grade. All you need is 60-69" __ e..
            break;
        case 'f':
        case 'F':
        {
            ch.. confirm {};
            c.. __ "Are you sure (Y/N)? ";
            ci. __ confirm;
            if (confirm == 'y' || confirm == 'Y') 
                c.. __ "OK, I guess you didn't study..." __ e..
            else if (confirm == 'n' || confirm == 'N')
                c.. __ "Good- go study!" __ e..
            else 
                c.. __ "Illegal choice" __ e..
            break;
        }
           
        default:
            c.. __ "Sorry, not a valid grade" __ e..
    }
    
    
    
    c.. __ e..
    r_ 0;
}

