// Section 12
// Return Pointer
? |i..

u.. s..

in. *create_array(size_t size, in. init_value = 0) {
   in. *new_storage {nullptr};
   new_storage = new in.[size];
   for (size_t i{0}; i < size; ++i)
      *(new_storage + i) = init_value;
   return new_storage;
}

v.. display(const in. *const array, size_t size) {
    for (size_t i{0}; i < size; ++i)
        c.. __ array[i] __ " ";
    c.. __ e..
}
in. main() {
    in. *my_array {nullptr};
    size_t size;
    in. init_value {};
    
    c.. __ "\nHow many integers would you like to allocate? ";
    cin >> size;
    c.. __ "What value would you like them initialized to? ";
    cin >> init_value;
    
    my_array = create_array(size, init_value);
    c.. __ "\n--------------------------------------" __ e..

    display(my_array, size);
    delete [] my_array;
    r_ _
}