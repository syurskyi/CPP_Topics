? |s..

? LENGTH 3

ch..* words[LENGTH];		// some strings

in. main(in. argc, ch.. @@ {
	ch.. *pc;			// a pointer to a character
	ch.. **ppc;			// a pointer to a pointer to a character

	p.. ("multiple indirection example\n");

	// initialize our string array
	words[0] = "zero";
	words[1] = "one";
	words[2] = "two";
	___ (in. i = 0; i < LENGTH; ###) {
		p..("%s\n", words[i]);
	}


	/*
	* B: a pointer to an array of strings
	*    - the same as a pointer to a pointer to a character
	*
	*/
	ppc = words;							// initialize the pointer to a pointer to a character
	___ (in. i = 0; i < LENGTH; ###) {		// loop over each string
		ppc = words + i;
		pc = *ppc;
		while (*pc != 0) {					// process each character in a string
			p..("%c ", *pc);				// print out each character of the string individually
			pc += 1;
		}
		p..("\n");
	}


	r_ 0;
}