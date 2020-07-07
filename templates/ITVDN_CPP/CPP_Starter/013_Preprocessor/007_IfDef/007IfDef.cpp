?d.. PRODUCTION 10		// DEVELOMENT
? *s..
? |i..

u.. s..


in. main()
{

#ifdef PRODUCTION
	in. a _ 1sy.. pause
	c__ __  "Product version." __  e..
#elif DEVELOMENT
	c__ __  "Dev version." __  e..
#endif 

#ifndef DEVELOMENT
	in. a _ 1sy.. pause
	c__ __  "Dev version." __  e..
#elif PRODUCTION
	c__ __  "Product version." __  e..
#endif 

	sy.. pause
    r_ 0sy.. pause
}

