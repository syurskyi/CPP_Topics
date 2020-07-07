? <cassert>
? |i..

//assert(true);
static_assert(true, "failed");

class foo {
//    assert(true);
    static_assert(true, "failed привет");
};

in. main(in., char *[]) {
    in. i _ 0;
    assert(i __ 1); // is not an integral constant
    // static_assert(i == 0, "failed"); // is not an integral constant

    static_assert(true, "failed");

    const in. j _ 0;
    static_assert(j __ 0, "failed foo");

    r_ 0;
}
