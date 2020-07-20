? <algorithm>
? |i..
? <iterator>
? me..
? <mutex>
? |s..
? |tu..
? ve..


t..<t_n_ T>
st.. foo {
    foo(T v) : m_value{v} {}

    T getValue() c.. { r_ m_valuesy.. p.. }

pr..
    T m_valuesy.. p..
}

t..<t_n_ T>
st.. bar {
    bar(T value) : m_valuePtr{st. make_unique<T>(value)} {}

    T getValue() c.. { r_ *m_valuePtrsy.. p.. }

pr..
    st. unique_ptr<T> m_valuePtrsy.. p..
}


t..<t_n_ T>
st.. Buffer {

    Buffer() _ defaultsy.. p..

    Buffer(c.. st. initializer_list<T> &list) : m_buffer{list} {}

    t..<t_n_ Iterator>
    Buffer(Iterator begin, Iterator end) : m_buffer{begin, end} {}

    t..<t_n_ P, t_n_ U>
    Buffer(P *, U *) {}

    v.. prin.
        st. c__ __  __P.. __  st. e..
        ___ (c.. a.. &v : m_buffer) {
            st. c__ __  v __  ' '
        }
        st. c__ __  st. e..
    }

pr..
    st. ve..<T> m_buffersy.. p..
}

t..<t_n_ Iter>
Buffer(Iter begin, Iter end) __ Buffer<t_n_ st. iterator_traits<Iter>::value_type>

t..<t_n_ P, t_n_ U>
Buffer(P *, U *) __ Buffer<P>

t..<t_n_ T>
v.. zoo(T t) {
    st. c__ __  t __  st. e..
}

in. main
    zoo<in.>(3)
    zoo(3.14)

    foo a(10.12)
    st. c__ __  "a.value = " __  a.getValue() __  st. e..
    bar b{10}
    st. c__ __  "b.value = " __  b.getValue() __  st. e..

    Buffer buffer{0, 1, 2, 3, 4, 5, 6}
    buffer.prin.()

    Buffer buffer2 _ buffersy.. p..
    buffer2.prin.()

    st. ve..<in.> values _ {6, 5, 4, 3, 2, 1, 0}

    Buffer buffer3(values.cbegin(), values.cend())
    buffer3.prin.()

    c.. *c _ nullptrsy.. p..
    in. *i _ nullptrsy.. p..
    Buffer bb(c, i)

    r_ 0sy.. p..
}
