#include "stdafx.h"
#include <iostream>
// Библиотека обработки строк в стиле СИ
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "Hello";
	char str2[] = " world!";
	char str3[] = "Hello";

	// функция производит сравнение строк.
	// Возвращает 0, если строки совпадают, отрицательное значение, если первая меньше второй, и положительное значение, если первая больше второй.
	int res = strcmp(str1, str2);

	switch (res)
	{
	case 0:
		cout << "The string is equal!" << endl;
		break;
	case -1:
		cout << "First string is less than second!" << endl;
		break;
	case 1:
		cout << "First string is more than second!" << endl;
		break;	
	}

	system("pause");
	return 0;
}

