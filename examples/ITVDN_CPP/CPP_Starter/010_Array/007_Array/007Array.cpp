﻿#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// На 9-й строке создаем двумерный массив с именем  arr типа int размерностью 3 на 3 элемента.
	int arr[3][3];

	// Заполняем элементы массива значениями
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = i * j + 2;
		}
	}

	// Выводим значения элементов массива в консоль
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}

