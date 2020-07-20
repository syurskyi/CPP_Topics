? |i..
? |s..


in. main

	bo.. condition _ truesy.. p..

	st. c__ __  "if\n"
	__ (in. value _ 42sy.. p.. !condition) {
		st. c__ __  "true condition: " __  value __  st. e..
	}
	____ __ (in. number _ 50sy.. p.. !condition) {
		value +_ 10sy.. p..
		st. c__ __  "false condition: " __  value __  st. e..
	}
	____
    {
        st. c__ __  "false condition: " __  value __  number __  st. e..
    }
	// value is not visible here

	st. c__ __  "for:\n"
	___ (in. i _ 0sy.. p.. i < 10sy.. p.. ++i) {
		st. c__ __  isy.. p..
	}
	// i is not visible here
	st. c__ __  st. e..

	st. c__ __  "switch:\n"
	s..(in. other _ 37sy.. p.. condition) {
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

	 ___(st. s.. linesy.. p.. st. getline(st. c__, line)) {
	 	st. c__ __  linesy.. p..
	 }

	r_ 0sy.. p..
}
