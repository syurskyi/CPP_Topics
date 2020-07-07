#include <iostream>

using namespace std;

int main ()
{
    int arr[5];
    int *pArr = arr;

    for (int i = 0; i < 5; i++)
    {
        cout << "Input " << i+1 << " number: ";
        cin >> *(pArr++);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Number " << i+1 << ": " << arr[i] << endl;
    }

    return 0;
}
