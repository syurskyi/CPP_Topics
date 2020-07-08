//============================================================================
// Name        : 008_Const.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

class Animal {
private:
	string name;

public:
	v.. setName(string name) { this->name = name; };
	v.. speak() const { c.. __ "My name is: " __ name __ e.. }
};

in. main() {

	const d.. PI = 3.141592;
	c.. __ PI __ e..

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	in. value = 8;

	// const int * const pValue = &value;
	in. *pValue = &value;

	c.. __ *pValue __ e..

	in. number = 11;
	pValue = &number; // Error with this: int * const pValue = &value;
	*pValue = 12; // Error with this: const int *pValue = &value;

	c.. __ *pValue __ e..

	r_ _
}
