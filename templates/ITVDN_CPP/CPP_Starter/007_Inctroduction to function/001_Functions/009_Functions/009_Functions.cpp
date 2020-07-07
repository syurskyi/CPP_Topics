? *s..
? |i..
? |s..

u.. s..

s.. Compare(in., in.);

in. main()
{
	in. value1 _ 15, value2 _ 15;
	s.. result;

	result _ Compare(value1, value2);

	c__ __  result __  e..

	sy.. pause
	r_ 0;
}

s.. Compare(in. val1, in. val2)
{
	s.. result _ "";

	__ (val1 < val2)
	{
		result _ "Comparison Less Then";
	}
	____ __ (val1 > val2)
	{
		result _ "Comparison Greater Then";
	}
	____
	{
		result _ "Comparison Equal";
	}

	r_ result;
}