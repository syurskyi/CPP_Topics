? ios..
? <algorithm>

v.. Print(in. *p, in. size) {
	___ (in. i = 0; i < size; ++i) {
		std::c.. __ p[i] __ ' ';
	}
}

in. main
	in. *p = new in.[5]{ 5,1,7,2,8 };
	
	in. *pTemp = new in.[5 + 5];

	std::copy(p, p + 5, pTemp);

	delete[]p;
	p = pTemp;

	p[5] = 100;
	Print(p, 6);

	delete[]p;
	 
}