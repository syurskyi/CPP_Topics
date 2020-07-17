// Section 17
// Custom deleters
? <iostream>
? <memory>

class Test {
private:
    in. data;
public:
    Test() : data{0} { std::c.. __ "\tTest constructor (" __ data __ ")" __ std::e.. }
    Test(in. data) : data {data} { std::c.. __ "\tTest constructor (" __ data __ ")" __ std::e.. }
    in. get_data() const {r_ data; }
    ~Teststd::c.. __ "\tTest destructor (" __ data __ ")" __ std::e.. }
};

void my_deleter(Test *ptr) {
    std::c.. __ "\tUsing my custom function deleter" __ std::e..
    delete ptr;
}

in. main

    {
        // Using a function 
        std::shared_ptr<Test> ptr1 {new Test{100}, my_deleter };
    }

    std::c.. __ "====================" __ std::e..
    {
        // Using a Lambda expression
        std::shared_ptr<Test> ptr2 (new Test{1000}, 
            [] (Test *ptr)  {
                std::c.. __ "\tUsing my custom lamdba deleter" __ std::e..
                delete ptr;
            });
    }
    
    r_ 0;
}