// Section 17
// 012_Challenge 1
/***********************************************************************************************************
Create a program that has the following:

1. a function named make that creates and returns a unique_ptr to a vector of shared_ptrs to Test objects. 

2. a function named fill that expects a vector of shared pointers to Test objects and a int
   representing the number of Test objects to create dynamically and add to the vector.
   
   This function will prompt the user to enter an integer, create a shared_ptr to a Test object 
   initialized to the entered integer and add that shared pointer to the vector.
   
3. a function named display that expects a vector of shared_ptrs to Test object and displays the
   data in each Test object
   
4. The main driver should look as follows:

    int main() {
        std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
        vec_ptr = make();
        std::cout << "How many data points do you want to enter: ";
        int num;
        std::cin >> num;
        fill(*vec_ptr, num);
        display(*vec_ptr);
        return 0;
    }
    
Below is a sample run for the user entering 3 at the console:
    
How many data points do you want to enter: 3
Enter data point [1] : 10
        Test constructor (10)
Enter data point [2] : 20
        Test constructor (20)
Enter data point [3] : 30
        Test constructor (30)
Displaying vector data
=======================
10
20
30
=======================
        Test destructor (10)
        Test destructor (20)
        Test destructor (30)

- I am providing the function prototypes in the code. 
However, feel free to modify these as you wish
***********************************************************************************************************/
? ios..
? me..
? ve..

c_ Test {
pr..
    in. data;
pu..
    Test() : data{0} { st. c.. __ "\tTest constructor (" __ data __ ")" __ st. e.. }
    Test(in. data) : data {data} { st. c.. __ "\tTest constructor (" __ data __ ")" __ st. e.. }
    in. get_data() co.. {r_ data; }
    ~Teststd::c.. __ "\tTest destructor (" __ data __ ")" __ st. e.. }
};

// Function prototypes
st. unique_ptr<st. ve..<st. shared_ptr<Test>>> make();
v.. fill(st. ve..<st. shared_ptr<Test__ &vec, in. num);
v.. display(co.. st. ve..<st. shared_ptr<Test__&vec);

in. main
    st. unique_ptr<st. ve..<st. shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    st. c.. __ "How many data points do you want to enter: ";
    in. num;
    st. ci. __ num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    r_ _
}