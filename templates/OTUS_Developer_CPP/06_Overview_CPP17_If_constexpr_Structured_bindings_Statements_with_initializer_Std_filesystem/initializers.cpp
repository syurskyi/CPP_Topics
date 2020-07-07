? |i..
? |s..


in. main () {

	bo.. condition _ true;

	std::c__ __  "if\n";
	__ (in. value _ 42; !condition) {
		std::c__ __  "true condition: " __  value __  std::e..
	}
	____ __ (in. number _ 50; !condition) {
		value +_ 10;
		std::c__ __  "false condition: " __  value __  std::e..
	}
	____
    {
        std::c__ __  "false condition: " __  value __  number __  std::e..
    }
	// value is not visible here

	std::c__ __  "for:\n";
	for (in. i _ 0; i < 10; ++i) {
		std::c__ __  i;
	}
	// i is not visible here
	std::c__ __  std::e..

	std::c__ __  "switch:\n";
	s..(in. other _ 37; condition) {
		case true:
			std::c__ __  "true condition: " __  other __  std::e..
			b..
		case false:
			std::c__ __  "false condition: " __  other __  std::e..
	}
	// other is not visible here

	// Not possible for now.....
//	 while(std::string line; std::getline(std::cin, line)) {
//	 	std::cout << line;
//	 }

	 for(std::s.. line; std::getline(std::c__, line);) {
	 	std::c__ __  line;
	 }

	r_ 0;
}
