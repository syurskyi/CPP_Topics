// Section 19
// Write File
? ios..
? <fstream>
? st..

in. main()  {
    st. ofstream out_file {"../output.txt", st. ios::app};
    __ (!out_file) {
        st. cerr __ "Error creating file" __ st. e..
        r_ 1;
    }
    st. st..  line;
    st. c.. __ "Enter something to write to the file: ";
    st. getline(st. ci., line);
    out_file __ line __ st. e..
    
    out_file.close();
   
    r_ 0;
}

