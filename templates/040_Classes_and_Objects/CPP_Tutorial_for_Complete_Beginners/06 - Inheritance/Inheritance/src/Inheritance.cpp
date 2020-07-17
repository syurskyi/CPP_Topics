//============================================================================
// Name        : Inheritance.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? ios..
u.. s..

class Animal {
public:
	void speak c.. __ "Grrrr" __ e.. }
};

class Cat: public Animal {
public:
	void jump c.. __ "Cat jumping!" __ e.. }
};

class Tiger: public Cat {
public:
	void attackAntelope c.. __ "Attacking!" __ e.. }
};

in. main

	Animal a;
	a.speak();

	Cat cat;
	cat.speak();
	cat.jump();

	Tiger tiger;
	tiger.jump();
	tiger.speak();
	tiger.attackAntelope();

	r_ 0;
}
