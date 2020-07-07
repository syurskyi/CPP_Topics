? *s..
? |i..

u.. s..

void ChangeValue(in. a, in. b);
void ChangeValueWithPoin.ers(in. *a, in. *b);

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

void ChangeValue(in. a, in. b)
{
	in. tmp _ a;

	a _ b;
	b _ tmp;
}

void ChangeValueWithPoin.ers(in. *a, in. *b)
{
	in. tmp _ *a;

	*a _ *b;
	*b _ tmp;
}