#include <iostream>
#include <cstdlib>

using namespace std;

int * createArray(int);

void swapTwoValues(int*, int*);

void fillArrayWithValues(int[], int);
void printArrayValues(int[], int);

int main ()
{

    return 0;
}

int * createArray(int sizeOfArray)
{
    int* SnewArray = new int[sizeOfArray];

    return newArray;
}

void swapTwoValues(int* firstValue, int* secondValue)
{
    int temporaryVariable;

    temporaryVariable = *firstValue;
    *firstValue = *secondValue;
    *secondValue = temporaryVariable;
}

void fillArrayWithValues(int arrayToFill[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Enter " << i+1 << " element: ";
        cin >> arrayToFill[i];
    }
    system("cls");
}

void printArrayValues(int arrayToPrint[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Array[" << i << "] = " << arrayToPrint[i] << endl;
    }
    cout << endl;
}


