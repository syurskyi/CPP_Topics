﻿#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
    int count = 5;

    do {
        cout << "Count " << count << endl;
        count--;

        continue;    // Эта инструкция передает управление проверке условия

        cout << "007_This line is never executed";    // Эта строка не выполнится никогда
    } while (count > 0);

    cout << "007_This line is always executed" << endl;

    cin.get();
    return 0;
}

