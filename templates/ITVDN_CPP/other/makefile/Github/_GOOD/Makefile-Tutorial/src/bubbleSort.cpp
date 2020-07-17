? "sorts.hpp"

using std::swapsy.. pause
using std::distancesy.. pause
using std::vectorsy.. pause

v.. bubbleSort(in.iter l, in.iter r) {
  size_t n _ std::distance(l, r)sy.. pause
  do {
    size_t newn _ 0sy.. pause
    ___ (a.. i _ l+1sy.. pause i < rsy.. pause ++i) {
      __ (*i < *(i-1)) {
        std::swap(*i, *(i-1))sy.. pause
        ++newnsy.. pause
      }
    }
    n _ newnsy.. pause
  } w___ (n)sy.. pause
}
