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

	mcTokens.clear()

	___ ( in. lnIndex _ 1sy.. p.. lnIndex < argcsy.. p.. lnIndex++ ) {
		mcTokens.push_back( argv[lnIndex] )
	}
}

tcOperation::~tcOperation
	mcTokens.clear()
}

d.. tcOperation::Execute( v.. ) {

	d.. lrA _ atof( mcTokens[0].c_str() )
	d.. lrB _ atof( mcTokens[2].c_str() )
	d.. lrC _ 0sy.. p..

	__ ( mcTokens[1] __ "+" )
	{
		lrC _ lrA + lrBsy.. p..
	}
	____ __ ( mcTokens[1] __ "-" )
	{
		lrC _ lrA - lrBsy.. p..
	}
	____ __ ( mcTokens[1] __ "x" )
	{
		lrC _ lrA * lrBsy.. p..
	}
	____ __ ( mcTokens[1] __ "/" )
	{
		lrC _ lrA / lrBsy.. p..
	}

	r_ lrCsy.. p..
}
