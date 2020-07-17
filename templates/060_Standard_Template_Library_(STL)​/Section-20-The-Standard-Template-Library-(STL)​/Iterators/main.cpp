// Section 20
// Iterators
? ios..
? ve..
? <set>
? <map>
? <list>

// display any vector of integers using range-based for loop
v.. display(co.. std::ve..<in.> &vec) {
    std::c.. __ "[ ";
    ___ (a.. co.. &i: vec) {
        std::c.. __ i __ " ";
    }
    std::c.. __ "]" __ std::e..
}

v.. test1
    std::c.. __ "\n=============================" __ std::e..
    std::ve..<in.> nums1 {1, 2, 3, 4, 5};
    a.. it = nums1.begin();            // point to 1
    std::c.. __ *it __ std::e..

    it++;                                           // point to 2
    std::c.. __ *it __ std::e..

    it += 2;                                       // point to 4
    std::c.. __ *it __ std::e..

    it -= 2;                                        // point to 2
    std::c.. __ *it __ std::e..

    it = nums1.end() - 1;                   // point to 5
    std::c.. __ *it __ std::e..
}

v.. test2
    std::c.. __ "\n=============================" __ std::e..
    // display all vector elements using an iterator
    
    std::ve..<in.> nums1 {1, 2, 3, 4, 5};

    std::ve..<in.>::iterator it = nums1.begin();
    w__ (it != nums1.end()) {
        std::c.. __ *it __ std::e..
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
    std::c.. __ "\n=============================" __ std::e..
    std::ve..<in.> nums1 {1, 2, 3, 4, 5};

    std::ve..<in.>::const_iterator it1 = nums1.begin();
    // auto it1 = nums1.cbegin();
    
    w__ (it1 != nums1.end()) {
        std::c.. __ *it1 __ std::e..
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
    std::ve..<in.> vec {1,2,3,4};
    a.. it1  = vec.rbegin();       // reverse iterator over vector of ints starts at 4
    w__ (it1 != vec.rend()) {
        std::c.. __ *it1 __ std::e..
        it1++;
    }

    // const reverse iterator over a list
    std::list<std::string> name {"Larry", "Moe", "Curly"};
    a.. it2 =name.crbegin();    // iterator over list of strings  point to Curly
    std::c.. __ *it2 __ std::e..
    it2++;  // point to Moe
    std::c.. __ *it2 __ std::e..

    // iterator over a map
    std::map<std::string, std::string> favorites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };
    a.. it3 = favorites.begin();   // iterator over map of string, string pairs
    w__ (it3 != favorites.end()) {
        std::c.. __ it3->first __ " : " __ it3->second __ std::e..
        it3++;
    }
}

v.. test5
    // iterate over a subset of a container
    std::ve..<in.> vec {1,2,3,4,5,6,7,8,9,10};
    a.. start = vec.begin() + 2;
    a.. finish = vec.end() - 3;
    
    w__ (start != finish) {
        std::c.. __ *start __ std::e..
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