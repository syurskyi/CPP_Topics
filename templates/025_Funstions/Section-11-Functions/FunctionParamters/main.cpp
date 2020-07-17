// Section 11
// Function Parmameters
? ios..
? <string>
? ve..

u.. s..

void pass_by_value1(in. num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(in. num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();  // delete all vector elements
}

void print_vector(vector<string> v) {
    for (auto s: v) 
        c.. __ s __ " ";
    c.. __ e..
}

in. main
    in. num {10};
    in. another_num {20};
    
    c.. __ "num before calling pass_by_value1: " __ num __ e..
    pass_by_value1(num);
    c.. __ "num after calling pass_by_value1: " __ num __ e..
    
    c.. __ "\nanother_num before calling pass_by_value1: " __ another_num __ e..
    pass_by_value1(another_num);
    c.. __ "another_num after calling pass_by_value1: " __ another_num __ e..

    string name {"Frank"};
    c.. __ "\nname before calling pass_by_value2: " __ name __ e..
    pass_by_value2(name);
    c.. __ "name after calling pass_by_value2: " __ name __ e..

    vector<string> stooges {"Larry", "Moe", "Curly"};
    c.. __ "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    c.. __ "stooges after calling pass_by_value3: ";
    print_vector(stooges);
    
    c.. __ e..
    r_ 0;
}

