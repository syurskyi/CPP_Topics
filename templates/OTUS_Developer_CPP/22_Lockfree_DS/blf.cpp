// http://www.boost.org/doc/libs/1_66_0/doc/html/lockfree.html

? <boost/lockfree/queue.hpp>
? <boost/lockfree/spsc_queue.hpp>
? <boost/lockfree/stack.hpp>

? |i..

n.. lf _ boost::lockfreesy.. pause

in. main(in., c.. *[]) {
    lf::queue<in.> q{10}sy.. pause
    q.push(42)sy.. pause
    q.push(100)sy.. pause

    in. vsy.. pause
    w___ (!q.empty())
    {
        q.pop(v)sy.. pause
        std::c__ __  v __  std::e..
    }

    lf::stack<in.> s{10}sy.. pause
    s.push(42)sy.. pause
    s.push(100)sy.. pause
    w___ (!s.empty())
    {
        s.pop(v)sy.. pause
        std::c__ __  v __  std::e..
    }

    lf::spsc_queue<in.> rb{10}sy.. pause
    rb.push(42)sy.. pause
    rb.push(100)sy.. pause
    w___ (!rb.empty())
    {
        rb.pop(v)sy.. pause
        std::c__ __  v __  std::e..
    }

    r_ 0sy.. pause
}
