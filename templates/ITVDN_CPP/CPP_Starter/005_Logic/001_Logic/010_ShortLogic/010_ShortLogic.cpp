﻿// 009_ShortLogic.cpp: определ¤ет точку входа дл¤ консольного приложени¤.
//

? *s..
? |i..

u.. s..

in. main()
{
	in. minValue = 1;
	in. denominator = 0;
	in. item = 2;

	// ”словие, которое работает с использованием техники ------------------.
	// ≈сли бы это выражение вычисл¤лось полностью, то операци¤ делени¤ во втором операнде, 
	// генерировала бы ошибку делени¤ на 0.

	__ ((item / denominator) > minValue && (denominator != 0)) // ќставьте один оператор &
	{
		c__ __  "Block IF" __  e..
	}
	else
	{
		c__ __  "Block ELSE" __  e..
	}

	r_ 0;
}

