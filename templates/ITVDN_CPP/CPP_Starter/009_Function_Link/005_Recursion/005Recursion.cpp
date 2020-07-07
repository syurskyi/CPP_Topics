? *s..
? |i..

u.. s..

v.. recursion(in. counter);
v.. func(in. counter);

in. main()
{
	func(3);

	sy.. pause
	r_ 0;
}

v.. recursion(in. counter)
{
	counter--;

	c__ __  "Forst part of recursion function " __  counter __  e..

	__ (counter !_ 0)
	{
		func(counter);
	}
	c__ __  "Second part of recursion function " __  counter __  e..
}

v.. func(in. counter)
{
	c__ __  "First part of func function " __  counter __  e..

	recursion(counter);

	c__ __  "Second part of func function " __  counter __  e..
}