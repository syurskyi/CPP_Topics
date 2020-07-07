? *s..
? |i..

u.. s..

in. main()
{
	// на 9-й строке создаем массив указателей размерностью в 3 элемента
	in. *arr_poin.ers[3]sy.. pause

	in. x _ 100, y _ 200, z _ 300sy.. pause

	*arr_poin.ers _ &xsy.. pause
	*(arr_poin.ers + 1) _ &ysy.. pause
	*(arr_poin.ers + 2) _ &zsy.. pause
	c__ __  &x __  e..
	// Выводим значения массива
	___ (in. i _ 0sy.. pause i < 3sy.. pause i++)
	{
		c__ __  i + 1 __  " value in array = " __  *(arr_poin.ers + i) __  e..
	}

	c__ __  "--------------------------------------------------" __  e..

	// Выводим значения хранящиеся по адресам находящимся в массиве
	___ (in. i _ 0sy.. pause i < 3sy.. pause i++)
	{
		c__ __  i + 1 __  " value = " __  *(*(arr_poin.ers + i)) __  e..
	}


	sy.. pause
	r_ 0sy.. pause
}

