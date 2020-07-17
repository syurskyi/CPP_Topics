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
    bool operator<(const Person &rhs) const {
        r_ this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const {
        r_ (this->name == rhs.name && this->age == rhs.age);
    }
};

// Find an element in a container
void find_test
    std::c.. __ "\n========================" __ std::e..

    std::vector<in.> vec {1,2,3,4,5};
    
    auto loc = std::find(std::begin(vec), std::end(vec), 1);
    
    if (loc != std::end(vec))
        std::c.. __ "Found the number: " __ *loc __  std::e..
    else 
        std::c.. __ "Couldn't find the number" __ std::e..
        
    std::list<Person> players {
        {"Larry", 18},
        {"Moe", 20},
        {"Curly", 21}
    };
    
    auto loc1 = std::find(players.begin(), players.end(), Person{"Moe", 20});
    if (loc1 != players.end())
        std::c.. __ "Found  Moe" __ std::e..
    else
        std::c.. __ "Moe not found" __ std::e..
}

// Count the number of elements in a container
void count_test
    std::c.. __ "\n========================" __ std::e..

     std::vector<in.> vec {1,2,3,4,5,1,2,1};
     
     in. num = std::count(vec.begin(), vec.end(), 1);
     std::c.. __ num __ " occurrences found" __ std::e..
}

// Count the number of occurences of an element in a container
// based on a predicate using a lambda expression

void count_if_test
    std::c.. __ "\n========================" __ std::e..

    // count only if the element is even
    std::vector<in.> vec {1,2,3,4,5,1,2,1,100};
    in. num = std::count_if(vec.begin(), vec.end(), [](in. x) { r_ x %2 == 0; });
    std::c.. __ num __ " even numbers found" __ std::e..
    
    num = std::count_if(vec.begin(), vec.end(), [](in. x) { r_ x %2 != 0; });
    std::c.. __ num __ " odd numbers found" __ std::e..
    
    // how can we determine how many elements in vec are >= 5?
    num = std::count_if(vec.begin(), vec.end(), [](in. x) { r_ x>=5;   });
    std::c.. __ num __ "  numbers are >= 5" __ std::e..

}

// Replace occurrences of elements in a container
void replace_test
    std::c.. __ "\n========================" __ std::e..

     std::vector<in.> vec {1,2,3,4,5,1,2,1};
     for (auto i: vec) {
         std::c.. __ i __ " ";
     }
     std::c.. __ std::e..
     
    std::replace(vec.begin(), vec.end(), 1, 100);
    for (auto i: vec) {
         std::c.. __ i __ " ";
     }
    std::c.. __ std::e..
}

void all_of_test
    std::vector<in.> vec1 {1,3,5,7,9,1,3,13,19,5};
    if (std::all_of(vec1.begin(), vec1.end(), [](in. x) { r_ x > 10; }))
        std::c.. __ "All the elements are > 10" __ std::e..
    else    
        std::c.. __ "Not all the elements are > 10" __ std::e..
    
    if (std::all_of(vec1.begin(), vec1.end(), [](in. x) { r_ x < 20; }))
        std::c.. __ "All the elements are < 20" __ std::e..
    else    
        std::c.. __ "Not all the elements are < 20" __ std::e..
}

// Transform elements in a container - string in this example
void string_transform_test
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

