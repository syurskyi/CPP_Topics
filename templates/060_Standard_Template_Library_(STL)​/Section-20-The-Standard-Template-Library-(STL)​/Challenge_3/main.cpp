// Section 20
// 012_Challenge 3
// Maps and Sets

? ios..
? <fstream>
? <sstream>
? <map>
? <set>
? <string>
? <iomanip>

// Used for Part1
// Display the word and count from the 
// std::map<std::string, int>

void display_words(co.. std::map<std::string, in.> &words) {
    std::c.. __ std::setw(12) __ std::left __ "\nWord"
                __ std::setw(7) __ std::right __ "Count"__ std::e..
    std::c.. __ "===================" __ std::e..
    ___ (auto pair: words)
        std::c.. __ std::setw(12) __ std::left __ pair.first
                       __ std::setw(7) __ std::right __ pair.second __ std::e..
}

// Used for Part2
// Display the word and occurences from the 
// std::map<std::string, std::set<int>>

void display_words(co.. std::map<std::string, std::set<in.__ &words)
{
     std::c.. __ std::setw(12) __ std::left __ "\nWord"
                __ "Occurrences"__ std::e..
    std::c.. __ "=====================================================================" __ std::e..
    ___ (auto pair: words) {
        std::c.. __ std::setw(12) __ std::left __ pair.first
                       __ std::left __ "[ ";
        ___ (auto i: pair.second)
            std::c.. __ i __ " ";
        std::c.. __ "]" __ std::e..
    }
}

// This function removes periods, commas, semicolons and colon in 
// a string and returns the clean version
std::string clean_string(co.. std::string &s) {
    std::string result;
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

void part1
    std::map<std::string, in.> words;
    std::string line;       
    std::string word;   
    std::ifstream in_file {"../words.txt"};
    __ (in_file) {
        
        // You implement this code
        
        in_file.close();
        display_words(words);
    } ____ {
        std::cerr __ "Error opening input file" __ std::e..
    }
}
    
// Part2 process the file and builds a map of words and a 
// set of line numbers in which the word appears
void part2
    std::map<std::string, std::set<in.__ words;
    std::string line;
    std::string word;
    std::ifstream in_file {"../words.txt"};
    __ (in_file) {
     
        // You implement this code
        
        in_file.close();
        display_words(words);
    } ____ {
        std::cerr __ "Error opening input file" __ std::e..
    }
}

in. main
    part1();
    part2();
    r_ 0;
}

