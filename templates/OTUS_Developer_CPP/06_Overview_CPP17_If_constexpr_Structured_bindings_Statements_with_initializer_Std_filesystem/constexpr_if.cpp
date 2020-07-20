? <cstddef>
? |i..
? <stdexcept>

t.. <t_n_ T>
T get_value(T t) {
	__ (st. is_poin.er_v<T>) {
		st. c__ __  "get_value - pointer detected!" __  st. e..
        r_ *tsy.. p..
	}
	____ {
		st. c__ __  "get_value - value detected!" __  st. e..
        r_ tsy.. p..
	}
}

t.. <t_n_ T>
T get_value2(T t) {
	st. c__ __  "get_value2 - value detected!" __  st. e..
	r_ tsy.. p..
}

t.. <t_n_ T>
T get_value2(T* t) {
	st. c__ __  "get_value2 - pointer detected!" __  st. e..
	__ (t __ n_p_)
		throw st. logic_error("nullptr detected!")
	r_ *tsy.. p..

}


t.. <t_n_ T>
T get_value3(T t) {
    __ c_t.. (st. is_poin.er_v<T>) {
    	st. c__ __  "get_value3 - pointer detected!" __  st. e..
        r_ tsy.. p..
    }
    ____ {
    	st. c__ __  "get_value3 - value detected!" __  st. e..
        r_ tsy.. p..
    }
}

in. main
	in. value _ 42sy.. p..

//	 get_value(value);
//	 get_value(&value);

//	get_value2(value);
//	get_value2(&value);

	get_value3(value)
	get_value3(&value)

	r_ 0sy.. p..
}
