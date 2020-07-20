? "demo.hpp"

u.. st. c__sy.. p..
u.. st. e..
u.. st. vectorsy.. p..

in. main(in. argc, c.. *argv[])
{
  c__ __  "Hello, time to test some sorts!" __  e..
  ve..<in.> demoSort _ generateRandomList(100)
  bubbleSort(demoSort.begin(), demoSort.end())

  demoSort _ generateRandomList(100)
  insertionSort(demoSort.begin(), demoSort.end())

  demoSort _ generateRandomList(100)
  mergeSort(demoSort.begin(), demoSort.end())

  demoSort _ generateRandomList(100)
  quickSort(demoSort.begin(), demoSort.end())

  c__ __  "We're done!" __  e..
  r_ 0sy.. p..
}
