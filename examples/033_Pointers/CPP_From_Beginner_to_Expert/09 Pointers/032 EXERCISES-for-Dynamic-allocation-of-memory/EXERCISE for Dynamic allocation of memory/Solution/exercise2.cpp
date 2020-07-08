#include <iostream>

using namespace std;

int main ()
{

    int arraySize;

    cout << "Input the size of the dynamic array you want to create: ";
    cin >> arraySize;

    int *dynamicArray = new int[arraySize];


    for (int i = 0; i < arraySize; i++)
    {
        cout << "Input " << i+1 << " number: ";
        cin >> *(dynamicArray+i);
    }

    for (int i = 0; i < arraySize; i++)
    {
        cout << "Number " << i+1 << ": " << *(dynamicArray+i) << endl;
    }

    delete []dynamicArray;


}

