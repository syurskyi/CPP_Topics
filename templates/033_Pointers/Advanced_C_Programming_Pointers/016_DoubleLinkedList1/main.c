//? |s..
//? <stdlib.h>
//? |st..
//
//t.. st.. listitem
//	st.. ? #next		// pointer to next item
//	st.. ? #prev		// pointer to previous item
//	in. data					// some data
// LISTITEM
//
//	// NOTE: this example just illustrates how doubly linked lists work
//    // in the next example I'll show you how to use them
//
//in. main
//	? *temp head
//
//	// NOTE: for convenience here, I'll use a LISTITEM to store the list forward and backward pointers
//	// since the LISTITEM's data is only 4 bytes, this doesn't matter, but for a large data part,
//    // it would be inefficient.
//	// first indicate that the list has nothing in it
//	// ... this is done by setting both list pointers to point to themselves
//
//	h__.n.. _ L..# #h..
//	h__.p.. _ L..# #h..
//	h__.d.. _ -1;								// for clarity  - it isn't actually used
//
//	// now populate the list
//	___ in. i _ 0 ? < 3 ###
//		temp _ ma..s_o_ L..			// allocate some memory for the new list item
//		?__d.. _ ?								// set the list item's data to the loop count so that we can see where it is in the list
//		?__n.. _ h__.n..						// this will insert at the FRONT of the list
//		h__.n.. _ t..							// and set the list head to the newly created list item
//		?__p.. _ #h..							// this will insert at the BACK of the list
//		?__n..__p.. _ t..					// and set the list 'tail' to the newly created item
//
//
//	// now let's see what we got going forward
//	temp _ h__.n..								// initialize our temporary variable to the head of the list
//	w___ ? !_ #h..						// keep going until we've reach the end
//		p.. "forward list item: current is @p; next is @p; prev is @p; data is @d##", ?, ?__n.. ?__p... ?__d..
//		t.. _ ?__n..							// move to the next item in the list
//
//
//	// and going backwards
//	temp _ h__.p..								// initialize our temporary variable to the tail of the list
//	w___ ? !_ &head					// keep going until we've reach the end
//		p..("backward list item: current is @p; next is @p; prev is @p; data is @d@@", ?, ?__n.. ?__p.. ?__d..
//		temp _ ?__p..						// move to the previous item in the list
//
//
//	r_ _
