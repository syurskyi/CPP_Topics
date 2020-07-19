// Section 20
// Class  templates
? ios..
? st..
? ve..

// Template classes are typically completely contained in header files
// So, we would have the template class in Item.h and no Item.cpp file
// would be used
template <typename T>
c_ Item {
pr..
    st. st..  name;
    T   value;
pu..
    Item(st. st..  name, T value) : name{name}, value{value}
    {}
    st. st..  get_name() co.. {r_ name; }
    T get_value() co.. { r_ value; }
};

template <typename T1, typename T2>
st.. My_Pair {
    T1 first;
    T2 second;
};

in. main
    
    Item<in.> item1 {"Frank", 100};
    st. c.. __ item1.get_name() __ " " __ item1.get_value() __ st. e..
    
    Item  <st. st.. > item2 {"Frank", "Professor"};
    st. c.. __ item2.get_name() __ " " __ item2.get_value() __ st. e..
    
    Item <Item<st. string__ item3 {"Frank",  {"C++", "Professor"}};
    st. c.. __ item3.get_name() __ " "
                    __ item3.get_value().get_name() __ " "
                    __ item3.get_value().get_value() __ st. e..
    
    st. c.. __ "\n================================" __ st. e..
    st. ve..<Item<do..__ vec {};
    vec.push_back (Item<do..>("Larry", 100.0));
    vec.push_back (Item<do..>("Moe", 200.0));
    vec.push_back (Item<do..>("Curly",300.0));
    
    ___ (co.. a.. &item: vec) {
        st. c.. __ item.get_name() __ " " __ item.get_value() __ st. e..
    }
   
    st. c.. __ "\n================================" __ st. e..
    My_Pair <st. st.. , in.> p1 {"Frank", 100};
    My_Pair <in., do..> p2 {124, 13.6};

    st. c.. __ p1.first __ ", " __ p1.second __ st. e..
    st. c.. __ p2.first __ ", " __ p2.second __ st. e..
    
    r_ 0;
}

