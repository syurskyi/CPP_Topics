// NOTE: in the last example we looked at the basics of a doubly linked list
// here, I'll show you how you would normally use them as a 'queue'
// a queue is a 'first-in, first-out' (FIFO) structure
// NOTE: you can also easily insert and remove items at any point in the queue if you wish, but it is more common to keep to FIFO operations

? |s..
? <stdlib.h>
? |st..

// this what is going to be in the queue
t.. st.. listitem 
	st.. listitem *next			// pointer to next item
	st.. listitem *prev			// pointer to previous item
	in. data						// some data
 LISTITEM

// this is the queue 'header'
t.. st.. 
	st.. listitem *first			// pointer to 1st item
	st.. listitem *last			// pointer to last item
 LISTHDR

LISTHDR src						// this is the 'source' list
LISTHDR dst						// this is the 'destination' list

// this puts an item in at the end of a queue
v.. enqueue(LISTHDR *queue, LISTITEM *item) 
	LISTITEM *temp

	temp _ queue->last				// get the 'last' item in the queue and keep hold of it
	queue->last _ item				// put the item in the queue at the end
	item->prev _ temp				// link back to old 'last' item
	item->next _ (LISTITEM*)queue	// set the forward link of the new item
	temp->next _ item				// and finally set the forward link of the old 'last' item to the new one


// this removes an item from the front of a queue - returns the item or NULL if there are no more items
LISTITEM* dequeue(LISTHDR *queue) 
	LISTITEM *temp

	temp _ queue->first				// get the 'first' item
	__ (temp __ (LISTITEM*)queue) 		// if the head of the queue points to itself ...
		temp _ NULL					// ... then the queue is empty 			
	
	____
		queue->first _ temp->next		// and set the queue header to point to the 'second' item
		queue->first->prev _ (LISTITEM*)queue
	
	r_ temp


in. main() 
	LISTITEM *temp

	// first, make empty 'source' and 'destination' queues
	src.first _ (LISTITEM*)&src
	src.last _ (LISTITEM*)&src
	dst.first _ (LISTITEM*)&dst
	dst.last _ (LISTITEM*)&dst

	___ (in. i _ 0 i < 3 ###) 	// as before, populate the queue
		temp _ ma..(s_o_(LISTITEM)) // allocate some memory for the new queue item
		temp->data _ i				// set the item's data to the loop count so that we can see where it is in the queue
		enqueue(&src, temp)				// and put it in the queue
	

	// now let's remove from the 'source' queue and add to the 'destination queue
	// NOTE: it would be possible to write a 'copy' function which does this, but it's better to use the existing 'enqueue' and 'dequeue'
	// methods that I've already developed, the reason being that I know that they work! 007_This is a good example of code reuse rather than 're-invent'.
	// In general, it is usually better to re-use something which has been tested and works rather than someting new which may have errors.

	p..("building destination queue ...\n")
	do 							// keep going until the 'source' queue is empty
		temp _ dequeue(&src)		// if the queue is empty we will get NULL returned
		__ (temp !_ NULL) 
			p..("data is %d\n", temp->data)
			enqueue(&dst, temp)
		
	 w___ (temp !_ NULL)

	// see what we've got
	p..("destination queue ...\n")
	do 							// keep going until the queue is empty
		temp _ dequeue(&dst)		// if the queue is empty we will get NULL returned
		__ (temp !_ NULL) 
			p..("destination data is %d\n", temp->data)
			fr..(temp)				// call 'free' to tidy up
		
	 w___ (temp !_ NULL)

	p..("source queue ...\n")
	temp _ dequeue(&src)		// if the queue is empty we will get NULL returned
	__ (temp __ NULL) 
		p..("source queue is empty\n")
	
	r_ 0


