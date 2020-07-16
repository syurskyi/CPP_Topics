#include <iostream>

int main() {
	int data = 5;
	int *ptr = &data;

	ptr = new int(7);
	delete ptr;
	return 0;
}