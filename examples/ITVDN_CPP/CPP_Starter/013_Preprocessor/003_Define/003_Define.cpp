#include "stdafx.h"
#include <iostream>
// Макросы могут применятся для определения имен констант. В языке Си это было обычной практикой, в С++ рекомендуется для создания контант использовать ключевое слово const.
#define MAX_SIZE 100
// В качестве макросов могут быть функции.
#define ABS(a) (a) < 0 ? -(a) : (a)	// Функциональный макрос.

using namespace std;
int main()
{
	int arr[MAX_SIZE];

	int a = ABS(-10);
	cout << a << endl;

	system("pause");
	return 0;
}

