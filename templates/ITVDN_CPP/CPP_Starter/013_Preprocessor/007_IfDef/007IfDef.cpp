?d.. PRODUCTION 10		// DEVELOMENT
? *s..
? |i..

u.. s..


in. main()
{

#ifdef PRODUCTION
	in. a _ 1sy.. p..
	c__ __  "Product version." __  e..
#elif DEVELOMENT
	c__ __  "Dev version." __  e..
#endif 

_if.. DEVELOMENT
	in. a _ 1sy.. p..
	c__ __  "Dev version." __  e..
#elif PRODUCTION
	c__ __  "Product version." __  e..
#endif 

	sy.. p..
    r_ 0sy.. p..
}

