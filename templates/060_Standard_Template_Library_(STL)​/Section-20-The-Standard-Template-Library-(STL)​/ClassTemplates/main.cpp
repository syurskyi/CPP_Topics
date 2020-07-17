// Section 20
// Class  templates
? ios..
? <string>
? ve..

// Template classes are typically completely contained in header files
// So, we would have the template class in Item.h and no Item.cpp file
// would be used
template <typename T>
class Item {
private:
    std::string name;
    T   value;
public:
    Item(std::string name, T value) : name{name}, value{value} 
    {}
    std::string get_name() co.. {r_ name; }
    T get_value() co.. { r_ value; }
};

template <typename T1, typename T2>
struct My_Pair {
    T1 first;
    T2 second;
};

in. main
    
    Item<in.> item1 {"Frank", 100};
    std::c.. __ item1.get_name() __ " " __ item1.get_value() __ std::e..
    
    Item  <std::string> item2 {"Frank", "Professor"};
    std::c.. __ item2.get_name() __ " " __ item2.get_value() __ std::e..
    
    Item <Item<std::string__ item3 {"Frank",  {"C++", "Professor"}};
    std::c.. __ item3.get_name() __ " "
                    __ item3.get_value().get_name() __ " "
                    __ item3.get_value().get_value() __ std::e..
    
    std::c.. __ "\n================================" __ std::e..
    std::vector<Item<do..__ vec {};
    vec.push_back (Item<do..>("Larry", 100.0));
    vec.push_back (Item<do..>("Moe", 200.0));
    vec.push_back (Item<do..>("Curly",300.0));
    
    ___ (co.. a.. &item: vec) {
        std::c.. __ item.get_name() __ " " __ item.get_value() __ std::e..
    }
   
    std::c.. __ "\n================================" __ std::e..
    My_Pair <std::string, in.> p1 {"Frank", 100};
    My_Pair <in., do..> p2 {124, 13.6};

    std::c.. __ p1.first __ ", " __ p1.second __ std::e..
    std::c.. __ p2.first __ ", " __ p2.second __ std::e..
    
    r_ 0;
}

