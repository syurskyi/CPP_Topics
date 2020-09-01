//
//  main.cpp
//  get_started
//
//  Created by syurskyi on 01/09/20.


#include <iostream>
using namespace std;

int main() {
    
    int score = 200;
    int *myp = &score;
    
    printf("Value of score is %d\n", score);
    printf("Value of pointer is %p\n", myp);
    
    int &another_score = score;
    another_score = 800;
    
    printf("Value of score is %d\n", score);
    printf("Value of pointer is %p\n", myp);
    
    return 0;
}
