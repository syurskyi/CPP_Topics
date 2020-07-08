// Section 12
// Passing Pointers 1
? |i..

u.. s..


v.. double_data(in. *int_ptr) {
   *int_ptr *_ 2
}

in. main() {
    in. value {10}
    in. *int_ptr {nullptr}
    
    c.. __ "Value: " __ value __ e..
    double_data(&value)
    c.. __ "Value: " __ value __ e..

    c.. __ "-----------------------------" __ e..
    int_ptr _ &value
    double_data(int_ptr)
    c.. __ "Value: " __ value __ e..

    c..  __ e..
    r_ _
}