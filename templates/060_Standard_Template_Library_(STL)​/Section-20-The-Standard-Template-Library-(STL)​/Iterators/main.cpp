// Section 20
// Iterators
? ios..
? ve..
? <set>
? <map>
? <list>

// display any vector of integers using range-based for loop
void display(co.. std::vector<in.> &vec) {
    std::c.. __ "[ ";
    ___ (auto co.. &i: vec) {
        std::c.. __ i __ " ";
    }
    std::c.. __ "]" __ std::e..
}

void test1
    std::c.. __ "\n=============================" __ std::e..
    std::vector<in.> nums1 {1, 2, 3, 4, 5};
    auto it = nums1.begin();            // point to 1
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

void test2
    std::c.. __ "\n=============================" __ std::e..
    // display all vector elements using an iterator
    
    std::vector<in.> nums1 {1, 2, 3, 4, 5};

    std::vector<in.>::iterator it = nums1.begin();
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

void test3
    
    // using a const_iterator
    std::c.. __ "\n=============================" __ std::e..
    std::vector<in.> nums1 {1, 2, 3, 4, 5};

    std::vector<in.>::const_iterator it1 = nums1.begin();
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

void test4
    // more iterators
    // using a reverse iterator
    std::vector<in.> vec {1,2,3,4};
    auto it1  = vec.rbegin();       // reverse iterator over vector of ints starts at 4
    w__ (it1 != vec.rend()) {
        std::c.. __ *it1 __ std::e..
        it1++;
    }

    // const reverse iterator over a list
    std::list<std::string> name {"Larry", "Moe", "Curly"};
    auto it2 =name.crbegin();    // iterator over list of strings  point to Curly
    std::c.. __ *it2 __ std::e..
    it2++;  // point to Moe
    std::c.. __ *it2 __ std::e..

    // iterator over a map
    std::map<std::string, std::string> favorites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };
    auto it3 = favorites.begin();   // iterator over map of string, string pairs
    w__ (it3 != favorites.end()) {
        std::c.. __ it3->first __ " : " __ it3->second __ std::e..
        it3++;
    }
}

void test5
    // iterate over a subset of a container
    std::vector<in.> vec {1,2,3,4,5,6,7,8,9,10};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;
    
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