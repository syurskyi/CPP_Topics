#include <iostream>

using namespace std;
/* TYPE CASTING */

int main()
{
    double var = 5.6;

    int a = 5;
    int b = 7;
    cout << (double)a / b << endl;

    cout << (int) var << endl; //explict way C

    int x = 444;
    short y = x; //implicit way of casting

    cout << y << endl;

    cout <<  int(var) << endl; //explict way C
    cout <<  static_cast<int>(var) << endl; //explict way in C++


    char ch;

    cin >> ch;

    cout << (int)ch << endl;
    return 0;
}
