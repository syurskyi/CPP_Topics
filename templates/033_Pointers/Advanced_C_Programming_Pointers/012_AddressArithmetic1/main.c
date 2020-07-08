//? |s..
//? |st..
//? |st..
//
//? COUNT 4
//
//// basic address arithmetic
//
//in. main
//	in. #p
//	in. a ?
//
//	// first let's look at the size of a basic integer
//	p.. "size of an 'int' is @d##" s_o_ in.
//
//	// initialize our array
//	___ in. i _ 0 ? < C.. ### a ? _ ?
//
//	// let's do some pointer arithmetic
//	p _ a					// set the pointer to the array to the start of the array
//	p.. "address of a is @p; value of p is @p [@d]; value pointed to by p is @d##" ? ? ? #?
//
//	// increment p by 1
//	// NOTE: the address of 'a'a remains the same (because we haven't done anything to it)  ...
//	// ... but the value of 'p' has been increased by 4 - the size of an integer - and so ...
//	// the value pointed to by 'p' is now a[1]
//	p _ p + 1
//	p..("address of a is @p; value of p is @p [@d]; value pointed to by p is @d##" ? ? ? #?
//
//	// increment p by another 2 the value pointed to by 'p' is now a[3]
//	p _ p + 2
//	p..("address of a is @p; value of p is @p [@d]; value pointed to by p is @d##" ? ? ? #?
//
//	// what happens if we go beyond the array end? there's nothing to stop you or warn you ...
//	// ... so, increment p by another 1 the value pointed to by 'p' is now a[4]
//	// ... but we will get junk
//	p _ p + 1
//	p..("address of a is @p; value of p is @p [@d]; value pointed to by p is @d##" ? ? ? #?
//
//	r_ _
//
//
