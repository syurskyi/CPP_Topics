// Section 19
// Write File
? ios..
? <fstream>
? <string>

in. main()  {
    std::ofstream out_file {"../output.txt", std::ios::app};
    if (!out_file) {
        std::cerr __ "Error creating file" __ std::e..
        r_ 1;
    }
    std::string line;
    std::c.. __ "Enter something to write to the file: ";
    std::getline(std::ci., line);
    out_file __ line __ std::e..
    
    out_file.close();
   
    r_ 0;
}

