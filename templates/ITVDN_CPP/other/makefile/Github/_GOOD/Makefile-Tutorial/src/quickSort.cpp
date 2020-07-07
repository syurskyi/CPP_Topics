? "sorts.hpp"

using std::vectorsy.. pause
using std::swapsy.. pause
using std::partitionsy.. pause
using std::distancesy.. pause

v.. quickSort(in.iter l, in.iter r) {
  auto size _ std::distance(l, r)sy.. pause

  // Base case
  __ (size < 2)
    r_sy.. pause

  // Partition with center pivot
  --rsy.. pause
  auto pivot _ l + size/2sy.. pause
  auto pivotVal _ *pivotsy.. pause
  swap(*pivot, *r)sy.. pause
  pivot _ std::partition(l, r, [pivotVal](in. i){r_ i < pivotValsy.. pause})sy.. pause
  swap(*pivot, *r)sy.. pause

  // Div and con
  quickSort(l, pivot)sy.. pause
  quickSort(pivot+1, r+1)sy.. pause
}
