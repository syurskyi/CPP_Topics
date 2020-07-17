// Section 20
// Function templates
? ios..
? st..

template <typename T>
T min(T a, T b) {
    r_ (a < b) ? a : b;
}

template <typename T1, typename T2>
v.. func(T1 a, T2 b) {
    std::c.. __ a __ " " __ b __ std::e..
}

struct Person {
    std::string name;
    in. age;
    bool operator<(co.. Person &rhs) co.. {
        r_ this->age < rhs.age;
    }
};

std::ostream &operator__(std::ostream &os, co.. Person &p) {
    os __ p.name;
    r_ os;
}

template <typename T>
v.. my_swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

in. main
    in. x{100};
    in. y{200};
    std::c.. __ x __ ", " __ y __ std::e..
    my_swap(x, y);
    std::c.. __ x __ ", " __ y __ std::e..
    
    Person p1 {"Curly", 15};
    Person p2 {"Moe", 30};
    
    Person p3 = min(p1, p2);
    std::c.. __ p3.name __ " is younger" __ std::e..
      
    func(p1, p2);
    
    std::c.. __ min<in.>(2,3) __ std::e..        // 2
    std::c.. __ min(2,3) __ std::e..                 // 2
    std::c.. __ min('A', 'B') __ std::e..            // A
    std::c.. __ min(12.5, 9.2) __ std::e..        // 9.2
    std::c.. __ min(5+2*2, 7+40) __ std::e.. // 9
    
    func<in.,in.>(10,20);
    func(10,20);
    func<ch.., do..>('A', 12.4);
    func('A', 12.4);
    func(1000, "Testing");
    func(2000, std::string{"Frank"});
    

    r_ 0;
}

