#define MAX_SIZE 100

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// сравниваем значение макроса с литералом.
#if MAX_SIZE <= 100
	cout << "The size of the array is normal!" << endl;
#elif MAXSIZE > 100
	cout << "Please enter a different size. The size is too big!" << endl;
#elif MAX_SIZE <= 0
	cout << "The size of the array can not be less than 0!";
#endif


	system("pause");
    return 0;
}

