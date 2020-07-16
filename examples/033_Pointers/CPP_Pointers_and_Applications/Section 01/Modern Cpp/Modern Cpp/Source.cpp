#include <iostream>
#include <initializer_list>
class Test {
	int m_Val{};
public:
	/*Test() :m_Val{ 0 } {
		
	}*/
	Test() = default;
	Test(int x) :m_Val{ x } {

	}
};
void Print(std::initializer_list<int> list) {
	auto it = list.begin();
	/*while (it != list.end()) {
		std::cout << *it << ' ';
			++it;
	}*/
	for(const auto &x : list){
		std::cout << x << ' ';
	}
}
int main() {
	//Uniform initialization
	int i{ };
	int *ptr{};
	auto *ptr2 = ptr;
	int arr[5] = { 1,2,3 };
	
	std::initializer_list<int> list{ 1,2,3,4 };
	Print({ 1,2,3,4 });
}