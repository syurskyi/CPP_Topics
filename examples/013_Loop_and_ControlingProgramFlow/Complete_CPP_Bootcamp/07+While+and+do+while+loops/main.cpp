//
//  main.cpp
//  get_started
//
//  Created by syurskyi on 01/09/20.


#include <iostream>


using namespace std;

int main() {
    
    int my_numbers[] = {4, 5, 6, 7, 8, 9, 0};
    
    int i = 8;
    
//    while(i < 7){
//        if(i == 3){
//            i++;
//            cout << "skip this one" << endl;
//            continue;
//        }
//        cout << "Current number is: " << my_numbers[i] << endl;
//        i++;
//    }
    
    
    
    do{
        cout << "Current number is: " << my_numbers[i] << endl;
        i++;
    } while(i < 7);
    
    
    cout << "outside of loop" << endl;
    
   
    
    return 0;
}
