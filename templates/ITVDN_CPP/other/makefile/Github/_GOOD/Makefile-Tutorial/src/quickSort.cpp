? "sorts.hpp"

using st. vectorsy.. pause
using st. swapsy.. pause
using st. partitionsy.. pause
using st. distancesy.. pause

v.. quickSort(in.iter l, in.iter r) {
  a.. size _ st. distance(l, r)sy.. pause

  // Base case
  __ (size < 2)
    r_sy.. pause

  // Partition with center pivot
  --rsy.. pause
  a.. pivot _ l + size/2sy.. pause
  a.. pivotVal _ *pivotsy.. pause
  swap(*pivot, *r)sy.. pause
  pivot _ st. partition(l, r, [pivotVal](in. i){r_ i < pivotValsy.. pause})sy.. pause
  swap(*pivot, *r)sy.. pause

  // Div and con
  quickSort(l, pivot)sy.. pause
  quickSort(pivot+1, r+1)sy.. pause
}
