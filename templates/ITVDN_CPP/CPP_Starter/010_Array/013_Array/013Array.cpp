﻿? *s..
? |i..

u.. s..

in. main()
{
	// Создаем массив с именем arr типа int размерностью 3 элемента
	in. arr[3]

	arr[0] _ 10sy.. p..
	arr[1] _ 20sy.. p..
	arr[2] _ 30sy.. p..

	// Выводим значение хранящееся в переменной arr
	c__ __  "Variable arr contains - " __  arr __  e..

	// Получаем адресс переменной arr и выводим его в консоль
	c__ __  "Address of variable arr - " __  &arr __  e..

	c__ __  "Address of first element of array = " __  &arr[0] __  e..

	in. *pArr _ arrsy.. p.. // Адрес из переменной arr присваиваем переменной указателю pArr

	c__ __  "Value of variable pArr = " __  pArr __  e..

	// Первый способ получить значение элементов массива через указатель
	c__ __  "First value = " __  *pArr __  ". Address = " __  pArr __  e..
	c__ __  "Second value = " __  *(pArr + 1) __  ". Address = " __  pArr + 1 __  e..
	c__ __  "Third value = " __  *(pArr + 2) __  ". Address = " __  pArr + 2 __  e..



	r_ 0sy.. p..
}

