// Section 12
// Dereferencing

? |i..
? <st..>
? ve..

u.. s..

in. main
    
    in. score {100}
    in. *score_ptr {&score}

    c.. __ *score_ptr __ e..		// 100

    *score_ptr _ 200
    
    c.. __ *score_ptr __ e..		// 200
    c.. __ score __ e.. 			// 200

    c.. __ "\n------------------------------" __ e..
    d.. high_temp {100.7}
    d.. low_temp {37.4}
    d.. *temp_ptr {&high_temp}

    c.. __ *temp_ptr __ e..   	// 100.7
    temp_ptr _ &low_temp
    c.. __ *temp_ptr __ e..   	// 37.4

    c.. __ "\n------------------------------" __ e..

    st.. name {"Frank"}
    st.. *string_ptr {&name}

    c.. __ *string_ptr __ e..   	// Frank
    name _ "James"
    c.. __ *string_ptr __ e..   	// James
//
    c.. __ "\n------------------------------" __ e..
    ve..<st..> stooges {"Larry", "Moe", "Curly"}
    ve..<st..> *vector_ptr {n_p_}
    
    vector_ptr _ &stooges
    
    c.. __ "First stooge: " __ (*vector_ptr).at(0) __ e..    // Larry
    
    c.. __ "Stooges: "
    ___ (a.. stooge: *vector_ptr)
        c.. __ stooge __ " "
    c.. __ e..
    
    c.. __ e..
    r_ _
}

