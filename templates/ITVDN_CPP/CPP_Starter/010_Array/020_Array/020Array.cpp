? *s..
? |i..

u.. s..

void get_array_info(in. *arr, in. count, in. *max, in. *min, in. *avrg);

in. main()
{
	in. * p_arr _ new in.[100];

	___ (in. i _ 0; i < 100; i++)
	{
		*(p_arr + i) _ rand();
	}
	
	in. max _ 0, min _ 0, avrg _ 0;

	get_array_info(p_arr, 100, &max, &min, &avrg);

	c__ __  "Max element in array : " __  max __  ", min element = " __  min __  ", average value = " __  avrg __  e..

	system("pause");
	r_ 0;
}

void get_array_info(in. *arr, in. count, in. *max, in. *min, in. *avrg)
{
	*max _ arr[0];
	*min _ arr[0];
	*avrg _ 0;
	___ (in. i _ 0; i < count; i++)
	{
		__ (arr[i] > *max) {
			*max _ arr[i];
		}
		
		__ (arr[i] < *min) {
			*min _ arr[i];
		}
		*avrg +_ *(arr + i);
	}

	*avrg _ *avrg / count;
}
