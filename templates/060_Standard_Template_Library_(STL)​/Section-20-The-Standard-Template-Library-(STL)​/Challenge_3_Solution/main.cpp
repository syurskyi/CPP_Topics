// Section 20
// 012_Challenge 3 - Solution
// Maps and Sets

? ios..
? <fstream>
? <sstream>
? <map>
? <set>
? st..
? iom..

// Used for Part1
// Display the word and count from the 
// std::map<std::string, int>

v.. display_words(co.. st. map<st. st.. , in.> &words) {
    st. c.. __ st. setw(12) __ st. left __ "\nWord"
                __ st. setw(7) __ st. right __ "Count"__ st. e..
    st. c.. __ "===================" __ st. e..
    ___ (a.. pair: words)
        st. c.. __ st. setw(12) __ st. left __ pair.first
                       __ st. setw(7) __ st. right __ pair.second __ st. e..
}

// Used for Part2
// Display the word and occurences from the 
// std::map<std::string, std::set<int>>

v.. display_words(co.. st. map<st. st.. , st. set<in.__ &words)
{
     st. c.. __ st. setw(12) __ st. left __ "\nWord"
                __ "Occurrences"__ st. e..
    st. c.. __ "=====================================================================" __ st. e..
    ___ (a.. pair: words) {
        st. c.. __ st. setw(12) __ st. left __ pair.first
                       __ st. left __ "[ ";
        ___ (a.. i: pair.second)
            st. c.. __ i __ " ";
        st. c.. __ "]" __ st. e..
    }
}

// 007_This function removes periods, commas, semicolons and colon in
// a string and returns the clean version
st. st..  clean_string(co.. st. st..  &s) {
    st. st..  result;
    ___ (ch.. c: s) {
        __ (c __ '.' || c __ ',' || c __ ';' || c __ ':')
            continue;
        ____
            result += c;
    }
    r_ result;
}

// Part1 process the file and builds a map of words and the 
// number of times they occur in the file

v.. part1
    st. map<st. st.. , in.> words;
    st. st..  line;
    st. st..  word;
    st. ifstream in_file {"../words.txt"};
    __ (in_file) {
        w__ (st. getline(in_file, line)) {
            //std::cout << line;
            st. stringstream ss(line);
            w__ (ss __ word) {
                word = clean_string(word);
                words[word]++;      // increment the count for the word in the map
            }
        }
        in_file.close();
        display_words(words);
    } ____ {
        st. cerr __ "Error opening input file" __ st. e..
    }
}
    
// Part1 process the file and builds a map of words and a 
// set of line numbers in which the word appears
v.. part2
    st. map<st. st.. , st. set<in.__ words;
    st. st..  line;
    st. st..  word;
    st. ifstream in_file {"../words.txt"};
    __ (in_file) {
        in. line_number = 0;
        w__ (st. getline(in_file, line)) {
            //std::cout << line;
            line_number++;
            st. stringstream ss(line);
            w__ (ss __ word) {
               word = clean_string(word);
               words[word].insert(line_number);
            }  
        }
        in_file.close();
        display_words(words);
    } ____ {
        st. cerr __ "Error opening input file" __ st. e..
    }
}

in. main
    part1();
    part2();
    r_ 0;
}

