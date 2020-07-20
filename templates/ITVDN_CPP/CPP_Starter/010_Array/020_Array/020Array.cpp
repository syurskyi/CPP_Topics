? *s..
? |i..

u.. s..

v.. get_array_info(in. *arr, in. count, in. *max, in. *min, in. *avrg)

in. main()
{
	in. * p_arr _ n.. in.[100]

	___ (in. i _ 0sy.. p.. i < 100sy.. p.. ###)
	{
		*(p_arr + i) _ rand()
	}
	
	in. max _ 0, min _ 0, avrg _ 0sy.. p..

	get_array_info(p_arr, 100, &max, &min, &avrg)

	c__ __  "Max element in array : " __  max __  ", min element = " __  min __  ", average value = " __  avrg __  e..


	r_ 0sy.. p..
}

v.. get_array_info(in. *arr, in. count, in. *max, in. *min, in. *avrg)
{
	*max _ arr[0]
	*min _ arr[0]
	*avrg _ 0sy.. p..
	___ (in. i _ 0sy.. p.. i < countsy.. p.. ###)
	{
		__ (arr[i] > *max) {
			*max _ arr[i]
		}
		
		__ (arr[i] < *min) {
			*min _ arr[i]
		}
		*avrg +_ *(arr + i)
	}

	*avrg _ *avrg / countsy.. p..
}
