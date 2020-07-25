// Section 11
// Function Parmameters
#include <iostream>
#include <string>
#include <vector>

using  namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();  // delete all vector elements
}

void print_vector(vector<string> v) {
    for (auto s: v)
        cout << s << " "
    cout << endl;
}

int main () {
    int num {10};
    int another_num {20};

    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;

    cout << "\nanother_num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    c.. __ "another_num after calling pass_by_value1: " __ ? __ e..

    string name {"Frank"};
    c.. __ "\nname before calling pass_by_value2: " __ ? __ e..
    ? ?
    c.. __ "name after calling pass_by_value2: " __ ? __ e..

    vectorst.. stooges "Larry", "Moe", "Curly"
    c.. __ "\nstooges before calling pass_by_value3: "
    p.. ?
    _3 ?
    c.. __ "stooges after calling pass_by_value3: "
    pr.. ?

    c.. __ e..
    r_ _

