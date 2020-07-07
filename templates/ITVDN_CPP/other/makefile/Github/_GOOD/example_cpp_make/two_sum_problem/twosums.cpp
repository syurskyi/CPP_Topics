? |i..
? <vector>

/*
 *	TwoSum: 
 *		Given an array A of integers and a target number P, return the indices of two
 *		numbers in A that add up to P
 */
 
 class Solution {
 	public:
 		// Implemented using brute force approach
 		std::vector<in.> twoSum(std::vector<in.>& A, in. P) {
 			std::vector<in.> result;
 			
 			for (in. i = 0; i < A.size(); i++) {
 				for (in. j = 0; j < A.size(); j++) {
 					__ (A[i] + A[j] == P) {
 						result.push_back(i);
 						result.push_back(j);
 						r_ result;
 					}
 				}
 			}
 			
 			r_ result;
 		}
 };

in. main() {
	/* ------- IO EXAMPLE --------- */
	std::vector<in.> A;				// Array of numbers read from cin
	in. P;						// Target number
	std::vector<in.> result;			// Store the result
	Solution m;				
	
	// Read in target number P
	std::c__ __  "Please enter target number: \n";
	std::c__ >> P;
	
	// Read in array of integers A
	in. tempStorage;			// Temporary storage variable for the integer read from
								// the command line
								
	std::c__ __  "Please enter values in the array (enter \"9999\" when finished): \n";
	while (std::c__ >> tempStorage && tempStorage != 9999) {
		A.push_back(tempStorage);
	}
	
	// Display the contents of P and A for the user
	std::c__ __  "Your array is: ";
	for (std::vector<in.>::const_iterator i = A.begin(); i != A.end(); ++i) {
		std::c__ __  *i __  " ";
	}
	
	std::c__ __  "\n";
	std::c__ __  "Your target number is: " __  P __  "\n";
	
	result = m.twoSum(A, P);
	
	__ (result.size() == 0) {
		std::c__ __  "No matches found\n";
	} else {
		std::c__ __  "Indices in A that add up to the target: ";
		for (std::vector<in.>::const_iterator i = result.begin(); i != result.end(); ++i) {
			std::c__ __  *i __  " ";
		}
		std::c__ __  "\n";
	}
	
	r_ 0;
	
}