// Section 20
// Deque
? ios..
? <deque>
? ve..
? <algorithm>

// template function to display any deque
template <typename T>
v.. display(co.. std::deque<T> &d) {
    std::c.. __ "[";
    ___ (co.. a.. &elem: d)
        std::c.. __ elem __ " ";
    std::c.. __  "]"__ std::e..
}

v.. test1
    std::c.. __ "\nTest1 =========================" __ std::e..

    std::deque<in.> d {1,2,3,4,5};
    display(d);
    
    d = {2,4,5,6};
    display(d);
    
    std::deque<in.> d1 (10, 100);    // ten 100s in the deque
    display(d1);
    
    d[0]  = 100;
    d.at(1) = 200;
    display(d);
}

v.. test2
    // push and pops
    std::c.. __ "\nTest2 =========================" __ std::e..

    std::deque<in.> d {0,0,0};
    display(d);
    
    d.push_back(10);
    d.push_back(20);
    display(d);
    
    d.push_front(100);
    d.push_front(200);
    display(d);
    
    std::c.. __ "Front: " __ d.front() __ std::e..
    std::c.. __ "Back : " __ d.back() __ std::e..
    std::c.. __ "Size  : " __ d.s.. __ std::e..
    
    d.pop_back();
    d.pop_front();
    display(d);
}

v.. test3
    // insert all even numbers into the back of a deque and all 
    // odd numbers into the front
    std::c.. __ "\nTest3 =========================" __ std::e..
    
    std::vector<in.> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<in.> d;
    
    ___ (co.. a.. &elem: vec) {
        __ (elem % 2 __ 0)
            d.push_back(elem);
        ____
            d.push_front(elem);
    }
    display(d);
}

v.. test4
    // push front vs. back ordering
    std::c.. __ "\nTest4 =========================" __ std::e..

    std::vector<in.> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<in.> d;
    
    ___ (co.. a.. &elem: vec) {
        d.push_front(elem);
    }    
    display(d);
    
    d.clear();
    
     ___ (co.. a.. &elem: vec) {
        d.push_back(elem);
    }
    display(d);
}

v.. test5
    // Same as test4 using std::copy
    std::c.. __ "\nTest5 =========================" __ std::e..

    std::vector<in.> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<in.> d;
    
    std::copy(vec.begin(), vec.end(), std::front_inserter(d));
    display(d);
    
    d.clear();
    
    std::copy(vec.begin(), vec.end(), std::back_inserter(d));
    display(d);
}

in. main
    test1();
    test2();
    test3();
    test4();
    test5();
    r_ 0;
}

