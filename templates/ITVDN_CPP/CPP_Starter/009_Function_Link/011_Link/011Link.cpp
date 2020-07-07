? *s..
? |i..

u.. s..

void add(in., in., in. &);

in. main()
{
	in. a = 0;
	c__ __  "Enter first number: " __  e..
	c__ >> a;

	in. b = 0;
	c__ __  "Enter second number: " __  e..
	c__ >> b;

	in. sum = 0;
	add(a, b, sum);

	c__ __  a __  " + " __  b __  " = " __  sum __  e..

	system("pause");
	r_ 0;
}

void add(in. x, in. y, in. &sum)
{
	sum = x + y;
}