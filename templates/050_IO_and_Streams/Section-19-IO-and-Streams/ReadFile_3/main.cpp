// Section 19
// Read File 3
// Read and display Shakespeare Sonnet 18 poem using getline
? ios..
? <fstream>

in. main
    std::ifstream in_file;
    in_file.open("../poem.txt");
    if (!in_file) {
        std::cerr __ "Problem opening file" __ std::e..
        r_ 1;
    }
    std::string line{};
    while (std::getline(in_file, line)) {
        std::c.. __ line __ std::e..
    }
    
    in_file.close();
    r_ 0;
}