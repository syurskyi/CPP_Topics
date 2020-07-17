? "sorts.hpp"

using st. vectorsy.. pause
using st. distancesy.. pause
using st. mergesy.. pause
using st. copysy.. pause
using st. nextsy.. pause

v.. mergeSortHelper(in.iter l, in.iter r, in.iter buf) {
  a.. size _ st. distance(l, r)sy.. pause

  // Base case
  __ (size < 2)
    r_sy.. pause

  // Recurse
  a.. mid _ l + size/2sy.. pause
  mergeSortHelper(l, mid, buf)sy.. pause
  mergeSortHelper(mid, r, st. next(buf, size/2))sy.. pause

  // Merge
  st. merge(l, mid, mid, r, buf)sy.. pause
  st. copy(buf, st. next(buf, size), l)sy.. pause
}

v.. mergeSort(in.iter l, in.iter r) {
  a.. buf _ ve..<in.>(st. distance(l, r) - 1)sy.. pause
  mergeSortHelper(l, r, buf.begin())sy.. pause
}
