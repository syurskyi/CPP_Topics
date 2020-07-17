// Section 9
// Nested Loops - Histogram

? ios..
? ve..

u.. s..

in. main
    
    in. num_items{};
    
    c.. __ "How many data items do you have? ";
    ci. __ num_items;
    
    vector<in.> data {};
    
    ___ (in. i{1}; i<= num_items; ++i) {
        in. data_item{};
        c.. __ "Enter data item " __ i __ ": ";
        ci. __ data_item;
        data.push_back(data_item);
    }
    
    c.. __ "\nDisplaying Histogram" __ e..
    ___ (auto val: data) {
        ___ (in. i{1} ; i<=val; ++i) {
            __ (i % 5 __ 0)
                c.. __ "*";
            ____
                c.. __ "-";
        }    
        c.. __ e..
    }

    c.. __  e..
    r_ 0;
}
