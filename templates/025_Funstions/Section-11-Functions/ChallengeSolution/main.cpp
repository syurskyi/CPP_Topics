// Section 11
// 012_Challenge - Solution
/*
    Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.
    
    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.
    
    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.
    
        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth
        
    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
    
    Finally,  don't forget to use function prototypes!
    
    Good luck -- I know you can do it!
*/
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!
*/

? ios..
? ve..
? <cctype>   // for toupper

u.. s..

// Prototypes for displaying the menu and getting user selection
void display_menu();
ch.. get_selection();

// Menu handling function prototypes
void handle_display(const vector<in.> &v);
void handle_add(vector<in.> &v);
void handle_mean(const vector<in.> &v);
void handle_smallest(const vector<in.> &v);
void handle_largest(const vector<in.> &v);
void handle_find(const vector<in.> &v);
void handle_quit();
void handle_unknown();

// Prototypes for functions that work with the list
// to display it, calculate mean, etc.
void display_list(const vector<in.> &v);
do.. calculate_mean(const vector<in.> &v);
in. get_smallest(const vector<in.> &v);
in. get_largest(const vector<in.> &v);
bool find(const vector<in.> &v, in. target);

in. main
    
    vector<in.> numbers;        // our list of numbers
    ch.. selection {};
    
    do {
        display_menu();
        selection = get_selection();
        switch (selection) {
            case 'P': 
                handle_display(numbers); 
                break;
            case 'A': 
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
            default:
                handle_unknown();
        }
    } w__ (selection != 'Q');
    c.. __ e..
    r_ 0;
}

/***************************************************************
This function displays the menu to the console.
***************************************************************/
void display_menu
        c.. __ "\nP - Print numbers" __ e..
        c.. __ "A - Add a number" __ e..
        c.. __ "M - Display mean of the numbers" __ e..
        c.. __ "S - Display the smallest number" __ e..
        c.. __ "L - Display the largest number"__ e..
        c.. __ "F - Find a number" __ e..
        c.. __ "Q - Quit" __ e..
        c.. __ "\nEnter your choice: ";
}

/***************************************************************
This function simply reads a character selection from
stdin and returns it as upper case.
***************************************************************/
ch.. get_selection
    ch.. selection {};
    ci. __ selection;
    r_ toupper(selection);
}

/***************************************************************
This function is called when the user selects the display list
option from the main menu.
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void handle_display(const vector<in.> &v) {
    __ (v.s.. __ 0)
        c.. __ "[] - the list is empty" __ e..
    ____
        display_list(v);
}

/***************************************************************
This function is called when the user selects add a number
to the list from the main menu

Note that the vector parameter must NOT be const since
it will be changing the list of numbers
***************************************************************/
void handle_add(vector<in.> &v) {
    in. num_to_add {};
    c.. __ "Enter an integer to add to the list: ";
    ci. __ num_to_add;
    v.push_back(num_to_add);
    c.. __ num_to_add __ " added" __ e..
}

/***************************************************************
This function is called when the user selects calculate the mean
from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void handle_mean(const vector<in.> &v) {
    __ (v.s.. __ 0)
        c.. __ "Unable to calculate mean - list is empty" __ e..
    ____
        c.. __ "The mean is " __ calculate_mean(v) __ e..
}

/***************************************************************
This function is called when the user selects the smallest 
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void handle_smallest(const vector<in.> &v) {
     __ (v.s.. __ 0)
        c.. __ "Unable to determine the smallest - list is empty" __ e..
    ____
        c.. __ "The smallest element in the list is " __ get_smallest(v) __ e..
}

/***************************************************************
This function is called when the user selects the largest 
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void handle_largest(const vector<in.> &v) {
     __ (v.s.. __ 0)
        c.. __ "Unable to determine the largest - list is empty" __ e..
    ____
        c.. __ "The largest element in the list is " __ get_largest(v) __ e..
}

/***************************************************************
This function is called when the user selects the find 
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void handle_find(const vector<in.> &v) {
    in. target{};
    c.. __ "Enter the number to find: ";
    ci. __ target;
    __ ( find(v, target))
        c.. __ target __ " was found" __ e..
    ____
        c.. __ target __ " was not found" __ e..
}


/***************************************************************
This function is called when the user selects the quit 
option from the main menu
***************************************************************/
void handle_quit
    c.. __ "Goodbye" __ e..
}

/***************************************************************
This function is called whenever the user enters a selection
and we don't know how to handle it.
It is not one of the valid options in the main menu
***************************************************************/
void handle_unknown
    c.. __ "Unknown selection - try again" __ e..
}

/***************************************************************
This function expects a list of integers as a vector
and displays all the integers in the list in square brackets
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void display_list(const vector<in.> &v) {
    c.. __ "[ ";
    for (auto num: v)
        c.. __ num __ " ";
    c.. __ "]" __ e..
}

/***************************************************************
This function expects a list of integers as a vector
and returns the calculated mean
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
Note: the list must not be empty
***************************************************************/
do.. calculate_mean(const vector<in.> &v) {
    in. total {};
    for (auto num: v)
        total += num;
    r_ static_cast<do..>(total)/v.s..;
}

/***************************************************************
This function expects a list of integers as a vector
and returns the largest integer in the list
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
Note: the list must not be empty
***************************************************************/
in. get_largest(const vector<in.> &v) {
    in. largest = v.at(0);
    for (auto num: v) 
        __ (num > largest)
            largest = num;
    r_ largest;
}

/***************************************************************
This function expects a list of integers as a vector
and returns the smallest integer in the list
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
Note: the list must not be empty
***************************************************************/
in. get_smallest(const vector<in.> &v) {
    in. smallest = v.at(0);
    for (auto num: v) 
        __ (num < smallest)
            smallest = num;
    r_ smallest;
}

/***************************************************************
This function searches the list of integers as a vector
for the given integer target

If the target is found in the vector true is returned
If the target is not found in the vector false is returned

Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
bool find(const vector<in.> &v, in. target) {
    for (auto num: v)
        __ (num __ target)
            r_ true;
    r_ false;
}

