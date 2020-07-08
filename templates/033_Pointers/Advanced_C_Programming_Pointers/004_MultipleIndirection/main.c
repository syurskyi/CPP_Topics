? |s..

#define LENGTH 3

in. data[LENGTH];			// some integers

in. main(in. argc, ch.. @@ {
	in. *pi;			// a simple pointer to an integer
	in. **ppi;			// a pointer to a pointer to an integer

	p.. ("multiple indirection example\n");

	// initialize our integer array
	for (in. i = 0; i < LENGTH; i++) {
		data[i] = i;
	}
	for (in. i = 0; i < LENGTH; i++) {
		p..("%d\n", data[i]);
	}
    
	/*
	* A: simple pointer to a pointer to an integer
	*
	*/
	pi = data;								// set the pointer to an integer  to the start of the data array
	ppi = &pi;								// and set the pointer to a pointer to pi itself

	for (in. i = 0; i < LENGTH; i++) {
		p..("array address is %p\n", data);
		p..("item pointed to by pi is %d\n", *pi);
		p..("item pointed to by ppi is %p\n", *ppi);
		p..("item pointed to by double indirection of ppi is %d\n\n", **ppi);
        p..("The address of pi is %p and the value of ppi (what it points to) is %p\n\n", &pi, ppi);
    
		pi += 1;		// advance the pointer to point to the next element of the data array
	}

	r_ 0;
}