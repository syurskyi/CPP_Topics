// Section 9
// 012_Challenge - solution
/*    
    007_This challenge is about using a collection (list) of integers and allowing the user
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

007_This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

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

u.. s..

in. main

    ve..<in.> numbers {};
    ch.. selection {};
    
    do {
        // Display menu
        c.. __ "\nP - Print numbers" __ e..
        c.. __ "A - Add a number" __ e..
        c.. __ "M - Display mean of the numbers" __ e..
        c.. __ "S - Display the smallest number" __ e..
        c.. __ "L - Display the largest number"__ e..
        c.. __ "Q - Quit" __ e..
        c.. __ "\nEnter your choice: ";
        ci. __ selection;

        
        __ (selection __ 'P' || selection __ 'p') {
            __ (numbers.s.. __ 0)
                c.. __ "[] - the list is empty" __ e..
            ____ {
                c.. __ "[ ";
                ___ (a.. num: numbers)
                    c.. __ num __ " ";
                c.. __ "]" __ e..
            }
        } ____ __ (selection __ 'A' || selection __ 'a') {
            in. num_to_add {};
            c.. __ "Enter an integer to add to the list: ";
            ci. __ num_to_add;
            numbers.push_back(num_to_add);
            c.. __ num_to_add __ " added" __ e..
        } ____ __ (selection __ 'M' || selection __ 'm') {
            __ (numbers.s.. __ 0)
                c.. __ "Unable to calculate mean - no data" __ e..
            ____ {
                in. total {};
                ___ (a.. num: numbers)
                    total += num;
                c.. __ "The mean is : " __ static_cast<do..>(total)/numbers.s.. __ e..
            }
        } ____ __ (selection __ 'S' || selection __ 's') {
            __ (numbers.s.. __ 0)
                c.. __ "Unable to determine the smallest - list is empty" __ e..
            ____ {
                in. smallest = numbers.at(0);
                ___ (a.. num: numbers)
                    __ (num < smallest)
                        smallest = num;
                c.. __ "The smallest number is: " __ smallest __ e..
            }
        } ____ __ (selection __ 'L' || selection __ 'l') {
            __ (numbers.s.. __ 0)
                c.. __ "Unable to determine largest - list is empty"__ e..
            ____ {
                in. largest = numbers.at(0);
                ___ (a.. num: numbers)
                    __ (num > largest)
                        largest = num;
                c.. __ "The largest number is: " __ largest __ e..
            }
        } ____ __ (selection __ 'Q' || selection __ 'q') {
            c.. __ "Goodbye" __ e..
        } ____ {
            c.. __ "Unknown selection, please try again" __ e..
        }
    } w__ (selection != 'q' && selection != 'Q');

    c..  __ e..
    r_ 0;
}

