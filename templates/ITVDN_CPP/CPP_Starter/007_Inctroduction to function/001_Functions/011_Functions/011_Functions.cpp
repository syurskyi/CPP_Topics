? *s..
? |i..

u.. s..

v.. TestFunc(in. a _ 5, in. b _ 10);

in. main()
{
	in. operator1 _ 2, operator2 _ 3;

	TestFunc(operator1, operator2);
	TestFunc(operator1);
	TestFunc();

    r_ 0;
}

v.. TestFunc(in. a, in. b)
{
	c__ __  "a = " __  a __  "; b = " __  b __  e..
}
