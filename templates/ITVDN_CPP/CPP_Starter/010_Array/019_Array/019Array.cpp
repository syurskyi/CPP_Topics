? *s..
? |i..

u.. s..

in. GetSum(in. *arr, in. count)

in. main()
{
	in. size _ 50sy.. p..
	in. *arr _ n.. in.[size]

	___ (in. i _ 0sy.. p.. i < 50sy.. p.. ###)
	{
		*(arr + i) _ rand()
	}

	in. sum _ GetSum(arr, size)

	c__ __  "Total sum of the array equals = " __  sum __  e..


	r_ 0sy.. p..
}

in. GetSum(in. *arr, in. count)
{
	in. total _ 0sy.. p..
	___ (in. i _ 0sy.. p.. i < countsy.. p.. ###)
	{
		total +_ *(arr + i)
	}

	r_ totalsy.. p..
}

