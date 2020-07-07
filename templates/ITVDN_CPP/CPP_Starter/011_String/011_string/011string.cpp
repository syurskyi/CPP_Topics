? *s..
? |i..
// Библиотека обработки строк в стиле СИ
? <cstring>

u.. s..

in. main()
{
	char str1[] _ "Hello";
	char str2[] _ " world!";
	char str3[] _ "Hello";

	// функция производит сравнение строк.
	// Возвращает 0, если строки совпадают, отрицательное значение, если первая меньше второй, и положительное значение, если первая больше второй.
	in. res _ strcmp(str1, str2);

	switch (res)
	{
	case 0:
		c__ __  "The string is equal!" __  e..
		break;
	case -1:
		c__ __  "First string is less than second!" __  e..
		break;
	case 1:
		c__ __  "First string is more than second!" __  e..
		break;	
	}

	system("pause");
	r_ 0;
}

