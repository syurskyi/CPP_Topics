// Section 20
// Vector

? ios..
? ve..
? <algorithm>

c_ Person {
    friend std::ostream &operator__(std::ostream &os, co.. Person &p);
    std::string name;
    in. age;
pu..
    Person() = default;
    Person(std::string name, in. age)
        : name{name}, age{age}  {}
    bool operator<(co.. Person &rhs) co.. {
        r_ this->age < rhs.age;
    }
    bool operator__(co.. Person &rhs) co.. {
        r_ (this->name __ rhs.name && this->age __ rhs.age);
    }
};

std::ostream &operator__(std::ostream &os, co.. Person &p) {
    os __ p.name __ ":" __ p.age;
    r_ os;
}

// Use for_each and a lambda expression to display vector elements
v.. display2(co.. std::ve..<in.> &vec) {
    std::c.. __ "[ ";
    std::for_each(vec.begin(), vec.end(),
        [](in. x) { std::c.. __ x __ " ";});
    std::c.. __ "]" __ std::e..
}

// template function to display any vector
template <typename T>
v.. display(co.. std::ve..<T> &vec) {
    std::c.. __ "[ ";
    ___ (co.. a.. &elem: vec)
        std::c.. __ elem __ " ";
    std::c.. __  "]"__ std::e..
}


v.. test1
    std::c.. __ "\nTest1 =========================" __ std::e..

    std::ve..<in.> vec {1,2,3,4,5};
    display(vec);
    
    vec = {2,4,5,6};
    display2(vec);
    
    std::ve..<in.> vec1 (10, 100);    // ten 100s in the vector
    display(vec1);
}

v.. test2
    std::c.. __ "\nTest2 =========================" __ std::e..

    std::ve..<in.> vec {1,2,3,4,5};
    display(vec);
    std::c.. __ "\nvec size: " __ vec.s.. __ std::e..
    std::c.. __ "vec max size: " __ vec.max_size() __ std::e..
    std::c.. __ "vec capacity: " __ vec.capacity() __ std::e..
    
    vec.push_back(6);
    display(vec);
    std::c.. __ "\nvec size: " __ vec.s.. __ std::e..
    std::c.. __ "vec max size: " __ vec.max_size() __ std::e..
    std::c.. __ "vec capacity: " __ vec.capacity() __ std::e..
    
    vec.shrink_to_fit();    // C++11
    display(vec);
    std::c.. __ "\nvec size: " __ vec.s.. __ std::e..
    std::c.. __ "vec max size: " __ vec.max_size() __ std::e..
    std::c.. __ "vec capacity: " __ vec.capacity() __ std::e..
    
    vec.reserve(100);
    display(vec);
    std::c.. __ "\nvec size: " __ vec.s.. __ std::e..
    std::c.. __ "vec max size: " __ vec.max_size() __ std::e..
    std::c.. __ "vec capacity: " __ vec.capacity() __ std::e..
    
}
v.. test3
    std::c.. __ "\nTest3 =========================" __ std::e..

    std::ve..<in.> vec {1,2,3,4,5};
    display(vec);
    
    vec[0] = 100;
    vec.at(1) = 200;
    
    display(vec);
}

v.. test4
    std::c.. __ "\nTest4 =========================" __ std::e..
    std::ve..<Person> stooges;
    
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
    std::c.. __ "\nTest5 =========================" __ std::e..

    std::ve..<Person> stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 30}
    };
    
    display(stooges);
    std::c.. __ "\nFront: " __ stooges.front() __ std::e..
    std::c.. __ "Back: " __ stooges.back() __ std::e..
    
    stooges.pop_back();
    display(stooges);
}

v.. test6
    std::c.. __ "\nTest6 =========================" __ std::e..
    std::ve..<in.> vec {1,2,3,4,5};
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
    std::c.. __ "\nTest7 =========================" __ std::e..
    
    std::ve..<in.> vec1 {1,2,3,4,5};
    std::ve..<in.> vec2 {10,20,30,40,50};
    
    display(vec1);
    display(vec2);
    std::c.. __ std::e..

    vec2.swap(vec1);
    display(vec1);
    display(vec2);
}

v.. test8
    std::c.. __ "\nTest8  =========================" __ std::e..

    std::ve..<in.> vec1 {1,21,3,40,12};
    
    display(vec1);
    std::sort(vec1.begin(), vec1.end());
    display(vec1);
}

v.. test9
    // std::back_inserter contructs a back-insert iterator that inserts new elements 
    // at the end of the container it applied to. It's a special output iterator
    // It's awesome!!!!   and  very efficient
    // There is also a front_inserter we can use with deques and lists
    // Copy one list to another using an iterator and back_inserter
    
    std::c.. __ "\nTest9  =========================" __ std::e..
    
    std::ve..<in.> vec1 {1,2,3,4,5};
    std::ve..<in.> vec2 {10,20};
    
    display(vec1); 
    display(vec2);
    std::c.. __ std::e..

    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2));
    display(vec1);
    display(vec2);
    std::c.. __ std::e..

    
    // Copy_if the element is even
    
    vec1 = {1,2,3,4,5,6,7,8,9,10};
    vec2 = {10,20};
    
    display(vec1);
    display(vec2);
    std::c.. __ std::e..
    
    std::copy_if(vec1.begin(), vec1.end(), std::back_inserter(vec2),
            [](in. x) { r_ x%2 __ 0; });
    display(vec1);
    display(vec2);
    
    
}

v.. test10
    std::c.. __ "\nTest10  =========================" __ std::e..
    // transform over 2 ranges
    
    std::ve..<in.> vec1 {1,2,3,4,5};
    std::ve..<in.> vec2 {10,20,30,40,50};
    std::ve..<in.> vec3;
    
    
    // 1*10, 2*20, 3*30, 4*40, 5*50 and store the results in vec3
    std::transform(vec1.begin(), vec1.end(), vec2.begin(),
        std::back_inserter(vec3),
        [](in. x, in. y) { r_ x * y;});
        
    display(vec3);
    
}



// Insertion from another vector
// Insert vec2 into vec1 before the 5
v.. test11
    std::c.. __ "\nTest11  =========================" __ std::e..
    std::ve..<in.> vec1 {1,2,3,4,5,6,7,8,9,10};
    std::ve..<in.> vec2 {100,200,300,400};
    
    display(vec1);
    display(vec2);
    std::c.. __ std::e..

    
    a.. it = std::find(vec1.begin(), vec1.end(), 5);
    __ (it != vec1.end()) {
        std::c.. __ "inserting..." __ std::e..
        vec1.insert(it, vec2.begin(), vec2.end());
    } ____ {
        std::c.. __ "Sorry, 5 not found" __ std::e..
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