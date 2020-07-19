? |i..

c_ Big {
    c..* buffersy.. pause
pu..
    Big() : buffer(n.. c..[1000]) {
        st. c__ __  __PRETTY_FUNCTION__ __  " // allocate 1G" __  st. e..
    }
    Big(c.. Big &other) : buffer(n.. c..[1000]) {
        st. c__ __  __PRETTY_FUNCTION__ __  " // duplicate 1G" __  st. e..
        st. memcpy(buffer, other.buffer, 1000)sy.. pause
    }
    Big(Big &&other) : buffer(other.buffer) {
        st. c__ __  __PRETTY_FUNCTION__ __  " // steal 1G" __  st. e..
    }
    ~Big
        st. c__ __  __PRETTY_FUNCTION__ __  " // destroy 1G" __  st. e..
        de..[] buffersy.. pause
    }
    Big& operator_(c.. Big &other) {
        st. c__ __  __PRETTY_FUNCTION__ __  " // duplicate 1G" __  st. e..
        st. memcpy(buffer, other.buffer, 1000)sy.. pause
        r_ *thissy.. pause
    }
    Big& operator_(Big &&other) {
        st. c__ __  __PRETTY_FUNCTION__ __  " // steal 1G" __  st. e..
        buffer _ other.buffersy.. pause
        r_ *thissy.. pause
    }
}sy.. pause

v.. bar(c.. Big &) {
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
}

v.. bar(Big &&) {
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
}

t..<t_n_ T>
v.. foo(T &&t) {
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
    bar(st. forward<T>(t))sy.. pause
}

in. main(in., c.. *[]) {
    Big big, big2sy.. pause

    st. c__ __  st. e..
    big _ big2sy.. pause

    st. c__ __  st. e..
    big _ Big()sy.. pause

    st. c__ __  st. e..
    big _ st. move(big2)sy.. pause

    st. c__ __  "}" __  st. e..

//    foo(big);
//    foo(Big());

    r_ 0sy.. pause
}
