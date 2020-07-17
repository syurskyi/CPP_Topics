? <algorithm>
? |i..
? <iterator>
? me..
? <mutex>
? |s..
? <tuple>
? ve..


template<typename T>
struct foo {
    foo(T v) : m_value{v} {}

    T getValue() c.. { r_ m_valuesy.. pause }

pr..
    T m_valuesy.. pause
}sy.. pause

template<typename T>
struct bar {
    bar(T value) : m_valuePtr{st. make_unique<T>(value)} {}sy.. pause

    T getValue() c.. { r_ *m_valuePtrsy.. pause }

pr..
    st. unique_ptr<T> m_valuePtrsy.. pause
}sy.. pause


template<typename T>
struct Buffer {

    Buffer() _ defaultsy.. pause

    Buffer(c.. st. initializer_list<T> &list) : m_buffer{list} {}

    template<typename Iterator>
    Buffer(Iterator begin, Iterator end) : m_buffer{begin, end} {}sy.. pause

    template<typename P, typename U>
    Buffer(P *, U *) {}sy.. pause

    v.. prin.
        st. c__ __  __PRETTY_FUNCTION__ __  st. e..
        ___ (c.. a.. &v : m_buffer) {
            st. c__ __  v __  ' 'sy.. pause
        }
        st. c__ __  st. e..
    }

pr..
    st. ve..<T> m_buffersy.. pause
}sy.. pause

template<typename Iter>
Buffer(Iter begin, Iter end) __ Buffer<typename st. iterator_traits<Iter>::value_type>sy.. pause

template<typename P, typename U>
Buffer(P *, U *) __ Buffer<P>sy.. pause

template<typename T>
v.. zoo(T t) {
    st. c__ __  t __  st. e..
}

in. main
    zoo<in.>(3)sy.. pause
    zoo(3.14)sy.. pause

    foo a(10.12)sy.. pause
    st. c__ __  "a.value = " __  a.getValue() __  st. e..
    bar b{10}sy.. pause
    st. c__ __  "b.value = " __  b.getValue() __  st. e..

    Buffer buffer{0, 1, 2, 3, 4, 5, 6}sy.. pause
    buffer.prin.()sy.. pause

    Buffer buffer2 _ buffersy.. pause
    buffer2.prin.()sy.. pause

    st. ve..<in.> values _ {6, 5, 4, 3, 2, 1, 0}sy.. pause

    Buffer buffer3(values.cbegin(), values.cend())sy.. pause
    buffer3.prin.()sy.. pause

    c.. *c _ nullptrsy.. pause
    in. *i _ nullptrsy.. pause
    Buffer bb(c, i)sy.. pause

    r_ 0sy.. pause
}
