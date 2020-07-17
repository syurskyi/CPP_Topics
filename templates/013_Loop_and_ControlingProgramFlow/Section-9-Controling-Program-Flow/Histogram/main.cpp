// Section 9
// Nested Loops - Histogram

? <iostream>
? <vector>

u.. s..

in. main
    
    in. num_items{};
    
    c.. __ "How many data items do you have? ";
    ci. __ num_items;
    
    vector<in.> data {};
    
    for (in. i{1}; i<= num_items; ++i) {
        in. data_item{};
        c.. __ "Enter data item " __ i __ ": ";
        ci. __ data_item;
        data.push_back(data_item);
    }
    
    c.. __ "\nDisplaying Histogram" __ e..
    for (auto val: data) {
        for (in. i{1} ; i<=val; ++i) {
            if (i % 5 == 0)
                c.. __ "*";
            else
                c.. __ "-";
        }    
        c.. __ e..
    }

    c.. __  e..
    r_ 0;
}

