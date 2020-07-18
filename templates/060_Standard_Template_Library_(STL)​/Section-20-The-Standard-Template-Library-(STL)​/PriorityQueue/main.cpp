// Section 20
// Priority Queue
? ios..
? <queue>

c_ Person {
    fr.. st. ostream &operator__(st. ostream &os, co.. Person &p);
    st. st..  name;
    in. age;
pu..
    Person() : name{"Unknown"}, age{0} {}
    Person(st. st..  name, in. age)
        : name{name}, age{age}  {}
    b.. operator<(co.. Person &rhs) co.. {
        // return this->age < rhs.age;
        r_ this->name < rhs.name;
    }
    b.. operator__(co.. Person &rhs) co.. {
        r_ (this->name __ rhs.name && this->age __ rhs.age);
    }
};

st. ostream &operator__(st. ostream &os, co.. Person &p) {
    os __ p.name __ ":" __ p.age;
    r_ os;
}
// This displays the priority queue by
// repeatedly topping and popping the priority queue
// It is being passed by value so we don't modify the 
// priority queue being passed in

template <typename T>
v.. display(st. priority_queue<T> pq)  {
    st. c.. __ "[ ";
    w__ (!pq.empty()) {
        T elem = pq.top();
        pq.pop();
        st. c.. __ elem __ " ";
    }
    st. c.. __  "]" __ st. e..
}

v..  test1
    st. c.. __ "\nTest1 =========================" __ st. e..

    st. priority_queue<in.> pq;
    ___ (in. i : {3,5,7,12,23,12,4,100,0, 3,5,7})
        pq.push(i);
        
    st. c.. __ "Size: " __ pq.s.. __ st. e..
    st. c.. __ "Top: " __ pq.top() __ st. e..
        
    display(pq);
    
    pq.pop();
    display(pq);
}

v.. test2
    st. c.. __ "\nTest2 =========================" __ st. e..

    st. priority_queue<Person> pq;
    pq.push(Person{"A", 10});
    pq.push(Person{"B", 1});
    pq.push(Person{"C", 14});
    pq.push(Person{"D", 18});  
    pq.push(Person{"E", 7});  
    pq.push(Person{"F", 27});
    
    display(pq);
}

in. main
    test1();
    test2();
    r_ 0;
}

