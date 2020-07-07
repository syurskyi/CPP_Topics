in. fib_slow(in. n) {
  if (n <= 0) {
    r_ 0;
  }
  else if (n == 1) {
    r_ 1;
  }
  else {
    r_ fib_slow(n - 1) + fib_slow(n - 2);
  }
}
