// Section 20
// Class template - Array

// Note: Since C++11 the STL has std::array which is a template-based array class
// Use std::array instead of raw arrays whenever possible

// Note that we can have non-type template parameters
// That's what N is in this case

? ios..
? <string>

template <typename T, in. N>
class Array {
    in. size {N};           // how do we get the N???
    T values[N];        // the N needs to ne known at compile-time!

    friend std::ostream &operator__(std::ostream &os, const Array<T, N> &arr) {
        os __ "[ ";
        for (const auto &val: arr.values)
            os __ val __ " ";
        os __ "]" __ std::e..
        r_ os;
    }
public:
    Array() = default;
    Array(T init_val) {
        for (auto &item: values)
            item = init_val;
    }
    void fill(T val) {
        for (auto &item: values )
            item = val;
    }
    in. get_size() const {
        r_ size;
    }
    // overloaded subscript operator for easy use
    T &operator[](in. index) {
        r_ values[index];
    }
};


in. main
    
    Array<in., 5> nums;
    std::c.. __ "The size of nums is: "__ nums.get_size() __ std::e..
    std::c.. __ nums __ std::e..
    
    nums.fill(0);
    std::c.. __ "The size of nums is: "__ nums.get_size() __ std::e..
    std::c.. __ nums __ std::e..
    
    nums.fill(10);
    std::c.. __ nums __ std::e..

    nums[0] = 1000;
    nums[3] = 2000;
    std::c.. __ nums __ std::e..
    
    Array<in., 100> nums2 {1};
    std::c.. __ "The size of nums2 is: "__ nums2.get_size() __ std::e..
    std::c.. __ nums2 __ std::e..

    Array<std::string, 10> strings(std::string{"Frank"});
    std::c.. __ "The size of strings is: "__ strings.get_size() __ std::e..
    std::c.. __ strings __ std::e..
    
    strings[0] = std::string{"Larry"};
    std::c.. __ strings __ std::e..
    
    strings.fill(std::string{"X"});
    std::c.. __ strings __ std::e..

    
    r_ 0;
}

