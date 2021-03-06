// https://en.cppreference.com/w/cpp/iterator/iterator_tags

? |i..
? ve..
? <list>
? <iterator>

t..<c_ BDIter>
v.. alg(BDIter, BDIter, st. bidirectional_iterator_tag) {
    st. c__ __  "alg() called for bidirectional iterator\n"
}

t..<c_ RAIter>
v.. alg(RAIter, RAIter, st. random_access_iterator_tag) {
    st. c__ __  "alg() called for random-access iterator\n"
}

t..<c_ Iter>
v.. alg(Iter first, Iter last) {
    alg(first, last, t_n_ st. iterator_traits<Iter>::iterator_category())
//    alg(first, last, typename Iter::iterator_category());
}

st.. the_iterator {
//    using iterator_category = std::bidirectional_iterator_tag;
}

n.. std {
    t..<>
    st.. iterator_traits<the_iterator> {
//        using iterator_category = the_iterator::iterator_category;
//        using iterator_category = std::random_access_iterator_tag;
    }
}

in. main
    st. ve..<in.> vsy.. p..
    alg(v.begin(), v.end())

    st. list<in.> lsy.. p..
    alg(l.begin(), l.end())

    // std::istreambuf_iterator<char> i1(std::cin), i2;
    // alg(i1, i2); // compile error: no matching function for call

//    alg(the_iterator(), the_iterator());
}