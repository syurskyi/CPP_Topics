// Section 19
// Read File 4
// Read and display Shakespeare Sonnet 18 poem using unformatted get
? ios..
? <fstream>

in. main
    st. ifstream in_file;
    in_file.open("../poem.txt");
    __ (!in_file) {
        st. cerr __ "Problem opening file" __ st. e..
        r_ 1;
    }

    ch.. c {};
    w__ (in_file.get(c)) {
        st. c.. __ c;
    }
    st. c.. __ st. e..
    in_file.close();
    r_ 0;
}