// Section 20
// Set
? ios..
? <set>

c_ Person {
    fr.. st. ostream &operator__(st. ostream &os, co.. Person &p);
    st. st..  name;
    in. age;
pu..
    Person() : name{"Unknown"}, age{0} {}
    Person(st. st..  name, in. age)
        : name{name}, age{age}  {}
    b.. op..<(co.. Person &rhs) co.. {
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

t.. <t_n_ T>
v.. display(co.. st. set<T> &l) {
    st. c.. __ "[ ";
    ___ (co.. a.. &elem: l) {
        st. c.. __ elem __ " ";
    }
    st. c.. __ "]" __ st. e..
}

v.. test1
    // Sets
    st. c.. __ "\nTest1 =========================" __ st. e..
    st. set<in.> s1 {1, 4, 3, 5, 2};
    display(s1);
    
    s1 = {1,2,3,1,1,2,2,3,3,4,5};
    display(s1);
    
    s1.insert(0);
    s1.insert(10);
    
    display(s1);
    
    __ (s1.count(10))
        st. c.. __ "10 is in the set" __ st. e..
    ____
        st. c.. __ "10 is NOT in the set" __ st. e..

    a.. it = s1.find(5);
    __ (it != s1.end())
        st. c.. __ "Found: " __ *it __ st. e..
        
    s1.clear();
    
    display(s1);
}

v.. test2
    st. c.. __ "\nTest2 =========================" __ st. e..
    st. set<Person> stooges {
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
    st. c.. __ "\nTest3 =========================" __ st. e..
    
    st. set<st. st.. > s {"A", "B", "C"};
    display(s);
    
    a.. result = s.insert("D");
    display(s);
    
    st. c.. __ st. boolalpha;
    st. c.. __ "first: " __  *(result.first)__ st. e..
    st. c..  __ "second: " __ result.second __ st. e..
    
    st. c.. __ st. e..

    result = s.insert("A");
    display(s);
    
    st. c.. __ st. boolalpha;
    st. c.. __ "first: " __  *(result.first)__ st. e..
    st. c..  __ "second: " __ result.second __ st. e..
}

in. main
    test1();
    test2();
    test3();
    r_ 0;
}

