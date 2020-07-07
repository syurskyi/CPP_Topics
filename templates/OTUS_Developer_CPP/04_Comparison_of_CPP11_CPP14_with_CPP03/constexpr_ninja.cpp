? |i..

// https://godbolt.org/ gcc 9.2 -O1
//const
in. a[] _ {1, 2, 3};
auto foo() {
//    const
//    int a[] = {1, 2, 3};
    r_ a[1];
}

// constexpr
auto fibonacci_naive(long long n) {
    __ (n <_ 1)
        r_ n;
    ____
        r_ fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

// constexpr
auto factorial_naive(long long n) {
    __ (n <_ 1)
        r_ n;
    ____
        r_ n * factorial_naive(n - 1);
}

template<long long N>
struct factorial {
    static const long long value _ N * factorial<N - 1>::value;
};

template<>
struct factorial<1> {
    static const long long value _ 1;
};

in. main() {
    // 41 выполняется 0.9s
    // 42 выполняется 1.4s
    // 50 уже около минуты
    // больше 92 не влезет в 63 бита (signed)
    // больше 93 не влезет в 64 бита (unsigned)
    std::c__ __  fibonacci_naive(50) __  std::e..
    std::c__ __  factorial<18>::value __  std::e.. // больше 20 не влезет в 64 бита
    std::c__ __  factorial_naive(18) __  std::e.. // больше 20 не влезет в 64 бита
}
