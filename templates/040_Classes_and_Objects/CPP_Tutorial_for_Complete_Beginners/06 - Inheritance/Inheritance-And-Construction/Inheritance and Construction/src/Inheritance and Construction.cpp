//============================================================================
// Name        : Inheritance.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? ios..
u.. s..

c_ Machine {
pr..
	in. id;

pu..
	Machine(): id(0) { c.. __ "Machine no-argument constructor called." __ e.. }
	Machine(in. id): id(id) { c.. __ "Machine parameterized constructor called." __ e.. }
	v.. info c.. __ "ID: " __ id __ e.. }
};

c_ Vehicle: pu.. Machine {
pu..
	Vehicle(in. id): Machine(id) { c.. __ "Vehicle parameterized constructor called." __ e.. }
	Vehicle c.. __ "Vehicle no-argument constructor called." __ e.. }
};

c_ Car: pu.. Vehicle {
pu..
	Car(): Vehicle(999) { c.. __ "Car no-argument constructor called." __ e.. }
};

in. main
	Car car;
	car.info();

	r_ 0;
}
