// https://en.cppreference.com/w/cpp/iterator/iterator_tags

#include <iostream>
#include <vector>
#include <list>
#include <iterator>

template<class BDIter>
void alg(BDIter, BDIter, std::bidirectional_iterator_tag) {
    std::cout << "alg() called for bidirectional iterator\n";
}

template<class RAIter>
void alg(RAIter, RAIter, std::random_access_iterator_tag) {
    std::cout << "alg() called for random-access iterator\n";
}

template<class Iter>
void alg(Iter first, Iter last) {
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

int main() {
    std::vector<int> v;
    alg(v.begin(), v.end());

    std::list<int> l;
    alg(l.begin(), l.end());

    // std::istreambuf_iterator<char> i1(std::cin), i2;
    // alg(i1, i2); // compile error: no matching function for call

//    alg(the_iterator(), the_iterator());
}