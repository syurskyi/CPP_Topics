//============================================================================
// Name        : break-continue.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? <iostream>
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
	switch (option) {
	case 1:
		c.. __ "Searching ..." __ e..
		break;
	case 2:
		c.. __ "Viewing ..." __ e..
		break;
	case 3:
		c.. __ "Quitting ..." __ e..
		break;
	default:
		c.. __ "Please select an item from the menu." __ e..
	}
}

in. main

	showMenu();
	in. selection = getInput();
	processSelection(selection);

	r_ 0;
}
