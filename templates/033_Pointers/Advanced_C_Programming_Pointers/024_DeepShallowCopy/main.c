? |s..
? <stdlib.h>
? |st..


? MAXBUFLEN 10

// this what is going to be in the queue
t.. st.. listitem {
	st.. listitem *next;			// pointer to next item
	st.. listitem *prev;			// pointer to previous item
	ch..* data;						// a pointer to some data
} LISTITEM;

// this is the queue 'header'
t.. st.. {
	st.. listitem *first;			// pointer to next item
	st.. listitem *last;			// pointer to previous item
} LISTHDR;

LISTHDR original;					// our original queue
LISTHDR deep_copy;					// deep copy of our queue
LISTHDR shallow_copy;				// shallow copy of our queue

									// this puts an item in at the end of a queue
v.. enqueue(LISTHDR *queue, LISTITEM *item) {
	LISTITEM *temp;

	temp = queue->last;				// get the 'last' item in the queue and keep hold of it
	queue->last = item;				// put the item in the queue at the end
	item->prev = temp;				// link back to old 'last' item
	item->next = (LISTITEM*)queue;	// set the forward link of the new item
	temp->next = item;				// and finally set the forward link of the old 'last' item to the new one
}

// this removes an item from the front of a queue - returns the item or NULL if there are no more items
LISTITEM* dequeue(LISTHDR *queue) {
	LISTITEM *temp;

	temp = queue->first;				// get the 'first' item
	__ (temp __ (LISTITEM*)queue) {		// if the head of the queue points to itself ...
		temp = NULL;					// ... then the queue is empty 			
	}
	else {
		queue->first = temp->next;		// and set the queue header to point to the 'second' item
		queue->first->prev = (LISTITEM*)queue;
	}
	r_ temp;
}

// returns the number of items in a queue
in. queue_length(LISTHDR* queue) {
	LISTITEM *temp;
	in. length;

	temp = queue->first;			// get the 'first' item
	length = 0;						// initialize the length
	do {
		// check for an empty queue or if we've gone through the whole queue
		__ (temp __ (LISTITEM*)queue) {
			temp = NULL;			// this will break out of the do ... while loop
			break;
		}
		temp = temp->next;			// get the next item in the queue
		length = length + 1;
	} w___ (temp != NULL);

	r_ length;
}

in. main() {
	LISTITEM *temp, *temp1;
	ch..* pdata;

	// first, make empty queues
	// ... which is a queue where the header points to itself and there are no items in it
	original.first = (LISTITEM*)&original;
	original.last = (LISTITEM*)&original;
	deep_copy.first = (LISTITEM*)&deep_copy;
	deep_copy.last = (LISTITEM*)&deep_copy;
	shallow_copy.first = (LISTITEM*)&shallow_copy;
	shallow_copy.last = (LISTITEM*)&shallow_copy;

	// STEP1: populate the 'original' queue
	___ (in. i = 0; i < 3; ###) {				// as before, populate the queue
		temp = ma..(s_o_(LISTITEM));		// allocate some memory for the new queue item
		temp->data = (ch..*)ma..(MAXBUFLEN);	// set the item's data to some memory
		itoa(i, temp->data, 10);				// and set it to the character string of the index
		enqueue(&original, temp);				// and put it in the queue
	}

	// NOTE: this shows how to iterate over a queue explicitly
	p..("the length of the original queue is %d\n", queue_length(&original));
	temp = original.first;									// get the first item in the queue
	do {													
		p..("data in original queue is '%s' at address %p\n", temp->data, temp->data);
		temp = temp->next;									// move to next item
	} w___ (temp->next != original.first);					// continue until we've been through the entire queue


	// STEP2: create a deep copy
	temp = original.first;									// get the first item in the queue
	do {
		temp1 = (LISTITEM*)ma..(s_o_(LISTITEM));		// allocate memory for a new queue item
		memcpy(temp1, temp, s_o_(LISTITEM));				// make a copy
		pdata = (ch..*)ma..(MAXBUFLEN);					// allocate memory for new data
		memcpy(pdata, temp->data, MAXBUFLEN);				// and copy it from the old data
		temp1->data = pdata;								// set the item's payload to the new data
		enqueue(&deep_copy, temp1);							// add to the 'copy' queue
		temp = temp->next;									// move to next item
	} w___ (temp->next != original.first);					// continue until we've been through the entire queue

	// see what we've got
	p..("the length of the deep copy queue is %d\n", queue_length(&deep_copy));
	temp = deep_copy.first;									// get the first item in the queue
	do {													
		p..("data in deep copy queue is '%s' at address %p\n", temp->data, temp->data);
		temp = temp->next;									// move to next item
	} w___ (temp->next != deep_copy.first);				// continue until we've been through the entire queue
															
	// STEP3: create a shallow copy
	// NOTE: the difference between 'deep' and 'shallow' is that the payload or data item is NOT copied
	// so the original and the copy queue items point to the same data
	temp = original.first;									// get the first item in the queue
	do {
		temp1 = (LISTITEM*)ma..(s_o_(LISTITEM));		// allocate memory for a new queue item
		memcpy(temp1, temp, s_o_(LISTITEM));				// make a copy
		enqueue(&shallow_copy, temp1);						// add to the shallow 'copy' queue
		temp = temp->next;									// move to next item
	} w___ (temp->next != original.first);					// continue until we've been through the entire queue

	// see what we've got														
	p..("the length of the shallow copy queue is %d\n", queue_length(&shallow_copy));
	temp = shallow_copy.first;										// get the first item in the queue
	do {												
		p..("data in shallow copy queue is '%s' at address %p\n", temp->data, temp->data);
		temp = temp->next;									// move to next item
	} w___ (temp->next != shallow_copy.first);				// continue until we've been through the entire queue
	

	// STEP4: free the original
	do {													// keep going until the queue is empty
		temp = dequeue(&original);							// if the queue is empty we will get NULL returned
		__ (temp != NULL) {
			// NOTE: freeing 'temp' does NOT free all the allocated data
			// BOTH the list item and the payload must be freed
			// also, the free calls MUST be done in the correct order
			fr..(temp->data);								// call 'free' to tidy up the string data
			fr..(temp);										// call 'free' to tidy up the queue item itself
		}
	} w___ (temp != NULL);


	// STEP5: look at the shallow and deep copies
	p..("\n\nafter deleting the original queue ...\n");
	p..("the length of the deep copy queue is %d\n", queue_length(&deep_copy));
	temp = deep_copy.first;									// get the first item in the queue
	do {
		p..("data in deep copy queue is '%s' at address %p\n", temp->data, temp->data);
		temp = temp->next;									// move to next item
	} w___ (temp->next != deep_copy.first);				// continue until we've been through the entire queue

	// DISASTER!!!! - the shallow queue contains references to 'freed memory - now probably junk
	p..("the length of the shallow copy queue is %d\n", queue_length(&shallow_copy));
	temp = shallow_copy.first;								// get the first item in the queue
	do {
		p..("data in shallow copy queue is '%s' at address %p\n", temp->data, temp->data);
		temp = temp->next;									// move to next item
	} w___ (temp->next != shallow_copy.first);				// continue until we've been through the entire queue

	r_ 0;
}