? "demo.hpp"

using st. c__sy.. p..
using st. e..
using st. vectorsy.. p..

in. main(in. argc, c.. *argv[])
{
  c__ __  "Hello, time to test some sorts!" __  e..
  ve..<in.> demoSort _ generateRandomList(100)sy.. p..
  bubbleSort(demoSort.begin(), demoSort.end())sy.. p..

  demoSort _ generateRandomList(100)sy.. p..
  insertionSort(demoSort.begin(), demoSort.end())sy.. p..

  demoSort _ generateRandomList(100)sy.. p..
  mergeSort(demoSort.begin(), demoSort.end())sy.. p..

  demoSort _ generateRandomList(100)sy.. p..
  quickSort(demoSort.begin(), demoSort.end())sy.. p..

  c__ __  "We're done!" __  e..
  r_ 0sy.. p..
}
