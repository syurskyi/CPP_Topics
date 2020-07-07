? <cstddef>
? |i..
? <stdexcept>

template <typename T>
T get_value(T t) {
	__ (std::is_poin.er_v<T>) {
		std::c__ __  "get_value - pointer detected!" __  std::e..
        r_ *t;
	}
	____ {
		std::c__ __  "get_value - value detected!" __  std::e..
        r_ t;
	}
}

template <typename T>
T get_value2(T t) {
	std::c__ __  "get_value2 - value detected!" __  std::e..
	r_ t;
}

template <typename T>
T get_value2(T* t) {
	std::c__ __  "get_value2 - pointer detected!" __  std::e..
	__ (t __ nullptr)
		throw std::logic_error("nullptr detected!");
	r_ *t;

}


template <typename T>
T get_value3(T t) {
    __ constexpr (std::is_poin.er_v<T>) {
    	std::c__ __  "get_value3 - pointer detected!" __  std::e..
        r_ t;
    }
    ____ {
    	std::c__ __  "get_value3 - value detected!" __  std::e..
        r_ t;
    }
}

in. main() {
	in. value _ 42;

//	 get_value(value);
//	 get_value(&value);

//	get_value2(value);
//	get_value2(&value);

	get_value3(value);
	get_value3(&value);

	r_ 0;
}
