/**
 * @file tcOperation.cpp
 * 
 * @date Oct 21, 2013
 * 
 * @author Brian M. Craig
 */

#include "tcOperation.h"

#include <cstdlib>
#include <iostream>

tcOperation::tcOperation( int argc, char** argv ) {

	mcTokens.clear();

	for ( int lnIndex = 1; lnIndex < argc; lnIndex++ ) {
		mcTokens.push_back( argv[lnIndex] );
	}
}

tcOperation::~tcOperation() {
	mcTokens.clear();
}

double tcOperation::Execute( void ) {

	double lrA = atof( mcTokens[0].c_str() );
	double lrB = atof( mcTokens[2].c_str() );
	double lrC = 0;

	if ( mcTokens[1] == "+" )
	{
		lrC = lrA + lrB;
	}
	else if ( mcTokens[1] == "-" )
	{
		lrC = lrA - lrB;
	}
	else if ( mcTokens[1] == "x" )
	{
		lrC = lrA * lrB;
	}
	else if ( mcTokens[1] == "/" )
	{
		lrC = lrA / lrB;
	}

	return lrC;
}
