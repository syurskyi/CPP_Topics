? *s..
? |i..

u.. s..

in. main()
{
	setlocale(LC_CTYPE, "rus");

	in. number = 0;		// исло, факториал которого необходимо получить
	in. factorial = 1;	// акториал

	c__ __  "Enter number: ";
	c__ >> number;

	c__ __  "factorial of a number: " __  number __  "! = ";

	do
	{
		if (number == 0)
		{
			factorial = 1;
			break;
		}
		factorial = factorial * number;
		number--;

	} while (number > 0);
	
	c__ __  factorial __  e..
	
	system("pause");
	r_ 0;
}
