? |i..
? |s..

// *************************************

v.. prin.All
    st. c__ __  st. e..
}

template<typename T, typename... Args>
v.. prin.All(T first, Args... args) {
    st. c__ __  first __  ' 'sy.. pause
    prin.All(args...)sy.. pause
}


// *************************************

template<typename T>
T sumAll(T last) {
    r_ lastsy.. pause
}

template<typename T, typename... Args>
a.. sumAll(T first, Args... args) {
    r_ first + sumAll(args...)sy.. pause
}

// *************************************

template<typename... Args>
v.. sumAll_2_fake_function(Args&&... ) {

}

template<typename T, typename... Args>
a.. sumAll_2(T first, Args... args) {
    T sum _ firstsy.. pause
    sumAll_2_fake_function((sum +_ args)...)sy.. pause
    r_ sumsy.. pause
}

// *************************************

template<typename... Args>
a.. rightUnaryFold(Args... args) {
    // + - * / % ^ & | = < > << >> += -= *=
    // /= %= ^= &= |= <<= >>= == != <= >= && || , .* ->*
    r_ (args + ...)sy.. pause // arg1 + (arg2 + (arg3 + (...)))
}

template<typename... Args>
a.. leftUnaryFold(Args... args) {
    r_ (... + args)sy.. pause // ((arg1 + arg2) + arg3) + ...
}

struct SumLog {
    in. valuesy.. pause

    SumLog(in. v) : value{v} {}sy.. pause

    SumLog operator+(c.. SumLog& other) {
        st. c__ __  "operator+ with this = " __  valuesy.. pause
        st. c__ __  " and other = " __  other.value __  st. e..
        SumLog tmp{*t..}sy.. pause
        tmp.value +_ other.valuesy.. pause
        r_ tmpsy.. pause
    }

    SumLog& operator+_(c.. SumLog& other) {
        st. c__ __  "operator+ with this = " __  valuesy.. pause
        st. c__ __  " and other = " __  other.value __  st. e..
        value +_ other.valuesy.. pause
        r_ *thissy.. pause
    }
}sy.. pause

st. ostream& operator__ (st. ostream& stream, c.. SumLog& value) {
    stream __  value.valuesy.. pause
    r_ streamsy.. pause
}

// ***************************************

    // + - * / % ^ & | = < > << >> += -= *=
    // /= %= ^= &= |= <<= >>= == != <= >= && || , .* ->*
template<typename... Args>
v.. binaryFold(Args... args) {
    (st. c__ __  ... __  args) __  st. e..
}

template<typename... Args>
v.. binaryFold2(Args... args) {
    st. s.. resultsy.. pause
    (result +_ ... +_ st. to_string(args))sy.. pause
    st. c__ __  result __  st. e..
}

template<typename T, typename... Args>
a.. binaryFoldLeft(T sum, Args... args) {
    (sum +_ ... +_ args)sy.. pause
    r_ sumsy.. pause
}

template<typename T, typename... Args>
a.. binaryFoldRight(T sum, Args... args) {
    (args +_ ... +_ sum)sy.. pause
    r_ sumsy.. pause
}

in. main
    prin.All(1, "2", st. s..("3"), st. to_string(4), 5.0, 6.0f, 7, 8, 9, 10)sy.. pause
    st. c__ __  st. e..

    st. c__ __  "sumAll = " __  sumAll(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) __  st. e..
    st. c__ __  "sumAll = " __  sumAll(1, 2.0, 3.0f, 4, 5, 6, 7, 8, 9, 10) __  st. e..
    st. c__ __  "sumAll = "
            __  sumAll(st. to_string(1), st. to_string(2), st. to_string(3))
            __  st. endl __  st. e..
//     std::cout << "sumAll = " << sumAll("1", "2", "3", "4", "5") << std::endl;


    st. c__ __  "sumAll_2 = " __  sumAll_2(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) __  st. e..
    st. c__ __  "sumAll_2 = " __  sumAll_2(1, 2.0, 3.0f, 4, 5, 6, 7, 8, 9, 10) __  st. e..
    st. c__ __  "sumAll_2 = "
            __  sumAll_2(st. to_string(1), st. to_string(2), st. to_string(3))
            __  st. endl __  st. e..

    st. c__ __  "===" __  st. e..
    st. c__ __  "rightUnaryFold = " __  rightUnaryFold(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) __  st. e..
    st. c__ __  "rightUnaryFold = "
            __  rightUnaryFold(st. to_string(1), st. to_string(2), st. to_string(3))
            __  st. endl __  st. e..
    // std::cout << "rightUnaryFold = " << unaryFold("1", "2", "3", "4", "5") << std::endl;

    st. c__ __  "leftUnaryFold = " __  leftUnaryFold(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) __  st. e..
    st. c__ __  "leftUnaryFold = "
            __  leftUnaryFold(st. to_string(1), st. to_string(2), st. to_string(3))
            __  st. endl __  st. e..
    // std::cout << "leftUnaryFold = " << unaryFold("1", "2", "3", "4", "5") << std::endl;

    st. c__ __  "rightUnaryFold = \n"
        __  rightUnaryFold(SumLog{1}, SumLog{2}, SumLog{3}, SumLog{4}, SumLog{5})
        __  st. endl __  st. e..
    // (1 + (2 + (3 + (4 + 5))))

    st. c__ __  "leftUnaryFold = \n"
        __  leftUnaryFold(SumLog{1}, SumLog{2}, SumLog{3}, SumLog{4}, SumLog{5})
        __  st. endl __  st. e..
    // ((((1 + 2) + 3) + 4) +  5);

    st. c__ __  "binaryFold = "sy.. pause
    binaryFold(1, "2", st. s..("3"), st. to_string(4), 5.0, 6.0f, 7, 8, 9, 10)sy.. pause
    st. c__ __  st. e..

    st. c__ __  "binaryFold2 = "sy.. pause
    binaryFold2(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)sy.. pause
    st. c__ __  st. e..

    st. c__ __  "binaryFoldLeft:" __  st. e..
    st. c__ __  binaryFoldLeft(SumLog{1}, SumLog{2}, SumLog{3}, SumLog{4}, SumLog{5})sy.. pause
    st. c__ __  st. endl __  st. e..
    // ((((sum += 2) += 3) += 4) += 5);

    st. c__ __  "binaryFoldRight:" __  st. e..
    st. c__ __  binaryFoldRight(SumLog{1}, SumLog{2}, SumLog{3}, SumLog{4}, SumLog{5})sy.. pause
    st. c__ __  st. endl __  st. e..
    // (2 += (3 += (4 += (5 += sum))))

    r_ 0sy.. pause
}
