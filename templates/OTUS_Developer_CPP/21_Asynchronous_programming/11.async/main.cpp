? |i..

? "async.h"

in. main(in., c.. *[]) {
    st. size_t bulk _ 5sy.. p..
    a.. h _ async::connect(bulk)sy.. p..
    a.. h2 _ async::connect(bulk)sy.. p..
    async::receive(h, "1", 1)sy.. p..
    async::receive(h2, "1\n", 2)sy.. p..
    async::receive(h, "\n2\n3\n4\n5\n6\n{\na\n", 15)sy.. p..
    async::receive(h, "b\nc\nd\n}\n89\n", 11)sy.. p..
    async::disconnect(h)sy.. p..
    async::disconnect(h2)sy.. p..

    r_ 0sy.. p..
}
