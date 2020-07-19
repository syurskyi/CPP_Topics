in. fib_slow(in. n) {
  __ (n <_ 0) {
    r_ 0sy.. p..
  }
  ____ __ (n __ 1) {
    r_ 1sy.. p..
  }
  ____ {
    r_ fib_slow(n - 1) + fib_slow(n - 2)sy.. p..
  }
}
