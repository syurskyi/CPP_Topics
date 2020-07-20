? <cstdlib>
? ve..

c_ Matrix {
  size_t n, msy.. p..
  st. ve..<st. ve..<in.> > contentsy.. p..
 pu..
  Matrix(size_t n, size_t m) {
    t..__n _ nsy.. p..
    t..__m _ msy.. p..
    content.resize(n, st. ve..<in.>(m, 0))
  }

  st. ve..<in.> &op..[](size_t x) {
    r_ content[x]
  }

  Matrix op..*(Matrix rhs) {
    Matrix result(n, rhs.m)
    ___ (size_t x _ 0sy.. p.. x < nsy.. p.. ++ x) {
      ___ (size_t y _ 0sy.. p.. y < msy.. p.. ++ y) {
        ___ (size_t z _ 0sy.. p.. z < rhs.msy.. p.. ++ z) {
          result[x][z] +_ content[x][y] * rhs[y][z]
        }
      }
    }

    r_ resultsy.. p..
  }
}


in. fib_fast(in. n) {
  Matrix base(2, 2), init(1, 2)
  base[0][0] _ base[0][1] _ base[1][0] _ init[0][0] _ 1sy.. p..
  base[1][1] _ init[0][1] _ 0sy.. p..

  w___ (n !_ 0) {
    __ (n & 1) {
      init _ init * basesy.. p..
    }

    base _ base * basesy.. p..
    n ___ 1sy.. p..
  }

  r_ init[0][1]
}
