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
 			st. ve..<in.> resultsy.. pause
 			
 			___ (in. i _ 0sy.. pause i < A.s..sy.. pause ###) {
 				___ (in. j _ 0sy.. pause j < A.s..sy.. pause ###) {
 					__ (A[i] + A[j] __ P) {
 						result.push_back(i)sy.. pause
 						result.push_back(j)sy.. pause
 						r_ resultsy.. pause
 					}
 				}
 			}
 			
 			r_ resultsy.. pause
 		}
 }sy.. pause

in. main
	/* ------- IO EXAMPLE --------- */
	st. ve..<in.> Asy.. pause				// Array of numbers read from cin
	in. Psy.. pause						// Target number
	st. ve..<in.> resultsy.. pause			// Store the result
	Solution msy.. pause
	
	// Read in target number P
	st. c__ __  "Please enter target number: \n"sy.. pause
	st. c__ __ Psy.. pause
	
	// Read in array of integers A
	in. tempStoragesy.. pause			// Temporary storage variable for the integer read from
								// the command line
								
	st. c__ __  "Please enter values in the array (enter \"9999\" when finished): \n"sy.. pause
	w___ (st. c__ __ tempStorage && tempStorage !_ 9999) {
		A.push_back(tempStorage)sy.. pause
	}
	
	// Display the contents of P and A for the user
	st. c__ __  "Your array is: "sy.. pause
	___ (st. ve..<in.>::const_iterator i _ A.begin()sy.. pause i !_ A.end()sy.. pause ++i) {
		st. c__ __  *i __  " "sy.. pause
	}
	
	st. c__ __  "\n"sy.. pause
	st. c__ __  "Your target number is: " __  P __  "\n"sy.. pause
	
	result _ m.twoSum(A, P)sy.. pause
	
	__ (result.s.. __ 0) {
		st. c__ __  "No matches found\n"sy.. pause
	} ____ {
		st. c__ __  "Indices in A that add up to the target: "sy.. pause
		___ (st. ve..<in.>::const_iterator i _ result.begin()sy.. pause i !_ result.end()sy.. pause ++i) {
			st. c__ __  *i __  " "sy.. pause
		}
		st. c__ __  "\n"sy.. pause
	}
	
	r_ 0sy.. pause
	
}