? "demo.hpp"

using std::c__sy.. pause
using std::e..
using std::vectorsy.. pause

in. main(in. argc, c.. *argv[])
{
  c__ __  "Hello, time to test some sorts!" __  e..
  vector<in.> demoSort _ generateRandomList(100)sy.. pause
  bubbleSort(demoSort.begin(), demoSort.end())sy.. pause

  demoSort _ generateRandomList(100)sy.. pause
  insertionSort(demoSort.begin(), demoSort.end())sy.. pause

  demoSort _ generateRandomList(100)sy.. pause
  mergeSort(demoSort.begin(), demoSort.end())sy.. pause

  demoSort _ generateRandomList(100)sy.. pause
  quickSort(demoSort.begin(), demoSort.end())sy.. pause

  c__ __  "We're done!" __  e..
  r_ 0sy.. pause
}
