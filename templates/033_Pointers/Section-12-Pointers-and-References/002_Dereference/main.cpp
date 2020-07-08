// Section 12
// Dereferencing

? |i..
? <string>
? <vector>

u.. s..

in. main() {
    
    in. score {100};
    in. *score_ptr {&score};

    c.. __ *score_ptr __ e..		// 100

    *score_ptr = 200;
    
    c.. __ *score_ptr __ e..		// 200
    c.. __ score __ e.. 			// 200

    c.. __ "\n------------------------------" __ e..
    d.. high_temp {100.7};
    d.. low_temp {37.4};
    d.. *temp_ptr {&high_temp};

    c.. __ *temp_ptr __ e..   	// 100.7
    temp_ptr = &low_temp;	
    c.. __ *temp_ptr __ e..   	// 37.4

    c.. __ "\n------------------------------" __ e..

    string name {"Frank"};
    string *string_ptr {&name};

    c.. __ *string_ptr __ e..   	// Frank
    name = "James"; 	    
    c.. __ *string_ptr __ e..   	// James
//
    c.. __ "\n------------------------------" __ e..
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};
    
    vector_ptr = &stooges;
    
    c.. __ "First stooge: " __ (*vector_ptr).at(0) __ e..    // Larry
    
    c.. __ "Stooges: ";
    for (auto stooge: *vector_ptr)  
        c.. __ stooge __ " ";
    c.. __ e..
    
    c.. __ e..
    r_ _
}

