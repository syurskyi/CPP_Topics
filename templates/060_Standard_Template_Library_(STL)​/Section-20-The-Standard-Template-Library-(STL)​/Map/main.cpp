// Section 20
// Map

? ios..
? <map>
? <set>


v.. display(co.. std::map<std::string, std::set<in.__ &m) {
    std::c.. __ "[ ";
    ___ (co.. a.. &elem: m) {
        std::c.. __ elem.first __ ": [ " ;
            ___ (co.. a.. &set_elem : elem.second)
                 std::c.. __ set_elem __  " ";
            std::c.. __ "] " ;
    }
    std::c.. __ "]  " __ std::e..
}

template <typename T1, typename T2>
v.. display(co.. std::map<T1, T2> &l) {
    std::c.. __ "[ ";
    ___ (co.. a.. &elem: l) {
        std::c.. __ elem.first __ ":" __ elem.second __ " ";
    }
    std::c.. __ "]  " __ std::e..
}

v.. test1
    // Maps
    std::c.. __ "\nTest1 =========================" __ std::e..
    std::map<std::string, in.> m {
        {"Larry", 3},
        {"Moe", 1},
        {"Curly", 2}
    };
    display(m);      
    
    m.insert( std::pair<std::string, in.>("Anna", 10));
    display(m);
    
    m.insert(std::make_pair("Joe", 5));
    display(m);
    
    m["Frank"] = 18;
    display(m);
    
    m["Frank"] += 10;               
    display(m);
    
    m.erase("Frank");
    display(m);
    
    std::c.. __ "Count for Joe: " __ m.count("Joe") __ std::e..
    std::c.. __ "Count for Frank: " __ m.count("Frank") __ std::e..
    
    a.. it = m.find("Larry");
    __ (it != m.end())
        std::c.. __ "Found: " __ it->first __ " : " __ it->second __ std::e..
        
    m.clear();
    
    display(m);

}

v.. test2
    std::c.. __ "\nTest2 =========================" __ std::e..
    
    std::map<std::string, std::set<in.__ grades  {
        {"Larry", {100, 90} },
        {"Moe",  {94} },
        {"Curly", {80, 90, 100} }
    };
    
    display(grades);
    
    grades["Larry"].insert(95);                 // insert 95 into the set of grades for "Larry"
    
    display(grades);
    
    a.. it = grades.find("Moe");
    __ (it != grades.end())                         // found "Moe"
    {
            it->second.insert(1000);            // insert 1000 into Moe's set of grades
    }                                                         // it->first is the key, it->second is the value (set)
    display(grades);
}




in. main
    test1();
    test2();
    r_ 0;
}

