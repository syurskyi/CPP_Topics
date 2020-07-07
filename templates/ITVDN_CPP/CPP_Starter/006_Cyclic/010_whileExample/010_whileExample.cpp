? *s..
? |i..
? <string>

u.. s..

in. main()
{
	
	setlocale(LC_CTYPE, "rus");

	string str = "Guess the desired color from 5 attempts.";

	in. maxAttempt = 5;		// Допустимое количество попыток
	in. attempt = 0;		// Номер текущей попытки
	string color = "red";	// Задуманый цвет

	while (attempt < maxAttempt) {
		attempt++;
		c__ __  str __  " Attempt " __  attempt __  e..
		string value = "";
		c__ >> value;

		__ (value == "")
		{
			break;
		}
		__ (value != color)
		{
			str = "You did not guess";
			continue;
		}

		c__ __  "Congratulations, you guessed right with " __  attempt __  " attempts!" __  e..
		break;
	}
	
	system("pause");
	r_ 0;
}
