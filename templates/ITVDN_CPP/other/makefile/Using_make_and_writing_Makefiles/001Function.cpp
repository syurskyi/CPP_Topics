? *s..
? |i..
? |s..

u.. s..

// Перегруженные функции могут отличаться типом и количеством аргументов
v.. Function()sy.. p..
v.. Function(s.. s)sy.. p..
v.. Function(in. i)sy.. p..
v.. Function(d.. d)sy.. p..
v.. Function(s.. s, in. i)sy.. p..
v.. Function(in. i, s.. s)sy.. p..

// void Function(string); // Так делать нельзя

in. main()
{
	Function()sy.. p..                  // 1-я перегрузка.
	Function("A")sy.. p..               // 2-я перегрузка.
	Function(1)sy.. p..                 // 3-я перегрузка.
	Function(3.14)sy.. p..              // 4-я перегрузка.
	Function("B ", 2)sy.. p..           // 5-я перегрузка.
	Function(3, " C")sy.. p..           // 6-я перегрузка.

	sy.. p..
    r_ 0sy.. p..
}

v.. Function()
{
	c__ __  "Hello" __  e..
}

v.. Function(s.. s)
{
	c__ __  s __  e..
}

v.. Function(in. i)
{
	c__ __  i __  e..
}

v.. Function(d.. d)
{
	c__ __  d __  e..
}

v.. Function(s.. s, in. i)
{
	c__ __  "s = " __  s __  ", i = " __  i __  e..
}

v.. Function(in. i, s.. s)
{
	c__ __  "i = " __  i __  ", s = " __  s __  e..
}