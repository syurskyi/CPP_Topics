// Section 20
// Algorithms
? ios..
? ve..
? <list>
? <algorithm>
? <cctype>

class Person {
    std::string name;
    in. age;
public:
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

// Find an element in a container
v.. find_test
    std::c.. __ "\n========================" __ std::e..

    std::ve..<in.> vec {1,2,3,4,5};
    
    a.. loc = std::find(std::begin(vec), std::end(vec), 1);
    
    __ (loc != std::end(vec))
        std::c.. __ "Found the number: " __ *loc __  std::e..
    ____
        std::c.. __ "Couldn't find the number" __ std::e..
        
    std::list<Person> players {
        {"Larry", 18},
        {"Moe", 20},
        {"Curly", 21}
    };
    
    a.. loc1 = std::find(players.begin(), players.end(), Person{"Moe", 20});
    __ (loc1 != players.end())
        std::c.. __ "Found  Moe" __ std::e..
    ____
        std::c.. __ "Moe not found" __ std::e..
}

// Count the number of elements in a container
v.. count_test
    std::c.. __ "\n========================" __ std::e..

     std::ve..<in.> vec {1,2,3,4,5,1,2,1};
     
     in. num = std::count(vec.begin(), vec.end(), 1);
     std::c.. __ num __ " occurrences found" __ std::e..
}

// Count the number of occurences of an element in a container
// based on a predicate using a lambda expression

v.. count_if_test
    std::c.. __ "\n========================" __ std::e..

    // count only if the element is even
    std::ve..<in.> vec {1,2,3,4,5,1,2,1,100};
    in. num = std::count_if(vec.begin(), vec.end(), [](in. x) { r_ x %2 __ 0; });
    std::c.. __ num __ " even numbers found" __ std::e..
    
    num = std::count_if(vec.begin(), vec.end(), [](in. x) { r_ x %2 != 0; });
    std::c.. __ num __ " odd numbers found" __ std::e..
    
    // how can we determine how many elements in vec are >= 5?
    num = std::count_if(vec.begin(), vec.end(), [](in. x) { r_ x>=5;   });
    std::c.. __ num __ "  numbers are >= 5" __ std::e..

}

// Replace occurrences of elements in a container
v.. replace_test
    std::c.. __ "\n========================" __ std::e..

     std::ve..<in.> vec {1,2,3,4,5,1,2,1};
     ___ (a.. i: vec) {
         std::c.. __ i __ " ";
     }
     std::c.. __ std::e..
     
    std::replace(vec.begin(), vec.end(), 1, 100);
    ___ (a.. i: vec) {
         std::c.. __ i __ " ";
     }
    std::c.. __ std::e..
}

v.. all_of_test
    std::ve..<in.> vec1 {1,3,5,7,9,1,3,13,19,5};
    __ (std::all_of(vec1.begin(), vec1.end(), [](in. x) { r_ x > 10; }))
        std::c.. __ "All the elements are > 10" __ std::e..
    ____
        std::c.. __ "Not all the elements are > 10" __ std::e..
    
    __ (std::all_of(vec1.begin(), vec1.end(), [](in. x) { r_ x < 20; }))
        std::c.. __ "All the elements are < 20" __ std::e..
    ____
        std::c.. __ "Not all the elements are < 20" __ std::e..
}

// Transform elements in a container - string in this example
v.. string_transform_test
    std::c.. __ "\n========================" __ std::e..

    std::string str1 {"This is a test"};
    std::c.. __ "Before transform: " __ str1 __ std::e..
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    std::c.. __ "After transform: " __ str1 __ std::e..
}

in. main
    find_test();
//    count_test();
//    count_if_test();
//    replace_test();
//    all_of_test();
//    string_transform_test();

    r_ 0;
}

