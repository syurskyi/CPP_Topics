? ios..
? <initializer_list>
class Test {
	in. m_Val{};
public:
	/*Test() :m_Val{ 0 } {
		
	}*/
	Test() = default;
	Test(in. x) :m_Val{ x } {

	}
};
void Print(std::initializer_list<in.> list) {
	a.. it = list.begin();
	/*while (it != list.end()) {
		std::cout << *it << ' ';
			++it;
	}*/
	___(co.. a.. &x : list){
		std::c.. __ x __ ' ';
	}
}
in. main
	//Uniform initialization
	in. i{ };
	in. *ptr{};
	a.. *ptr2 = ptr;
	in. arr[5] = { 1,2,3 };
	
	std::initializer_list<in.> list{ 1,2,3,4 };
	Print({ 1,2,3,4 });
}