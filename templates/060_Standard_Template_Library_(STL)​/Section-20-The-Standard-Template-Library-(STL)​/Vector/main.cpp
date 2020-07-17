// Section 20
// Vector

? ios..
? ve..
? <algorithm>

c_ Person {
    friend st. ostream &operator__(st. ostream &os, co.. Person &p);
    st. st..  name;
    in. age;
pu..
    Person() = default;
    Person(st. st..  name, in. age)
        : name{name}, age{age}  {}
    b.. operator<(co.. Person &rhs) co.. {
        r_ this->age < rhs.age;
    }
    b.. operator__(co.. Person &rhs) co.. {
        r_ (this->name __ rhs.name && this->age __ rhs.age);
    }
};

st. ostream &operator__(st. ostream &os, co.. Person &p) {
    os __ p.name __ ":" __ p.age;
    r_ os;
}

// Use for_each and a lambda expression to display vector elements
v.. display2(co.. st. ve..<in.> &vec) {
    st. c.. __ "[ ";
    st. for_each(vec.begin(), vec.end(),
        [](in. x) { st. c.. __ x __ " ";});
    st. c.. __ "]" __ st. e..
}

// template function to display any vector
template <typename T>
v.. display(co.. st. ve..<T> &vec) {
    st. c.. __ "[ ";
    ___ (co.. a.. &elem: vec)
        st. c.. __ elem __ " ";
    st. c.. __  "]"__ st. e..
}


v.. test1
    st. c.. __ "\nTest1 =========================" __ st. e..

    st. ve..<in.> vec {1,2,3,4,5};
    display(vec);
    
    vec = {2,4,5,6};
    display2(vec);
    
    st. ve..<in.> vec1 (10, 100);    // ten 100s in the vector
    display(vec1);
}

v.. test2
    st. c.. __ "\nTest2 =========================" __ st. e..

    st. ve..<in.> vec {1,2,3,4,5};
    display(vec);
    st. c.. __ "\nvec size: " __ vec.s.. __ st. e..
    st. c.. __ "vec max size: " __ vec.max_size() __ st. e..
    st. c.. __ "vec capacity: " __ vec.capacity() __ st. e..
    
    vec.push_back(6);
    display(vec);
    st. c.. __ "\nvec size: " __ vec.s.. __ st. e..
    st. c.. __ "vec max size: " __ vec.max_size() __ st. e..
    st. c.. __ "vec capacity: " __ vec.capacity() __ st. e..
    
    vec.shrink_to_fit();    // C++11
    display(vec);
    st. c.. __ "\nvec size: " __ vec.s.. __ st. e..
    st. c.. __ "vec max size: " __ vec.max_size() __ st. e..
    st. c.. __ "vec capacity: " __ vec.capacity() __ st. e..
    
    vec.reserve(100);
    display(vec);
    st. c.. __ "\nvec size: " __ vec.s.. __ st. e..
    st. c.. __ "vec max size: " __ vec.max_size() __ st. e..
    st. c.. __ "vec capacity: " __ vec.capacity() __ st. e..
    
}
v.. test3
    st. c.. __ "\nTest3 =========================" __ st. e..

    st. ve..<in.> vec {1,2,3,4,5};
    display(vec);
    
    vec[0] = 100;
    vec.at(1) = 200;
    
    display(vec);
}

v.. test4
    st. c.. __ "\nTest4 =========================" __ st. e..
    st. ve..<Person> stooges;
    
    Person p1 {"Larry", 18};
    display(stooges);
    
    stooges.push_back(p1);
    display(stooges);
    
    stooges.push_back(Person{"Moe", 25});
    display(stooges);
    
    stooges.emplace_back("Curly", 30);      // Use emplace_back!!!
    display(stooges);
}

v.. test5
    st. c.. __ "\nTest5 =========================" __ st. e..

    st. ve..<Person> stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 30}
    };
    
    display(stooges);
    st. c.. __ "\nFront: " __ stooges.front() __ st. e..
    st. c.. __ "Back: " __ stooges.back() __ st. e..
    
    stooges.pop_back();
    display(stooges);
}

