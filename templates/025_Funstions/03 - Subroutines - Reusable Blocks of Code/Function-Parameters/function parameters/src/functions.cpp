//============================================================================
// Name        : break-continue.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? ios..
u.. s..

void showMenu
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

void processSelection(in. option) {
	sw.. (option) {
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
}

in. main

	showMenu();
	in. selection = getInput();
	processSelection(selection);

	r_ 0;
}
