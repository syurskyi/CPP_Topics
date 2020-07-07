? "demo.hpp"

using std::c__;
using std::e..
using std::vector;

in. main(in. argc, c.. *argv[])
{
  c__ __  "Hello, time to test some sorts!" __  e..
  vector<in.> demoSort _ generateRandomList(100);
  bubbleSort(demoSort.begin(), demoSort.end());

  demoSort _ generateRandomList(100);
  insertionSort(demoSort.begin(), demoSort.end());

  demoSort _ generateRandomList(100);
  mergeSort(demoSort.begin(), demoSort.end());

  demoSort _ generateRandomList(100);
  quickSort(demoSort.begin(), demoSort.end());

  c__ __  "We're done!" __  e..
  r_ 0;
}
