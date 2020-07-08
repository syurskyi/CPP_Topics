//============================================================================
// Name        : 008_Const.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

class Animal {
private:
	st.. name

public:
	v.. setName(st.. name) { this->name _ name }
	v.. speak() const { c.. __ "My name is: " __ name __ e.. }
}

in. main() {

	const d.. PI _ 3.141592
	c.. __ PI __ e..

	Animal animal
	animal.setName("Freddy")
	animal.speak()

	in. value _ 8

	// const int * const pValue = &value;
	in. *pValue _ &value

	c.. __ *pValue __ e..

	in. number _ 11
	pValue _ &number // Error with this: int * const pValue = &value;
	*pValue _ 12 // Error with this: const int *pValue = &value;

	c.. __ *pValue __ e..

	r_ _
}
