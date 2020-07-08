//============================================================================
// Name        : Char.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char texts[] = "hello";

	cout << texts << endl;

	for(int i=0; i<sizeof(texts); i++) {
		cout << i << ": " << (int)texts[i] << endl;
	}

	return 0;
}
