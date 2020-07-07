/**
 * @file tcOperation.cpp
 * 
 * @date Oct 21, 2013
 * 
 * @author Brian M. Craig
 */

? "tcOperation.h"

? <cstdlib>
? |i..

tcOperation::tcOperation( in. argc, char** argv ) {

	mcTokens.clear();

	for ( in. lnIndex _ 1; lnIndex < argc; lnIndex++ ) {
		mcTokens.push_back( argv[lnIndex] );
	}
}

tcOperation::~tcOperation() {
	mcTokens.clear();
}

d.. tcOperation::Execute( void ) {

	d.. lrA _ atof( mcTokens[0].c_str() );
	d.. lrB _ atof( mcTokens[2].c_str() );
	d.. lrC _ 0;

	__ ( mcTokens[1] __ "+" )
	{
		lrC _ lrA + lrB;
	}
	____ __ ( mcTokens[1] __ "-" )
	{
		lrC _ lrA - lrB;
	}
	____ __ ( mcTokens[1] __ "x" )
	{
		lrC _ lrA * lrB;
	}
	____ __ ( mcTokens[1] __ "/" )
	{
		lrC _ lrA / lrB;
	}

	r_ lrC;
}
