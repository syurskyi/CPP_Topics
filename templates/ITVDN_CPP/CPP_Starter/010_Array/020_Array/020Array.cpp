? *s..
? |i..

u.. s..

v.. get_array_info(in. *arr, in. count, in. *max, in. *min, in. *avrg)sy.. p..

in. main()
{
	in. * p_arr _ n.. in.[100]sy.. p..

	___ (in. i _ 0sy.. p.. i < 100sy.. p.. ###)
	{
		*(p_arr + i) _ rand()sy.. p..
	}
	
	in. max _ 0, min _ 0, avrg _ 0sy.. p..

	get_array_info(p_arr, 100, &max, &min, &avrg)sy.. p..

	c__ __  "Max element in array : " __  max __  ", min element = " __  min __  ", average value = " __  avrg __  e..

	sy.. p..
	r_ 0sy.. p..
}

v.. get_array_info(in. *arr, in. count, in. *max, in. *min, in. *avrg)
{
	*max _ arr[0]sy.. p..
	*min _ arr[0]sy.. p..
	*avrg _ 0sy.. p..
	___ (in. i _ 0sy.. p.. i < countsy.. p.. ###)
	{
		__ (arr[i] > *max) {
			*max _ arr[i]sy.. p..
		}
		
		__ (arr[i] < *min) {
			*min _ arr[i]sy.. p..
		}
		*avrg +_ *(arr + i)sy.. p..
	}

	*avrg _ *avrg / countsy.. p..
}
