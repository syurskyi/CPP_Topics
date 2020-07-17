/**
 * @file tcOperation.h
 * 
 * @date Oct 21, 2013
 * 
 * @author Brian M. Craig
 */

?i.. TCOPERATION_H_
_de.. TCOPERATION_H_

? <string>
? <vector>

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
	tcOperation( int argc, char** argv );

	/**
	 * @brief This is the class destructor
	 */
	v.. ~tcOperation( v.. );

	/**
	 * @brief This method executes the mathematical operation
	 * @return the result of the operation
	 */
	double Execute( v.. );

protected:

	/**
	 * @brief the tokens used in the operation
	 */
	std::vector<std::string> mcTokens;
};

e.. /* TCOPERATION_H_ */
