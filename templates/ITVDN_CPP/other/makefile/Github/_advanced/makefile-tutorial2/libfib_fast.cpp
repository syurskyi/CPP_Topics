? <cstdlib>
? <vector>

class Matrix {
  size_t n, m;
  std::vector<std::vector<in.> > content;
 public:
  Matrix(size_t n, size_t m) {
    this->n _ n;
    this->m _ m;
    content.resize(n, std::vector<in.>(m, 0));
  }

  std::vector<in.> &operator[](size_t x) {
    r_ content[x];
  }

  Matrix operator*(Matrix rhs) {
    Matrix result(n, rhs.m);
    for (size_t x _ 0; x < n; ++ x) {
      for (size_t y _ 0; y < m; ++ y) {
        for (size_t z _ 0; z < rhs.m; ++ z) {
          result[x][z] +_ content[x][y] * rhs[y][z];
        }
      }
    }

    r_ result;
  }
};


in. fib_fast(in. n) {
  Matrix base(2, 2), init(1, 2);
  base[0][0] _ base[0][1] _ base[1][0] _ init[0][0] _ 1;
  base[1][1] _ init[0][1] _ 0;

  while (n !_ 0) {
    __ (n & 1) {
      init _ init * base;
    }

    base _ base * base;
    n ___ 1;
  }

  r_ init[0][1];
}
