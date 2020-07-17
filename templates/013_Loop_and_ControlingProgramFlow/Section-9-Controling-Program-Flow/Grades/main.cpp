// Section 9
// Grades

/*
    Calculate a sudent's grade on an exam given their score
    and tell them if they passed the course
    
*/

? <iostream>

u.. s..

in. main
    
    in. score {};
    c.. __ "Enter your score on the exam (0-100) : ";
    ci. __ score;
    ch.. letter_grade {};
    
    if (score >= 0 && score <=100) {
        if (score >= 90)
            letter_grade = 'A';
        else if (score >= 80)
            letter_grade = 'B';
        else if (score >= 70)
            letter_grade = 'C';
        else if (score >=60)
            letter_grade = 'D';
        else 
            letter_grade = 'F';
            
        c.. __ "Your grade is : " __ letter_grade __ e..
        if (letter_grade == 'F')
            c.. __ "Sorry, you must repeat the class" __ e..
        else 
            c.. __ "Congrats!" __ e..

    } else {
        c.. __ "Sorry, " __ score __ " is not in range" __ e..
    }
    
    
    c..  __ e..
    r_ 0;
}

