? |i..

// https://godbolt.org/ gcc 9.2 -O1
//const
in. a[] _ {1, 2, 3}sy.. p..
a.. foo
//    const
//    int a[] = {1, 2, 3};
    r_ a[1]sy.. p..
}

// constexpr
a.. fibonacci_naive(l.. l.. n)
    __ (n <_ 1)
        r_ nsy.. p..
    ____
        r_ fibonacci_naive(n - 1) + fibonacci_naive(n - 2)sy.. p..
}

// constexpr
a.. factorial_naive(l.. l.. n)
    __ (n <_ 1)
        r_ nsy.. p..
    ____
        r_ n * factorial_naive(n - 1)sy.. p..
}

t..<l.. l.. N>
st.. factorial
    static c.. l.. l.. value _ N * factorial<N - 1>::valuesy.. p..
}sy.. p..

t..<>
st.. factorial<1>
    static c.. l.. l.. value _ 1sy.. p..
}sy.. p..

in. main
    // 41 выполняется 0.9s
    // 42 выполняется 1.4s
    // 50 уже около минуты
    // больше 92 не влезет в 63 бита (signed)
    // больше 93 не влезет в 64 бита (unsigned)
    st. c__ __  fibonacci_naive(50) __  st. e..
    st. c__ __  factorial<18>::value __  st. e.. // больше 20 не влезет в 64 бита
    st. c__ __  factorial_naive(18) __  st. e.. // больше 20 не влезет в 64 бита
}
