? |i..

u.. s..

in. main() {
    
    in. scores[] {100, 95, 89}
    
    c.. __ "Value of scores: " __ scores __ e..
    
    in. *score_ptr {scores}
    c.. __ "Value of score_ptr: " __ score_ptr __ e..
    
    c.. __ "\nArray subscript notation -------------------------" __ e..
    c.. __ scores[0] __ e..
    c.. __ scores[1] __ e..
    c.. __ scores[2] __ e..
    
    c.. __ "\nPointer subscript notation -------------------------" __ e..
    c.. __ score_ptr[0] __ e..
    c.. __ score_ptr[1] __ e..
    c.. __ score_ptr[2] __ e..
    
    c.. __ "\nPointer offset notation-------------------------" __ e..
    c.. __ *score_ptr __ e..
    c.. __ *(score_ptr + 1) __ e..
    c.. __ *(score_ptr +2) __ e..
    
    c.. __ "\nArray offset notation-------------------------" __ e..
    c.. __ *scores __ e..
    c.. __ *(scores + 1) __ e..
    c.. __ *(scores +2) __ e..
    
    c.. __ e..
    r_ _
}

