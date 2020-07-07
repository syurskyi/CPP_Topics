#include "sorts.hpp"

using std::vector;

void insertionSort(intiter l, intiter r) {
  for(auto i = l; i != r; ++i) {
    auto key = *i;
    auto j = i - 1;

    for(; j != l - 1 && *j > key; --j)
      *(j + 1) = *j;
    *(j + 1) = key;
  }
}
