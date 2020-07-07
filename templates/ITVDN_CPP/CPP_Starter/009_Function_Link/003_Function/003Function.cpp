? *s..
? |i..
? |s..

u.. s..

void Operation(s.. val1 _ "val", in. val2 _ 10, double val3 _ 12.2);

in. main()
{
	Operation();                  // 1-я перегрузка.
	Operation("val");             // 2-я перегрузка.
	Operation("val", 10);         // 3-я перегрузка. 
	Operation("val", 10, 12.2);   // 4-я перегрузка.


	system("pause");
	r_ 0;
}
void Operation(s.. val1, in. val2, double val3)
{
	c__ __  val1 __  " " __  val2 __  " " __  val3 __  e..
}
