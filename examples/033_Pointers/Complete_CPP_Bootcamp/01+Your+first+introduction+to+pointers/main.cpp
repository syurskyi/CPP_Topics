//
//  main.cpp
//  get_started
//
//  Created by syurskyi on 01/09/20.

#include <iostream>
using namespace std;

int main() {
    int life;
    life = 4;
    
    int card;
    card = 40;
    int my_card = card;
    
    int *myp;
    myp = &card;
    
    my_card = *myp; //pointer deref.
    
    printf("Value of card is: %d\n", my_card);
    printf("Value of card is: %p\n", myp);
    printf("Value of card is: %d\n", my_card);
    
    
    return 0;
}
