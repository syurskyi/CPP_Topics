#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int count = 5;

	do 
	{
		cout << "Count " << count<< endl;
		count--;
	} while (count > 0);

	cout << "007_This line is always executed" << endl;

	cin.get();
	return 0;
}
