// Section 9
// Grades

/*
    Calculate a sudent's grade on an exam given their score
    and tell them if they passed the course
    
*/

? ios..

u.. s..

in. main
    
    in. score {};
    c.. __ "Enter your score on the exam (0-100) : ";
    ci. __ score;
    ch.. letter_grade {};
    
    __ (score >= 0 && score <=100) {
        __ (score >= 90)
            letter_grade = 'A';
        ____ __ (score >= 80)
            letter_grade = 'B';
        ____ __ (score >= 70)
            letter_grade = 'C';
        ____ __ (score >=60)
            letter_grade = 'D';
        ____
            letter_grade = 'F';
            
        c.. __ "Your grade is : " __ letter_grade __ e..
        __ (letter_grade == 'F')
            c.. __ "Sorry, you must repeat the class" __ e..
        ____
            c.. __ "Congrats!" __ e..

    } ____ {
        c.. __ "Sorry, " __ score __ " is not in range" __ e..
    }
    
    
    c..  __ e..
    r_ 0;
}

