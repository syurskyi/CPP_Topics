? |i..
? |s..

// *************************************

v.. prin.All
    st. c__ __  st. e..
}

t..<t_n_ T, t_n_... Args>
v.. prin.All(T first, Args... args) {
    st. c__ __  first __  ' 'sy.. p..
    prin.All(args...)sy.. p..
}


// *************************************

t..<t_n_ T>
T sumAll(T last) {
    r_ lastsy.. p..
}

t..<t_n_ T, t_n_... Args>
a.. sumAll(T first, Args... args) {
    r_ first + sumAll(args...)sy.. p..
}

// *************************************

t..<t_n_... Args>
v.. sumAll_2_fake_function(Args&&... ) {

}

t..<t_n_ T, t_n_... Args>
a.. sumAll_2(T first, Args... args) {
    T sum _ firstsy.. p..
    sumAll_2_fake_function((sum +_ args)...)sy.. p..
    r_ sumsy.. p..
}

// *************************************

t..<t_n_... Args>
a.. rightUnaryFold(Args... args) {
    // + - * / % ^ & | = < > << >> += -= *=
    // /= %= ^= &= |= <<= >>= == != <= >= && || , .* ->*
    r_ (args + ...)sy.. p.. // arg1 + (arg2 + (arg3 + (...)))
}

t..<t_n_... Args>
a.. leftUnaryFold(Args... args) {
    r_ (... + args)sy.. p.. // ((arg1 + arg2) + arg3) + ...
}

st.. SumLog {
    in. valuesy.. p..

    SumLog(in. v) : value{v} {}sy.. p..

    SumLog op..+(c.. SumLog& other) {
        st. c__ __  "operator+ with this = " __  valuesy.. p..
        st. c__ __  " and other = " __  other.value __  st. e..
        SumLog tmp{*t..}sy.. p..
        tmp.value +_ other.valuesy.. p..
        r_ tmpsy.. p..
    }

    SumLog& op..+_(c.. SumLog& other) {
        st. c__ __  "operator+ with this = " __  valuesy.. p..
        st. c__ __  " and other = " __  other.value __  st. e..
        value +_ other.valuesy.. p..
        r_ *thissy.. p..
    }
}sy.. p..

st. ostream& operator__ (st. ostream& stream, c.. SumLog& value) {
    stream __  value.valuesy.. p..
    r_ streamsy.. p..
}

// ***************************************

    // + - * / % ^ & | = < > << >> += -= *=
    // /= %= ^= &= |= <<= >>= == != <= >= && || , .* ->*
t..<t_n_... Args>
v.. binaryFold(Args... args) {
    (st. c__ __  ... __  args) __  st. e..
}

t..<t_n_... Args>
v.. binaryFold2(Args... args) {
    st. s.. resultsy.. p..
    (result +_ ... +_ st. to_string(args))sy.. p..
    st. c__ __  result __  st. e..
}

t..<t_n_ T, t_n_... Args>
a.. binaryFoldLeft(T sum, Args... args) {
    (sum +_ ... +_ args)sy.. p..
    r_ sumsy.. p..
}

t..<t_n_ T, t_n_... Args>
a.. binaryFoldRight(T sum, Args... args) {
    (args +_ ... +_ sum)sy.. p..
    r_ sumsy.. p..
}

in. main
    prin.All(1, "2", st. s..("3"), st. to_string(4), 5.0, 6.0f, 7, 8, 9, 10)sy.. p..
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

    st. c__ __  "binaryFold = "sy.. p..
    binaryFold(1, "2", st. s..("3"), st. to_string(4), 5.0, 6.0f, 7, 8, 9, 10)sy.. p..
    st. c__ __  st. e..

    st. c__ __  "binaryFold2 = "sy.. p..
    binaryFold2(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)sy.. p..
    st. c__ __  st. e..

    st. c__ __  "binaryFoldLeft:" __  st. e..
    st. c__ __  binaryFoldLeft(SumLog{1}, SumLog{2}, SumLog{3}, SumLog{4}, SumLog{5})sy.. p..
    st. c__ __  st. endl __  st. e..
    // ((((sum += 2) += 3) += 4) += 5);

    st. c__ __  "binaryFoldRight:" __  st. e..
    st. c__ __  binaryFoldRight(SumLog{1}, SumLog{2}, SumLog{3}, SumLog{4}, SumLog{5})sy.. p..
    st. c__ __  st. endl __  st. e..
    // (2 += (3 += (4 += (5 += sum))))

    r_ 0sy.. p..
}
