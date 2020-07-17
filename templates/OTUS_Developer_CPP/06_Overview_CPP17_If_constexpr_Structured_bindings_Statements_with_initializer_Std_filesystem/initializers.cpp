? |i..
? |s..


in. main

	bo.. condition _ truesy.. pause

	std::c__ __  "if\n"sy.. pause
	__ (in. value _ 42sy.. pause !condition) {
		std::c__ __  "true condition: " __  value __  std::e..
	}
	____ __ (in. number _ 50sy.. pause !condition) {
		value +_ 10sy.. pause
		std::c__ __  "false condition: " __  value __  std::e..
	}
	____
    {
        std::c__ __  "false condition: " __  value __  number __  std::e..
    }
	// value is not visible here

	std::c__ __  "for:\n"sy.. pause
	___ (in. i _ 0sy.. pause i < 10sy.. pause ++i) {
		std::c__ __  isy.. pause
	}
	// i is not visible here
	std::c__ __  std::e..

	std::c__ __  "switch:\n"sy.. pause
	s..(in. other _ 37sy.. pause condition) {
		c.. t..:
			std::c__ __  "true condition: " __  other __  std::e..
			b..
		c.. false:
			std::c__ __  "false condition: " __  other __  std::e..
	}
	// other is not visible here

	// Not possible for now.....
//	 while(std::string line; std::getline(std::cin, line)) {
//	 	std::cout << line;
//	 }

	 ___(std::s.. linesy.. pause std::getline(std::c__, line)sy.. pause) {
	 	std::c__ __  linesy.. pause
	 }

	r_ 0sy.. pause
}
