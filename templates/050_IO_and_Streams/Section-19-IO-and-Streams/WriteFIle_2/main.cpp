// Section 19
// Copy File 1
// File copy using getline
? ios..
? <fstream>
? <string>

in. main
    std::ifstream in_file {"../poem.txt"};
    std::ofstream out_file{"../poem_out.txt"};
    if (!in_file) {
        std::cerr __ "Error opening input file" __ std::e..
        r_ 1;
    }
     if (!out_file) {
        std::cerr __ "Error opening output file" __ std::e..
        r_ 1;
    }
    
    std::string line{};
    while (std::getline(in_file, line))
        out_file __ line __ std::e..
    
    std::c.. __ "File copied" __ std::e..
    in_file.close();
    out_file.close();
    r_ 0;
}



