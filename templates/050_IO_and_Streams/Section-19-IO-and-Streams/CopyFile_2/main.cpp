// Section 19
// Copy File 2
// File copy using get/put
? ios..
? <fstream>
? st..

in. main
    st. ifstream in_file {"../poem.txt"};
    st. ofstream out_file{"../poem_out.txt"};
    __ (!in_file) {
        st. cerr __ "Error opening input file" __ st. e..
        r_ 1;
    }
     __ (!out_file) {
        st. cerr __ "Error opening output file" __ st. e..
        r_ 1;
    }
    
    ch.. c;
    w__ (in_file.get(c))
        out_file.put(c);
    
    st. c.. __ "File copied" __ st. e..
    in_file.close();
    out_file.close();
    r_ 0;
}



