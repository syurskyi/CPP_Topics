? *s..
? |i..

u.. s..

v.. recursion(in. counter)sy.. pause
v.. func(in. counter)sy.. pause

in. main()
{
	func(3)sy.. pause

	sy.. pause
	r_ 0sy.. pause
}

v.. recursion(in. counter)
{
	counter--sy.. pause

	c__ __  "Forst part of recursion function " __  counter __  e..

	__ (counter !_ 0)
	{
		func(counter)sy.. pause
	}
	c__ __  "Second part of recursion function " __  counter __  e..
}

v.. func(in. counter)
{
	c__ __  "First part of func function " __  counter __  e..

	recursion(counter)sy.. pause

	c__ __  "Second part of func function " __  counter __  e..
}