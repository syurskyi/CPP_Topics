﻿? *s..
? |i..
// Библиотека обработки строк в стиле СИ
? cs..

u.. s..

in. main()
{
	c.. str1[] _ "Hello"
	c.. str2[] _ " world!"
	c.. str3[] _ "Hello"

	// функция производит сравнение строк.
	// Возвращает 0, если строки совпадают, отрицательное значение, если первая меньше второй, и положительное значение, если первая больше второй.
	in. res _ strcmp(str1, str2)

	s.. (res)
	{
	c.. 0:
		c__ __  "The string is equal!" __  e..
		b..
	c.. -1:
		c__ __  "First string is less than second!" __  e..
		b..
	c__:
		c__ __  "First string is more than second!" __  e..
		b..
	}


	r_ 0sy.. p..
}

