#include <iostream>

using namespace std;

main ()
{
    int age;
    cout << "Please input your age: ";
    cin >> age;

    string isAdult = (age >= 18)
        ? "You are an adult please enter !"
        : "You are not an adult !";

    cout << isAdult;

}
