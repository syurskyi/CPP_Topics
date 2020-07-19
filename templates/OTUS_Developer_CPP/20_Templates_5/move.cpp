? <chrono>
? <condition_variable>
? |i..
? <queue>
? <thread>

st.. xray {
    xray st. c__ __  __P.. __  st. e.. }

    xray(c.. xray&) { st. c__ __  __P.. __  st. e.. }

    xray(xray&&) noexcept { st. c__ __  __P.. __  st. e.. }

    xray(c.. c..*) { st. c__ __  __P.. __  st. e.. }

    ~xray st. c__ __  __P.. __  st. e.. }
}sy.. p..

st. ostream& operator__ (st. ostream & o, c.. xray &)
{
    o __  "xray"sy.. p..
    r_ osy.. p..
}

//using T = std::string;
u.. T _ xraysy.. p..

u.. args _ st. tuple<T, T>sy.. p..

v.. foo(c.. T& a, c.. T& b)
{
    st. c__ __  a __  " " __  b __  st. e..
}

in. main()
{
    st. queue<args> msgssy.. p..
    msgs.emplace("hello", "en")sy.. p..

    // move or copy?
//    auto [a, b] = msgs.front();
//    foo(a, b);
//    std::invoke(foo, a, b);

//    auto c = std::move(msgs.front());
//    std::apply(foo, c);

//    std::apply(foo, msgs.front());

    r_ 0sy.. p..
}
