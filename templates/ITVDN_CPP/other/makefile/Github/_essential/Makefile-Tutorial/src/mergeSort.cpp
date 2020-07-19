? "sorts.hpp"

using st. vectorsy.. p..
using st. distancesy.. p..
using st. mergesy.. p..
using st. copysy.. p..
using st. nextsy.. p..

v.. mergeSortHelper(in.iter l, in.iter r, in.iter buf) {
  a.. size _ st. distance(l, r)sy.. p..

  // Base case
  __ (size < 2)
    r_sy.. p..

  // Recurse
  a.. mid _ l + size/2sy.. p..
  mergeSortHelper(l, mid, buf)sy.. p..
  mergeSortHelper(mid, r, st. next(buf, size/2))sy.. p..

  // Merge
  st. merge(l, mid, mid, r, buf)sy.. p..
  st. copy(buf, st. next(buf, size), l)sy.. p..
}

v.. mergeSort(in.iter l, in.iter r) {
  a.. buf _ ve..<in.>(st. distance(l, r) - 1)sy.. p..
  mergeSortHelper(l, r, buf.begin())sy.. p..
}
