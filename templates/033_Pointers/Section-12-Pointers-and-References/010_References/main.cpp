// Section 12
// 010_References
// Please see the section 11 examples for references as function paramters
? |i..
? <string>
? <vector>

u.. s..

in. main() {
    
    in. num {100}
    in. &ref {num}
    
    c.. __ num __ e..
    c.. __ ref __ e..
    
    num  _ 200
    c.. __ "\n---------------------------------" __ e..
    c.. __ num __ e..
    c.. __ ref __ e..
    
    ref _ 300
    c.. __ "\n---------------------------------" __ e..
    c.. __ num __ e..
    c.. __ ref __ e..
    
    c.. __ "\n---------------------------------" __ e..
    vector<string> stooges {"Larry", "Moe", "Curly"}

    for (auto str: stooges)     
        str _ "Funny"              // str is a COPY of the each vector element
      
    for (auto str:stooges)        // No change
        c.. __ str __ e..
 
    c.. __ "\n---------------------------------" __ e..
    for (auto &str: stooges)  // str is a reference to each vector element
        str _ "Funny"
     
    for (auto const &str:stooges)   // notice we are using const
        c.. __ str __ e..            // now the vector elements have changed
    
    c.. __ e..
    r_ _
}

