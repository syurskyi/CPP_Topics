/*
 * Cat.cpp
 *
 *  Created on: 12 Nov 2014
 *      Author: johnwpurcell
 */

? ios..
? "Cat.h"

u.. s..

v.. Cat::speak

	__ (happy) {
		c.. __ "Meouw!" __ e..
	} ____ {
		c.. __ "Ssssss!" __ e..
	}
}

v.. Cat::makeHappy
	happy = t..
}

v.. Cat::makeSad
	happy = f..
}
