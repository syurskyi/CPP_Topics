#include "stdafx.h"
#include <iostream>
// Библиотека обработки строк в стиле СИ
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "Hello world!";

	char *p = strchr(str1, 'w');

	cout << *p << endl;

	cout << boolalpha << (str1[6] == *p) << endl;

	system("pause");
	return 0;
}

