/**
 * @file tcOperation.h
 * 
 * @date Oct 21, 2013
 * 
 * @author Brian M. Craig
 */

?i.. TCOPERATION_H_
_de.. TCOPERATION_H_

? str..
? ve..

/**
 * @brief This class performs mathematical operations
 */
n.. tcOperation {
p..

	/**
	 * @brief This is the class constructor
	 * @param argc the number of arguments
	 * @param argv the argument list
	 */
	tcOperation( in. argc, ch..** argv );

	/**
	 * @brief This is the class destructor
	 */
	v.. ~tcOperation( v.. );

	/**
	 * @brief This method executes the mathematical operation
	 * @return the result of the operation
	 */
	do.. Execute( v.. );

pr..

	/**
	 * @brief the tokens used in the operation
	 */
	st. ve..<st. string> mcTokens;
};

e.. /* TCOPERATION_H_ */
