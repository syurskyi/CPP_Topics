//============================================================================
// Name        : New.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

c_ Animal {
pr..
	st.. name

pu..
	Animal() {
		c.. __ "Animal created." __ e..
	}

	Animal(c.. Animal& other) :
			name(other.name) {
		c.. __ "Animal created by copying." __ e..
	}

	~Animal() {
		c.. __ "Destructor called" __ e..
	}

	v.. setName(st.. name) {
		t..__name _ name
	}

	v.. speak() c.. {
		c.. __ "My name is: " __ name __ e..
	}
}

Animal *createAnimal() {
	Animal *pAnimal _ new Animal()
	pAnimal__setName("Bertie")
	return pAnimal
}

in. main() {
	Animal *pFrog _ createAnimal()

	pFrog__speak()

	delete pFrog

	r_ _
}
