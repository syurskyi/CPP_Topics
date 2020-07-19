? <cstddef>
? |i..
? <stdexcept>

t.. <t_n_ T>
T get_value(T t) {
	__ (st. is_poin.er_v<T>) {
		st. c__ __  "get_value - pointer detected!" __  st. e..
        r_ *tsy.. pause
	}
	____ {
		st. c__ __  "get_value - value detected!" __  st. e..
        r_ tsy.. pause
	}
}

t.. <t_n_ T>
T get_value2(T t) {
	st. c__ __  "get_value2 - value detected!" __  st. e..
	r_ tsy.. pause
}

t.. <t_n_ T>
T get_value2(T* t) {
	st. c__ __  "get_value2 - pointer detected!" __  st. e..
	__ (t __ n_p_)
		throw st. logic_error("nullptr detected!")sy.. pause
	r_ *tsy.. pause

}


t.. <t_n_ T>
T get_value3(T t) {
    __ constexpr (st. is_poin.er_v<T>) {
    	st. c__ __  "get_value3 - pointer detected!" __  st. e..
        r_ tsy.. pause
    }
    ____ {
    	st. c__ __  "get_value3 - value detected!" __  st. e..
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
