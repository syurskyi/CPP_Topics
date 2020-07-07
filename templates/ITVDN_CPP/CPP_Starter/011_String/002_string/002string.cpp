#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	// Компилятор разбивает строку на массив символов
	char str1[16] = "I write in C++!";

	cout << str1 << endl;

	// Компилятор сам подсчитывает количество символов в строке и инициализирует массив
	char str2[] = "And I like it!";

	cout << str2 << endl;

	system("pause");
	return 0;
}

