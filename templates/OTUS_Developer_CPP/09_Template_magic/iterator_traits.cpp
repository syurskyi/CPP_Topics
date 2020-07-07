// https://en.cppreference.com/w/cpp/iterator/iterator_tags

? |i..
? <vector>
? <list>
? <iterator>

template<class BDIter>
v.. alg(BDIter, BDIter, std::bidirectional_iterator_tag) {
    std::c__ __  "alg() called for bidirectional iterator\n";
}

template<class RAIter>
v.. alg(RAIter, RAIter, std::random_access_iterator_tag) {
    std::c__ __  "alg() called for random-access iterator\n";
}

template<class Iter>
v.. alg(Iter first, Iter last) {
    alg(first, last, typename std::iterator_traits<Iter>::iterator_category());
//    alg(first, last, typename Iter::iterator_category());
}

struct the_iterator {
//    using iterator_category = std::bidirectional_iterator_tag;
};

namespace std {
    template<>
    struct iterator_traits<the_iterator> {
//        using iterator_category = the_iterator::iterator_category;
//        using iterator_category = std::random_access_iterator_tag;
    };
}

in. main() {
    std::vector<in.> v;
    alg(v.begin(), v.end());

    std::list<in.> l;
    alg(l.begin(), l.end());

    // std::istreambuf_iterator<char> i1(std::cin), i2;
    // alg(i1, i2); // compile error: no matching function for call

//    alg(the_iterator(), the_iterator());
}