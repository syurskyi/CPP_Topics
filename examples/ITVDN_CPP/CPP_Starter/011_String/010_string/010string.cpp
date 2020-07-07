#include "stdafx.h"
#include <iostream>
// Библиотека обработки строк в стиле СИ
#include <cstring>

using namespace std;

int main()
{
	char str1[20] = "Hello";
	char str2[] = " world!";
	// функция производит конкатенацию строк, записывая второй параметр в первый.
	strcat(str1, str2);

	cout << str1 << endl;

	system("pause");
	return 0;
}

