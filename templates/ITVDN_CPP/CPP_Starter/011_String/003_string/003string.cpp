#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	char _char = 'Q'; // Обычный символ, компилятор присвоит переменной _char числовой код этого символа

	cout << _char << " " << (int)_char << endl;

	// char str = "Q"; // Не допустимо!

	system("pause");
	return 0;
}

