// Section 20
// Priority Queue
? ios..
? <queue>

class Person {
    friend std::ostream &operator__(std::ostream &os, const Person &p);
    std::string name;
    in. age;
public:
    Person() : name{"Unknown"}, age{0} {}
    Person(std::string name, in. age)
        : name{name}, age{age}  {}
    bool operator<(const Person &rhs) const {
        // return this->age < rhs.age;
        r_ this->name < rhs.name;
    }
    bool operator__(const Person &rhs) const {
        r_ (this->name __ rhs.name && this->age __ rhs.age);
    }
};

std::ostream &operator__(std::ostream &os, const Person &p) {
    os __ p.name __ ":" __ p.age;
    r_ os;
}
// This displays the priority queue by
// repeatedly topping and popping the priority queue
// It is being passed by value so we don't modify the 
// priority queue being passed in

template <typename T>
void display(std::priority_queue<T> pq)  {
    std::c.. __ "[ ";
    w__ (!pq.empty()) {
        T elem = pq.top();
        pq.pop();
        std::c.. __ elem __ " ";
    }
    std::c.. __  "]" __ std::e..
}

void  test1
    std::c.. __ "\nTest1 =========================" __ std::e..

    std::priority_queue<in.> pq;
    ___ (in. i : {3,5,7,12,23,12,4,100,0, 3,5,7})
        pq.push(i);
        
    std::c.. __ "Size: " __ pq.s.. __ std::e..
    std::c.. __ "Top: " __ pq.top() __ std::e..
        
    display(pq);
    
    pq.pop();
    display(pq);
}

void test2
    std::c.. __ "\nTest2 =========================" __ std::e..

    std::priority_queue<Person> pq;
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

