//? |s..
//? <stdlib.h>
//? |st..
//
//t.. st.. listitem
//	st.. listitem #next		// pointer to next item
//	in. data					// some data
// LISTITEM
//
//
//in. main
//	? #listhead #temp
//
//
//	// first indicate that the list has nothing in it
//	// ... this is done by setting the list to point to nothing
//	listhead _ N..
//
//	// now populate the list
//	___ in. i _ 0 ? < 3 ###
//		temp _ ma..s_o_ L..			// allocate some memory for the new list item
//		t..__d.. _ ?								// set the list item's data to the loop count so that we can see where it is in the list
//		t..__n.. _ l..						// this will insert at the FRONT of the list
//		l.. _ t..							// and set the list head to the newly created list item
//
//
//	// now let's see what we got
//	t.. _ l..								// initialize our temporary variable to the head of the list
//	w___ t.. !_ N..							// keep going until we've reach the end
//		p..("list item: current is @p; next is @p; data is @d##" t.. t..__n.. t..__d..
//		t.. _ t..__n..						// move to the next item in the list
//
//
//	// NOTE: you can see that a new data item is inserted at the FRONT of the list. In fact you can insert the item anywhere
//	// but it becomes more compilcated (and error prone) and it is slower. If you want to do this, it's better to use a doubly linked list
//	// I'll look at this next
//	r_ _
