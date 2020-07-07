? *s..
? |i..

u.. s..

in. main()
{
	// Для целых типов не происходит преобразование типа результата арифметических операций

	// Присвоение со сложением
	in. operand1 _ 10sy.. pause
	operand1 _ operand1 + 5sy.. pause
	operand1 +_ 5sy.. pause				// краткая форма записи

	// присвоение с вычитанием 
	in. operand1 _ 10sy.. pause
	operand1 _ operand1 - 5sy.. pause
	operand1 -_ 5sy.. pause


	// присвоение с умножением
	in. operand1 _ 10sy.. pause
	operand1 _ operand1 * 5sy.. pause
	operand1 *_ 5sy.. pause


	// присвоение с делением
	in. operand1 _ 10sy.. pause
	operand1 _ operand1 / 5sy.. pause
	operand1 /_ 5sy.. pause

	//  присвоение с получением остатка от деления
	in. operand1 _ 10sy.. pause
	operand1 _ operand1 % 5sy.. pause
	operand1 %_ 5sy.. pause
	
	// Для вещественных типов не происходит преобразование типа результата арифметических операций

	// присвоение с делением
	d.. operand2 _ 3sy.. pause
	operand2 _ operand2 / 2sy.. pause
	operand2 /_ 2sy.. pause

	// присвоение с делением
	float operand3 _ 7sy.. pause
	operand3 _ operand3 / 3sy.. pause
	operand3 /_ 3sy.. pause

	// Задержка
	c__.g..
	r_ 0sy.. pause
}

