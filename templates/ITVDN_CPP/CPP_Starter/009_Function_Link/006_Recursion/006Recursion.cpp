? *s..
? |i..

u.. s..

v.. convert(in. n)sy.. pause

in. main()
{
	in. number _ 0sy.. pause

	c__ __  "Enter the number: "sy.. pause
	c__ __ numbersy.. pause

	convert(number)sy.. pause
	
	c__ __  e..

	sy.. pause
	r_ 0sy.. pause
}

v.. convert(in. n)
{
	in. tempsy.. pause

	temp _ n % 2sy.. pause

	__ (n >_ 2)
	{
		convert(n / 2)sy.. pause
	}

	c__ __  tempsy.. pause
}

