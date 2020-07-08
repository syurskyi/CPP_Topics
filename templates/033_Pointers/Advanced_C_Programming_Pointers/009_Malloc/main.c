//? |s..
//? |st..
//? |st..
//
//// very simple allocation of memory and changing something in the newly allocated memory
//in. main
//	ch..# s
//	in. stringsize
//
//	stringsize = s_o_ "hello"				// first work out how big "hello" is ...
//	p..("size of 'hello' is @d##" ?	// note that it is SIX bytes long (not five) so as to allow for the terminating null character
//
//	// now allocate some memory of sufficient size to hold the string "hello"
//	s _ ch..# ma.. ?				// note the cast '(char*)'. This is required because malloc always returns a generic pointer type of 'void*'
//	__ s __ N..							// malloc will return 0 (NULL) if it failed
//		p..( "malloc failed!##"
//		ex.. _
//
//
//	// now copy the string into the newly allocated memory
//	strncpy ? "hello" ?
//
//	// and change the first character (just to show we can)
//	p..("s is @s##" ?
//	? 0 _ 'c'
//	p..("s is now @s##" ?
//    r_ _
//
//
