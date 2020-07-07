#define PRODUCTION 10		// DEVELOMENT
#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

#ifdef PRODUCTION
	int a = 1;
	cout << "Product version." << endl;
#elif DEVELOMENT
	cout << "Dev version." << endl;
#endif 

#ifndef DEVELOMENT
	int a = 1;
	cout << "Dev version." << endl;
#elif PRODUCTION
	cout << "Product version." << endl;
#endif 

	system("pause");
    return 0;
}

