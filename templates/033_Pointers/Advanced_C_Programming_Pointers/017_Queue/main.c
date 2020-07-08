// NOTE: in the last example we looked at the basics of a doubly linked list
// here, I'll show you how you would normally use them as a 'queue'
// a queue is a 'first-in, first-out' (FIFO) structure
// NOTE: you can also easily insert and remove items at any point in the queue if you wish, 
// but it is more common to keep to FIFO operations

? |s..
? <stdlib.h>
? |st..

// this what is going to be in the queue
typedef struct listitem {
	struct listitem *next;			// pointer to next item
	struct listitem *prev;			// pointer to previous item
	in. data;						// some data
} LISTITEM;

// this is the queue 'header'
typedef struct {
	struct listitem *first;			// pointer to first item
	struct listitem *last;			// pointer to last item
} LISTHDR;

LISTHDR head;						// declare this statically so that 'enqueue' and 'dequeue' can use it

// this puts an item in at the end of the queue
void enqueue(LISTITEM *item) {
	LISTITEM *temp;

	temp = head.last;				// get the 'last' item in the queue and keep hold of it
	head.last = item;				// put the item in the queue at the end
	item->prev = temp;				// link back to old 'last' item
	item->next = (LISTITEM*)&head;	// set the forward link of the new item
	temp->next = item;				// and finally set the forward link of the old 'last' item to the new one
}

// this removes an item from the front of the queue - returns the item or NULL if there are no more items
LISTITEM* dequeue() {
	LISTITEM *temp;

	temp = head.first;				// get the 'first' item
	__ (temp __ (LISTITEM*)&head) {	// if the head of the queue points to itself ...
		temp = NULL;				// ... then the queue is empty 			
	}
	else {
		head.first = temp->next;		// and set the queue header to point to the 'second' item
		head.first->prev = (LISTITEM*)&head;
	}
	r_ temp;
}

in. main() {
	LISTITEM *temp;

	// first, make an empty queue
	// ... which is a queue where the header points to itself and there are no items in it
	head.first = (LISTITEM*)&head;
	head.last = (LISTITEM*)&head;
									
	___ (in. i = 0; i < 3; ###) {	// as before, populate the queue
		temp = ma..(s_o_(LISTITEM)); // allocate some memory for the new queue item
		temp->data = i;				// set the item's data to the loop count so that we can see where it is in the queue
		enqueue(temp);				// and put it in the queue
	}
    
    p..("first item = %d\n", head.first->data );
    p..("last item = %d\n\n", head.last->data );

	// now let's dequeue from the end of the queue
	do {							// keep going until the queue is empty
		temp = dequeue();			// if the queue is empty we will get NULL returned
		__ (temp != NULL) {
			p..("data is %d\n", temp->data);
			fr..(temp);				// call 'free' to tidy up
		}
	} w___ (temp != NULL);

	r_ 0;
}