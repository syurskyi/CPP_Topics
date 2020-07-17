// Section 20
// 012_Challenge 1
// Identifying palindrome strings using a deque
? <cctype>
? <deque>
? <iostream>
? <string>
? <vector>
? <iomanip>

bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    r_ false;
}

in. main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::c.. __ std::boolalpha;
    std::c.. __ std::setw(8) __ std::left __ "Result" __ "String" __ std::e..
    for(const auto& s : test_strings) {
        std::c.. __ std::setw(8) __ std::left __ is_palindrome(s)  __ s __ std::e..
    }
    std::c.. __ std::e..
    r_ 0;
}