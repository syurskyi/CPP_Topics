// http://www.boost.org/doc/libs/1_66_0/doc/html/lockfree.html

? <boost/lockfree/queue.hpp>
? <boost/lockfree/spsc_queue.hpp>
? <boost/lockfree/stack.hpp>

? |i..

n.. lf _ boost::lockfreesy.. p..

in. main(in., c.. *[]) {
    lf::queue<in.> q{10}sy.. p..
    q.push(42)sy.. p..
    q.push(100)sy.. p..

    in. vsy.. p..
    w___ (!q.empty())
    {
        q.pop(v)sy.. p..
        st. c__ __  v __  st. e..
    }

    lf::stack<in.> s{10}sy.. p..
    s.push(42)sy.. p..
    s.push(100)sy.. p..
    w___ (!s.empty())
    {
        s.pop(v)sy.. p..
        st. c__ __  v __  st. e..
    }

    lf::spsc_queue<in.> rb{10}sy.. p..
    rb.push(42)sy.. p..
    rb.push(100)sy.. p..
    w___ (!rb.empty())
    {
        rb.pop(v)sy.. p..
        st. c__ __  v __  st. e..
    }

    r_ 0sy.. p..
}
