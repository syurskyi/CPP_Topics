﻿#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// Создаем массив arr типа int размерностью в 4 элемента, и в блоке инициализатора, инициализируем элементы массива, соответствующими значениями
	int arr[4] = { 10, 20, 30, 40 };	// arr[0] = 10;	arr[1] = 20; arr[2] = 30; arr[3] = 40;

	// arr[4] = 50; // Раскомментировать. ВНИМАНИЕ! Запись в память не пренадлежащей нашей программе!

	// выводим значения элементов массива
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;

	// cout << arr[4] << endl; // Раскомментировать. ВНИМАНИЕ! Возможно обращение к памяте, не пренадлежащей программе!

	// выводим адресса элементов массива

	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;
	cout << &arr[3] << endl;

	// cout << &arr[4] << endl;

	system("pause");
	return 0;
}

