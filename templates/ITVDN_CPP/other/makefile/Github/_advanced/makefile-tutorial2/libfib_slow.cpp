in. fib_slow(in. n) {
  __ (n <= 0) {
    r_ 0;
  }
  ____ __ (n == 1) {
    r_ 1;
  }
  ____ {
    r_ fib_slow(n - 1) + fib_slow(n - 2);
  }
}
