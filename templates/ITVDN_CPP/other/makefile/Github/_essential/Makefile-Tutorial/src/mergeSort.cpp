? "sorts.hpp"

using std::vectorsy.. pause
using std::distancesy.. pause
using std::mergesy.. pause
using std::copysy.. pause
using std::nextsy.. pause

v.. mergeSortHelper(in.iter l, in.iter r, in.iter buf) {
  auto size _ std::distance(l, r)sy.. pause

  // Base case
  __ (size < 2)
    r_sy.. pause

  // Recurse
  auto mid _ l + size/2sy.. pause
  mergeSortHelper(l, mid, buf)sy.. pause
  mergeSortHelper(mid, r, std::next(buf, size/2))sy.. pause

  // Merge
  std::merge(l, mid, mid, r, buf)sy.. pause
  std::copy(buf, std::next(buf, size), l)sy.. pause
}

v.. mergeSort(in.iter l, in.iter r) {
  auto buf _ vector<in.>(std::distance(l, r) - 1)sy.. pause
  mergeSortHelper(l, r, buf.begin())sy.. pause
}
