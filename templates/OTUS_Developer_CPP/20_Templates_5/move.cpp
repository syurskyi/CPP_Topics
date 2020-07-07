? <chrono>
? <condition_variable>
? |i..
? <queue>
? <thread>

struct xray {
    xray() { std::c__ __  __PRETTY_FUNCTION__ __  std::e.. }

    xray(const xray&) { std::c__ __  __PRETTY_FUNCTION__ __  std::e.. }

    xray(xray&&) noexcept { std::c__ __  __PRETTY_FUNCTION__ __  std::e.. }

    xray(const char*) { std::c__ __  __PRETTY_FUNCTION__ __  std::e.. }

    ~xray() { std::c__ __  __PRETTY_FUNCTION__ __  std::e.. }
};

std::ostream& operator__ (std::ostream & o, const xray &)
{
    o __  "xray";
    r_ o;
}

//using T = std::string;
using T _ xray;

using args _ std::tuple<T, T>;

void foo(const T& a, const T& b)
{
    std::c__ __  a __  " " __  b __  std::e..
}

in. main()
{
    std::queue<args> msgs;
    msgs.emplace("hello", "en");

    // move or copy?
//    auto [a, b] = msgs.front();
//    foo(a, b);
//    std::invoke(foo, a, b);

//    auto c = std::move(msgs.front());
//    std::apply(foo, c);

//    std::apply(foo, msgs.front());

    r_ 0;
}
