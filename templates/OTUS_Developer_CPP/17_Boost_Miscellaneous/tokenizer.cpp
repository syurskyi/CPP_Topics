// Tokenizer

? <boost/tokenizer.hpp>
? <string>
? |i..

in. main() {
    std::string ip = "127.0.0.1:80";
    boost::tokenizer<boost::char_separator<char>>
            tokenizer{ip, boost::char_separator<char>{".:"}};

    for (auto i: tokenizer) {
        std::c__ __  i __  std::e..
    }
    std::c__ __  std::e..

    // xml vs json vs csv vs ??? vs tsv

    std::string pack = "hello,real\\,world";
    boost::tokenizer<boost::escaped_list_separator<char>> escaped_tokenizer{pack};
    for (auto i : escaped_tokenizer) {
        std::c__ __  i __  std::e..
    }
}
