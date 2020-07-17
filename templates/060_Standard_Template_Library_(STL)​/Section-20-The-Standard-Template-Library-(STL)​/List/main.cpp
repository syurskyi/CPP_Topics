// Section 20
// List
? ios..
? <list>
? <algorithm>
? <iterator> // for std::advance

c_ Person {
    friend st. ostream &operator__(st. ostream &os, co.. Person &p);
    st. st..  name;
    in. age;
pu..
    Person() : name{"Unknown"}, age{0} {}
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


template <typename T>
v.. display(co.. st. list<T> &l) {
    st. c.. __ "[ ";
    ___ (co.. a.. &elem: l) {
        st. c.. __ elem __ " ";
    }
    st. c.. __ "]" __ st. e..
}

v.. test1
    st. c.. __ "\nTest1 =========================" __ st. e..

    st. list<in.> l1 {1,2,3,4,5};
    display(l1);
    
    st. list<st. st.. > l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);
    
    st. list<in.> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);
    
    st. list<in.> l4 (10, 100);
    display(l4);
}

v.. test2
    st. c.. __ "\nTest2 =========================" __ st. e..

    st. list<in.> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    st. c.. __ "Size: " __ l.s.. __ st. e..
    
    st. c.. __ "Front : " __ l.front() __ st. e..
    st. c.. __ "Back  : " __ l.back() __ st. e..
    
    l.clear();
    display(l);
    st. c.. __ "Size: " __ l.s.. __ st. e..
}

v.. test3
    st. c.. __ "\nTest3 =========================" __ st. e..

    st. list<in.> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    
    l.resize(5);
    display(l);
    
    l.resize(10);
    display(l);
    
    st. list<Person> persons;
    persons.resize(5);             // uses the Person default constructor
    display(persons);
    
}
v.. test4
    st. c.. __ "\nTest4 =========================" __ st. e..

    st. list<in.> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    a.. it = st. find(l.begin(), l.end(), 5);
    __ (it != l.end()) {
        l.insert(it, 100);
    }
    display(l);
    
    st. list<in.> l2 {1000,2000,3000};
    l.insert(it, l2.begin(), l2.end());
    display(l);
    
    st. advance(it, -4);       // point to the 100
    st. c.. __ *it __ st. e..
    
    l.erase(it);                    // remove the 100 - iterator becomes invalid
    display(l);
    
}

v.. test5
    st. c.. __ "\nTest5 =========================" __ st. e..

    st. list<Person>  stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };
    
    display(stooges);
    st. st..  name;
    in. age{};
    st. c.. __ "\nEnter the name of the next stooge: ";
    getline(st. ci., name);
    st. c.. __ "Enter their age: ";
    st. ci. __ age;
    
    stooges.emplace_back(name, age);
    display(stooges);
    
    // Insert Frank before Moe
    a.. it = st. find(stooges.begin(), stooges.end(), Person{"Moe", 25});
    __ (it != stooges.end())
        stooges.emplace(it, "Frank", 18);
    display(stooges);    
}

v.. test6
    st. c.. __ "\nTest6 =========================" __ st. e..
    
    st. list<Person>  stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };
    
    display(stooges);
    stooges.sort();
    display(stooges);
}


in. main
    
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    st. c.. __ st. e..
    r_ 0;
}

