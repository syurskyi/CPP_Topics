#include "stdafx.h"
#include <iostream>
// Эта библиотека нужна для работы с типом string
#include <string>

using namespace std;

int main()
{
	string _str = "Some text";

	// Methods
	_str.append(" one more text");
	cout << _str.size() << endl;

	cout << _str << endl;

	system("pause");
	return 0;
}

