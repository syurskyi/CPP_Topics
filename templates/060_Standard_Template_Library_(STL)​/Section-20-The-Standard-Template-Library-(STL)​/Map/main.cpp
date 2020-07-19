// Section 20
// Map

? ios..
? <map>
? <set>


v.. display(co.. st. map<st. st.. , st. set<in.__ &m) {
    st. c.. __ "[ ";
    ___ (co.. a.. &elem: m) {
        st. c.. __ elem.first __ ": [ " ;
            ___ (co.. a.. &set_elem : elem.second)
                 st. c.. __ set_elem __  " ";
            st. c.. __ "] " ;
    }
    st. c.. __ "]  " __ st. e..
}

t.. <t_n_ T1, t_n_ T2>
v.. display(co.. st. map<T1, T2> &l) {
    st. c.. __ "[ ";
    ___ (co.. a.. &elem: l) {
        st. c.. __ elem.first __ ":" __ elem.second __ " ";
    }
    st. c.. __ "]  " __ st. e..
}

v.. test1
    // Maps
    st. c.. __ "\nTest1 =========================" __ st. e..
    st. map<st. st.. , in.> m {
        {"Larry", 3},
        {"Moe", 1},
        {"Curly", 2}
    };
    display(m);      
    
    m.insert( st. pair<st. st.. , in.>("Anna", 10));
    display(m);
    
    m.insert(st. make_pair("Joe", 5));
    display(m);
    
    m["Frank"] = 18;
    display(m);
    
    m["Frank"] += 10;               
    display(m);
    
    m.erase("Frank");
    display(m);
    
    st. c.. __ "Count for Joe: " __ m.count("Joe") __ st. e..
    st. c.. __ "Count for Frank: " __ m.count("Frank") __ st. e..
    
    a.. it = m.find("Larry");
    __ (it != m.end())
        st. c.. __ "Found: " __ it->first __ " : " __ it->second __ st. e..
        
    m.clear();
    
    display(m);

}

v.. test2
    st. c.. __ "\nTest2 =========================" __ st. e..
    
    st. map<st. st.. , st. set<in.__ grades  {
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

