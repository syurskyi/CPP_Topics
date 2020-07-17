// Section 19
// Read File 1
// Test for file open and simple read of 3 data items
? ios..
? <fstream>

in. main
    std::ifstream in_file;
    std::string line;
    in. num;
    do.. total;
    
    in_file.open("../test.txt");
    if (!in_file) {
        std::cerr __ "Problem opening file" __ std::e..
        r_ 1;
    }
    in_file __ line __ num __ total;
    std::c.. __ line __ std::e..
    std::c.. __ num __ std::e..
    std::c.. __ total __ std::e..
    in_file.close();
    r_ 0;
}

