// Section 20
// Iterators
? ios..
? ve..
? <set>
? <map>
? <list>

// display any vector of integers using range-based for loop
v.. display(co.. st. ve..<in.> &vec) {
    st. c.. __ "[ ";
    ___ (a.. co.. &i: vec) {
        st. c.. __ i __ " ";
    }
    st. c.. __ "]" __ st. e..
}

v.. test1
    st. c.. __ "\n=============================" __ st. e..
    st. ve..<in.> nums1 {1, 2, 3, 4, 5};
    a.. it = nums1.begin();            // point to 1
    st. c.. __ *it __ st. e..

    it++;                                           // point to 2
    st. c.. __ *it __ st. e..

    it += 2;                                       // point to 4
    st. c.. __ *it __ st. e..

    it -= 2;                                        // point to 2
    st. c.. __ *it __ st. e..

    it = nums1.end() - 1;                   // point to 5
    st. c.. __ *it __ st. e..
}

v.. test2
    st. c.. __ "\n=============================" __ st. e..
    // display all vector elements using an iterator
    
    st. ve..<in.> nums1 {1, 2, 3, 4, 5};

    st. ve..<in.>::iterator it = nums1.begin();
    w__ (it != nums1.end()) {
        st. c.. __ *it __ st. e..
        it++;
    }
    
    // change all vector elements to 0
    it = nums1.begin();
    w__ (it != nums1.end()) {
        *it = _
        it++;
    }

    display(nums1);
}

v.. test3
    
    // using a const_iterator
    st. c.. __ "\n=============================" __ st. e..
    st. ve..<in.> nums1 {1, 2, 3, 4, 5};

    st. ve..<in.>::const_iterator it1 = nums1.begin();
    // auto it1 = nums1.cbegin();
    
    w__ (it1 != nums1.end()) {
        st. c.. __ *it1 __ st. e..
        it1++;
    }
    
    // compiler error when we try to change element
    it1 = nums1.begin();
    w__ (it1 != nums1.end()) {
       // *it1 = 0;   // Complier error - read only
        it1++;
    }

}

v.. test4
    // more iterators
    // using a reverse iterator
    st. ve..<in.> vec {1,2,3,4};
    a.. it1  = vec.rbegin();       // reverse iterator over vector of ints starts at 4
    w__ (it1 != vec.rend()) {
        st. c.. __ *it1 __ st. e..
        it1++;
    }

    // const reverse iterator over a list
    st. list<st. st.. > name {"Larry", "Moe", "Curly"};
    a.. it2 =name.crbegin();    // iterator over list of strings  point to Curly
    st. c.. __ *it2 __ st. e..
    it2++;  // point to Moe
    st. c.. __ *it2 __ st. e..

    // iterator over a map
    st. map<st. st.. , st. st.. > favorites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };
    a.. it3 = favorites.begin();   // iterator over map of string, string pairs
    w__ (it3 != favorites.end()) {
        st. c.. __ it3->first __ " : " __ it3->second __ st. e..
        it3++;
    }
}

v.. test5
    // iterate over a subset of a container
    st. ve..<in.> vec {1,2,3,4,5,6,7,8,9,10};
    a.. start = vec.begin() + 2;
    a.. finish = vec.end() - 3;
    
    w__ (start != finish) {
        st. c.. __ *start __ st. e..
        start++;
    }
    
}
in. main

//    test1();
//    test2();
//    test3();
//    test4();
    test5();
    r_ _
}