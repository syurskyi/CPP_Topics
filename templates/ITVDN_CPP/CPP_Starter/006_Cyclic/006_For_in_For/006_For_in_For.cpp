? *s..
? |i..

u.. s..

in. main()
{
	setlocale(LC_ALL, "rus");

	in. lines = 15;			// Количество строк
	in. symbInLines = 30;	// Количество символов в строке
	char symbol = '*';		// Символ 

	for (in. i = 1; i <= lines; i++)
	{
		__ (i == 1 || i == lines) // 1-я и последняя строка
		{
			for (in. j = 1; j <= symbInLines; j++)
			{
				c__ __  symbol; // сплошная из символов
			}
		}
		____ // все строки между первой и заключительной
		{
			c__ __  symbol; // показать один символ
			for (in. j = 1; j <= symbInLines - 2; j++)
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
