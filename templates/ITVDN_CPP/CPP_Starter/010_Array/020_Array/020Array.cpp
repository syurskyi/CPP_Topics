? *s..
? |i..

u.. s..

void get_array_info(in. *arr, in. count, in. *max, in. *min, in. *avrg);

in. main()
{
	in. * p_arr = new in.[100];

	for (in. i = 0; i < 100; i++)
	{
		*(p_arr + i) = rand();
	}
	
	in. max = 0, min = 0, avrg = 0;

	get_array_info(p_arr, 100, &max, &min, &avrg);

	c__ __  "Max element in array : " __  max __  ", min element = " __  min __  ", average value = " __  avrg __  e..

	system("pause");
	r_ 0;
}

void get_array_info(in. *arr, in. count, in. *max, in. *min, in. *avrg)
{
	*max = arr[0];
	*min = arr[0];
	*avrg = 0;
	for (in. i = 0; i < count; i++)
	{
		if (arr[i] > *max) {
			*max = arr[i];
		}
		
		if (arr[i] < *min) {
			*min = arr[i];
		}
		*avrg += *(arr + i);
	}

	*avrg = *avrg / count;
}
