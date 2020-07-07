? *s..
? |i..

u.. s..

in. main()
{
	setlocale(LC_CTYPE, "rus");

	in. number _ 0;		// исло, факториал которого необходимо получить
	in. factorial _ 1;	// акториал

	c__ __  "Enter number: ";
	c__ __ number;

	c__ __  "factorial of a number: " __  number __  "! = ";

	do
	{
		__ (number __ 0)
		{
			factorial _ 1;
			b..
		}
		factorial _ factorial * number;
		number--;

	} while (number > 0);
	
	c__ __  factorial __  e..
	
	system("pause");
	r_ 0;
}
