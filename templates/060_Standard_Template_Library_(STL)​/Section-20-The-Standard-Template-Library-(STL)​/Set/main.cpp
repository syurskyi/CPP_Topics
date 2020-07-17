// Section 20
// Set
? ios..
? <set>

c_ Person {
    friend std::ostream &operator__(std::ostream &os, co.. Person &p);
    std::string name;
    in. age;
pu..
    Person() : name{"Unknown"}, age{0} {}
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

template <typename T>
v.. display(co.. std::set<T> &l) {
    std::c.. __ "[ ";
    ___ (co.. a.. &elem: l) {
        std::c.. __ elem __ " ";
    }
    std::c.. __ "]" __ std::e..
}

v.. test1
    // Sets
    std::c.. __ "\nTest1 =========================" __ std::e..
    std::set<in.> s1 {1, 4, 3, 5, 2};
    display(s1);
    
    s1 = {1,2,3,1,1,2,2,3,3,4,5};
    display(s1);
    
    s1.insert(0);
    s1.insert(10);
    
    display(s1);
    
    __ (s1.count(10))
        std::c.. __ "10 is in the set" __ std::e..
    ____
        std::c.. __ "10 is NOT in the set" __ std::e..

    a.. it = s1.find(5);
    __ (it != s1.end())
        std::c.. __ "Found: " __ *it __ std::e..
        
    s1.clear();
    
    display(s1);
}

v.. test2
    std::c.. __ "\nTest2 =========================" __ std::e..
    std::set<Person> stooges {
        {"Larry", 1},
        {"Moe", 2},
        {"Curly", 3}
    };
    display(stooges);           // Note the order of display!  operator<

    stooges.emplace("James", 50);   
    display(stooges);

    stooges.emplace("Frank", 50); // NO -- 50 already exists
    display(stooges);
    
    a.. it = stooges.find(Person{"Moe", 2});
    __ (it != stooges.end())
        stooges.erase(it);
    
    display(stooges);
    
    it = stooges.find(Person("XXXX", 50));      // Will remove James!!!!
                                                                     // uses operator<
    __ (it != stooges.end())
        stooges.erase(it);
    display(stooges); 
}

v.. test3
    std::c.. __ "\nTest3 =========================" __ std::e..
    
    std::set<std::string> s {"A", "B", "C"};
    display(s);
    
    a.. result = s.insert("D");
    display(s);
    
    std::c.. __ std::boolalpha;
    std::c.. __ "first: " __  *(result.first)__ std::e..
    std::c..  __ "second: " __ result.second __ std::e..
    
    std::c.. __ std::e..

    result = s.insert("A");
    display(s);
    
    std::c.. __ std::boolalpha;
    std::c.. __ "first: " __  *(result.first)__ std::e..
    std::c..  __ "second: " __ result.second __ std::e..
}

in. main
    test1();
    test2();
    test3();
    r_ 0;
}

