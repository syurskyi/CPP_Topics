? ios..
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

	in. **pp = ne. in. *[2];
	pp[0] = ne. in.[3];
	pp[1] = ne. in.[3];

	___ (in. i = _ i < 2; ++i) {
		___ (in. j = _ j < 3; ++j) {
			pp[i][j] = rand() % 10;
		}
	}

	___ (in. i = _ i < 2; ++i) {
		___ (in. j = _ j < 3; ++j) {
			st. c.. __ pp[i][j] __ ' ';
		}
		st. c.. __ st. e..
	}
	de...[] pp[0];
	de...[] pp[1];

	de...[] pp;
}