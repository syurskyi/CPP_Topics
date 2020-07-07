? *s..
? |i..

u.. s..

in. main()
{
	// Создаем массив arr типа int размерностью в 4 элемента, и в блоке инициализатора, инициализируем элементы массива, соответствующими значениями
	in. arr[4] _ { 10, 20, 30, 40 };
	
	// получаем количество байт занимаемое массивом в памяти
	c__ __  "The size of array arr = " __  sizeof(arr) __  e..
	// проверяем сколько байт занисает один элемент массива
	c__ __  "The size of first element of array = " __  sizeof(arr[0]) __  e..
	// расчитываем количество элементов массива
	c__ __  "Array length = " __  sizeof(arr) / sizeof(arr[0]) __  " element(s)." __  e..

	c__ __  "-------------------------------------------------------------------------------------" __  e..

	const in. size _ 10;

	in. arr1[size];
	
	c__ __  "The size of array arr1 = " __  sizeof(arr1) __  e..
	c__ __  "The size of first element of array = " __  sizeof(arr1[0]) __  e..

	c__ __  "Array length = " __  sizeof(arr1) / sizeof(arr1[0]) __  " element(s)." __  e..
	 
	system("pause");
	r_ 0;
}

