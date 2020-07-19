? *s..
? |i..

u.. s..

in. GetSum(in. *arr, in. count)sy.. p..

in. main()
{
	in. size _ 50sy.. p..
	in. *arr _ n.. in.[size]sy.. p..

	___ (in. i _ 0sy.. p.. i < 50sy.. p.. ###)
	{
		*(arr + i) _ rand()sy.. p..
	}

	in. sum _ GetSum(arr, size)sy.. p..

	c__ __  "Total sum of the array equals = " __  sum __  e..

	sy.. p..
	r_ 0sy.. p..
}

in. GetSum(in. *arr, in. count)
{
	in. total _ 0sy.. p..
	___ (in. i _ 0sy.. p.. i < countsy.. p.. ###)
	{
		total +_ *(arr + i)sy.. p..
	}

	r_ totalsy.. p..
}

