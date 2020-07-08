//============================================================================
// Name        : Reversing.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

in. main() {

	char text[] _ "Hello there!"

	in. nChars _ sizeof(text)-1

	char *pStart _ text
	char *pEnd _ text + nChars - 1

	while(pStart < pEnd) {

		char save _ *pStart
		*pStart _ *pEnd
		*pEnd _ save

		pStart++
		pEnd--
	}

	c.. __ text __ e..


	r_ _
}
