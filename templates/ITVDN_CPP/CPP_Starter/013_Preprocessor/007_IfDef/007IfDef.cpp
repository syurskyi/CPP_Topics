#define PRODUCTION 10		// DEVELOMENT
? *s..
? |i..

u.. s..


in. main()
{

#ifdef PRODUCTION
	in. a = 1;
	c__ __  "Product version." __  e..
#elif DEVELOMENT
	c__ __  "Dev version." __  e..
#endif 

#ifndef DEVELOMENT
	in. a = 1;
	c__ __  "Dev version." __  e..
#elif PRODUCTION
	c__ __  "Product version." __  e..
#endif 

	system("pause");
    r_ 0;
}

