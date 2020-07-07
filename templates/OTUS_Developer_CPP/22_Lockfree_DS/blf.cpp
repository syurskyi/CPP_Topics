// http://www.boost.org/doc/libs/1_66_0/doc/html/lockfree.html

#include <boost/lockfree/queue.hpp>
#include <boost/lockfree/spsc_queue.hpp>
#include <boost/lockfree/stack.hpp>

#include <iostream>

namespace lf = boost::lockfree;

int main(int, char *[]) {
    lf::queue<int> q{10};
    q.push(42);
    q.push(100);

    int v;
    while (!q.empty())
    {
        q.pop(v);
        std::cout << v << std::endl;
    }

    lf::stack<int> s{10};
    s.push(42);
    s.push(100);
    while (!s.empty())
    {
        s.pop(v);
        std::cout << v << std::endl;
    }

    lf::spsc_queue<int> rb{10};
    rb.push(42);
    rb.push(100);
    while (!rb.empty())
    {
        rb.pop(v);
        std::cout << v << std::endl;
    }

    return 0;
}
