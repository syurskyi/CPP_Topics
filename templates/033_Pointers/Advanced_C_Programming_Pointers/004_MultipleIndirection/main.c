//? |s..
//
//? LENGTH 3
//
//in. data ?			// some integers
//
//in. main in. argc, ch.. @@
//	in. #pi			// a simple pointer to an integer
//	in. ##_pi			// a pointer to a pointer to an integer
//
//	p.. "multiple indirection example##"
//
//	// initialize our integer array
//	___ in. i _ 0 ? < L.. ###
//		data ? _ ?
//
//	___ in. i _ 0 ? < L.. ###
//		p.."@d##" data ?
//
//
//	/*
//	* A: simple pointer to a pointer to an integer
//	*
//	*/
//	pi _ data								// set the pointer to an integer  to the start of the data array
//	_pi _ #?								// and set the pointer to a pointer to pi itself
//
//	___ in. i _ 0 ? < L.. ###
//		p.. "array address is @p", d..
//		p.. "item pointed to by pi is @d##" #p.
//		p.. "item pointed to by ppi is @p##" #_p.
//		p.. "item pointed to by double indirection of ppi is #d####", ##_p.
//        p.. "The address of pi is #p and the value of ppi (what it points to) is @p####" #p. _p.
//
//		p. +_ 1		// advance the pointer to point to the next element of the data array
//
//
//	r_ _
