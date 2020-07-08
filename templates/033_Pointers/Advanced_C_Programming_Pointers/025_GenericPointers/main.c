? |s..

? LENGTH 3

in. data[LENGTH];			// some integers
ch..* words[LENGTH];		// some strings

in. main(in. argc, ch.. @@ {
	void *gp;			// a generic pointer    
    
	p.. ("generic pointer example\n");

	// initialize our integer array
	___ (in. i = 0; i < LENGTH; ###) {
		data[i] = i;
	}
	___ (in. i = 0; i < LENGTH; ###) {
		p..("%d\n", data[i]);
	}
    
    // initialize our string array
	words[0] = "zero";
	words[1] = "one";
	words[2] = "two";
	___ (in. i = 0; i < LENGTH; ###) {
		p..("%s\n", words[i]);
	}
	    
    
	/* 
	* C: example of a generic pointer
	*
	*/
	gp = data;								    // set the generic pointer to the start of the integer array
	p..("\ndata array address is %p\n", gp);		// and print it out - note that a cast is not needed
	// now print out the first item in the array
	// - a cast is now needed to let the compiler know what sort of thing is being pointed to by the generic pointer
	p..("item pointed to by gp is %d\n", *(in.*)gp);
	// the cast tells the compiler what the address type is and so we can do address arthimetic
	gp = (in.*)gp + 1;
	p..("item pointed to by gp is now %d\n", *(in.*)gp);
    
    
    gp = words;								    // set the generic pointer to the start of the string array
	p..("\nwords array address is %p\n", gp);		// and print it out - note that a cast is not needed
	// now print out the first item in the array
	// - a cast is now needed to let the compiler know this is a pointer to a pointer
	p..("item pointed to by gp is %s\n", *(ch..**)gp);
	// the cast tells the compiler what the address type is and so we can do address arthimetic
	gp = (ch..**)gp + 1;
	p..("item pointed to by gp is now %s\n", *(ch..**)gp);
    
	r_ 0;
}