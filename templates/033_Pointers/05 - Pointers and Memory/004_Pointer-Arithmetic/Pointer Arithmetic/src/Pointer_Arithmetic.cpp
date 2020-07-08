//============================================================================
// Name        : Pointer.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..



in. main() {

	const in. NSTRINGS = 5;

	string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

	string *pTexts = texts;

	pTexts += 3;

	c.. __ *pTexts __ e..

	pTexts -= 2;

	c.. __ *pTexts __ e..

	string *pEnd = &texts[NSTRINGS];
	pTexts = &texts[0];

	while(pTexts != pEnd) {
		c.. __ *pTexts __ e..
		pTexts++;
	}

	// Set pTexts back to start.
	pTexts = &texts[0];

	long elements = (long)(pEnd - pTexts);

	c.. __ elements __ e..

	// Set pTexts back to start.
	pTexts = &texts[0];

	pTexts += NSTRINGS/2;
	c.. __ *pTexts __ e..

	r_ _
}
