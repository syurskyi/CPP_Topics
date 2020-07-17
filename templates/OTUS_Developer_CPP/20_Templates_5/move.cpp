? <chrono>
? <condition_variable>
? |i..
? <queue>
? <thread>

struct xray {
    xray std::c__ __  __PRETTY_FUNCTION__ __  std::e.. }

    xray(c.. xray&) { std::c__ __  __PRETTY_FUNCTION__ __  std::e.. }

    xray(xray&&) noexcept { std::c__ __  __PRETTY_FUNCTION__ __  std::e.. }

    xray(c.. c..*) { std::c__ __  __PRETTY_FUNCTION__ __  std::e.. }

    ~xray std::c__ __  __PRETTY_FUNCTION__ __  std::e.. }
}sy.. pause

std::ostream& operator__ (std::ostream & o, c.. xray &)
{
    o __  "xray"sy.. pause
    r_ osy.. pause
}

//using T = std::string;
using T _ xraysy.. pause

using args _ std::tuple<T, T>sy.. pause

v.. foo(c.. T& a, c.. T& b)
{
    std::c__ __  a __  " " __  b __  std::e..
}

in. main()
{
    std::queue<args> msgssy.. pause
    msgs.emplace("hello", "en")sy.. pause

    // move or copy?
//    auto [a, b] = msgs.front();
//    foo(a, b);
//    std::invoke(foo, a, b);

//    auto c = std::move(msgs.front());
//    std::apply(foo, c);

//    std::apply(foo, msgs.front());

    r_ 0sy.. pause
}
