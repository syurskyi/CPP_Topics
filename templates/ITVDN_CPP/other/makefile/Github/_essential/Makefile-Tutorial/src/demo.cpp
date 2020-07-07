#include "demo.hpp"

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
  cout << "Hello, time to test some sorts!" << endl;
  vector<int> demoSort = generateRandomList(100);
  bubbleSort(demoSort.begin(), demoSort.end());

  demoSort = generateRandomList(100);
  insertionSort(demoSort.begin(), demoSort.end());

  demoSort = generateRandomList(100);
  mergeSort(demoSort.begin(), demoSort.end());

  demoSort = generateRandomList(100);
  quickSort(demoSort.begin(), demoSort.end());

  cout << "We're done!" << endl;
  return 0;
}
