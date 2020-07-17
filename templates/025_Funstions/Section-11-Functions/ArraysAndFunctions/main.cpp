// Section 11
// Arrays and functions
? ios..

u.. s..

void print_array(const in. arr[], size_t size);
void set_array(in. arr[], size_t size, in. value);

void print_array(const in. arr[], size_t size) {  // const
    for (size_t i{0}; i < size; ++i)
        c.. __ arr[i] __ " ";
    c.. __ e..
   // arr[0] = 50000; // bug
}

// set each array element to value
void set_array(in. arr[], size_t size, in. value) {
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

in. main
    in. my_scores[] {100, 98, 90, 86, 84};
    
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
    print_array(my_scores, 5);
    
    c.. __ e..
    r_ 0;
}