v.. test6
    st. c.. __ "\nTest6 =========================" __ st. e..
    st. ve..<in.> vec {1,2,3,4,5};
    display(vec);
    
    vec.clear();    // remove all elements
    display(vec);
    
    vec = {1,2,3,4,5,6,7,8,9,10};
    display(vec);
    vec.erase(vec.begin(), vec.begin() + 2);
    display(vec);
    
    vec = {1,2,3,4,5,6,7,8,9,10};
    // erase all even numbers
    a.. it = vec.begin();
    w__ (it != vec.end()) {
        __ (*it %2 __ 0)
            vec.erase(it);  
        ____
            it++;   // only increment if not erased!
    }
    display(vec);
}

v.. test7
    st. c.. __ "\nTest7 =========================" __ st. e..
    
    st. ve..<in.> vec1 {1,2,3,4,5};
    st. ve..<in.> vec2 {10,20,30,40,50};
    
    display(vec1);
    display(vec2);
    st. c.. __ st. e..

    vec2.swap(vec1);
    display(vec1);
    display(vec2);
}

v.. test8
    st. c.. __ "\nTest8  =========================" __ st. e..

    st. ve..<in.> vec1 {1,21,3,40,12};
    
    display(vec1);
    st. sort(vec1.begin(), vec1.end());
    display(vec1);
}

v.. test9
    // std::back_inserter contructs a back-insert iterator that inserts new elements 
    // at the end of the container it applied to. It's a special output iterator
    // It's awesome!!!!   and  very efficient
    // There is also a front_inserter we can use with deques and lists
    // Copy one list to another using an iterator and back_inserter
    
    st. c.. __ "\nTest9  =========================" __ st. e..
    
    st. ve..<in.> vec1 {1,2,3,4,5};
    st. ve..<in.> vec2 {10,20};
    
    display(vec1); 
    display(vec2);
    st. c.. __ st. e..

    st. copy(vec1.begin(), vec1.end(), st. back_inserter(vec2));
    display(vec1);
    display(vec2);
    st. c.. __ st. e..

    
    // Copy_if the element is even
    
    vec1 = {1,2,3,4,5,6,7,8,9,10};
    vec2 = {10,20};
    
    display(vec1);
    display(vec2);
    st. c.. __ st. e..
    
    st. copy_if(vec1.begin(), vec1.end(), st. back_inserter(vec2),
            [](in. x) { r_ x%2 __ 0; });
    display(vec1);
    display(vec2);
    
    
}

v.. test10
    st. c.. __ "\nTest10  =========================" __ st. e..
    // transform over 2 ranges
    
    st. ve..<in.> vec1 {1,2,3,4,5};
    st. ve..<in.> vec2 {10,20,30,40,50};
    st. ve..<in.> vec3;
    
    
    // 1*10, 2*20, 3*30, 4*40, 5*50 and store the results in vec3
    st. transform(vec1.begin(), vec1.end(), vec2.begin(),
        st. back_inserter(vec3),
        [](in. x, in. y) { r_ x * y;});
        
    display(vec3);
    
}



// Insertion from another vector
// Insert vec2 into vec1 before the 5
v.. test11
    st. c.. __ "\nTest11  =========================" __ st. e..
    st. ve..<in.> vec1 {1,2,3,4,5,6,7,8,9,10};
    st. ve..<in.> vec2 {100,200,300,400};
    
    display(vec1);
    display(vec2);
    st. c.. __ st. e..

    
    a.. it = st. find(vec1.begin(), vec1.end(), 5);
    __ (it != vec1.end()) {
        st. c.. __ "inserting..." __ st. e..
        vec1.insert(it, vec2.begin(), vec2.end());
    } ____ {
        st. c.. __ "Sorry, 5 not found" __ st. e..
    }
    display(vec1);
}

in. main()  {

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    test11();
    
    r_ 0;
}