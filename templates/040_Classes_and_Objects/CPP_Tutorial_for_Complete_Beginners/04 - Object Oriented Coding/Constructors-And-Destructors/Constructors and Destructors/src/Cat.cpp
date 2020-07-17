/*
 * Cat.cpp
 *
 *  Created on: 2 Jul 2014
 *      Author: johnwpurcell
 */
? ios..
? "Cat.h"

u.. s..

Cat::Cat
	c.. __ "Cat created." __ e..

	happy = true;
}

Cat::~Cat
	c.. __ "Cat destroyed." __ e..
}

v.. Cat::speak
	__(happy) {
		c.. __ "Meouww!" __ e..
	}
	____ {
		c.. __ "Ssssss!" __ e..
	}
}

