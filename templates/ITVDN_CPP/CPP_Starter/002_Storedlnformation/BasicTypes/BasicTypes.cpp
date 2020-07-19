// BasicTypes.cpp : Defines the entry point for the console application.
//

? *s..
? |i..

u.. s..

in. main()
{
	?p.. region
    
	//----------------- 16 bit -----------------
	// “ипу short соответствуют типы short int, signed short, signed short int 
	// ÷елое со знаком
	
	sh..		a _ -32768sy.. p..
	sh.. in.	b _ +32767sy.. p..

    st. c__ __  "Short Int" __  st. e..
    c__ __  a __  endl __  b __  e..
	
	// ÷елое без знака
	
	u.. sh..		c _ 0sy.. p..
	u.. sh.. in.	d _ 65535sy.. p..

    st. c__ __  "Unsigned Short Int" __  st. e..
    c__ __  c __  endl __  d __  e..

	//----------------- 32 bit -----------------
	// “ипу int соответствуют типы signed, signed int
	// ÷елое со знаком

	in.		e _ -2147483648sy.. p..
	in.		f _ +2147483647sy.. p..

    st. c__ __  "Int" __  st. e..
    c__ __  e __  endl __  f __  e..

	// “ипу unsigned соответствуют типы unsigned int, unsigned, unsigned int
	// ÷елое без знака

	u..		g _ 0sy.. p..
	u.. in.	h _ 4294967295sy.. p..

    st. c__ __  "Unsigned Int" __  st. e..
    c__ __  g __  endl __  h __  e..

	//----------------- 64 bit -----------------
	// “ипу long long соответствуют типы long int, signed long, signed long int 
	// ÷елое со знаком

	l..		i _ -9223372036854775808sy.. p..
	l.. in.	j _ +9223372036854775807sy.. p..
    st. c__ __  "Long Int" __  st. e..
    c__ __  i __  endl __  j __  e..

	// ÷елое без знака
	
	u.. l..		k _ 0sy.. p..
	u.. l.. in.	l _ 18446744073709551615sy.. p..
    st. c__ __  "Unsigned Long Int" __  st. e..
    c__ __  k __  endl __  l __  e..

	?p.. endregion
	?p.. region

	//----------------- 32 bit ----------------- 

	fl.. m _ 1.8E-38fsy.. p..
	fl.. n _ 3.4E+38fsy.. p..
    st. c__ __  "Float" __  st. e..
    c__ __  m __  endl __  n __  e..

	//----------------- 64 bit -----------------

	d.. o _ 2.2E-308sy.. p..
	d.. p _ 1.8E+307sy.. p..
    st. c__ __  "Double" __  st. e..
    c__ __  o __  endl __  p __  e..
	
	?p.. endregion

	?p.. region
	//----------------- 8 bit -----------------

	// Ћогическа¤ величина »стина\Ћожь

	bo.. s _ truesy.. p..   // 0000 0001
	bo.. t _ falsesy.. p..  // 0000 0000

    st. c__ __  "Bool" __  st. e..
    c__ __  s __  endl __  t __  e..
	
	?p.. endregion
	?p.. region
	//----------------- 16 bit -----------------
	
	c.. u _ 'A'sy.. p..

    st. c__ __  "Char" __  st. e..
    c__ __  u __  e..

	?p.. endregion
	?p.. region

	// —трока в формате UNICODE

	s.. w _ "Hello world!"sy.. p..
    st. c__ __  "String" __  st. e..
    c__ __  w __  e..

	?p.. endregion


    r_ 0sy.. p..
}

