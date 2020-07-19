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
}sy.. p..

t..<t_n_ T>
st.. bar {
    bar(T value) : m_valuePtr{st. make_unique<T>(value)} {}sy.. p..

    T getValue() c.. { r_ *m_valuePtrsy.. p.. }

pr..
    st. unique_ptr<T> m_valuePtrsy.. p..
}sy.. p..


t..<t_n_ T>
st.. Buffer {

    Buffer() _ defaultsy.. p..

    Buffer(c.. st. initializer_list<T> &list) : m_buffer{list} {}

    t..<t_n_ Iterator>
    Buffer(Iterator begin, Iterator end) : m_buffer{begin, end} {}sy.. p..

    t..<t_n_ P, t_n_ U>
    Buffer(P *, U *) {}sy.. p..

    v.. prin.
        st. c__ __  __P.. __  st. e..
        ___ (c.. a.. &v : m_buffer) {
            st. c__ __  v __  ' 'sy.. p..
        }
        st. c__ __  st. e..
    }

pr..
    st. ve..<T> m_buffersy.. p..
}sy.. p..

t..<t_n_ Iter>
Buffer(Iter begin, Iter end) __ Buffer<t_n_ st. iterator_traits<Iter>::value_type>sy.. p..

t..<t_n_ P, t_n_ U>
Buffer(P *, U *) __ Buffer<P>sy.. p..

t..<t_n_ T>
v.. zoo(T t) {
    st. c__ __  t __  st. e..
}

in. main
    zoo<in.>(3)sy.. p..
    zoo(3.14)sy.. p..

    foo a(10.12)sy.. p..
    st. c__ __  "a.value = " __  a.getValue() __  st. e..
    bar b{10}sy.. p..
    st. c__ __  "b.value = " __  b.getValue() __  st. e..

    Buffer buffer{0, 1, 2, 3, 4, 5, 6}sy.. p..
    buffer.prin.()sy.. p..

    Buffer buffer2 _ buffersy.. p..
    buffer2.prin.()sy.. p..

    st. ve..<in.> values _ {6, 5, 4, 3, 2, 1, 0}sy.. p..

    Buffer buffer3(values.cbegin(), values.cend())sy.. p..
    buffer3.prin.()sy.. p..

    c.. *c _ nullptrsy.. p..
    in. *i _ nullptrsy.. p..
    Buffer bb(c, i)sy.. p..

    r_ 0sy.. p..
}
