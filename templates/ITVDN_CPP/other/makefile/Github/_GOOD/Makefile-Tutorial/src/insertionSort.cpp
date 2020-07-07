? "sorts.hpp"

using std::vector;

void insertionSort(in.iter l, in.iter r) {
  for(auto i _ l; i !_ r; ++i) {
    auto key _ *i;
    auto j _ i - 1;

    for(; j !_ l - 1 && *j > key; --j)
      *(j + 1) _ *j;
    *(j + 1) _ key;
  }
}
