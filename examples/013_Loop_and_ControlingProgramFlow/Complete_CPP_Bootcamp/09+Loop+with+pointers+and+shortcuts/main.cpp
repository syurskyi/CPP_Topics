//
//  main.cpp
//  get_started
//
//  Created by syurskyi on 01/09/20.


#include <iostream>


using namespace std;

int main() {
    
    char my_string[] = "hitesh";
    char my_name[] = {'h', 'i', 't', 'e', 's', 'h', 0};
    printf("My name is: %s\n", my_name);
    
    cout << "take a break\n";
    
    for (int i = 0; my_name[i]; i++) {
        cout << "Character is: " << my_name[i] << endl;
    }
    
    cout << "take a break part 2\n";
    for (char * cp = my_name; *cp != 0; cp++) {
        cout << "Character is: " << *cp << endl;
    }
    
    cout << "take a break part 3\n";
    for(char i:my_name){
        if(i == 0) break;
        cout << "Char is: "<< i << endl;
    }
    
    
    return 0;
}
