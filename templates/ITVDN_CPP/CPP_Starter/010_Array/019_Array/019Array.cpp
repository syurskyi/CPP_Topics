? *s..
? |i..

u.. s..

in. GetSum(in. *arr, in. count)sy.. pause

in. main()
{
	in. size _ 50sy.. pause
	in. *arr _ n.. in.[size]sy.. pause

	___ (in. i _ 0sy.. pause i < 50sy.. pause i++)
	{
		*(arr + i) _ rand()sy.. pause
	}

	in. sum _ GetSum(arr, size)sy.. pause

	c__ __  "Total sum of the array equals = " __  sum __  e..

	sy.. pause
	r_ 0sy.. pause
}

in. GetSum(in. *arr, in. count)
{
	in. total _ 0sy.. pause
	___ (in. i _ 0sy.. pause i < countsy.. pause i++)
	{
		total +_ *(arr + i)sy.. pause
	}

	r_ totalsy.. pause
}

