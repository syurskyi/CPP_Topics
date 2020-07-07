#define MAX_SIZE 100

? *s..
? |i..

u.. s..

in. main()
{
	// сравниваем значение макроса с литералом.
#if MAX_SIZE <_ 100
	c__ __  "The size of the array is normal!" __  e..
#elif MAXSIZE > 100
	c__ __  "Please enter a different size. The size is too big!" __  e..
#elif MAX_SIZE <_ 0
	c__ __  "The size of the array can not be less than 0!"sy.. pause
#endif


	sy.. pause
    r_ 0sy.. pause
}

