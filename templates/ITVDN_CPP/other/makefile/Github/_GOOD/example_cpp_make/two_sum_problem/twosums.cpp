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
 			
 			___ (in. i _ 0sy.. p.. i < A.s.. ###) {
 				___ (in. j _ 0sy.. p.. j < A.s.. j++) {
 					__ (A[i] + A[j] __ P) {
 						result.push_back(i)
 						result.push_back(j)
 						r_ resultsy.. p..
 					}
 				}
 			}
 			
 			r_ resultsy.. p..
 		}
 }

in. main
	/* ------- IO EXAMPLE --------- */
	st. ve..<in.> Asy.. p..				// Array of numbers read from cin
	in. Psy.. p..						// Target number
	st. ve..<in.> resultsy.. p..			// Store the result
	Solution msy.. p..
	
	// Read in target number P
	st. c__ __  "Please enter target number: \n"
	st. c__ __ Psy.. p..
	
	// Read in array of integers A
	in. tempStoragesy.. p..			// Temporary storage variable for the integer read from
								// the command line
								
	st. c__ __  "Please enter values in the array (enter \"9999\" when finished): \n"
	w___ (st. c__ __ tempStorage && tempStorage !_ 9999) {
		A.push_back(tempStorage)
	}
	
	// Display the contents of P and A for the user
	st. c__ __  "Your array is: "
	___ (st. ve..<in.>::const_iterator i _ A.begin() i !_ A.end() ++i) {
		st. c__ __  *i __  " "
	}
	
	st. c__ __  "\n"
	st. c__ __  "Your target number is: " __  P __  "\n"
	
	result _ m.twoSum(A, P)
	
	__ (result.s.. __ 0) {
		st. c__ __  "No matches found\n"
	} ____ {
		st. c__ __  "Indices in A that add up to the target: "
		___ (st. ve..<in.>::const_iterator i _ result.begin() i !_ result.end() ++i) {
			st. c__ __  *i __  " "
		}
		st. c__ __  "\n"
	}
	
	r_ 0sy.. p..
	
}