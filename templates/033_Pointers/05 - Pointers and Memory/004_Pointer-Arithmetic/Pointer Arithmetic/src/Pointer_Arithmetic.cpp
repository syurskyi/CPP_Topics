//============================================================================
// Name        : Pointer.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..



in. main() {

	const in. NSTRINGS _ 5

	st.. texts[NSTRINGS] _ {"one", "two", "three", "four", "five"}

	st.. *pTexts _ texts

	pTexts +_ 3

	c.. __ *pTexts __ e..

	pTexts -_ 2

	c.. __ *pTexts __ e..

	st.. *pEnd _ &texts[NSTRINGS]
	pTexts _ &texts[0]

	w___(pTexts !_ pEnd) {
		c.. __ *pTexts __ e..
		pTexts++
	}

	// Set pTexts back to start.
	pTexts _ &texts[0]

	long elements _ (long)(pEnd - pTexts)

	c.. __ elements __ e..

	// Set pTexts back to start.
	pTexts _ &texts[0]

	pTexts +_ NSTRINGS/2
	c.. __ *pTexts __ e..

	r_ _
}
