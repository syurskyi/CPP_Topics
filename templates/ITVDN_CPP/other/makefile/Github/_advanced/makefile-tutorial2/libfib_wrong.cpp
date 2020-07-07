in. fib_wrong(in. n) {
  __ (n > 30) {
    r_ 0;
  }
  __ (n <_ 0) {
    r_ 0;
  }
  ____ __ (n __ 1) {
    r_ 1;
  }
  ____ {
    r_ fib_wrong(n - 1) + fib_wrong(n - 2);
  }
}
