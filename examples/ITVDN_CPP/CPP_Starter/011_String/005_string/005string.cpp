#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	char name[20];
	char color[10];

	cout << "Enter you name: ";
	cin >> name;

	cout << "Enter your favorite color: ";
	cin >> color;

	cout << "Your name is " << name << ", and you favorit color is " << color << endl;

	system("pause");
	return 0;
}

