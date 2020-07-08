//? |s..
//? <stdlib.h>
//? |st..
//
//// look at calloc and memory leaks
//in. main
//	ch..# s
//	in. i
//	in.# p;
//
//	// use malloc first to allocate some memory and see what is in it (usually rubbish)
//	s _ ch..# ma.. 6						// malloc will return NULL (0) if it fails, so we should check here, but we wont for brevity
//	___ i = 0 ? < 6 ### p..("s[@d]=@d##" ? ? ?
//	fr.. ?									// use 'free' to return the memory so that we don't get a memory leak
//
//	// now we'll use calloc to do the same - note that the memory is 'zeroed out'
//	// NOTE: the syntax of 'calloc' is different for 'malloc' - the second argument gives the size of the memory unit to allocate
//	s _ ch..# ca.. 6 s_o_ ch..				// calloc will return 0 if it fails, so we should check here, but we wont for brevity
//	___ i _ 0 ? < 6 ### p..("s[@d]=@d##" ? ? ?
//	fr.. ?
//
//	// in this last example, 'calloc' allocates 6 integers, or 24 bytes, since an integer is 4 bytes long
//	p _ in.# ca.. 6 s_o_ in.				// calloc will return 0 if it fails, so we should check here, but we wont for brevity
//	___ i _ 0 ? < 6 ### p.. "p[@d]=@d##" ? ? ?
//	fr.. ?
//
//    r_ _
//
//
