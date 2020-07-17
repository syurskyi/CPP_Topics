// Section 12
// 010_References
// Please see the section 11 examples for references as function paramters
? |i..
? <st..>
? <vector>

u.. s..

in. main
    
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
    vector<st..> stooges {"Larry", "Moe", "Curly"}

    ___ (auto str: stooges)
        str _ "Funny"              // str is a COPY of the each vector element
      
    ___ (auto str:stooges)        // No change
        c.. __ str __ e..
 
    c.. __ "\n---------------------------------" __ e..
    ___ (auto &str: stooges)  // str is a reference to each vector element
        str _ "Funny"
     
    ___ (auto c.. &str:stooges)   // notice we are using const
        c.. __ str __ e..            // now the vector elements have changed
    
    c.. __ e..
    r_ _
}

