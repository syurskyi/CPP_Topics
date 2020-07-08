//============================================================================
// Name        : Arrays.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

// Could declare variables here! string numbers[] = {"one", "two", "three"};

v.. show1(const in. nElements, st.. texts[]) {

	// cout << sizeof(texts) << endl; returns sizeof pointer!

	___(in. i_0 i<nElements i++) {
		c.. __ texts[i] __ e..
	}
}

v.. show2(const in. nElements, st.. *texts) {

	// cout << sizeof(texts) << endl; returns sizeof pointer!

	___(in. i_0 i<nElements i++) {
		c.. __ texts[i] __ e..
	}
}

v.. show3(st.. (&texts)[3]) {

	// cout << sizeof(texts) << endl; returns sizeof pointer!

	___(in. i_0 i<s_o_(texts)/s_o_(st..) i++) {
		c.. __ texts[i] __ e..
	}
}

char *getMemory() {
	char *pMem _ new char[100]

	return pMem
}

v.. freeMemory(char *pMem) {
	delete [] pMem
}

in. main() {

	st.. texts[] _ {"apple", "orange", "banana"}

	c.. __ s_o_(texts) __ e..

	show3(texts)

	char *pMemory _ getMemory()
	freeMemory(pMemory)

	r_ _
}
