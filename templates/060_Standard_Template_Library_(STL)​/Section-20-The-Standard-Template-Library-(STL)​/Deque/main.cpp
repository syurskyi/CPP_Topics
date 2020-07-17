// Section 20
// Deque
? ios..
? <deque>
? ve..
? <algorithm>

// template function to display any deque
template <typename T>
v.. display(co.. st. deque<T> &d) {
    st. c.. __ "[";
    ___ (co.. a.. &elem: d)
        st. c.. __ elem __ " ";
    st. c.. __  "]"__ st. e..
}

v.. test1
    st. c.. __ "\nTest1 =========================" __ st. e..

    st. deque<in.> d {1,2,3,4,5};
    display(d);
    
    d = {2,4,5,6};
    display(d);
    
    st. deque<in.> d1 (10, 100);    // ten 100s in the deque
    display(d1);
    
    d[0]  = 100;
    d.at(1) = 200;
    display(d);
}

v.. test2
    // push and pops
    st. c.. __ "\nTest2 =========================" __ st. e..

    st. deque<in.> d {0,0,0};
    display(d);
    
    d.push_back(10);
    d.push_back(20);
    display(d);
    
    d.push_front(100);
    d.push_front(200);
    display(d);
    
    st. c.. __ "Front: " __ d.front() __ st. e..
    st. c.. __ "Back : " __ d.back() __ st. e..
    st. c.. __ "Size  : " __ d.s.. __ st. e..
    
    d.pop_back();
    d.pop_front();
    display(d);
}

v.. test3
    // insert all even numbers into the back of a deque and all 
    // odd numbers into the front
    st. c.. __ "\nTest3 =========================" __ st. e..
    
    st. ve..<in.> vec {1,2,3,4,5,6,7,8,9,10};
    st. deque<in.> d;
    
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
    st. c.. __ "\nTest4 =========================" __ st. e..

    st. ve..<in.> vec {1,2,3,4,5,6,7,8,9,10};
    st. deque<in.> d;
    
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
    st. c.. __ "\nTest5 =========================" __ st. e..

    st. ve..<in.> vec {1,2,3,4,5,6,7,8,9,10};
    st. deque<in.> d;
    
    st. copy(vec.begin(), vec.end(), st. front_inserter(d));
    display(d);
    
    d.clear();
    
    st. copy(vec.begin(), vec.end(), st. back_inserter(d));
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

