// Section 11
// Function Overloading
? ios..
? <string>
? ve..

u.. s..

void print(in.);
void print(do..);
void print(string);
void print(string, string);
void print(vector<string>);

void print(in. num) {
    c.. __ "Printing int: " __ num __ e..
}

void print(do.. num) {
    c.. __ "Printing double: " __ num __ e..
}

void print(string s) {
    c.. __ "Printing string: " __ s __ e..
}

void print(string s, string t) {
    c.. __ "Printing 2 strings: " __ s __ " and " __ t __ e..
}

void print(vector<string> v) {
    c.. __ "Printing vector of strings: " ;
    ___ (a.. s: v )
        c.. __ s + " ";
    c.. __ e..
}

in. main
    print(100);    // int
    print('A');     //  character is always promoted to int should print 65 ASCII ('A')
    
    print(123.5);   // double
    print(123.3F);  // Float is promoted to double
    
    print("C-style string");  // C-style string is converted to a C++ string
    
    string s {"C++ string"};    
    print(s);       // C++ string
    
    print("C-style string", s); // First argument is converted to a C++ string
    
    vector<string> three_stooges {"Larry", "Moe", "Curly"};
    print(three_stooges);
    
    c.. __ e..
    r_ 0;
}

