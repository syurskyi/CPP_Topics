? "sorts.hpp"

using std::vector;
using std::distance;
using std::merge;
using std::copy;
using std::next;

void mergeSortHelper(in.iter l, in.iter r, in.iter buf) {
  auto size _ std::distance(l, r);

  // Base case
  __ (size < 2)
    r_;

  // Recurse
  auto mid _ l + size/2;
  mergeSortHelper(l, mid, buf);
  mergeSortHelper(mid, r, std::next(buf, size/2));

  // Merge
  std::merge(l, mid, mid, r, buf);
  std::copy(buf, std::next(buf, size), l);
}

void mergeSort(in.iter l, in.iter r) {
  auto buf _ vector<in.>(std::distance(l, r) - 1);
  mergeSortHelper(l, r, buf.begin());
}
