//============================================================================
// Name        : Arrays.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

// Could declare variables here! string numbers[] = {"one", "two", "three"};

v.. show1(const in. nElements, string texts[]) {

	// cout << sizeof(texts) << endl; returns sizeof pointer!

	for(in. i=0; i<nElements; i++) {
		c.. __ texts[i] __ e..
	}
}

v.. show2(const in. nElements, string *texts) {

	// cout << sizeof(texts) << endl; returns sizeof pointer!

	for(in. i=0; i<nElements; i++) {
		c.. __ texts[i] __ e..
	}
}

v.. show3(string (&texts)[3]) {

	// cout << sizeof(texts) << endl; returns sizeof pointer!

	for(in. i=0; i<sizeof(texts)/sizeof(string); i++) {
		c.. __ texts[i] __ e..
	}
}

char *getMemory() {
	char *pMem = new char[100];

	return pMem;
}

v.. freeMemory(char *pMem) {
	delete [] pMem;
}

in. main() {

	string texts[] = {"apple", "orange", "banana"};

	c.. __ sizeof(texts) __ e..

	show3(texts);

	char *pMemory = getMemory();
	freeMemory(pMemory);

	r_ _
}
