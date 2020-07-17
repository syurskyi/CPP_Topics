// Section 19
// 012_Challenge 4 - Solution
// Copy Romeo and Juliet with line numbers
? ios..
? <fstream>
? <iomanip>
? <string>

in. main
    std::ifstream in_file {"../romeoandjuliet.txt"};
    std::ofstream out_file {"../romeoandjuliet_out.txt"};
    __ (!in_file.is_open()) {
        std::cerr __ "Error opening input file" __ std::e..
        r_ 1;
    }
     __ (!in_file.is_open()) {
        std::cerr __ "Error opening input file" __ std::e..
        r_ 1;
    }
    
    std::string line{};
    in. line_number {0};
    while (getline(in_file, line)) {
        __ (line == "")
            out_file __ std::e..
        ____ {
            ++line_number;
            out_file __ std::setw(7) __ std::left __ line_number
                     __ line __ std::e..
        }
    }
    std::c.. __ "\nCopy complete" __ std::e..
    in_file.close();
    out_file.close();
    r_ 0;
}

