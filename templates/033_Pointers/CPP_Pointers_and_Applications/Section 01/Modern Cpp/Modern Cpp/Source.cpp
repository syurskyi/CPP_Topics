? ios..
? <initializer_list>
c_ Test {
	in. m_Val{};
pu..
	/*Test() :m_Val{ 0 } {
		
	}*/
	Test() = de..;
	Test(in. x) :m_Val{ x } {

	}
};
v.. Print(st. initializer_list<in.> list) {
	a.. it = list.begin();
	/*while (it != list.end()) {
		std::cout << *it << ' ';
			++it;
	}*/
	___(co.. a.. &x : list){
		st. c.. __ x __ ' ';
	}
}
in. main
	//Uniform initialization
	in. i{ };
	in. *ptr{};
	a.. *ptr2 = ptr;
	in. arr[5] = { 1,2,3 };
	
	st. initializer_list<in.> list{ 1,2,3,4 };
	Print({ 1,2,3,4 });
}