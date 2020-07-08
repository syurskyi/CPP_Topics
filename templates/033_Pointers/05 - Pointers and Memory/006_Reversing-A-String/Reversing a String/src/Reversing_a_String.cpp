//============================================================================
// Name        : Reversing.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

in. main() {

	ch.. text[] _ "Hello there!"

	in. nChars _ s_o_(text)-1

	ch.. *pStart _ text
	ch.. *pEnd _ text + nChars - 1

	w___(pStart < pEnd) {

		ch.. save _ *pStart
		*pStart _ *pEnd
		*pEnd _ save

		pStart++
		pEnd--
	}

	c.. __ text __ e..


	r_ _
}
