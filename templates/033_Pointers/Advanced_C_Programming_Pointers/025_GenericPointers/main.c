//? |s..
//
//? LENGTH 3
//
//in. data ?			// some integers
//ch..# words ?		// some strings
//
//in. main in. argc, ch.. @@
//	v.. #gp			// a generic pointer
//
//	p.. ("generic pointer example##"
//
//	// initialize our integer array
//	___ in. i _ 0 ? < L.. ###
//		d.. ? _ ?
//
//	___ in. i _ 0 ? < L.. ###
//		p..("@d##" d.. ?
//
//
//    // initialize our string array
//	w.. 0 _ "zero"
//	w.. 1 _ "one"
//	w.. 2 _ "two"
//	___ in. i _ 0 ? < L.. ###
//		p.. "@s##" w.. ?
//
//
//
//	/*
//	* C: example of a generic pointer
//	*
//	*/
//	gp _ data								    // set the generic pointer to the start of the integer array
//	p..("##data array address is @p##" ?		// and print it out - note that a cast is not needed
//	// now print out the first item in the array
//	// - a cast is now needed to let the compiler know what sort of thing is being pointed to by the generic pointer
//	p..("item pointed to by gp is @d##", #|in.# ?
//	// the cast tells the compiler what the address type is and so we can do address arthimetic
//	? _ in.# ? + 1
//	p..("item pointed to by gp is now @d##" #|in.#|?
//
//
//    gp _ words								    // set the generic pointer to the start of the string array
//	p..("##words array address is #p##" ?		// and print it out - note that a cast is not needed
//	// now print out the first item in the array
//	// - a cast is now needed to let the compiler know this is a pointer to a pointer
//	p..("item pointed to by gp is @s##", #|ch..##|?
//	// the cast tells the compiler what the address type is and so we can do address arthimetic
//	gp _  ch..##|? + 1
//	p..("item pointed to by gp is now @s##", #|ch..##|?
//
//	r_ _
