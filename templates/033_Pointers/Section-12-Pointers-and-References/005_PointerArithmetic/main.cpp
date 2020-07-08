// Section 12
// Pointer Arithmetic

? |i..

u.. s..

in. main() {
    
    in. scores[] {100, 95, 89, 68, -1}
    in. *score_ptr {scores}
    
    while (*score_ptr !_ -1) {
        c.. __ *score_ptr __ e..
        score_ptr++
    }
    
    c.. __ "\n-------------------------" __ e..
    score_ptr _ scores
    while (*score_ptr !_ -1)
        c.. __ *score_ptr++ __ e..
        
    c.. __ "\n-------------------------" __ e..
    string s1 {"Frank"}
    string s2 {"Frank"}
    string s3 {"James"}

    string *p1 {&s1}
    string *p2 {&s2}
    string *p3 {&s1}

    c.. __ boolalpha
    c.. __ p1 __ "==" __ p2 __ ": " __ (p1 == p2) __ e..		// false
    c.. __ p1 __ "==" __ p3 __ ": " __ (p1 == p3) __ e..		// true

    c.. __ *p1 __ "==" __ *p2 __ ": " __ (*p1 == *p2) __ e..		// true
    c.. __ *p1 __ "==" __ *p3 __ ": " __ (*p1 == *p3) __ e..		// true
    
    p3 _ &s3   // point to James
    c.. __ *p1 __ "==" __ *p3 __ ": " __ (*p1 == *p3) __ e..		// false
    

    c.. __ "\n-------------------------" __ e..
    char name[]  {"Frank"}
    
    char *char_ptr1 {nullptr}
    char *char_ptr2{nullptr}
    
    char_ptr1 _ &name[0]   // F
    char_ptr2 _ &name[3]   // n

    c.. __ "In the string " __ name __ ",  " __ *char_ptr2 __ " is " __ (char_ptr2 - char_ptr1) __ " characters away from " __  *char_ptr1  __ e..
    
    c.. __ e..
    r_ _
}

