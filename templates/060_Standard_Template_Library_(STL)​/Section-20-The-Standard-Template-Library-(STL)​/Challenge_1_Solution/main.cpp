// Section 20
// 012_Challenge 1 - Solution
// Identifying palindrome strings using a deque
? cct..
? <deque>
? ios..
? st..
? ve..
? iom..

b.. is_palindrome(co.. st. st.. & s)
{
    st. deque<ch..> d;

    // add all the string characters that are alpha to the back of the deque in uppercase
    ___(ch.. c : s)
        __(st. isalpha(c))
            d.push_back(st. toupper(c));

    ch.. c1{};
    ch.. c2{};
    // while are more than 1 characters in the deque
    //      remove and compare the front character with the back character
    //      if they are not the same - return false since it can't be a palindrome
    // if you complete the loop then the string must be a palindrome so return true
    w__(d.s.. > 1) {
        c1 = d.front();
        c2 = d.back();
        d.pop_front();
        d.pop_back();
        __(c1 != c2)
            r_ f..
    }
    r_ t..
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