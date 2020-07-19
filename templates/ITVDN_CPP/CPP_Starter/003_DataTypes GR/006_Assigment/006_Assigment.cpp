? *s..
? |i..

u.. s..

in. main()
{
	// Для целых типов не происходит преобразование типа результата арифметических операций

	// Присвоение со сложением
	in. operand1 _ 10sy.. p..
	operand1 _ operand1 + 5sy.. p..
	operand1 +_ 5sy.. p..				// краткая форма записи

	// присвоение с вычитанием 
	in. operand1 _ 10sy.. p..
	operand1 _ operand1 - 5sy.. p..
	operand1 -_ 5sy.. p..


	// присвоение с умножением
	in. operand1 _ 10sy.. p..
	operand1 _ operand1 * 5sy.. p..
	operand1 *_ 5sy.. p..


	// присвоение с делением
	in. operand1 _ 10sy.. p..
	operand1 _ operand1 / 5sy.. p..
	operand1 /_ 5sy.. p..

	//  присвоение с получением остатка от деления
	in. operand1 _ 10sy.. p..
	operand1 _ operand1 % 5sy.. p..
	operand1 %_ 5sy.. p..
	
	// Для вещественных типов не происходит преобразование типа результата арифметических операций

	// присвоение с делением
	d.. operand2 _ 3sy.. p..
	operand2 _ operand2 / 2sy.. p..
	operand2 /_ 2sy.. p..

	// присвоение с делением
	fl.. operand3 _ 7sy.. p..
	operand3 _ operand3 / 3sy.. p..
	operand3 /_ 3sy.. p..

	// Задержка
	c__.g..
	r_ 0sy.. p..
}

