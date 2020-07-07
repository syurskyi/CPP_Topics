// Kонстанта - область памjaти, в которой хранитсja значение, которое нельзja изменить

#include "stdafx.h"
#include <iostream>
#include <limits.h>

using namespace std;

int main()
{	
	//  V 11-й строке мы создаем константу типа int с именем Month и присваиваем ей значение 12
	const int MONTH = 12;

	// «начение константы измен¤ть запрещенно
	// MONTH = 15;

	// const int a;
	// a = 10;

	int c = INT_MAX;

	cout << "INT_MAX = " << c << endl;

	// zадержка
	cin.get();
    return 0;
}

