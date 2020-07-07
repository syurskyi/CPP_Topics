#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	char name[15];
	cout << "What's your name?" << endl;
	
	cin >> name;

	cout << "Your name is " << name << endl;

	cout << "Your name has " << strlen(name) << " symbols" << endl;
	cout << "And take " << strlen(name) * sizeof(char) << " bytes" << endl;

	cout << "--------------------------------------" << endl;

	cout << "Array has length " << sizeof(name) << " elements" << endl;

	system("pause");
	return 0;
}

