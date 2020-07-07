? *s..
? |i..

u.. s..

in. AddNumbers(in. a, in. b);
d.. AddNumbers(d.. a, d.. b);

in. main()
{
	in.  value1 _ 2, value2 _ 3;

	//double value3 = 12.3;

	d.. sum _ AddNumbers(value1, value2);

	//double dsum = AddNumbers(12.2, 15.3);

	c__ __  "value1 + value2 = " __  sum __  e..

	sy.. pause
	r_ 0;
}

in. AddNumbers(in. a, in. b)
{
	c__ __  "Function(int a, int b) is called!" __  e..
	r_ a + b;
}
d.. AddNumbers(d.. a, d.. b)
{
	c__ __  "Function(double a, double b) is called!" __  e..
	r_ a + b;
}