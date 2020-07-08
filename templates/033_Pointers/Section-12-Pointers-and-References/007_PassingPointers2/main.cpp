// Section 12
// Passing Pointers 2
? |i..
? <st..>
? <vector>

u.. s..


v.. swap(in. *a, in. *b) {
    in. temp _ *a
    *a _ *b
    *b _ temp
}


in. main() {
    in. x {100}, y {200}
    c.. __ "\nx: " __ x __  e..
    c.. __ "y: " __ y __  e..
    
    swap(&x, &y)
    
    c.. __ "\nx: " __ x __  e..
    c.. __ "y: " __ y __  e..
    
    c..  __ e..
    r_ _
}

