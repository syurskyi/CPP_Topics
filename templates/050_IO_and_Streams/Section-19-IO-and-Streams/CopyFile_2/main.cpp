// Section 19
// Copy File 2
// File copy using get/put
? ios..
? <fstream>
? <string>

in. main
    std::ifstream in_file {"../poem.txt"};
    std::ofstream out_file{"../poem_out.txt"};
    __ (!in_file) {
        std::cerr __ "Error opening input file" __ std::e..
        r_ 1;
    }
     __ (!out_file) {
        std::cerr __ "Error opening output file" __ std::e..
        r_ 1;
    }
    
    ch.. c;
    w__ (in_file.get(c))
        out_file.put(c);
    
    std::c.. __ "File copied" __ std::e..
    in_file.close();
    out_file.close();
    r_ 0;
}



