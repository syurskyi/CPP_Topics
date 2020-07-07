#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	// Фунция get() считывает полностью строку до момента ввода символа новой строки, но в отличие от метода getline, данный мтод не отбрасывает символ конца строки
	char name[20];
	char address[15];

	cout << "Enter you name: ";
	//cin.get(name, 20);	// Символ конца строки остается во входной очереди.

	cin.get(name, 20).get();  // Раскомментировать

	cout << "Enter your address: ";
	cin.get(address, 15);

	cout << "Your name is " << name << ". Your address : " << address << endl;

	system("pause");
	return 0;
}

