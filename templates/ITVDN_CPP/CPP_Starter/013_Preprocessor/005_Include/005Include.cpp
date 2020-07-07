#include "stdafx.h"
#include <iostream>
// Директива #include все содержимое файла add.h вставит вместо 4-й строки.
#include "add.h"

using namespace std;
int main()
{
	cout << "5 + 2 = " << add(5, 2) << "; 5 - 2 = " << subtract(5, 2) << endl;
	
	system("pause");
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}