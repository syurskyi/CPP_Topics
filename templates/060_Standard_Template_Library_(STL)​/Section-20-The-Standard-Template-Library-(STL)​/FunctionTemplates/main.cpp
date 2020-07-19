// Section 20
// Function templates
? ios..
? st..

t.. <t_n_ T>
T min(T a, T b) {
    r_ (a < b) ? a : b;
}

t.. <t_n_ T1, t_n_ T2>
v.. func(T1 a, T2 b) {
    st. c.. __ a __ " " __ b __ st. e..
}

st.. Person {
    st. st..  name;
    in. age;
    b.. operator<(co.. Person &rhs) co.. {
        r_ this->age < rhs.age;
    }
};

st. ostream &operator__(st. ostream &os, co.. Person &p) {
    os __ p.name;
    r_ os;
}

t.. <t_n_ T>
v.. my_swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

in. main
    in. x{100};
    in. y{200};
    st. c.. __ x __ ", " __ y __ st. e..
    my_swap(x, y);
    st. c.. __ x __ ", " __ y __ st. e..
    
    Person p1 {"Curly", 15};
    Person p2 {"Moe", 30};
    
    Person p3 = min(p1, p2);
    st. c.. __ p3.name __ " is younger" __ st. e..
      
    func(p1, p2);
    
    st. c.. __ min<in.>(2,3) __ st. e..        // 2
    st. c.. __ min(2,3) __ st. e..                 // 2
    st. c.. __ min('A', 'B') __ st. e..            // A
    st. c.. __ min(12.5, 9.2) __ st. e..        // 9.2
    st. c.. __ min(5+2*2, 7+40) __ st. e.. // 9
    
    func<in.,in.>(10,20);
    func(10,20);
    func<ch.., do..>('A', 12.4);
    func('A', 12.4);
    func(1000, "Testing");
    func(2000, st. st.. {"Frank"});
    

    r_ 0;
}

