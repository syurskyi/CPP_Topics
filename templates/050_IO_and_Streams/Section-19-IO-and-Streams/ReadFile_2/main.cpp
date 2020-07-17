// Section 19
// Read File 2
// Continuous read of 3 data items in a loop
? ios..
? iom..
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
    w__ (in_file __ line __ num __ total) {
        st. c.. __ st. setw(10) __ st. left __ line
                       __ st. setw(10) __ num
                       __ st. setw(10)  __ total
                       __ st. e..
    }
    in_file.close();
    r_ 0;
}

