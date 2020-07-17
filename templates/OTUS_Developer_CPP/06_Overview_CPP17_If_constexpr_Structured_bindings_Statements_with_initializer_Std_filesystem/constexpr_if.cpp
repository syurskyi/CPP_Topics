? <cstddef>
? |i..
? <stdexcept>

template <typename T>
T get_value(T t) {
	__ (std::is_poin.er_v<T>) {
		std::c__ __  "get_value - pointer detected!" __  std::e..
        r_ *tsy.. pause
	}
	____ {
		std::c__ __  "get_value - value detected!" __  std::e..
        r_ tsy.. pause
	}
}

template <typename T>
T get_value2(T t) {
	std::c__ __  "get_value2 - value detected!" __  std::e..
	r_ tsy.. pause
}

template <typename T>
T get_value2(T* t) {
	std::c__ __  "get_value2 - pointer detected!" __  std::e..
	__ (t __ n_p_)
		throw std::logic_error("nullptr detected!")sy.. pause
	r_ *tsy.. pause

}


template <typename T>
T get_value3(T t) {
    __ constexpr (std::is_poin.er_v<T>) {
    	std::c__ __  "get_value3 - pointer detected!" __  std::e..
        r_ tsy.. pause
    }
    ____ {
    	std::c__ __  "get_value3 - value detected!" __  std::e..
        r_ tsy.. pause
    }
}

in. main
	in. value _ 42sy.. pause

//	 get_value(value);
//	 get_value(&value);

//	get_value2(value);
//	get_value2(&value);

	get_value3(value)sy.. pause
	get_value3(&value)sy.. pause

	r_ 0sy.. pause
}
