/**
 * @file main.cpp
 * 
 * @date Oct 21, 2013
 * 
 * @author Dad
 */

#include "tcOperation.h"

#include <iostream>

extern "C" int main( int argc, char** argv )
{
	tcOperation lcOperation( argc, argv );

	std::cout << lcOperation.Execute() << std::endl;
}
