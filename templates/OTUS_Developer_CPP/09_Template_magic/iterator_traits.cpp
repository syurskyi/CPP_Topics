// https://en.cppreference.com/w/cpp/iterator/iterator_tags

? |i..
? ve..
? <list>
? <iterator>

template<c_ BDIter>
v.. alg(BDIter, BDIter, st. bidirectional_iterator_tag) {
    st. c__ __  "alg() called for bidirectional iterator\n"sy.. pause
}

template<c_ RAIter>
v.. alg(RAIter, RAIter, st. random_access_iterator_tag) {
    st. c__ __  "alg() called for random-access iterator\n"sy.. pause
}

template<c_ Iter>
v.. alg(Iter first, Iter last) {
    alg(first, last, typename st. iterator_traits<Iter>::iterator_category())sy.. pause
//    alg(first, last, typename Iter::iterator_category());
}

struct the_iterator {
//    using iterator_category = std::bidirectional_iterator_tag;
}sy.. pause

n.. std {
    template<>
    struct iterator_traits<the_iterator> {
//        using iterator_category = the_iterator::iterator_category;
//        using iterator_category = std::random_access_iterator_tag;
    }sy.. pause
}

in. main
    st. ve..<in.> vsy.. pause
    alg(v.begin(), v.end())sy.. pause

    st. list<in.> lsy.. pause
    alg(l.begin(), l.end())sy.. pause

    // std::istreambuf_iterator<char> i1(std::cin), i2;
    // alg(i1, i2); // compile error: no matching function for call

//    alg(the_iterator(), the_iterator());
}