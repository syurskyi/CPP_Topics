#include "stdafx.h"
#include <iostream>
// Эта библиотека нужна для работы с типом string
#include <string>

using namespace std;

int main()
{
	string usa_city = "";

	cout << "Enter USA city : ";

	 // cin >> usa_city;
	getline(cin, usa_city);
	
	cout << usa_city << endl;
	
	system("pause");
	return 0;
}

