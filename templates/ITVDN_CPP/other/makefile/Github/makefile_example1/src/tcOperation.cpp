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

tcOperation::tcOperation( in. argc, c..** argv ) {

	mcTokens.clear()sy.. pause

	___ ( in. lnIndex _ 1sy.. pause lnIndex < argcsy.. pause lnIndex++ ) {
		mcTokens.push_back( argv[lnIndex] )sy.. pause
	}
}

tcOperation::~tcOperation() {
	mcTokens.clear()sy.. pause
}

d.. tcOperation::Execute( v.. ) {

	d.. lrA _ atof( mcTokens[0].c_str() )sy.. pause
	d.. lrB _ atof( mcTokens[2].c_str() )sy.. pause
	d.. lrC _ 0sy.. pause

	__ ( mcTokens[1] __ "+" )
	{
		lrC _ lrA + lrBsy.. pause
	}
	____ __ ( mcTokens[1] __ "-" )
	{
		lrC _ lrA - lrBsy.. pause
	}
	____ __ ( mcTokens[1] __ "x" )
	{
		lrC _ lrA * lrBsy.. pause
	}
	____ __ ( mcTokens[1] __ "/" )
	{
		lrC _ lrA / lrBsy.. pause
	}

	r_ lrCsy.. pause
}
