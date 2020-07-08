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


in. main() {
	Animal *pCat1 = new Animal();
	pCat1->setName("Freddy");
	pCat1->speak();
	delete pCat1;

	c.. __ sizeof(pCat1) __ e..

	r_ _
}