// Section 20
// std::array
? ios..
? <array>
? <algorithm>
? <numeric>  // for more algorithms like accumulate

// Display the array -- note the size MUST be included
// when passing a std::array to a function
v.. display(co.. st. array<in., 5> &arr) {
    st. c.. __ "[ ";
    ___ (co.. a.. &i: arr)
        st. c.. __ i __ " ";
    st. c.. __  "]"__ st. e..
}

v.. test1
    st. c.. __ "\nTest1 =========================" __ st. e..
    st. array<in., 5> arr1 {1,2,3,4,5};     // double {{ }} if C++ 11
    st. array<in., 5> arr2;
    
    display(arr1);
    display(arr2);          // Elements are not initialized (contain 'garbage')
        
    arr2  = {10,20,30,40,50};

    display(arr1);
    display(arr2);
    
    st. c.. __ "Size of arr1 is: " __ arr1.s.. __ st. e..       //5
    st. c.. __ "Size of arr2 is: " __ arr2.s.. __ st. e..       //5
    
    arr1[0] = 1000;
    arr1.at(1) = 2000;
    display(arr1);

    st. c.. __ "Front of arr2: " __ arr2.front() __ st. e..        // 10
    st. c.. __ "Back of arr2: " __ arr2.back() __ st. e..          // 50
}
 
v.. test2
    st. c.. __ "\nTest2 =========================" __ st. e..
    st. array<in., 5> arr1 {1,2,3,4,5};     // double {{ }} is C++ 11
    st. array<in., 5> arr2 {10,20,30,40,50};
    
    display(arr1);
    display(arr2);
    
    arr1.fill(0);
    
    display(arr1);
    display(arr2);
    
    arr1.swap(arr2);
    
    display(arr1);
    display(arr2);
}

v.. test3
    st. c.. __ "\nTest3 =========================" __ st. e..

    st. array<in., 5> arr1 {1,2,3,4,5};     // double {{ }} is C++ 11

    in. *ptr = arr1.data();
    st. c.. __ ptr __ st. e..
    *ptr = 10000;
    
    display(arr1);
}

v.. test4
    st. c.. __ "\nTest4 =========================" __ st. e..

    st. array<in., 5> arr1 {2,1,4,5,3};     // double {{ }} is C++ 11
    display(arr1);
    
    st. sort(arr1.begin(), arr1.end());
    display(arr1);
}

v.. test5
    st. c.. __ "\nTest5 =========================" __ st. e..

    st. array<in., 5> arr1 {2,1,4,5,3};     // double {{ }} is C++ 11

    st. array<in.,5>::iterator min_num = st. min_element(arr1.begin(), arr1.end());
    a.. max_num = st. max_element(arr1.begin(), arr1.end());
    st. c.. __ "min: " __ *min_num __ " , max: " __ *max_num __ st. e..
}

v.. test6
    st. c.. __ "\nTest6 =========================" __ st. e..

    st. array<in., 5> arr1 {2,1,3,3,5};     // double {{ }} is C++ 11

    a.. adjacent = st. adjacent_find(arr1.begin(), arr1.end());
    __ (adjacent != arr1.end())
        st. c.. __ "Adjacent element found with value: " __ *adjacent __ st. e..
    ____
        st. c.. __ "No adjacent elements found" __ st. e..
}

v.. test7
    st. c.. __ "\nTest7 =========================" __ st. e..

       //accumulate is from ? <numeric>
    st. array<in., 5> arr1 {1,2,3,4,5};     // double {{ }} is C++ 11

    in. sum = st. accumulate(arr1.begin(), arr1.end(), 0);
    st. c.. __ "Sum of the elements in arr1 is: " __ sum __ st. e..
}

v.. test8
    st. c.. __ "\nTest8 =========================" __ st. e..
    st. array<in., 10> arr1 {1,2,3,1,2,3,3,3,3,3};
    
    in. count = st. count(arr1.begin(), arr1.end(), 3);
    st. c.. __ "Found 3 : " __ count __ " times" __ st. e..
}

v.. test9
    st. c.. __ "\nTest9 =========================" __ st. e..
    st. array<in., 10> arr1 {1, 2, 3, 50, 60, 70, 80, 200, 300 ,400};
    // find how many numbers are between 10 and 200 ->  50,60,70,80
    
    in. count = st. count_if(arr1.begin(), arr1.end(),
                                            [](in. x) { r_ x>10 && x<200; });
                                            
    st. c.. __ "Found  " __ count __ " matches" __ st. e..
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

