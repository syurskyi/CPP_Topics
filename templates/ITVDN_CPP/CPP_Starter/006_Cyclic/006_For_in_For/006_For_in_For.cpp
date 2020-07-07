? *s..
? |i..

u.. s..

in. main()
{
	setlocale(LC_ALL, "rus");

	in. lines _ 15;			// Количество строк
	in. symbInLines _ 30;	// Количество символов в строке
	char symbol _ '*';		// Символ

	for (in. i _ 1; i <_ lines; i++)
	{
		__ (i __ 1 || i __ lines) // 1-я и последняя строка
		{
			for (in. j _ 1; j <_ symbInLines; j++)
			{
				c__ __  symbol; // сплошная из символов
			}
		}
		____ // все строки между первой и заключительной
		{
			c__ __  symbol; // показать один символ
			for (in. j _ 1; j <_ symbInLines - 2; j++)
			{
				c__ __  ' '; // пробелы в строке (symbInLines - 2) раз
			}
			c__ __  symbol; // показать ещё один символ
		}
		c__ __  e.. // новая строка
	}

	c__ __  e..

	system("pause");
	r_ 0;
}
