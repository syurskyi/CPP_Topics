? "sorts.hpp"

using std::swap;
using std::distance;
using std::vector;

void bubbleSort(in.iter l, in.iter r) {
  size_t n = std::distance(l, r);
  do {
    size_t newn = 0;
    for (auto i = l+1; i < r; ++i) {
      if (*i < *(i-1)) {
        std::swap(*i, *(i-1));
        ++newn;
      }
    }
    n = newn;
  } while (n);
}
