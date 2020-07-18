// Section 20
// Algorithms
? ios..
? ve..
? <list>
? <algorithm>
? cct..

c_ Person {
    st. st..  name;
    in. age;
pu..
    Person() = default;
    Person(st. st..  name, in. age)
        : name{name}, age{age}  {}
    b.. operator<(co.. Person &rhs) co.. {
        r_ this->age < rhs.age;
    }
    b.. operator__(co.. Person &rhs) co.. {
        r_ (this->name __ rhs.name && this->age __ rhs.age);
    }
};

// Find an element in a container
v.. find_test
    st. c.. __ "\n========================" __ st. e..

    st. ve..<in.> vec {1,2,3,4,5};
    
    a.. loc = st. find(st. begin(vec), st. end(vec), 1);
    
    __ (loc != st. end(vec))
        st. c.. __ "Found the number: " __ *loc __  st. e..
    ____
        st. c.. __ "Couldn't find the number" __ st. e..
        
    st. list<Person> players {
        {"Larry", 18},
        {"Moe", 20},
        {"Curly", 21}
    };
    
    a.. loc1 = st. find(players.begin(), players.end(), Person{"Moe", 20});
    __ (loc1 != players.end())
        st. c.. __ "Found  Moe" __ st. e..
    ____
        st. c.. __ "Moe not found" __ st. e..
}

// Count the number of elements in a container
v.. count_test
    st. c.. __ "\n========================" __ st. e..

     st. ve..<in.> vec {1,2,3,4,5,1,2,1};
     
     in. num = st. count(vec.begin(), vec.end(), 1);
     st. c.. __ num __ " occurrences found" __ st. e..
}

// Count the number of occurences of an element in a container
// based on a predicate using a lambda expression

v.. count_if_test
    st. c.. __ "\n========================" __ st. e..

    // count only if the element is even
    st. ve..<in.> vec {1,2,3,4,5,1,2,1,100};
    in. num = st. count_if(vec.begin(), vec.end(), [](in. x) { r_ x %2 __ 0; });
    st. c.. __ num __ " even numbers found" __ st. e..
    
    num = st. count_if(vec.begin(), vec.end(), [](in. x) { r_ x %2 != 0; });
    st. c.. __ num __ " odd numbers found" __ st. e..
    
    // how can we determine how many elements in vec are >= 5?
    num = st. count_if(vec.begin(), vec.end(), [](in. x) { r_ x>=5;   });
    st. c.. __ num __ "  numbers are >= 5" __ st. e..

}

// Replace occurrences of elements in a container
v.. replace_test
    st. c.. __ "\n========================" __ st. e..

     st. ve..<in.> vec {1,2,3,4,5,1,2,1};
     ___ (a.. i: vec) {
         st. c.. __ i __ " ";
     }
     st. c.. __ st. e..
     
    st. replace(vec.begin(), vec.end(), 1, 100);
    ___ (a.. i: vec) {
         st. c.. __ i __ " ";
     }
    st. c.. __ st. e..
}

v.. all_of_test
    st. ve..<in.> vec1 {1,3,5,7,9,1,3,13,19,5};
    __ (st. all_of(vec1.begin(), vec1.end(), [](in. x) { r_ x > 10; }))
        st. c.. __ "All the elements are > 10" __ st. e..
    ____
        st. c.. __ "Not all the elements are > 10" __ st. e..
    
    __ (st. all_of(vec1.begin(), vec1.end(), [](in. x) { r_ x < 20; }))
        st. c.. __ "All the elements are < 20" __ st. e..
    ____
        st. c.. __ "Not all the elements are < 20" __ st. e..
}

// Transform elements in a container - string in this example
v.. string_transform_test
    st. c.. __ "\n========================" __ st. e..

    st. st..  str1 {"This is a test"};
    st. c.. __ "Before transform: " __ str1 __ st. e..
    st. transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    st. c.. __ "After transform: " __ str1 __ st. e..
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

