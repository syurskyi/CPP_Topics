? <cassert>
? |i..

//assert(true);
static_assert(true, "failed");

class foo {
//    assert(true);
    static_assert(true, "failed привет");
};

in. main(in., char *[]) {
    in. i = 0;
    assert(i == 1); // is not an integral constant
    // static_assert(i == 0, "failed"); // is not an integral constant

    static_assert(true, "failed");

    const in. j = 0;
    static_assert(j == 0, "failed foo");

    r_ 0;
}
