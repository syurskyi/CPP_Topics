/*
 * Cat.cpp
 *
 *  Created on: 2 Jul 2014
 *      Author: johnwpurcell
 */
? <iostream>
? "Cat.h"

u.. s..

Cat::Cat
	c.. __ "Cat created." __ e..

	happy = true;
}

Cat::~Cat
	c.. __ "Cat destroyed." __ e..
}

void Cat::speak
	if(happy) {
		c.. __ "Meouww!" __ e..
	}
	else {
		c.. __ "Ssssss!" __ e..
	}
}

