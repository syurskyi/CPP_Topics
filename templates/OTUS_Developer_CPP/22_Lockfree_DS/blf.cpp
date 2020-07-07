// http://www.boost.org/doc/libs/1_66_0/doc/html/lockfree.html

? <boost/lockfree/queue.hpp>
? <boost/lockfree/spsc_queue.hpp>
? <boost/lockfree/stack.hpp>

? |i..

namespace lf = boost::lockfree;

in. main(in., char *[]) {
    lf::queue<in.> q{10};
    q.push(42);
    q.push(100);

    in. v;
    while (!q.empty())
    {
        q.pop(v);
        std::c__ __  v __  std::e..
    }

    lf::stack<in.> s{10};
    s.push(42);
    s.push(100);
    while (!s.empty())
    {
        s.pop(v);
        std::c__ __  v __  std::e..
    }

    lf::spsc_queue<in.> rb{10};
    rb.push(42);
    rb.push(100);
    while (!rb.empty())
    {
        rb.pop(v);
        std::c__ __  v __  std::e..
    }

    r_ 0;
}
