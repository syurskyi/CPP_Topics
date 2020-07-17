// Section 12
// Return Pointer
? |i..

u.. s..

in. *create_array(size_t size, in. init_value _ 0) {
   in. *new_storage {nullptr}
   new_storage _ n.. in.[size]
   ___ (size_t i{0} i < size ++i)
      *(new_storage + i) _ init_value
   r_ new_storage
}

v.. display(c.. in. *c.. array, size_t size) {
    ___ (size_t i{0} i < size ++i)
        c.. __ array[i] __ " "
    c.. __ e..
}
in. main
    in. *my_array {nullptr}
    size_t size
    in. init_value {}
    
    c.. __ "\nHow many integers would you like to allocate? "
    ci. __ size
    c.. __ "What value would you like them initialized to? "
    ci. __ init_value
    
    my_array _ create_array(size, init_value)
    c.. __ "\n--------------------------------------" __ e..

    display(my_array, size)
    de.. [] my_array
    r_ _
}