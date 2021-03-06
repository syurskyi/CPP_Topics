/**
 * @file tcOperation_test.cpp
 * 
 * @date Oct 21, 2013
 * 
 * @author Dad
 */

#include "../../src/tcOperation.h"
#include <gtest/gtest.h>

TEST( tcOperation, Add )
{
	char* args1[] = { "", "3", "+", "4" };
	tcOperation lcOp1( 4, args1 );
	EXPECT_DOUBLE_EQ( 7, lcOp1.Execute() );

	char* args2[] = { "", "9", "+", "10" };
	tcOperation lcOp2( 4, args2 );
	EXPECT_DOUBLE_EQ( 19, lcOp2.Execute() );

	char* args3[] = { "", "9.5", "+", "10.1" };
	tcOperation lcOp3( 4, args3 );
	EXPECT_DOUBLE_EQ( 19.6, lcOp3.Execute() );

	char* args4[] = { "", "9.57", "+", "10.12" };
	tcOperation lcOp4( 4, args4 );
	EXPECT_DOUBLE_EQ( 19.69, lcOp4.Execute() );
}

TEST( tcOperation, Subtract )
{
	char* args1[] = { "", "3", "-", "4" };
	tcOperation lcOp1( 4, args1 );
	EXPECT_DOUBLE_EQ( -1, lcOp1.Execute() );

	char* args2[] = { "", "19", "-", "10" };
	tcOperation lcOp2( 4, args2 );
	EXPECT_DOUBLE_EQ( 9, lcOp2.Execute() );

	char* args3[] = { "", "19.5", "-", "10.1" };
	tcOperation lcOp3( 4, args3 );
	EXPECT_DOUBLE_EQ( 9.4, lcOp3.Execute() );

	char* args4[] = { "", "29.57", "-", "10.12" };
	tcOperation lcOp4( 4, args4 );
	EXPECT_DOUBLE_EQ( 19.45, lcOp4.Execute() );
}

//TEST( tcOperation, Multiply )
//{
//	tcOperation lcOp1( 4, { "", "3", "x", "4" } );
//	EXPECT_DOUBLE_EQ( 12, lcOp1.Execute() );
//
//	tcOperation lcOp2( 4, { "", "19", "x", "10" } );
//	EXPECT_DOUBLE_EQ( 190, lcOp2.Execute() );
//
//	tcOperation lcOp3( 4, { "", "19.5", "x", "10.1" } );
//	EXPECT_DOUBLE_EQ( 196.95, lcOp3.Execute() );
//
//	tcOperation lcOp4( 4, { "", "29.57", "x", "10.12" } );
//	EXPECT_DOUBLE_EQ( 299.2484, lcOp4.Execute() );
//}
//
//TEST( tcOperation, Divide )
//{
//	tcOperation lcOp1( 4, { "", "3", "/", "4" } );
//	EXPECT_DOUBLE_EQ( 0.75, lcOp1.Execute() );
//
//	tcOperation lcOp2( 4, { "", "19", "/", "10" } );
//	EXPECT_DOUBLE_EQ( 1.9, lcOp2.Execute() );
//
//	tcOperation lcOp3( 4, { "", "19.5", "/", "10.1" } );
//	EXPECT_DOUBLE_EQ( 1.930693069306931, lcOp3.Execute() );
//
//	tcOperation lcOp4( 4, { "", "29.57", "/", "10.12" } );
//	EXPECT_DOUBLE_EQ( 2.921936758893281, lcOp4.Execute() );
//}
