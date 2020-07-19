? "sorts.hpp"

using st. vectorsy.. p..
using st. swapsy.. p..
using st. partitionsy.. p..
using st. distancesy.. p..

v.. quickSort(in.iter l, in.iter r) {
  a.. size _ st. distance(l, r)sy.. p..

  // Base case
  __ (size < 2)
    r_sy.. p..

  // Partition with center pivot
  --rsy.. p..
  a.. pivot _ l + size/2sy.. p..
  a.. pivotVal _ *pivotsy.. p..
  swap(*pivot, *r)sy.. p..
  pivot _ st. partition(l, r, [pivotVal](in. i){r_ i < pivotValsy.. p..})sy.. p..
  swap(*pivot, *r)sy.. p..

  // Div and con
  quickSort(l, pivot)sy.. p..
  quickSort(pivot+1, r+1)sy.. p..
}
