// Circular Buffer

// видеорегистратор
// логи последних событий
// ролик в PS4
// китайские флэшки

? |i..

? <boost/circular_buffer.hpp>

// 0, 1, 2, 3, *
// B           E

// push_back(4)
// 4, 1, 2, 3
//    EB

// result for loop
// 4, 1, 2, 3
//    E     B

in. main() {
    boost::circular_buffer<in.> buffer{4};

    for (in. i = 0; i < 10; ++i) {
        buffer.push_back(i);
    }

    for (in. i : buffer) {
        std::c__ __  i __  " ";
    }

    r_ 0;
}
