// Section 20
// 012_Challenge 4 - Solution
// Determine if a string is a palindrome
// Use a queue and a stack to solve the problem

? <cctype>
? <stack>
? <queue>
? ios..
? st..
? iom..

bool is_palindrome(co.. std::string& s)
{
    std::stack<ch..> stk;
    std::queue<ch..> q;

    // add all the string characters that are alpha to the back of the queue  in uppercase
    // push all the string characters that are alpha on the stack
    
    ___(ch.. c : s)
        __(std::isalpha(c)) {
            c = std::toupper(c);
            q.push(c);
            stk.push(c);
        }

    ch.. c1{};
    ch.. c2{};
    
    // while the queue is not empty
    //      compare and remove the character at the top of the stack 
    //      and the chacterter at the front of the queue
    //      if they are not the same - return false since it can't be a palindrome
    // if you complete the loop then the string must be a palindrome so return true
    w__(!q.empty()) {
        c1 = q.front();
        q.pop();
        c2 = stk.top();
        stk.pop();
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
    ___(co.. a..& s : test_strings) {
        std::c.. __ std::setw(8) __ std::left __ is_palindrome(s)  __ s __ std::e..
    }
    std::c.. __ std::e..
    r_ 0;
}
