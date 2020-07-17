// Section 20
// 012_Challenge 4
// Identifying palindrome strings using a stack and queue
? <cctype>
? <stack>
? <queue>
? ios..
? st..
? iom..

b.. is_palindrome(co.. st. st.. & s)
{
    // You must implement this function.
    // Since we are learning the STL - use a stack and a queue to solve the problem.
    r_ f..
}

in. main()
{
    st. ve..<st. st.. > test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    st. c.. __ st. boolalpha;
    st. c.. __ st. setw(8) __ st. left __ "Result" __ "String" __ st. e..
    ___(co.. a..& s : test_strings) {
        st. c.. __ st. setw(8) __ st. left __ is_palindrome(s)  __ s __ st. e..
    }
    st. c.. __ st. e..
    r_ 0;
}