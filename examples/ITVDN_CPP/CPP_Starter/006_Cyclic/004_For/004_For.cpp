﻿#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int count = 5;

	for (int i = 0; i < count; i++)
	{
		cout << "Iteration " << i << endl;
		
		continue;	// Эта  инстукция прекратит выполнение текущей итерации, и передаст управление секции изменения счетчика

		cout << "007_This line is never executed";
	}

	cout << "007_This line is always executed";

	cin.get();
	return 0;
}