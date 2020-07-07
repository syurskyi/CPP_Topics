#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {

    int age = 25;
    int *p_age = &age;

    cout << "Age equals " << age << endl;
    cout << "Address of variable age: 0x" << p_age << endl;

    cout << "Enter an age: ";
    cin >> *p_age;

    cout << "New age equals " << age << endl;
    cout << "New value has 0x" << p_age << " address" << endl;

    system("pause");
    return 0;
}

