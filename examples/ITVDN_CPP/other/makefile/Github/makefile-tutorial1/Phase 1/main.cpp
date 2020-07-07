#include <Person.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    
    cout << "Hello, Please Enter Your Name:" << endl;
    cin >> name;
    cout << "Please Enter Your Age:" << endl;
    cin >> age;

    Person person(name, age);
    cout << "Welcome " << name << endl;

}