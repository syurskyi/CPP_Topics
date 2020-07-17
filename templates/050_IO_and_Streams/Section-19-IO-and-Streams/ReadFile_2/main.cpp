// Section 19
// Read File 2
// Continuous read of 3 data items in a loop
? ios..
? iom..
? <fstream>

in. main
    std::ifstream in_file;
    std::string line;
    in. num;
    do.. total;
    
    in_file.open("../test.txt");
    __ (!in_file) {
        std::cerr __ "Problem opening file" __ std::e..
        r_ 1;
    }
    w__ (in_file __ line __ num __ total) {
        std::c.. __ std::setw(10) __ std::left __ line
                       __ std::setw(10) __ num
                       __ std::setw(10)  __ total
                       __ std::e..
    }
    in_file.close();
    r_ 0;
}

