// Tokenizer

? <boost/tokenizer.hpp>
? |s..
? |i..

in. main
    st. s.. ip _ "127.0.0.1:80"
    boost::tokenizer<boost::char_separator<char__
            tokenizer{ip, boost::char_separator<c..>{".:"}}

    ___ (a.. i: tokenizer) {
        st. c__ __  i __  st. e..
    }
    st. c__ __  st. e..

    // xml vs json vs csv vs ??? vs tsv

    st. s.. pack _ "hello,real\\,world"
    boost::tokenizer<boost::escaped_list_separator<char__ escaped_tokenizer{pack}
    ___ (a.. i : escaped_tokenizer) {
        st. c__ __  i __  st. e..
    }
}
