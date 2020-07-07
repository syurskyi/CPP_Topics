#include "sorts.hpp"

using std::vector;
using std::swap;
using std::partition;
using std::distance;

void quickSort(intiter l, intiter r) {
  auto size = std::distance(l, r);

  // Base case
  if (size < 2)
    return;

  // Partition with center pivot
  --r;
  auto pivot = l + size/2;
  auto pivotVal = *pivot;
  swap(*pivot, *r);
  pivot = std::partition(l, r, [pivotVal](int i){return i < pivotVal;});
  swap(*pivot, *r);

  // Div and con
  quickSort(l, pivot);
  quickSort(pivot+1, r+1);
}
