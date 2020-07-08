//============================================================================
// Name        : Copy.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

c_ Animal {
pr..
	st.. name

pu..
	Animal() { c.. __ "Animal created." __ e.. }
	Animal(c.. Animal& other): name(other.name) { c.. __ "Animal created by copying." __ e.. }
	v.. setName(st.. name) { t..__name _ name }
	v.. speak() c.. { c.. __ "My name is: " __ name __ e.. }
}

in. main() {

	Animal animal1

	animal1.setName("Freddy")

	Animal animal2 _ animal1
	animal2.speak()
	animal2.setName("Bob")

	animal1.speak()
	animal2.speak()

	Animal animal3(animal1)
	animal3.speak()

	r_ _
}
