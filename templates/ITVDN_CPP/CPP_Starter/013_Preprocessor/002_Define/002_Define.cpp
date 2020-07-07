#include "stdafx.h"
#include <iostream>

#define ONE 1
#define TWO 2
// Если в программе определенно имя макроса, его можно использовать для определения другого макроса.
#define THREE ONE+TWO

// Можно определять сообщения, которые будут вывоится пользователю.
#define STR "Error!"

using namespace std;
int main()
{
	cout << THREE << endl;

	int a = 10;

	if (a == 10) {
		cout << STR << endl;
	}

	// Если идентификатор является частью строки, заключенной в кавычки, макроподстановка не производится.
	cout << "STR" << endl;

	system("pause");
    return 0;
}

