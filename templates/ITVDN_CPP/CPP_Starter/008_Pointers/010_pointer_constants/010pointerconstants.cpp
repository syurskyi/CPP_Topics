﻿? *s..
? |i..

u.. s..

in. main()
{
	in. a _ 20;

	// Данные в указателе изменять нельзя.
	const in. *pA _ &a;

	c__ __  pA __  e..

	in. b _ 30;

	// Можно изменить адрес памяти на который указывает указатель.
	pA _ &b;

	c__ __  pA __  e..

	// Ошибка компиляции, нельзя изменять данные.
	//*pA = 40;

	// Ошибка компиляции, нельзя присвоить константу не константе
	//int *pointer = pA;

	sy.. pause
	r_ 0;
}
