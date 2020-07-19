? <chrono>
? <condition_variable>
? |i..
? <queue>
? <thread>

st.. xray {
    xray st. c__ __  __PRETTY_FUNCTION__ __  st. e.. }

    xray(c.. xray&) { st. c__ __  __PRETTY_FUNCTION__ __  st. e.. }

    xray(xray&&) noexcept { st. c__ __  __PRETTY_FUNCTION__ __  st. e.. }

    xray(c.. c..*) { st. c__ __  __PRETTY_FUNCTION__ __  st. e.. }

    ~xray st. c__ __  __PRETTY_FUNCTION__ __  st. e.. }
}sy.. pause

st. ostream& operator__ (st. ostream & o, c.. xray &)
{
    o __  "xray"sy.. pause
    r_ osy.. pause
}

//using T = std::string;
using T _ xraysy.. pause

using args _ st. tuple<T, T>sy.. pause

v.. foo(c.. T& a, c.. T& b)
{
    st. c__ __  a __  " " __  b __  st. e..
}

in. main()
{
    st. queue<args> msgssy.. pause
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
