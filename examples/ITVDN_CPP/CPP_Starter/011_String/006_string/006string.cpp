#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	// Проблема чтения текста с консоли
	char name[20];
	int age = 0;

	cout << "Enter you name: ";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Your name is " << name << ", and you are " << age << " years old"<< endl;

	system("pause");
	return 0;
}

