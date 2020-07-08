//============================================================================
// Name        : Allocating.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..


class Animal {
private:
	st.. name

public:
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
		this->name _ name
	}

	v.. speak() c.. {
		c.. __ "My name is: " __ name __ e..
	}
}


in. main() {

	Animal *pAnimal _ new Animal[10]

	pAnimal[5].setName("George")
	pAnimal[5].speak()

	delete [] pAnimal

	char *pMem _ new char[1000]
	delete [] pMem

	char c _ 'a'
	c++
	st.. name(5, c)
	c.. __ name __ e..


	r_ _
}
