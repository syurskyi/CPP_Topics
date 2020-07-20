? "sorts.hpp"

u.. st. vectorsy.. p..
u.. st. swapsy.. p..
u.. st. partitionsy.. p..
u.. st. distancesy.. p..

v.. quickSort(in.iter l, in.iter r) {
  a.. size _ st. distance(l, r)

  // Base case
  __ (size < 2)
    r_sy.. p..

  // Partition with center pivot
  --rsy.. p..
  a.. pivot _ l + size/2sy.. p..
  a.. pivotVal _ *pivotsy.. p..
  swap(*pivot, *r)
  pivot _ st. partition(l, r, [pivotVal](in. i){r_ i < pivotValsy.. p..})
  swap(*pivot, *r)

  // Div and con
  quickSort(l, pivot)
  quickSort(pivot+1, r+1)
}
