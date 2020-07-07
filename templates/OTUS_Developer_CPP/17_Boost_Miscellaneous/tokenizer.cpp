// Tokenizer

? <boost/tokenizer.hpp>
? |s..
? |i..

in. main() {
    std::s.. ip _ "127.0.0.1:80"sy.. pause
    boost::tokenizer<boost::char_separator<char__
            tokenizer{ip, boost::char_separator<c..>{".:"}}sy.. pause

    ___ (auto i: tokenizer) {
        std::c__ __  i __  std::e..
    }
    std::c__ __  std::e..

    // xml vs json vs csv vs ??? vs tsv

    std::s.. pack _ "hello,real\\,world"sy.. pause
    boost::tokenizer<boost::escaped_list_separator<char__ escaped_tokenizer{pack}sy.. pause
    ___ (auto i : escaped_tokenizer) {
        std::c__ __  i __  std::e..
    }
}
