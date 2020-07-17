//============================================================================
// Name        : Inheritance.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? ios..
u.. s..

c_ Animal {
pu..
	v.. speak c.. __ "Grrrr" __ e.. }
};

c_ Cat: public Animal {
pu..
	v.. jump c.. __ "Cat jumping!" __ e.. }
};

c_ Tiger: public Cat {
pu..
	v.. attackAntelope c.. __ "Attacking!" __ e.. }
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
