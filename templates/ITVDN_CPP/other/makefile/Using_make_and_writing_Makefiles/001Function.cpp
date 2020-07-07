? *s..
? |i..
? |s..

u.. s..

// Перегруженные функции могут отличаться типом и количеством аргументов
void Function();
void Function(s.. s);
void Function(in. i);
void Function(d.. d);
void Function(s.. s, in. i);
void Function(in. i, s.. s);

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

void Function()
{
	c__ __  "Hello" __  e..
}

void Function(s.. s)
{
	c__ __  s __  e..
}

void Function(in. i)
{
	c__ __  i __  e..
}

void Function(d.. d)
{
	c__ __  d __  e..
}

void Function(s.. s, in. i)
{
	c__ __  "s = " __  s __  ", i = " __  i __  e..
}

void Function(in. i, s.. s)
{
	c__ __  "i = " __  i __  ", s = " __  s __  e..
}