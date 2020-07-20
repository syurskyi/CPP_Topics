// http://www.boost.org/doc/libs/1_66_0/doc/html/lockfree.html

? <boost/lockfree/queue.hpp>
? <boost/lockfree/spsc_queue.hpp>
? <boost/lockfree/stack.hpp>

? |i..

n.. lf _ boost::lockfreesy.. p..

in. main(in., c.. #|| {
    lf::queue<in.> q{10}
    q.push(42)
    q.push(100)

    in. vsy.. p..
    w___ (!q.empty())
    {
        q.pop(v)
        st. c__ __  v __  st. e..
    }

    lf::stack<in.> s{10}
    s.push(42)
    s.push(100)
    w___ (!s.empty())
    {
        s.pop(v)
        st. c__ __  v __  st. e..
    }

    lf::spsc_queue<in.> rb{10}
    rb.push(42)
    rb.push(100)
    w___ (!rb.empty())
    {
        rb.pop(v)
        st. c__ __  v __  st. e..
    }

    r_ 0sy.. p..
}
