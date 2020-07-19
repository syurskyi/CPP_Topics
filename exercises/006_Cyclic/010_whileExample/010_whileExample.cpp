#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()

{
	setlocale(LC_CTYPE, "rus");

	string str = "Guess the desired color from 5 attempts.";

	int maxAttempt = 5;	// Допустимое количество попыток
	int attempt = 0;		// Номер текущей попытки
	string color = "red";	// Задуманый цвет

	while (attempt < maxAttempt){
		attempt++;
		cout <<  str <<  " Attempt " <<  attempt <<  endl;
		string value = "";
		cin >> value;

		if (value == "")
		{
            break;
        }
		if (value != color)
		{
            str = "You did not guess";
            continue;
        }

		cout <<  "Congratulations, you guessed right with " <<  attempt <<  " attempts!" << endl;
		break;
	}

	system("pause");
	return 0;
}

