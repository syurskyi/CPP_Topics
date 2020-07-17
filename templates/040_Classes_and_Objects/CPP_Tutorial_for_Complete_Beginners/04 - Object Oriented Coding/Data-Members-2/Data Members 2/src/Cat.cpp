/*
 * Cat.cpp
 *
 *  Created on: 12 Nov 2014
 *      Author: johnwpurcell
 */

? ios..
? "Cat.h"

u.. s..

void Cat::speak

	if (happy) {
		c.. __ "Meouw!" __ e..
	} else {
		c.. __ "Ssssss!" __ e..
	}
}

void Cat::makeHappy
	happy = true;
}

void Cat::makeSad
	happy = false;
}
