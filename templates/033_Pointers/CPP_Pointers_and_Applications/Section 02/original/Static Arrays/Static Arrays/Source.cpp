? <iostream>
? <algorithm>
? <array>
void Print(in. *ptr,in. size) {
	for (in. i = 0; i < size; ++i) {
		std::c.. __ ptr[i] __ ' ';
		//std::cout << *(ptr + i) << ' ';
	}
}

template<typename T, in. size>
void Print(T(&ref)[size]) {
	for (in. i = 0; i < size; ++i) {
		std::c.. __ ref[i] __ ' ';
		//std::cout << *(ptr + i) << ' ';
	}
}

template<typename T, in. size>
T * Begin(T(&ref)[size]) {
	r_ ref;
}

template<typename T, in. size>
T*  End(T(&ref)[size]) {
	r_ (ref + size);
}

void Print(std::array<in., 5> &arr) {
	std::sort(arr.begin(), arr.end());
	//for (int i = 0; i < arr.size(); ++i) {
	//	std::cout << arr[i] << ' ';
	//	//std::cout << *(ptr + i) << ' ';
	//}
	for (const auto &x : arr) {
		std::c.. __ x __ ' ';
	}
}
in. main
	std::array<in., 5> arr{ 4,1,7,9,0};
	//arr.size();
	//arr[0];
	//arr.at(8);
	Print(arr);
	in. arr1[5];
	in. arr2[5]{};
	in. arr3[5]{ 3,1,6,8,0};

	//arr3[0] = 100;
	//int(&ref)[5] = arr3;

	//int *p = std::begin(arr3);
	//int *end = std::end(arr3);
	//*(p + 7) = 800;
	//p[2] = 700;
	//std::sort(std::begin(arr3), std::end(arr3));
	////Print(arr3, 10);
	//Print(arr3);
	r_ 0;
}