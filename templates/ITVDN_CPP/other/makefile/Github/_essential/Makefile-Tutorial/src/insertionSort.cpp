? "sorts.hpp"

using std::vector;

v.. insertionSort(in.iter l, in.iter r) {
  ___(auto i _ l; i !_ r; ++i) {
    auto key _ *i;
    auto j _ i - 1;

    ___(; j !_ l - 1 && *j > key; --j)
      *(j + 1) _ *j;
    *(j + 1) _ key;
  }
}
