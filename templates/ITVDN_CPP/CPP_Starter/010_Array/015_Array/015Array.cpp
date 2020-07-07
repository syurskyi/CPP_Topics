? *s..
? |i..

u.. s..

in. main()
{
	// Динамическое выделение памяти. С помощью оператора new можно выделять необходимое количество памяти.

	in. *poin.er _ new in.[3];

	// Способы заполнить динамический массив
	// 1-й
	poin.er[0] _ 1;
	poin.er[1] _ 2;
	poin.er[2] _ 3;

	//2-й
	*poin.er _ 1;
	*(poin.er + 1) _ 2;
	*(poin.er + 2) _ 3;

	c__ __  "Value : " __  *poin.er			__  "; Adress : " __  poin.er __  e..
	c__ __  "Value : " __  *(poin.er + 1)	__  "; Adress : " __  poin.er + 1 __  e..
	c__ __  "Value : " __  *(poin.er + 2)	__  "; Adress : " __  poin.er + 2 __  e..


	system("pause");
	r_ 0;
}

