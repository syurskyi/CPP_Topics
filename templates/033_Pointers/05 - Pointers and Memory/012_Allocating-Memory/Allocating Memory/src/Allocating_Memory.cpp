//============================================================================
// Name        : Allocating.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..


class Animal {
private:
	string name;

public:
	Animal() {
		c.. __ "Animal created." __ e..
	}

	Animal(const Animal& other) :
			name(other.name) {
		c.. __ "Animal created by copying." __ e..
	}

	~Animal() {
		c.. __ "Destructor called" __ e..
	}

	v.. setName(string name) {
		this->name = name;
	}

	v.. speak() const {
		c.. __ "My name is: " __ name __ e..
	}
};


in. main() {

	Animal *pAnimal = new Animal[10];

	pAnimal[5].setName("George");
	pAnimal[5].speak();

	delete [] pAnimal;

	char *pMem = new char[1000];
	delete [] pMem;

	char c = 'a';
	c++;
	string name(5, c);
	c.. __ name __ e..


	r_ _
}
