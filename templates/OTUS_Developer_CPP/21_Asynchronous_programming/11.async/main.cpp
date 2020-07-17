? |i..

? "async.h"

in. main(in., c.. *[]) {
    st. size_t bulk _ 5sy.. pause
    a.. h _ async::connect(bulk)sy.. pause
    a.. h2 _ async::connect(bulk)sy.. pause
    async::receive(h, "1", 1)sy.. pause
    async::receive(h2, "1\n", 2)sy.. pause
    async::receive(h, "\n2\n3\n4\n5\n6\n{\na\n", 15)sy.. pause
    async::receive(h, "b\nc\nd\n}\n89\n", 11)sy.. pause
    async::disconnect(h)sy.. pause
    async::disconnect(h2)sy.. pause

    r_ 0sy.. pause
}
