#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// В стандарте С++11 появилось новое средство позволяющее компилятору определять тип переменной

	auto a = 1; // переменная a типа int

	auto b = 1.1; // переменная b типа double

	auto c = 'A'; // переменная c типа char

    cout << a << endl << b << endl << c << endl;

	// Задержка
	cin.get(); 
    return 0;
}

