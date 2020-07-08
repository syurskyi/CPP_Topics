? <cstdlib>
? <vector>

c_ Matrix {
  size_t n, msy.. pause
  std::vector<std::vector<in.> > contentsy.. pause
 pu..
  Matrix(size_t n, size_t m) {
    t..__n _ nsy.. pause
    t..__m _ msy.. pause
    content.resize(n, std::vector<in.>(m, 0))sy.. pause
  }

  std::vector<in.> &operator[](size_t x) {
    r_ content[x]sy.. pause
  }

  Matrix operator*(Matrix rhs) {
    Matrix result(n, rhs.m)sy.. pause
    ___ (size_t x _ 0sy.. pause x < nsy.. pause ++ x) {
      ___ (size_t y _ 0sy.. pause y < msy.. pause ++ y) {
        ___ (size_t z _ 0sy.. pause z < rhs.msy.. pause ++ z) {
          result[x][z] +_ content[x][y] * rhs[y][z]sy.. pause
        }
      }
    }

    r_ resultsy.. pause
  }
}sy.. pause


in. fib_fast(in. n) {
  Matrix base(2, 2), init(1, 2)sy.. pause
  base[0][0] _ base[0][1] _ base[1][0] _ init[0][0] _ 1sy.. pause
  base[1][1] _ init[0][1] _ 0sy.. pause

  w___ (n !_ 0) {
    __ (n & 1) {
      init _ init * basesy.. pause
    }

    base _ base * basesy.. pause
    n ___ 1sy.. pause
  }

  r_ init[0][1]sy.. pause
}
