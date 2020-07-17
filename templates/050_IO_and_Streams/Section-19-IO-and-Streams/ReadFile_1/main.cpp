// Section 19
// Read File 1
// Test for file open and simple read of 3 data items
? ios..
? <fstream>

in. main
    st. ifstream in_file;
    st. st..  line;
    in. num;
    do.. total;
    
    in_file.open("../test.txt");
    __ (!in_file) {
        st. cerr __ "Problem opening file" __ st. e..
        r_ 1;
    }
    in_file __ line __ num __ total;
    st. c.. __ line __ st. e..
    st. c.. __ num __ st. e..
    st. c.. __ total __ st. e..
    in_file.close();
    r_ 0;
}

