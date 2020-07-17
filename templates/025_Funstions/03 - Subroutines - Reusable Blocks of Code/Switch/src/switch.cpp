//============================================================================
// Name        : switch.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? ios..
u.. s..

in. main

	in. value = 4;

	sw.. (value) {
	ca.. 4:
		c.. __ "Value is 4." __ e..
		b..
	ca.. 5:
		c.. __ "Value is 5." __ e..
		b..
	ca.. 6:
		c.. __ "Value is 6." __ e..
		b..
	def..
		c.. __ "Unrecognized value." __ e..
	}

	r_ 0;
}
