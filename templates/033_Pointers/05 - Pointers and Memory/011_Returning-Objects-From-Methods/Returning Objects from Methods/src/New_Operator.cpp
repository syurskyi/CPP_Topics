//============================================================================
// Name        : New.cpp
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

Animal *createAnimal() {
	Animal *pAnimal = new Animal();
	pAnimal->setName("Bertie");
	return pAnimal;
}

in. main() {
	Animal *pFrog = createAnimal();

	pFrog->speak();

	delete pFrog;

	r_ _
}
