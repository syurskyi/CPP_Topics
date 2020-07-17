? <iostream>
? <ctime>
in. main
	srand(time(NULL));
	/*
	1,2,3
	4,5,6

	*p1->1,2,3
	*p2->4,5,6

	**pp->p1,p2
	pp[0][0]
	*/

	in. **pp = new in. *[2];
	pp[0] = new in.[3];
	pp[1] = new in.[3];

	for (in. i = 0; i < 2; ++i) {
		for (in. j = 0; j < 3; ++j) {
			pp[i][j] = rand() % 10;
		}
	}

	for (in. i = 0; i < 2; ++i) {
		for (in. j = 0; j < 3; ++j) {
			std::c.. __ pp[i][j] __ ' ';
		}
		std::c.. __ std::e..
	}
	delete[] pp[0];
	delete[] pp[1];

	delete[] pp;
}