#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	// Это не строка
	char first_string[12] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '.' };

	// Это строка
	char second_string[12] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0' };

//	cout << "Second_string length = " << strlen(second_string) << endl;
	cout << second_string << endl;

	 cout << first_string << endl; // Раскомментировать!

	system("pause");
    return 0;
}

