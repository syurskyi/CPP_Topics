// Section 12
// Dynamic Memory
? |i..

u.. s..

in. main() {
    
    in. *int_ptr {nullptr}
    int_ptr _ new in.               // allocate the int on the heap
    c.. __ int_ptr __ e..    // use it
    delete int_ptr                    // release it
    
    size_t size{0}
    d.. *temp_ptr {nullptr}
    
    c.. __ "How many temps? "
    cin >> size
    
    temp_ptr _ new d..[size]    // allocate the storage on the heap
    c.. __ temp_ptr __ e..       // use it
    delete [] temp_ptr                     // release it
    
    c.. __ e..
    r_ _
}

