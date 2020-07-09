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

LISTHDR head						// our queue

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


// returns the number of items in a queue
in. queue_length(LISTHDR* queue) 
	LISTITEM *temp
	in. length

	temp _ queue->first			// get the 'first' item
	length _ 0						// initialize the length
	do 
		// check for an empty queue or if we've gone through the whole queue
		__ (temp __ (LISTITEM*)queue) 
			temp _ NULL			// this will break out of the do ... while loop
			break
		
		temp _ temp->next			// get the next item in the queue
		length _ length + 1
	 w___ (temp !_ NULL)

	r_ length


// this removes an item from 'position' in a queue - returns the item or NULL if the position does not exist
// NOTE: this uses a similar queue iteration technique to that used in 'queue_length'
LISTITEM* remove_at(LISTHDR *queue, in. position) 
	LISTITEM *temp
	in. i
	
	// NOTE: we don't deal with negative positions in this example, but we could use a negative position to
	// indicate that we want to use the backward pointers as the position
	__ (position < 0) 
		r_ NULL
	

	temp _ queue->first			// get the 'first' item
	i _ 0
	do 
		// here, check for an empty queue or if we've gone through the whole queue
		__ (temp __ (LISTITEM*)queue) 
			temp _ NULL			// this will break out of the do ... while loop
			break
		
		__ (i __ position) 
			// this is where we disconnect the queue item we've found
			temp->prev->next _ temp->next
			temp->next->prev _ temp->prev
			// NOTE: setting the pointers to NULL for the removed item isn't necessary
			// but it might be a good idea to avoid accidental reuse of the pointers
			// since temp's next and prev still point into elements of the queue
			temp->next _ NULL
			temp->prev _ NULL
			break
		
		temp _ temp->next			// get the next item in the queue
		i _ i + 1					// and increment the corresponding index position
	 w___ (temp !_ NULL)

	r_ temp


in. main(
	LISTITEM *temp
	in. requested_index
	ch.. input[50]

	// first, make an empty queue
	// ... which is a queue where the header points to itself and there are no items in it
	head.first _ (LISTITEM*)&head
	head.last _ (LISTITEM*)&head

	___ (in. i _ 0 i < 5 ###) 	// as before, populate the queue
		temp _ ma..(s_o_(LISTITEM)) // allocate some memory for the new queue item
		temp->data _ i				// set the item's data to the loop count so that we can see where it is in the queue
		enqueue(&head, temp)	// and put it in the queue
	
    
    // setbuf(stdout, NULL) // NOTE: If you are using an IDE such as CodeLite and nothing is initially shown 
                             // in its Terminal you may need to uncomment this to turn off buffering
                             
	p..("the length of the queue is %d\n", queue_length(&head))
	// remove at a user entered index
	p..("enter the index of the queue entry ... ")
	requested_index _ atoi(gets(input)) 
	//do 							// keep going ...
		temp _ remove_at(&head, requested_index)	// if we can't do it we will get NULL returned
		__ (temp !_ NULL) 
			p..("OK: data removed at %d is %d\n", requested_index, temp->data)
			fr..(temp)				// call 'free' to tidy up
		
		____
			p..("ERROR: cannot remove at %d\n", requested_index)
		
//	 while (temp !_ NULL)

	// see what we've got left
	p..("the length of the queue is %d\n", queue_length(&head))
	do 							// keep going until the queue is empty
		temp _ dequeue(&head)		// if the queue is empty we will get NULL returned
		__ (temp !_ NULL) 
			p..("data is %d\n", temp->data)
			fr..(temp)				// call 'free' to tidy up
		
	 w___ (temp !_ NULL)

	r_ _
