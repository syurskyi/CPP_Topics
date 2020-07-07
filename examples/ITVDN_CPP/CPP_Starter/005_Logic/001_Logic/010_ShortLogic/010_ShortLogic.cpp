// 009_ShortLogic.cpp: определ¤ет точку входа дл¤ консольного приложени¤.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int minValue = 1;
	int denominator = 0;
	int item = 2;

	// ”словие, которое работает с использованием техники ------------------.
	// ≈сли бы это выражение вычисл¤лось полностью, то операци¤ делени¤ во втором операнде, 
	// генерировала бы ошибку делени¤ на 0.

	if ((item / denominator) > minValue && (denominator != 0)) // ќставьте один оператор &
	{
		cout << "Block IF" << endl;
	}
	else
	{
		cout << "Block ELSE" << endl;
	}

	return 0;
}

