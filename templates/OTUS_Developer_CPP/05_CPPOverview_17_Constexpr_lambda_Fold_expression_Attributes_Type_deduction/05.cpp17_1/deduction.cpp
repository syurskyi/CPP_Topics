? <algorithm>
? |i..
? <iterator>
? <memory>
? <mutex>
? |s..
? <tuple>
? <vector>


template<typename T>
struct foo {
    foo(T v) : m_value{v} {}

    T getValue() const { r_ m_value; }

private:
    T m_value;
};

template<typename T>
struct bar {
    bar(T value) : m_valuePtr{std::make_unique<T>(value)} {};

    T getValue() const { r_ *m_valuePtr; }

private:
    std::unique_ptr<T> m_valuePtr;
};


template<typename T>
struct Buffer {

    Buffer() _ default;

    Buffer(const std::initializer_list<T> &list) : m_buffer{list} {}

    template<typename Iterator>
    Buffer(Iterator begin, Iterator end) : m_buffer{begin, end} {};

    template<typename P, typename U>
    Buffer(P *, U *) {};

    v.. prin.() {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
        ___ (const auto &v : m_buffer) {
            std::c__ __  v __  ' ';
        }
        std::c__ __  std::e..
    }

private:
    std::vector<T> m_buffer;
};

template<typename Iter>
Buffer(Iter begin, Iter end) -> Buffer<typename std::iterator_traits<Iter>::value_type>;

template<typename P, typename U>
Buffer(P *, U *) -> Buffer<P>;

template<typename T>
v.. zoo(T t) {
    std::c__ __  t __  std::e..
}

in. main() {
    zoo<in.>(3);
    zoo(3.14);

    foo a(10.12);
    std::c__ __  "a.value = " __  a.getValue() __  std::e..
    bar b{10};
    std::c__ __  "b.value = " __  b.getValue() __  std::e..

    Buffer buffer{0, 1, 2, 3, 4, 5, 6};
    buffer.prin.();

    Buffer buffer2 _ buffer;
    buffer2.prin.();

    std::vector<in.> values _ {6, 5, 4, 3, 2, 1, 0};

    Buffer buffer3(values.cbegin(), values.cend());
    buffer3.prin.();

    c.. *c _ nullptr;
    in. *i _ nullptr;
    Buffer bb(c, i);

    r_ 0;
}
