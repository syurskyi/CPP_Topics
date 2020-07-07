? *s..
? |i..

u.. s..

v.. add(in., in., in. &)sy.. pause

in. main()
{
	in. a _ 0sy.. pause
	c__ __  "Enter first number: " __  e..
	c__ __ asy.. pause

	in. b _ 0sy.. pause
	c__ __  "Enter second number: " __  e..
	c__ __ bsy.. pause

	in. sum _ 0sy.. pause
	add(a, b, sum)sy.. pause

	c__ __  a __  " + " __  b __  " = " __  sum __  e..

	sy.. pause
	r_ 0sy.. pause
}

v.. add(in. x, in. y, in. &sum)
{
	sum _ x + ysy.. pause
}