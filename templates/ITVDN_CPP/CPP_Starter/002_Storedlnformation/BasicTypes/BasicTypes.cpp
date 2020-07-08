// BasicTypes.cpp : Defines the entry point for the console application.
//

? *s..
? |i..

u.. s..

in. main()
{
	#pragma region 
    
	//----------------- 16 bit -----------------
	// “ипу short соответствуют типы short int, signed short, signed short int 
	// ÷елое со знаком
	
	sh..		a _ -32768sy.. pause
	sh.. in.	b _ +32767sy.. pause

    std::c__ __  "Short Int" __  std::e..
    c__ __  a __  endl __  b __  e..
	
	// ÷елое без знака
	
	unsigned sh..		c _ 0sy.. pause
	unsigned sh.. in.	d _ 65535sy.. pause

    std::c__ __  "Unsigned Short Int" __  std::e..
    c__ __  c __  endl __  d __  e..

	//----------------- 32 bit -----------------
	// “ипу int соответствуют типы signed, signed int
	// ÷елое со знаком

	in.		e _ -2147483648sy.. pause
	in.		f _ +2147483647sy.. pause

    std::c__ __  "Int" __  std::e..
    c__ __  e __  endl __  f __  e..

	// “ипу unsigned соответствуют типы unsigned int, unsigned, unsigned int
	// ÷елое без знака

	unsigned		g _ 0sy.. pause
	unsigned in.	h _ 4294967295sy.. pause

    std::c__ __  "Unsigned Int" __  std::e..
    c__ __  g __  endl __  h __  e..

	//----------------- 64 bit -----------------
	// “ипу long long соответствуют типы long int, signed long, signed long int 
	// ÷елое со знаком

	l..		i _ -9223372036854775808sy.. pause
	l.. in.	j _ +9223372036854775807sy.. pause
    std::c__ __  "Long Int" __  std::e..
    c__ __  i __  endl __  j __  e..

	// ÷елое без знака
	
	unsigned l..		k _ 0sy.. pause
	unsigned l.. in.	l _ 18446744073709551615sy.. pause
    std::c__ __  "Unsigned Long Int" __  std::e..
    c__ __  k __  endl __  l __  e..

	#pragma endregion
	#pragma region

	//----------------- 32 bit ----------------- 

	float m _ 1.8E-38fsy.. pause
	float n _ 3.4E+38fsy.. pause
    std::c__ __  "Float" __  std::e..
    c__ __  m __  endl __  n __  e..

	//----------------- 64 bit -----------------

	d.. o _ 2.2E-308sy.. pause
	d.. p _ 1.8E+307sy.. pause
    std::c__ __  "Double" __  std::e..
    c__ __  o __  endl __  p __  e..
	
	#pragma endregion

	#pragma region
	//----------------- 8 bit -----------------

	// Ћогическа¤ величина »стина\Ћожь

	bo.. s _ truesy.. pause   // 0000 0001
	bo.. t _ falsesy.. pause  // 0000 0000

    std::c__ __  "Bool" __  std::e..
    c__ __  s __  endl __  t __  e..
	
	#pragma endregion
	#pragma region
	//----------------- 16 bit -----------------
	
	c.. u _ 'A'sy.. pause

    std::c__ __  "Char" __  std::e..
    c__ __  u __  e..

	#pragma endregion
	#pragma region

	// —трока в формате UNICODE

	s.. w _ "Hello world!"sy.. pause
    std::c__ __  "String" __  std::e..
    c__ __  w __  e..

	#pragma endregion


    r_ 0sy.. pause
}

