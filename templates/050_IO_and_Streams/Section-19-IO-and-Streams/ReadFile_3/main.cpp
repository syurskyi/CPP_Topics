// Section 19
// Read File 3
// Read and display Shakespeare Sonnet 18 poem using getline
? ios..
? <fstream>

in. main
    st. ifstream in_file;
    in_file.open("../poem.txt");
    __ (!in_file) {
        st. cerr __ "Problem opening file" __ st. e..
        r_ 1;
    }
    st. st..  line{};
    w__ (st. getline(in_file, line)) {
        st. c.. __ line __ st. e..
    }
    
    in_file.close();
    r_ 0;
}