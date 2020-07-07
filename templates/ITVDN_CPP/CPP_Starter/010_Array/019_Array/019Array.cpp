? *s..
? |i..

u.. s..

in. GetSum(in. *arr, in. count);

in. main()
{
	in. size = 50;
	in. *arr = new in.[size];

	for (in. i = 0; i < 50; i++)
	{
		*(arr + i) = rand();
	}

	in. sum = GetSum(arr, size);

	c__ __  "Total sum of the array equals = " __  sum __  e..

	system("pause");
	r_ 0;
}

in. GetSum(in. *arr, in. count)
{
	in. total = 0;
	for (in. i = 0; i < count; i++)
	{
		total += *(arr + i);
	}

	r_ total;
}

