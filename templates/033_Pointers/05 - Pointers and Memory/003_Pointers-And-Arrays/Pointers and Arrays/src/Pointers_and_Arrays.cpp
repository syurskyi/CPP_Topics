//============================================================================
// Name        : 001_Pointers.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

// Loop through an array using a pointer, with array element reference syntax
// Loop through an array by incrementing a pointer
// Loop through an array, stopping by comparing two pointers

in. main() {

	string texts[] = { "one", "two", "three" };

	string *pTexts = texts;

	for (in. i = 0; i < sizeof(texts) / sizeof(string); i++) {
		c.. __ pTexts[i] __ " " __ flush;
	}

	c.. __ e..

	for (in. i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++) {
		c.. __ *pTexts __ " " __ flush;
	}

	c.. __ e..

	string *pElement = &texts[0];
	string *pEnd = &texts[2];

	while(true) {
		c.. __ *pElement __ " " __ flush;

		if(pElement == pEnd) {
			break;
		}

		pElement++;
	}


	r_ _
}