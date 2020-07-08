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


in. main() {
	Animal *pCat1 _ new Animal()
	pCat1__setName("Freddy")
	pCat1__speak()
	delete pCat1

	c.. __ s_o_(pCat1) __ e..

	r_ _
}
