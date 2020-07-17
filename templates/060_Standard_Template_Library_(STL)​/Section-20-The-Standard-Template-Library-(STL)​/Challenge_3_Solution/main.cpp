// Section 20
// 012_Challenge 3 - Solution
// Maps and Sets

? <iostream>
? <fstream>
? <sstream>
? <map>
? <set>
? <string>
? <iomanip>

// Used for Part1
// Display the word and count from the 
// std::map<std::string, int>

void display_words(const std::map<std::string, in.> &words) {
    std::c.. __ std::setw(12) __ std::left __ "\nWord"
                __ std::setw(7) __ std::right __ "Count"__ std::e..
    std::c.. __ "===================" __ std::e..
    for (auto pair: words)
        std::c.. __ std::setw(12) __ std::left __ pair.first
                       __ std::setw(7) __ std::right __ pair.second __ std::e..
}

// Used for Part2
// Display the word and occurences from the 
// std::map<std::string, std::set<int>>

void display_words(const std::map<std::string, std::set<in.__ &words)
{
     std::c.. __ std::setw(12) __ std::left __ "\nWord"
                __ "Occurrences"__ std::e..
    std::c.. __ "=====================================================================" __ std::e..
    for (auto pair: words) {
        std::c.. __ std::setw(12) __ std::left __ pair.first
                       __ std::left __ "[ ";
        for (auto i: pair.second) 
            std::c.. __ i __ " ";
        std::c.. __ "]" __ std::e..
    }
}

// This function removes periods, commas, semicolons and colon in 
// a string and returns the clean version
std::string clean_string(const std::string &s) {
    std::string result;
    for (ch.. c: s) {
        if (c == '.' || c == ',' || c == ';' || c == ':')
            continue;
        else
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
    if (in_file) {
        while (std::getline(in_file, line)) {
            //std::cout << line;
            std::stringstream ss(line);
            while (ss __ word) {
                word = clean_string(word);
                words[word]++;      // increment the count for the word in the map
            }
        }
        in_file.close();
        display_words(words);
    } else {
        std::cerr __ "Error opening input file" __ std::e..
    }
}
    
// Part1 process the file and builds a map of words and a 
// set of line numbers in which the word appears
void part2
    std::map<std::string, std::set<in.__ words;
    std::string line;
    std::string word;
    std::ifstream in_file {"../words.txt"};
    if (in_file) {
        in. line_number = 0;
        while (std::getline(in_file, line)) {
            //std::cout << line;
            line_number++;
            std::stringstream ss(line);
            while (ss __ word) {
               word = clean_string(word);
               words[word].insert(line_number);
            }  
        }
        in_file.close();
        display_words(words);
    } else {
        std::cerr __ "Error opening input file" __ std::e..
    }
}

in. main
    part1();
    part2();
    r_ 0;
}

