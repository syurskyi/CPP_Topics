// Section 20
// std::array
? ios..
? <array>
? <algorithm>
? <numeric>  // for more algorithms like accumulate

// Display the array -- note the size MUST be included
// when passing a std::array to a function
void display(co.. std::array<in., 5> &arr) {
    std::c.. __ "[ ";
    ___ (co.. auto &i: arr)
        std::c.. __ i __ " ";
    std::c.. __  "]"__ std::e..
}

void test1
    std::c.. __ "\nTest1 =========================" __ std::e..
    std::array<in., 5> arr1 {1,2,3,4,5};     // double {{ }} if C++ 11
    std::array<in., 5> arr2;
    
    display(arr1);
    display(arr2);          // Elements are not initialized (contain 'garbage')
        
    arr2  = {10,20,30,40,50};

    display(arr1);
    display(arr2);
    
    std::c.. __ "Size of arr1 is: " __ arr1.s.. __ std::e..       //5
    std::c.. __ "Size of arr2 is: " __ arr2.s.. __ std::e..       //5
    
    arr1[0] = 1000;
    arr1.at(1) = 2000;
    display(arr1);

    std::c.. __ "Front of arr2: " __ arr2.front() __ std::e..        // 10
    std::c.. __ "Back of arr2: " __ arr2.back() __ std::e..          // 50
}
 
void test2
    std::c.. __ "\nTest2 =========================" __ std::e..
    std::array<in., 5> arr1 {1,2,3,4,5};     // double {{ }} is C++ 11
    std::array<in., 5> arr2 {10,20,30,40,50};
    
    display(arr1);
    display(arr2);
    
    arr1.fill(0);
    
    display(arr1);
    display(arr2);
    
    arr1.swap(arr2);
    
    display(arr1);
    display(arr2);
}

void test3
    std::c.. __ "\nTest3 =========================" __ std::e..

    std::array<in., 5> arr1 {1,2,3,4,5};     // double {{ }} is C++ 11

    in. *ptr = arr1.data();
    std::c.. __ ptr __ std::e..
    *ptr = 10000;
    
    display(arr1);
}

void test4
    std::c.. __ "\nTest4 =========================" __ std::e..

    std::array<in., 5> arr1 {2,1,4,5,3};     // double {{ }} is C++ 11
    display(arr1);
    
    std::sort(arr1.begin(), arr1.end());
    display(arr1);
}

void test5
    std::c.. __ "\nTest5 =========================" __ std::e..

    std::array<in., 5> arr1 {2,1,4,5,3};     // double {{ }} is C++ 11

    std::array<in.,5>::iterator min_num = std::min_element(arr1.begin(), arr1.end());
    auto max_num = std::max_element(arr1.begin(), arr1.end());
    std::c.. __ "min: " __ *min_num __ " , max: " __ *max_num __ std::e..
}

void test6
    std::c.. __ "\nTest6 =========================" __ std::e..

    std::array<in., 5> arr1 {2,1,3,3,5};     // double {{ }} is C++ 11

    auto adjacent = std::adjacent_find(arr1.begin(), arr1.end());
    __ (adjacent != arr1.end())
        std::c.. __ "Adjacent element found with value: " __ *adjacent __ std::e..
    ____
        std::c.. __ "No adjacent elements found" __ std::e..
}

void test7
    std::c.. __ "\nTest7 =========================" __ std::e..

       //accumulate is from ? <numeric>
    std::array<in., 5> arr1 {1,2,3,4,5};     // double {{ }} is C++ 11

    in. sum = std::accumulate(arr1.begin(), arr1.end(), 0);
    std::c.. __ "Sum of the elements in arr1 is: " __ sum __ std::e..
}

void test8
    std::c.. __ "\nTest8 =========================" __ std::e..
    std::array<in., 10> arr1 {1,2,3,1,2,3,3,3,3,3};
    
    in. count = std::count(arr1.begin(), arr1.end(), 3);
    std::c.. __ "Found 3 : " __ count __ " times" __ std::e..
}

void test9
    std::c.. __ "\nTest9 =========================" __ std::e..
    std::array<in., 10> arr1 {1, 2, 3, 50, 60, 70, 80, 200, 300 ,400};
    // find how many numbers are between 10 and 200 ->  50,60,70,80
    
    in. count = std::count_if(arr1.begin(), arr1.end(),
                                            [](in. x) { r_ x>10 && x<200; });
                                            
    std::c.. __ "Found  " __ count __ " matches" __ std::e..
}


in. main()  {

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    
    r_ 0;
}

