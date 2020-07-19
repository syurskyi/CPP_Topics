#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
    int count = 5;


    while (count > 0) {
        cout << "Count = " << count << endl;
        count--;

        break;    // Эта  инстукция остановит работу цикла, и предаст управление инструкцие находящейся после операторных скобок цикла

        cout << "007_This line is never executed";
    }

    cout << "007_This line is always executed";

    cin.get();
    return 0;
}
