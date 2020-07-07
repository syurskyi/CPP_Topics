/**
 * @file tcOperation.h
 * 
 * @date Oct 21, 2013
 * 
 * @author Brian M. Craig
 */

#ifndef TCOPERATION_H_
#define TCOPERATION_H_

? <string>
? <vector>

/**
 * @brief This class performs mathematical operations
 */
class tcOperation {
public:

	/**
	 * @brief This is the class constructor
	 * @param argc the number of arguments
	 * @param argv the argument list
	 */
	tcOperation( int argc, char** argv );

	/**
	 * @brief This is the class destructor
	 */
	virtual ~tcOperation( void );

	/**
	 * @brief This method executes the mathematical operation
	 * @return the result of the operation
	 */
	double Execute( void );

protected:

	/**
	 * @brief the tokens used in the operation
	 */
	std::vector<std::string> mcTokens;
};

#endif /* TCOPERATION_H_ */
