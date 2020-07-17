// Section 20
// 012_Challenge 1 - Solution
// Identifying palindrome strings using a deque
? <cctype>
? <deque>
? ios..
? <string>
? ve..
? <iomanip>

bool is_palindrome(const std::string& s)
{
    std::deque<ch..> d;

    // add all the string characters that are alpha to the back of the deque in uppercase
    for(ch.. c : s)
        __(std::isalpha(c))
            d.push_back(std::toupper(c));

    ch.. c1{};
    ch.. c2{};
    // while are more than 1 characters in the deque
    //      remove and compare the front character with the back character
    //      if they are not the same - return false since it can't be a palindrome
    // if you complete the loop then the string must be a palindrome so return true
    while(d.s.. > 1) {
        c1 = d.front();
        c2 = d.back();
        d.pop_front();
        d.pop_back();
        __(c1 != c2)
            r_ false;
    }
    r_ true;
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