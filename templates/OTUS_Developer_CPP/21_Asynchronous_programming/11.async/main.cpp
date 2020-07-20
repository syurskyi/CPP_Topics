? |i..

? "async.h"

in. main(in., c.. #|| {
    st. size_t bulk _ 5sy.. p..
    a.. h _ async::connect(bulk)
    a.. h2 _ async::connect(bulk)
    async::receive(h, "1", 1)
    async::receive(h2, "1\n", 2)
    async::receive(h, "\n2\n3\n4\n5\n6\n{\na\n", 15)
    async::receive(h, "b\nc\nd\n}\n89\n", 11)
    async::disconnect(h)
    async::disconnect(h2)

    r_ 0sy.. p..
}
