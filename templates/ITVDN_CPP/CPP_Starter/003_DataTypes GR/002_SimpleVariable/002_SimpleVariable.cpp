#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// На 12-й строке мы создаем переменную типа int и присваиваем ей значение 2
	int a;		// 0000 0000  0000 0000  0000 0000  0000 0010 

	char month = 12;
    cout << "month: " << month << endl;


	month = 13;
	cout << "month: " << month << endl;

	// Задержка
	cin.get();
    return 0;
}

