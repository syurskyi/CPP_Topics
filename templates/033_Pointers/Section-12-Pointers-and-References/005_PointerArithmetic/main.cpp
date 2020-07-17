// Section 12
// Pointer Arithmetic

? |i..

u.. s..

in. main
    
    in. scores[] {100, 95, 89, 68, -1}
    in. *score_ptr {scores}
    
    w___ (*score_ptr !_ -1) {
        c.. __ *score_ptr __ e..
        score_ptr++
    }
    
    c.. __ "\n-------------------------" __ e..
    score_ptr _ scores
    w___ (*score_ptr !_ -1)
        c.. __ *score_ptr++ __ e..
        
    c.. __ "\n-------------------------" __ e..
    st.. s1 {"Frank"}
    st.. s2 {"Frank"}
    st.. s3 {"James"}

    st.. *p1 {&s1}
    st.. *p2 {&s2}
    st.. *p3 {&s1}

    c.. __ boolalpha
    c.. __ p1 __ "==" __ p2 __ ": " __ (p1 __ p2) __ e..		// false
    c.. __ p1 __ "==" __ p3 __ ": " __ (p1 __ p3) __ e..		// true

    c.. __ *p1 __ "==" __ *p2 __ ": " __ (*p1 __ *p2) __ e..		// true
    c.. __ *p1 __ "==" __ *p3 __ ": " __ (*p1 __ *p3) __ e..		// true
    
    p3 _ &s3   // point to James
    c.. __ *p1 __ "==" __ *p3 __ ": " __ (*p1 __ *p3) __ e..		// false
    

    c.. __ "\n-------------------------" __ e..
    ch.. name[]  {"Frank"}
    
    ch.. *char_ptr1 {nullptr}
    ch.. *char_ptr2{nullptr}
    
    char_ptr1 _ &name[0]   // F
    char_ptr2 _ &name[3]   // n

    c.. __ "In the string " __ name __ ",  " __ *char_ptr2 __ " is " __ (char_ptr2 - char_ptr1) __ " characters away from " __  *char_ptr1  __ e..
    
    c.. __ e..
    r_ _
}

