? *s..
? |i..
? |s..

u.. s..

// Перегруженные функции могут отличаться типом и количеством аргументов
v.. Function();
v.. Function(s.. s);
v.. Function(in. i);
v.. Function(d.. d);
v.. Function(s.. s, in. i);
v.. Function(in. i, s.. s);

// void Function(string); // Так делать нельзя

in. main()
{
	Function();                  // 1-я перегрузка.
	Function("A");               // 2-я перегрузка.
	Function(1);                 // 3-я перегрузка.
	Function(3.14);              // 4-я перегрузка.
	Function("B ", 2);           // 5-я перегрузка.
	Function(3, " C");           // 6-я перегрузка.

	system("pause");
    r_ 0;
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