// Section 20
// Class template - Array

// Note: Since C++11 the STL has std::array which is a template-based array class
// Use std::array instead of raw arrays whenever possible

// Note that we can have non-type template parameters
// That's what N is in this case

? ios..
? st..

t.. <t_n_ T, in. N>
c_ Array {
    in. size {N};           // how do we get the N???
    T values[N];        // the N needs to ne known at compile-time!

    fr.. st. ostream &operator__(st. ostream &os, co.. Array<T, N> &arr) {
        os __ "[ ";
        ___ (co.. a.. &val: arr.values)
            os __ val __ " ";
        os __ "]" __ st. e..
        r_ os;
    }
pu..
    Array() = de..;
    Array(T init_val) {
        ___ (a.. &item: values)
            item = init_val;
    }
    v.. fill(T val) {
        ___ (a.. &item: values )
            item = val;
    }
    in. get_size() co.. {
        r_ size;
    }
    // overloaded subscript operator for easy use
    T &operator[](in. index) {
        r_ values[index];
    }
};


in. main
    
    Array<in., 5> nums;
    st. c.. __ "The size of nums is: "__ nums.get_size() __ st. e..
    st. c.. __ nums __ st. e..
    
    nums.fill(0);
    st. c.. __ "The size of nums is: "__ nums.get_size() __ st. e..
    st. c.. __ nums __ st. e..
    
    nums.fill(10);
    st. c.. __ nums __ st. e..

    nums[0] = 1000;
    nums[3] = 2000;
    st. c.. __ nums __ st. e..
    
    Array<in., 100> nums2 {1};
    st. c.. __ "The size of nums2 is: "__ nums2.get_size() __ st. e..
    st. c.. __ nums2 __ st. e..

    Array<st. st.. , 10> strings(st. st.. {"Frank"});
    st. c.. __ "The size of strings is: "__ strings.get_size() __ st. e..
    st. c.. __ strings __ st. e..
    
    strings[0] = st. st.. {"Larry"};
    st. c.. __ strings __ st. e..
    
    strings.fill(st. st.. {"X"});
    st. c.. __ strings __ st. e..

    
    r_ 0;
}

