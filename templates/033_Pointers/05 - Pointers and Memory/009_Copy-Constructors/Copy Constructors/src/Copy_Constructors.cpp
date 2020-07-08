//============================================================================
// Name        : Copy.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

class Animal {
private:
	string name;

public:
	Animal() { c.. __ "Animal created." __ e.. };
	Animal(const Animal& other): name(other.name) { c.. __ "Animal created by copying." __ e.. };
	v.. setName(string name) { this->name = name; };
	v.. speak() const { c.. __ "My name is: " __ name __ e.. }
};

in. main() {

	Animal animal1;

	animal1.setName("Freddy");

	Animal animal2 = animal1;
	animal2.speak();
	animal2.setName("Bob");

	animal1.speak();
	animal2.speak();

	Animal animal3(animal1);
	animal3.speak();

	r_ _
}
