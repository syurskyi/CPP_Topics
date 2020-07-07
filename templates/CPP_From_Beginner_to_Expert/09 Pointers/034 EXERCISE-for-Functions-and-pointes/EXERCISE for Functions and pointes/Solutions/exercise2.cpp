#include <iostream>

using namespace std;

int * createArray(int);

void swapTwoValues(int*, int*);

int main ()
{

    return 0;
}

int * createArray(int sizeOfArray)
{
    int* newArray = new int[sizeOfArray];

    return newArray;
}

void swapTwoValues(int* firstValue, int* secondValue)
{
    int temporaryVariable;

    temporaryVariable = *firstValue;
    *firstValue = *secondValue;
    *secondValue = temporaryVariable;
}


