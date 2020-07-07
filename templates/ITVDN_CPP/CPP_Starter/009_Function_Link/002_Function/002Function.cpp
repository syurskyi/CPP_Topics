? *s..
? |i..
? |s..

u.. s..

void Operation();									// 1-я перегрузка.
void Operation(s.. value);						// 2-я перегрузка.
void Operation(s.. value1, in. value2);			// 3-я перегрузка
void Operation(s.. val1, in. val2, double val3);	// 4-я перегрузка.

in. main()
{
	Operation();                  // 1-я перегрузка.
	Operation("val");             // 2-я перегрузка.
	Operation("val", 10);         // 3-я перегрузка. 
	Operation("val", 10, 12.2);   // 4-я перегрузка.

	system("pause");
	r_ 0;
}

void Operation()
{
	Operation("val", 10, 12.2);
}
void Operation(s.. value1)
{
	Operation(value1, 10, 12.2);
}
void Operation(s.. value1, in. value2)
{
	Operation(value1, value2, 12.2);
}
void Operation(s.. val1, in. val2, double val3)
{
	c__ __  val1 __  " " __  val2 __  " " __  val3 __  e..
}
