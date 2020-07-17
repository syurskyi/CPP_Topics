// Section 19
// 012_Challenge 3 - Solution
// Word counter
? ios..
? <fstream>

// return true if the string word_to_find is in the target string
b.. find_substring(co.. st. st..  &word_to_find, co.. st. st..  &target) {
    st. size_t found = target.find(word_to_find);
    __ (found __ st. st.. ::npos)
        r_ f..
    ____
        r_ t..
}

in. main
    st. ifstream in_file {};
    st. st..  word_to_find {};
    st. st..  word_read {};
    in. word_count {0};
    in. match_count {0};
    
    in_file.open("../romeoandjuliet.txt");
     __ (!in_file) {
        st. cerr __ "Problem opening file" __ st. e..
        r_ 1;
    }
   
    st. c.. __ "Enter the substring to search for: ";
    st. ci. __ word_to_find;
    w__ (in_file __ word_read) {
        ++word_count;
        __ (find_substring(word_to_find, word_read)) {
           ++match_count;
           st. c.. __ word_read __ " ";
        }        
    }

    st. c.. __ word_count __ " words were searched..." __ st. e..
    st. c.. __ "The substring " __ word_to_find __ " was found " __ match_count __ " times " __ st. e..
    
    in_file.close();
    st. c.. __ st. e..
    r_ 0;
}
