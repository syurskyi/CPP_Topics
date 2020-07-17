// Section 20
// List
? ios..
? <list>
? <algorithm>
? <iterator> // for std::advance

class Person {
    friend std::ostream &operator__(std::ostream &os, const Person &p);
    std::string name;
    in. age;
public:
    Person() : name{"Unknown"}, age{0} {}
    Person(std::string name, in. age)
        : name{name}, age{age}  {}
    bool operator<(const Person &rhs) const {
        r_ this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const {
        r_ (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator__(std::ostream &os, const Person &p) {
    os __ p.name __ ":" __ p.age;
    r_ os;
}


template <typename T>
void display(const std::list<T> &l) {
    std::c.. __ "[ ";
    for (const auto &elem: l) {
        std::c.. __ elem __ " ";
    }
    std::c.. __ "]" __ std::e..
}

void test1
    std::c.. __ "\nTest1 =========================" __ std::e..

    std::list<in.> l1 {1,2,3,4,5};
    display(l1);
    
    std::list<std::string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);
    
    std::list<in.> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);
    
    std::list<in.> l4 (10, 100);
    display(l4);
}

void test2
    std::c.. __ "\nTest2 =========================" __ std::e..

    std::list<in.> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    std::c.. __ "Size: " __ l.s.. __ std::e..
    
    std::c.. __ "Front : " __ l.front() __ std::e..
    std::c.. __ "Back  : " __ l.back() __ std::e..
    
    l.clear();
    display(l);
    std::c.. __ "Size: " __ l.s.. __ std::e..
}

void test3
    std::c.. __ "\nTest3 =========================" __ std::e..

    std::list<in.> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    
    l.resize(5);
    display(l);
    
    l.resize(10);
    display(l);
    
    std::list<Person> persons;
    persons.resize(5);             // uses the Person default constructor
    display(persons);
    
}
void test4
    std::c.. __ "\nTest4 =========================" __ std::e..

    std::list<in.> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    auto it = std::find(l.begin(), l.end(), 5);
    if (it != l.end()) {
        l.insert(it, 100);
    }
    display(l);
    
    std::list<in.> l2 {1000,2000,3000};
    l.insert(it, l2.begin(), l2.end());
    display(l);
    
    std::advance(it, -4);       // point to the 100
    std::c.. __ *it __ std::e..
    
    l.erase(it);                    // remove the 100 - iterator becomes invalid
    display(l);
    
}

void test5
    std::c.. __ "\nTest5 =========================" __ std::e..

    std::list<Person>  stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };
    
    display(stooges);
    std::string name;
    in. age{};
    std::c.. __ "\nEnter the name of the next stooge: ";
    getline(std::ci., name);
    std::c.. __ "Enter their age: ";
    std::ci. __ age;
    
    stooges.emplace_back(name, age);
    display(stooges);
    
    // Insert Frank before Moe
    auto it = std::find(stooges.begin(), stooges.end(), Person{"Moe", 25});
    if (it != stooges.end())
        stooges.emplace(it, "Frank", 18);
    display(stooges);    
}

void test6
    std::c.. __ "\nTest6 =========================" __ std::e..
    
    std::list<Person>  stooges {
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
    std::c.. __ std::e..
    r_ 0;
}

