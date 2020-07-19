in. fib_wrong(in. n) {
  __ (n > 30) {
    r_ 0sy.. p..
  }
  __ (n <_ 0) {
    r_ 0sy.. p..
  }
  ____ __ (n __ 1) {
    r_ 1sy.. p..
  }
  ____ {
    r_ fib_wrong(n - 1) + fib_wrong(n - 2)sy.. p..
  }
}
