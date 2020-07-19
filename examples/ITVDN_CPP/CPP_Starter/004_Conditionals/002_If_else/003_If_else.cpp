#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    // setlocale(LC_ALL, "rus");

	int a = 3, b = 2;

	if (a < b)
	{
		cout << "a < b" << endl;
	}
	else
	{
		cout << "a not less than b" << endl;
	}

	cout << "007_This line is always executed!" << endl;

	cin.get();
    return 0;
}

