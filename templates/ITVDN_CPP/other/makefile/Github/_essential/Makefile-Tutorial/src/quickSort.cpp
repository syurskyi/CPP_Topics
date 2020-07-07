? "sorts.hpp"

using std::vector;
using std::swap;
using std::partition;
using std::distance;

void quickSort(in.iter l, in.iter r) {
  auto size _ std::distance(l, r);

  // Base case
  __ (size < 2)
    r_;

  // Partition with center pivot
  --r;
  auto pivot _ l + size/2;
  auto pivotVal _ *pivot;
  swap(*pivot, *r);
  pivot _ std::partition(l, r, [pivotVal](in. i){r_ i < pivotVal;});
  swap(*pivot, *r);

  // Div and con
  quickSort(l, pivot);
  quickSort(pivot+1, r+1);
}
