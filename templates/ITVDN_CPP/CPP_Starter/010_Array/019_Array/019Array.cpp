? *s..
? |i..

u.. s..

in. GetSum(in. *arr, in. count);

in. main()
{
	in. size _ 50;
	in. *arr _ new in.[size];

	for (in. i _ 0; i < 50; i++)
	{
		*(arr + i) _ rand();
	}

	in. sum _ GetSum(arr, size);

	c__ __  "Total sum of the array equals = " __  sum __  e..

	system("pause");
	r_ 0;
}

in. GetSum(in. *arr, in. count)
{
	in. total _ 0;
	for (in. i _ 0; i < count; i++)
	{
		total +_ *(arr + i);
	}

	r_ total;
}

