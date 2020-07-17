// Section 19
// 012_Challenge 4 - Solution
// Copy Romeo and Juliet with line numbers
? ios..
? <fstream>
? iom..
? st..

in. main
    st. ifstream in_file {"../romeoandjuliet.txt"};
    st. ofstream out_file {"../romeoandjuliet_out.txt"};
    __ (!in_file.is_open()) {
        st. cerr __ "Error opening input file" __ st. e..
        r_ 1;
    }
     __ (!in_file.is_open()) {
        st. cerr __ "Error opening input file" __ st. e..
        r_ 1;
    }
    
    st. st..  line{};
    in. line_number {0};
    w__ (getline(in_file, line)) {
        __ (line __ "")
            out_file __ st. e..
        ____ {
            ++line_number;
            out_file __ st. setw(7) __ st. left __ line_number
                     __ line __ st. e..
        }
    }
    st. c.. __ "\nCopy complete" __ st. e..
    in_file.close();
    out_file.close();
    r_ 0;
}

