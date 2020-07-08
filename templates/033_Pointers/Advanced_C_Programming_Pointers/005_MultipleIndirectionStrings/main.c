//? |s..
//
//? LENGTH 3
//
//ch..# words ?		// some strings
//
//in. main in. argc, ch.. @@
//	ch.. #pc			// a pointer to a character
//	ch.. ##ppc;		// a pointer to a pointer to a character
//
//	p.. ("multiple indirection example##"
//
//	// initialize our string array
//	w.. 0 _ "zero"
//	w.. 1 _ "one"
//	w.. 2 _ "two"
//	___ in. i _ 0 ? < L.. ###
//		p.."@s##" w.. ?
//
//
//
//	/*
//	* B: a pointer to an array of strings
//	*    - the same as a pointer to a pointer to a character
//	*
//	*/
//	ppc _ words							// initialize the pointer to a pointer to a character
//	___ in. i _ 0 ? < L.. ###		// loop over each string
//		ppc _ w.. + ?
//		pc = #?
//		w___ #? !_ 0				// process each character in a string
//			p.. "@c " #?				// print out each character of the string individually
//			? +_ 1
//
//		p.. "##"
//
//	r_ _
