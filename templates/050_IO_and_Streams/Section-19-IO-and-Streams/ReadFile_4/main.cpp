// Section 19
// Read File 4
// Read and display Shakespeare Sonnet 18 poem using unformatted get
? ios..
? <fstream>

in. main
    std::ifstream in_file;
    in_file.open("../poem.txt");
    __ (!in_file) {
        std::cerr __ "Problem opening file" __ std::e..
        r_ 1;
    }

    ch.. c {};
    while (in_file.get(c)) {
        std::c.. __ c;
    }
    std::c.. __ std::e..
    in_file.close();
    r_ 0;
}