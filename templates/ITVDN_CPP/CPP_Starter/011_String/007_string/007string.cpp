#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	// Фунция getline() считывает полностью строку до момента ввода символа новой строки (нажатие на клавишу Enter) отбрасывая нулевой символ
	char name[20];
	int age = 0;

	cout << "Enter you name: ";
	cin.getline(name, 20);

	cout << "Enter your age: ";
	cin >> age;

	cout << "Your name is " << name << ", and you are " << age << " years old" << endl;

	system("pause");
	return 0;
}

