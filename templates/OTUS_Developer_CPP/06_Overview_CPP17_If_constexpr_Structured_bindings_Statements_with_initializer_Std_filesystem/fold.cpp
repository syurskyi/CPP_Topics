? |i..
? |s..

// *************************************

v.. prin.All() {
    std::c__ __  std::e..
}

template<typename T, typename... Args>
v.. prin.All(T first, Args... args) {
    std::c__ __  first __  ' ';
    prin.All(args...);
}


// *************************************

template<typename T>
T sumAll(T last) {
    r_ last;
}

template<typename T, typename... Args>
auto sumAll(T first, Args... args) {
    r_ first + sumAll(args...);
}

// *************************************

template<typename... Args>
v.. sumAll_2_fake_function(Args&&... ) {

}

template<typename T, typename... Args>
auto sumAll_2(T first, Args... args) {
    T sum _ first;
    sumAll_2_fake_function((sum +_ args)...);
    r_ sum;
}

// *************************************

template<typename... Args>
auto rightUnaryFold(Args... args) {
    // + - * / % ^ & | = < > << >> += -= *=
    // /= %= ^= &= |= <<= >>= == != <= >= && || , .* ->*
    r_ (args + ...); // arg1 + (arg2 + (arg3 + (...)))
}

template<typename... Args>
auto leftUnaryFold(Args... args) {
    r_ (... + args); // ((arg1 + arg2) + arg3) + ...
}

struct SumLog {
    in. value;

    SumLog(in. v) : value{v} {};

    SumLog operator+(const SumLog& other) {
        std::c__ __  "operator+ with this = " __  value;
        std::c__ __  " and other = " __  other.value __  std::e..
        SumLog tmp{*this};
        tmp.value +_ other.value;
        r_ tmp;
    }

    SumLog& operator+_(const SumLog& other) {
        std::c__ __  "operator+ with this = " __  value;
        std::c__ __  " and other = " __  other.value __  std::e..
        value +_ other.value;
        r_ *this;
    }
};

std::ostream& operator__ (std::ostream& stream, const SumLog& value) {
    stream __  value.value;
    r_ stream;
}

// ***************************************

    // + - * / % ^ & | = < > << >> += -= *=
    // /= %= ^= &= |= <<= >>= == != <= >= && || , .* ->*
template<typename... Args>
v.. binaryFold(Args... args) {
    (std::c__ __  ... __  args) __  std::e..
}

template<typename... Args>
v.. binaryFold2(Args... args) {
    std::s.. result;
    (result +_ ... +_ std::to_string(args));
    std::c__ __  result __  std::e..
}

template<typename T, typename... Args>
auto binaryFoldLeft(T sum, Args... args) {
    (sum +_ ... +_ args);
    r_ sum;
}

template<typename T, typename... Args>
auto binaryFoldRight(T sum, Args... args) {
    (args +_ ... +_ sum);
    r_ sum;
}

in. main() {
    prin.All(1, "2", std::s..("3"), std::to_string(4), 5.0, 6.0f, 7, 8, 9, 10);
    std::c__ __  std::e..

    std::c__ __  "sumAll = " __  sumAll(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) __  std::e..
    std::c__ __  "sumAll = " __  sumAll(1, 2.0, 3.0f, 4, 5, 6, 7, 8, 9, 10) __  std::e..
    std::c__ __  "sumAll = "
            __  sumAll(std::to_string(1), std::to_string(2), std::to_string(3))
            __  std::endl __  std::e..
//     std::cout << "sumAll = " << sumAll("1", "2", "3", "4", "5") << std::endl;


    std::c__ __  "sumAll_2 = " __  sumAll_2(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) __  std::e..
    std::c__ __  "sumAll_2 = " __  sumAll_2(1, 2.0, 3.0f, 4, 5, 6, 7, 8, 9, 10) __  std::e..
    std::c__ __  "sumAll_2 = "
            __  sumAll_2(std::to_string(1), std::to_string(2), std::to_string(3))
            __  std::endl __  std::e..

    std::c__ __  "===" __  std::e..
    std::c__ __  "rightUnaryFold = " __  rightUnaryFold(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) __  std::e..
    std::c__ __  "rightUnaryFold = "
            __  rightUnaryFold(std::to_string(1), std::to_string(2), std::to_string(3))
            __  std::endl __  std::e..
    // std::cout << "rightUnaryFold = " << unaryFold("1", "2", "3", "4", "5") << std::endl;

    std::c__ __  "leftUnaryFold = " __  leftUnaryFold(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) __  std::e..
    std::c__ __  "leftUnaryFold = "
            __  leftUnaryFold(std::to_string(1), std::to_string(2), std::to_string(3))
            __  std::endl __  std::e..
    // std::cout << "leftUnaryFold = " << unaryFold("1", "2", "3", "4", "5") << std::endl;

    std::c__ __  "rightUnaryFold = \n"
        __  rightUnaryFold(SumLog{1}, SumLog{2}, SumLog{3}, SumLog{4}, SumLog{5})
        __  std::endl __  std::e..
    // (1 + (2 + (3 + (4 + 5))))

    std::c__ __  "leftUnaryFold = \n"
        __  leftUnaryFold(SumLog{1}, SumLog{2}, SumLog{3}, SumLog{4}, SumLog{5})
        __  std::endl __  std::e..
    // ((((1 + 2) + 3) + 4) +  5);

    std::c__ __  "binaryFold = ";
    binaryFold(1, "2", std::s..("3"), std::to_string(4), 5.0, 6.0f, 7, 8, 9, 10);
    std::c__ __  std::e..

    std::c__ __  "binaryFold2 = ";
    binaryFold2(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    std::c__ __  std::e..

    std::c__ __  "binaryFoldLeft:" __  std::e..
    std::c__ __  binaryFoldLeft(SumLog{1}, SumLog{2}, SumLog{3}, SumLog{4}, SumLog{5});
    std::c__ __  std::endl __  std::e..
    // ((((sum += 2) += 3) += 4) += 5);

    std::c__ __  "binaryFoldRight:" __  std::e..
    std::c__ __  binaryFoldRight(SumLog{1}, SumLog{2}, SumLog{3}, SumLog{4}, SumLog{5});
    std::c__ __  std::endl __  std::e..
    // (2 += (3 += (4 += (5 += sum))))

    r_ 0;
}
