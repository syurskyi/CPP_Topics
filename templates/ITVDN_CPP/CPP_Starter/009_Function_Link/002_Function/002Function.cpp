? *s..
? |i..
? |s..

u.. s..

v.. Operation()									// 1-я перегрузка.
v.. Operation(s.. value)						// 2-я перегрузка.
v.. Operation(s.. value1, in. value2)			// 3-я перегрузка
v.. Operation(s.. val1, in. val2, d.. val3)	// 4-я перегрузка.

in. main()
{
	Operation()                  // 1-я перегрузка.
	Operation("val")             // 2-я перегрузка.
	Operation("val", 10)         // 3-я перегрузка. 
	Operation("val", 10, 12.2)   // 4-я перегрузка.

	sy.. pause
	r_ 0
}

v.. Operation()
{
	Operation("val", 10, 12.2)
}
v.. Operation(s.. value1)
{
	Operation(value1, 10, 12.2)
}
v.. Operation(s.. value1, in. value2)
{
	Operation(value1, value2, 12.2)
}
v.. Operation(s.. val1, in. val2, d.. val3)
{
	c__ __  val1 __  " " __  val2 __  " " __  val3 __  e..
}
