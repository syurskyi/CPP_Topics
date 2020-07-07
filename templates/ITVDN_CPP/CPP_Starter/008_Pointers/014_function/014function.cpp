? *s..
? |i..

u.. s..

v.. ChangeValue(in. a, in. b);
v.. ChangeValueWithPoin.ers(in. *a, in. *b);

in. main()
{
	in. a _ 10, b _ 15;

	c__ __  "Before call functions: a = " __  a __  ", b = " __  b __  e..

	ChangeValue(a, b);

	c__ __  "After call ChangeValue: a = " __  a __  ", b = " __  b __  e..

	ChangeValueWithPoin.ers(&a, &b);

	c__ __  "After call ChangeValueWithPointers: a = " __  a __  ", b = " __  b __  e..

	system("pause");
	r_ 0;
}

v.. ChangeValue(in. a, in. b)
{
	in. tmp _ a;

	a _ b;
	b _ tmp;
}

v.. ChangeValueWithPoin.ers(in. *a, in. *b)
{
	in. tmp _ *a;

	*a _ *b;
	*b _ tmp;
}