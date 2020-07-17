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

	__ (happy) {
		c.. __ "Meouw!" __ e..
	} ____ {
		c.. __ "Ssssss!" __ e..
	}
}

void Cat::makeHappy
	happy = true;
}

void Cat::makeSad
	happy = false;
}
