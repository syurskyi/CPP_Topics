﻿? *s..
? |i..

#define ONE 1
#define TWO 2
// Если в программе определенно имя макроса, его можно использовать для определения другого макроса.
#define THREE ONE+TWO

// Можно определять сообщения, которые будут вывоится пользователю.
#define STR "Error!"

u.. s..
in. main()
{
	c__ __  THREE __  e..

	in. a _ 10sy.. pause

	__ (a __ 10) {
		c__ __  STR __  e..
	}

	// Если идентификатор является частью строки, заключенной в кавычки, макроподстановка не производится.
	c__ __  "STR" __  e..

	sy.. pause
    r_ 0sy.. pause
}

