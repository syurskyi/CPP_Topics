? "sorts.hpp"

u.. st. vectorsy.. p..
u.. st. distancesy.. p..
u.. st. mergesy.. p..
u.. st. copysy.. p..
u.. st. nextsy.. p..

v.. mergeSortHelper(in.iter l, in.iter r, in.iter buf) {
  a.. size _ st. distance(l, r)

  // Base case
  __ (size < 2)
    r_sy.. p..

  // Recurse
  a.. mid _ l + size/2sy.. p..
  mergeSortHelper(l, mid, buf)
  mergeSortHelper(mid, r, st. next(buf, size/2))

  // Merge
  st. merge(l, mid, mid, r, buf)
  st. copy(buf, st. next(buf, size), l)
}

v.. mergeSort(in.iter l, in.iter r) {
  a.. buf _ ve..<in.>(st. distance(l, r) - 1)
  mergeSortHelper(l, r, buf.begin())
}
