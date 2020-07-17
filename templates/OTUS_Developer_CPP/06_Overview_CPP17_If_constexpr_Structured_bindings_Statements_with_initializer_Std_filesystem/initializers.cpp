? |i..
? |s..


in. main

	bo.. condition _ truesy.. pause

	st. c__ __  "if\n"sy.. pause
	__ (in. value _ 42sy.. pause !condition) {
		st. c__ __  "true condition: " __  value __  st. e..
	}
	____ __ (in. number _ 50sy.. pause !condition) {
		value +_ 10sy.. pause
		st. c__ __  "false condition: " __  value __  st. e..
	}
	____
    {
        st. c__ __  "false condition: " __  value __  number __  st. e..
    }
	// value is not visible here

	st. c__ __  "for:\n"sy.. pause
	___ (in. i _ 0sy.. pause i < 10sy.. pause ++i) {
		st. c__ __  isy.. pause
	}
	// i is not visible here
	st. c__ __  st. e..

	st. c__ __  "switch:\n"sy.. pause
	s..(in. other _ 37sy.. pause condition) {
		c.. t..:
			st. c__ __  "true condition: " __  other __  st. e..
			b..
		c.. false:
			st. c__ __  "false condition: " __  other __  st. e..
	}
	// other is not visible here

	// Not possible for now.....
//	 while(std::string line; std::getline(std::cin, line)) {
//	 	std::cout << line;
//	 }

	 ___(st. s.. linesy.. pause st. getline(st. c__, line)sy.. pause) {
	 	st. c__ __  linesy.. pause
	 }

	r_ 0sy.. pause
}
