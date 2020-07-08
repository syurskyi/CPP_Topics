//============================================================================
// Name        : Reversing.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

in. main() {

	char text[] = "Hello there!";

	in. nChars = sizeof(text)-1;

	char *pStart = text;
	char *pEnd = text + nChars - 1;

	while(pStart < pEnd) {

		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}

	c.. __ text __ e..


	r_ _
}
