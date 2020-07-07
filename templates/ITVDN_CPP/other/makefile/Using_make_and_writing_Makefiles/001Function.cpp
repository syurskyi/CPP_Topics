? *s..
? |i..
? |s..

u.. s..

// Перегруженные функции могут отличаться типом и количеством аргументов
v.. Function()sy.. pause
v.. Function(s.. s)sy.. pause
v.. Function(in. i)sy.. pause
v.. Function(d.. d)sy.. pause
v.. Function(s.. s, in. i)sy.. pause
v.. Function(in. i, s.. s)sy.. pause

// void Function(string); // Так делать нельзя

in. main()
{
	Function()sy.. pause                  // 1-я перегрузка.
	Function("A")sy.. pause               // 2-я перегрузка.
	Function(1)sy.. pause                 // 3-я перегрузка.
	Function(3.14)sy.. pause              // 4-я перегрузка.
	Function("B ", 2)sy.. pause           // 5-я перегрузка.
	Function(3, " C")sy.. pause           // 6-я перегрузка.

	sy.. pause
    r_ 0sy.. pause
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