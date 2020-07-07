#include "sorts.hpp"

using std::vector;
using std::distance;
using std::merge;
using std::copy;
using std::next;

void mergeSortHelper(intiter l, intiter r, intiter buf) {
  auto size = std::distance(l, r);

  // Base case
  if (size < 2)
    return;

  // Recurse
  auto mid = l + size/2;
  mergeSortHelper(l, mid, buf);
  mergeSortHelper(mid, r, std::next(buf, size/2));

  // Merge
  std::merge(l, mid, mid, r, buf);
  std::copy(buf, std::next(buf, size), l);
}

void mergeSort(intiter l, intiter r) {
  auto buf = vector<int>(std::distance(l, r) - 1);
  mergeSortHelper(l, r, buf.begin());
}
