// Section 12
// 012_Challenge - Solution

/* Write a C++ function named apply_all that expects two arrays of integers and their sizes and
  dynamically allocates a new array of integers whose size is the product of the 2 array sizes
  
  The function should loop through the second array and multiplies each element across each element of array 1 and store the
  product in the newly created array.
  
  The function should return a pointer to the newly allocated array.
  
  You can also write a print function that expects a pointer to an array of integers and its size and display the
  elements in the array.
    
  For example,
  
  Below is the output from the following code which would be in main:
  
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,5);
    
    cout << "Array 2: " ;
    print(array2,3);
    
    int *results = apply_all(array1, 5, array2, 3);
    cout << "Result: " ;
    print(results,15);
   
   Output
   ---------------------
   Array 1: [ 1 2 3 4 5 ]
   Array 2: [ 10 20 30 ]
   Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/
  
? |i..

u.. s..

// Function prototypes
in. * apply_all(c.. in. *c.. arr1, size_t size1, c.. in. *c.. arr2, size_t size2)
v.. print(c.. in. *c.. array, size_t size)


/*******************************************************************
This function expects:
    arr1 - a pointer to an array of integers
    size1 - the number of integers in arr1
    arr2 - a pointer to another array of integers
    size2 - the number of integers in arr2
    
    The function dynamically allocates a new array that is of size = size1 * size2
    Then it loops through each element of arr2 and multiples it across all the
    elements of arr1 and each product is stored in the newly created array
********************************************************************/
in. * apply_all(c.. in. *c.. arr1, size_t size1, c.. in. *c.. arr2, size_t size2) {
    in. *new_array {}
    
    new_array _ n.. in.[size1 * size2]
    
    in. position {0}
    ___ (size_t i{0} i < size2 ++i) {
        ___ (size_t j{0} j< size1 ++j) {
            new_array[position] _ arr1[j] * arr2[i]
            ++position
        }
    }
    r_ new_array
}
/*******************************************************************
This function expects:
    arr - a pointer to an array of integers
    size - the number of integers in arr
    
    The function loops through arr and displays all the integers
    in the array
********************************************************************/
v.. print(c.. in. *c.. arr, size_t size) {
    c.. __ "[ "
    ___ (size_t i{0} i<size++i)
        c.. __ arr[i] __ " "
    c.. __  "]"
    c.. __ e..
}

in. main() {
    c.. size_t array1_size {5}
    c.. size_t array2_size {3}
    
    in. array1[] {1,2,3,4,5}
    in. array2[] {10,20,30}
    
    c.. __ "Array 1: "
    print(array1,array1_size)
    
    c.. __ "Array 2: "
    print(array2,array2_size)
    
    in. *results _ apply_all(array1, array1_size, array2, array2_size)
    constexpr size_t results_size {array1_size * array2_size}
    
    c.. __ "Result: "
    print(results,results_size)
    
    de.. [] results
    c.. __ e..
    r_ _
}

