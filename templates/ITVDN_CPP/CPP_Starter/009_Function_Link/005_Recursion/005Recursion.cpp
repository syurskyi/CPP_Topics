? *s..
? |i..

u.. s..

void recursion(in. counter);
void func(in. counter);

in. main()
{
	func(3);

	system("pause");
	r_ 0;
}

void recursion(in. counter)
{
	counter--;

	c__ __  "Forst part of recursion function " __  counter __  e..

	__ (counter != 0)
	{
		func(counter);
	}
	c__ __  "Second part of recursion function " __  counter __  e..
}

void func(in. counter)
{
	c__ __  "First part of func function " __  counter __  e..

	recursion(counter);

	c__ __  "Second part of func function " __  counter __  e..
}