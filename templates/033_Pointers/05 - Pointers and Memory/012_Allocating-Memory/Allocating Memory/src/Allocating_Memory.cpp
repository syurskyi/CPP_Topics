//============================================================================
// Name        : Allocating.cpp
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

	Animal *pAnimal _ n.. Animal[10]

	pAnimal[5].setName("George")
	pAnimal[5].speak()

	delete [] pAnimal

	ch.. *pMem _ n.. ch..[1000]
	delete [] pMem

	ch.. c _ 'a'
	c++
	st.. name(5, c)
	c.. __ name __ e..


	r_ _
}
