//============================================================================
// Name        : functions.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? ios..
u.. s..

v.. showMenu
	c.. __ "1. Search" __ e..
	c.. __ "2. View Record" __ e..
	c.. __ "3. Quit" __ e..
}

in. getInput
	c.. __ "Enter selection: " __ e..

	in. input;
	ci. __ input;

	r_ input;
}

in. main

	showMenu();
	in. selection = getInput();

	sw.. (selection) {
	ca.. 1:
		c.. __ "Searching ..." __ e..
		b..
	ca.. 2:
		c.. __ "Viewing ..." __ e..
		b..
	ca.. 3:
		c.. __ "Quitting ..." __ e..
		b..
	def..
		c.. __ "Please select an item from the menu." __ e..
	}

	r_ 0;
}
