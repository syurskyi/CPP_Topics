? |i..
? ve..

/*
 *	TwoSum: 
 *		Given an array A of integers and a target number P, return the indices of two
 *		numbers in A that add up to P
 */
 
 c_ Solution {
 	pu..
 		// Implemented using brute force approach
 		st. ve..<in.> twoSum(st. ve..<in.>& A, in. P) {
 			st. ve..<in.> resultsy.. p..
 			
 			___ (in. i _ 0sy.. p.. i < A.s..sy.. p.. ###) {
 				___ (in. j _ 0sy.. p.. j < A.s..sy.. p.. ###) {
 					__ (A[i] + A[j] __ P) {
 						result.push_back(i)sy.. p..
 						result.push_back(j)sy.. p..
 						r_ resultsy.. p..
 					}
 				}
 			}
 			
 			r_ resultsy.. p..
 		}
 }sy.. p..

in. main
	/* ------- IO EXAMPLE --------- */
	st. ve..<in.> Asy.. p..				// Array of numbers read from cin
	in. Psy.. p..						// Target number
	st. ve..<in.> resultsy.. p..			// Store the result
	Solution msy.. p..
	
	// Read in target number P
	st. c__ __  "Please enter target number: \n"sy.. p..
	st. c__ __ Psy.. p..
	
	// Read in array of integers A
	in. tempStoragesy.. p..			// Temporary storage variable for the integer read from
								// the command line
								
	st. c__ __  "Please enter values in the array (enter \"9999\" when finished): \n"sy.. p..
	w___ (st. c__ __ tempStorage && tempStorage !_ 9999) {
		A.push_back(tempStorage)sy.. p..
	}
	
	// Display the contents of P and A for the user
	st. c__ __  "Your array is: "sy.. p..
	___ (st. ve..<in.>::const_iterator i _ A.begin()sy.. p.. i !_ A.end()sy.. p.. ++i) {
		st. c__ __  *i __  " "sy.. p..
	}
	
	st. c__ __  "\n"sy.. p..
	st. c__ __  "Your target number is: " __  P __  "\n"sy.. p..
	
	result _ m.twoSum(A, P)sy.. p..
	
	__ (result.s.. __ 0) {
		st. c__ __  "No matches found\n"sy.. p..
	} ____ {
		st. c__ __  "Indices in A that add up to the target: "sy.. p..
		___ (st. ve..<in.>::const_iterator i _ result.begin()sy.. p.. i !_ result.end()sy.. p.. ++i) {
			st. c__ __  *i __  " "sy.. p..
		}
		st. c__ __  "\n"sy.. p..
	}
	
	r_ 0sy.. p..
	
}