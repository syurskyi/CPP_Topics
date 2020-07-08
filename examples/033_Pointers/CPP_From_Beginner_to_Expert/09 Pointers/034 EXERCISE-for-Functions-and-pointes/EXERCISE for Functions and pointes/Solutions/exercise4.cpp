#include <iostream>
#include <cstdlib>

using namespace std;

int * createArray(int);

void swapTwoValues(int*, int*);

void fillArrayWithValues(int[], int);
void printArrayValues(int[], int);

void bubbleSort(int[], int, int = 1);

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

void bubbleSort(int arrayToSort[], int sizeOfArray, int orderOfSequence)
{
    for (int i = 0; i < sizeOfArray-1; i++)
    {
        for (int j = 0; j < sizeOfArray-1; j++)
        {
            if (orderOfSequence == 1 && arrayToSort[j] > arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1);
            }
            else if (orderOfSequence == 2 && arrayToSort[j] < arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1);
            }
        }
    }
    printArrayValues(arrayToSort, sizeOfArray);
}


