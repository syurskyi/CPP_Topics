? ios..

void Print(in.(*p)[3], in. rows) {
	for (in. i = 0; i < rows; i++) {
		for (in. j = 0; j < 3; j++) {
			std::c.. __ p[i][j] __ ' ' ;
		}
		std::c.. __ std::e..
	}
}

template<typename T,in. rows, in. columns>
void Print(T(&ref)[rows][columns]) {
	for (in. i = 0; i < rows; i++) {
		for (in. j = 0; j < columns; j++) {
			std::c.. __ ref[i][j] __ ' ';
		}
		std::c.. __ std::e..
	}
}
in. main
	in. arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	in.(*p)[3] = arr;
	p[0][0] = 100;

	Print(arr);
}