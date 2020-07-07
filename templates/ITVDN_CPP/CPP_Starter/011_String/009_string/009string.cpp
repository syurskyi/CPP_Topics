#include "stdafx.h"
#include <iostream>
// Библиотека обработки строк в стиле СИ
#include <cstring>

using namespace std;

int main()
{
	char color[10];
	char copy_color[10];
	
	cout << "Enter your favorite color: ";
	cin.getline(color, 10);

//	strcpy_s(copy_color, color);

	cout << "Color : " << color << endl;
	cout << "Copy color : " << copy_color << endl;

	//char str[10] = "dark gray";		
	 char str[15] = "light gray";  // Приводит к повреждению памяти!

	strcpy(copy_color, str);

	cout << "Now copy_color equals " << copy_color << endl;

	system("pause");
	return 0;
}

