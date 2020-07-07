#include "stdafx.h"
#include <iostream>

#define createSTR(value)	#value
#define concat(a, b)		a##b


using namespace std;

int main()
{
	cout << createSTR(I write on C++) << endl;

	int xy = 10;

	cout << concat(x, y) << endl;

	system("pause");
	return 0;
}

