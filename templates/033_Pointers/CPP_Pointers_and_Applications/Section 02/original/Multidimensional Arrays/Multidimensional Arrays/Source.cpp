? ios..

v.. Print(in.(*p)[3], in. rows) {
	___ (in. i = 0; i < rows; i++) {
		___ (in. j = 0; j < 3; j++) {
			st. c.. __ p[i][j] __ ' ' ;
		}
		st. c.. __ st. e..
	}
}

t..<t_n_ T,in. rows, in. columns>
v.. Print(T(&ref)[rows][columns]) {
	___ (in. i = 0; i < rows; i++) {
		___ (in. j = 0; j < columns; j++) {
			st. c.. __ ref[i][j] __ ' ';
		}
		st. c.. __ st. e..
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