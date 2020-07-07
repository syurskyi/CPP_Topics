? *s..
? |i..
? |s..

u.. s..

in. main()
{
	
	setlocale(LC_CTYPE, "rus");

	s.. str _ "Guess the desired color from 5 attempts.";

	in. maxAttempt _ 5;		// Допустимое количество попыток
	in. attempt _ 0;		// Номер текущей попытки
	s.. color _ "red";	// Задуманый цвет

	w___ (attempt < maxAttempt) {
		attempt++;
		c__ __  str __  " Attempt " __  attempt __  e..
		s.. value _ "";
		c__ __ value;

		__ (value __ "")
		{
			b..
		}
		__ (value !_ color)
		{
			str _ "You did not guess";
			c___
		}

		c__ __  "Congratulations, you guessed right with " __  attempt __  " attempts!" __  e..
		b..
	}
	
	system("pause");
	r_ 0;
}
