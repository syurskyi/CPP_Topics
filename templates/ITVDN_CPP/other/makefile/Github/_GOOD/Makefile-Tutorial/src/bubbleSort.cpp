? "sorts.hpp"

using std::swap;
using std::distance;
using std::vector;

void bubbleSort(in.iter l, in.iter r) {
  size_t n _ std::distance(l, r);
  do {
    size_t newn _ 0;
    ___ (auto i _ l+1; i < r; ++i) {
      __ (*i < *(i-1)) {
        std::swap(*i, *(i-1));
        ++newn;
      }
    }
    n _ newn;
  } w___ (n);
}
