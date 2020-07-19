? |i..

c_ Big {
    c..* buffersy.. p..
pu..
    Big() : buffer(n.. c..[1000]) {
        st. c__ __  __PRETTY_FUNCTION__ __  " // allocate 1G" __  st. e..
    }
    Big(c.. Big &other) : buffer(n.. c..[1000]) {
        st. c__ __  __PRETTY_FUNCTION__ __  " // duplicate 1G" __  st. e..
        st. memcpy(buffer, other.buffer, 1000)sy.. p..
    }
    Big(Big &&other) : buffer(other.buffer) {
        st. c__ __  __PRETTY_FUNCTION__ __  " // steal 1G" __  st. e..
    }
    ~Big
        st. c__ __  __PRETTY_FUNCTION__ __  " // destroy 1G" __  st. e..
        de..[] buffersy.. p..
    }
    Big& operator_(c.. Big &other) {
        st. c__ __  __PRETTY_FUNCTION__ __  " // duplicate 1G" __  st. e..
        st. memcpy(buffer, other.buffer, 1000)sy.. p..
        r_ *thissy.. p..
    }
    Big& operator_(Big &&other) {
        st. c__ __  __PRETTY_FUNCTION__ __  " // steal 1G" __  st. e..
        buffer _ other.buffersy.. p..
        r_ *thissy.. p..
    }
}sy.. p..

v.. bar(c.. Big &) {
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
}

v.. bar(Big &&) {
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
}

t..<t_n_ T>
v.. foo(T &&t) {
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
    bar(st. forward<T>(t))sy.. p..
}

in. main(in., c.. *[]) {
    Big big, big2sy.. p..

    st. c__ __  st. e..
    big _ big2sy.. p..

    st. c__ __  st. e..
    big _ Big()sy.. p..

    st. c__ __  st. e..
    big _ st. move(big2)sy.. p..

    st. c__ __  "}" __  st. e..

//    foo(big);
//    foo(Big());

    r_ 0sy.. p..
}
