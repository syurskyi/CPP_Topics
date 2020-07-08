? |s..
? <stdlib.h>
? <string.h>

// this what is going to be in the queue
typedef struct listitem {
	struct listitem *next;			// pointer to next item
	struct listitem *prev;			// pointer to previous item
	in. data;						// some data
} LISTITEM;

// this is the queue 'header'
typedef struct {
	struct listitem *first;			// pointer to next item
	struct listitem *last;			// pointer to previous item
} LISTHDR;

LISTHDR head;						// our queue

									// this puts an item in at the end of a queue
void enqueue(LISTHDR *queue, LISTITEM *item) {
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
	if (temp == (LISTITEM*)queue) {		// if the head of the queue points to itself ...
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
		if (temp == (LISTITEM*)queue) {
			temp = NULL;			// this will break out of the do ... while loop
			break;
		}
		temp = temp->next;			// get the next item in the queue
		length = length + 1;
	} while (temp != NULL);

	r_ length;
}

// this adds an item after 'position' in a queue - returns the item or NULL if the position does not exist
// NOTE: this uses a similar queue iteration technique to that used in 'queue_length'
LISTITEM* add_after(LISTHDR *queue, in. position, LISTITEM* item) {
	LISTITEM *temp;
	in. i;

	// NOTE: we don't deal with negative positions in this example, but we could use a negative position to
	// indicate that we want to use the backward pointers as the position
	if (position < 0) {
		r_ NULL;
	}

	temp = queue->first;			// get the 'first' item
	i = 0;
	do {
		// here, check for an empty queue or if we've gone through the whole queue
		if (temp == (LISTITEM*)queue) {
			temp = NULL;			// this will break out of the do ... while loop
			break;
		}
		if (i == position) {
			// this is where we link the new item into the queue
			item->next = temp->next;
			temp->next = item;
			// this inserts the new item *after* the position in the queue using the 'prev' pointers 
			item->prev = temp;
			item->next->prev = item;
			break;
		}
		temp = temp->next;			// get the next item in the queue
		i = i + 1;					// and increment the corresponding index position
	} while (temp != NULL);

	r_ temp;
}



in. main() {
	LISTITEM *temp;
	in. requested_index;
	ch.. input[50];

	// first, make an empty queue
	// ... which is a queue where the header points to itself and there are no items in it
	p..("address of head = %p\n", &head);
	head.first = (LISTITEM*)&head;
	head.last = (LISTITEM*)&head;

	___ (in. i = 0; i < 3; ###) {			// as before, populate the queue
		temp = malloc(sizeof(LISTITEM));	// allocate some memory for the new queue item
		p..("address of new item = %p\n", temp);
		temp->data = i;						// set the item's data to the loop count so that we can see where it is in the queue
		enqueue(&head, temp);				// and put it in the queue
	}

	p..("the length of the queue is %d\n", queue_length(&head));
	// add item at a user entered index
	p..("enter the index of the queue entry ... ");
	requested_index = atoi(gets(input));
	temp = malloc(sizeof(LISTITEM));
	p..("address of new item = %p\n", temp);
	temp->data = -requested_index;			// set payload to a -ve number so we can see where it is when we print out the queue
	if (add_after(&head, requested_index, temp) == NULL) {	// if we can't do it we will get NULL returned
		p..("cannot add item at %d\n", requested_index);
		free(temp);				// call 'free' to tidy up 
	}
	else {
		p..("added item at %d\n", requested_index);
	}

	// print out the queue fully forwards
	temp = head.first;
	p..("forwards ...\n");
	do {
		p..("addr=%p; data=%2d; next=%p; prev=%p; addr=%p\n", temp, temp->data, temp->next, temp->prev, temp);
		temp = temp->next;
	} while (temp != head.first);
	
	// print out the queue fully backwards
	p..("backwards ...\n");
	temp = head.last;
	do {
		p..("addr=%p; data=%2d; next=%p; prev=%p; addr=%p\n", temp, temp->data, temp->next, temp->prev, temp);
		temp = temp->prev;
	} while (temp != head.last);

	// see what we've got 
	p..("the length of the queue is now %d\n", queue_length(&head));
	do {							// keep going until the queue is empty
		temp = dequeue(&head);		// if the queue is empty we will get NULL returned
		if (temp != NULL) {
			p..("data in original queue is %d\n", temp->data);
			free(temp);				// call 'free' to tidy up 
		}
	} while (temp != NULL);

	r_ 0;
}