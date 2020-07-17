// Section 19
// 012_Challenge 3 - Solution
// Word counter
? ios..
? <fstream>

// return true if the string word_to_find is in the target string
bool find_substring(const std::string &word_to_find, const std::string &target) {
    std::size_t found = target.find(word_to_find);
    __ (found __ std::string::npos)
        r_ false;
    ____
        r_ true;
}

in. main
    std::ifstream in_file {};
    std::string word_to_find {};
    std::string word_read {};
    in. word_count {0};
    in. match_count {0};
    
    in_file.open("../romeoandjuliet.txt");
     __ (!in_file) {
        std::cerr __ "Problem opening file" __ std::e..
        r_ 1;
    }
   
    std::c.. __ "Enter the substring to search for: ";
    std::ci. __ word_to_find;
    w__ (in_file __ word_read) {
        ++word_count;
        __ (find_substring(word_to_find, word_read)) {
           ++match_count;
           std::c.. __ word_read __ " ";
        }        
    }

    std::c.. __ word_count __ " words were searched..." __ std::e..
    std::c.. __ "The substring " __ word_to_find __ " was found " __ match_count __ " times " __ std::e..
    
    in_file.close();
    std::c.. __ std::e..
    r_ 0;
}
