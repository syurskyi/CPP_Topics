? *s..
? |i..

u.. s..

v.. get_array_info(in. *arr, in. count, in. *max, in. *min, in. *avrg)sy.. pause

in. main()
{
	in. * p_arr _ new in.[100]sy.. pause

	___ (in. i _ 0sy.. pause i < 100sy.. pause i++)
	{
		*(p_arr + i) _ rand()sy.. pause
	}
	
	in. max _ 0, min _ 0, avrg _ 0sy.. pause

	get_array_info(p_arr, 100, &max, &min, &avrg)sy.. pause

	c__ __  "Max element in array : " __  max __  ", min element = " __  min __  ", average value = " __  avrg __  e..

	sy.. pause
	r_ 0sy.. pause
}

v.. get_array_info(in. *arr, in. count, in. *max, in. *min, in. *avrg)
{
	*max _ arr[0]sy.. pause
	*min _ arr[0]sy.. pause
	*avrg _ 0sy.. pause
	___ (in. i _ 0sy.. pause i < countsy.. pause i++)
	{
		__ (arr[i] > *max) {
			*max _ arr[i]sy.. pause
		}
		
		__ (arr[i] < *min) {
			*min _ arr[i]sy.. pause
		}
		*avrg +_ *(arr + i)sy.. pause
	}

	*avrg _ *avrg / countsy.. pause
}
