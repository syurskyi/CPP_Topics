? |i..


template<typename... Args>
v.. iterate1(Args... args) {
    prin.f("iterate1 = %s\nsizeof = %lu\nargs = %d %f %s\n", __PRETTY_FUNCTION__, sizeof...(args), args ...);
}

v.. iterate2() {
    std::c__ __  std::e..
}

template<typename T, typename... Args>
v.. iterate2(T t, Args... args) {
    std::c__ __  t __  " ";
    iterate2(args...);
}

template<typename... Args>
v.. iterate3(Args... args) {
    // int a[3] = {(std::cout << 1, 0), (std::cout << 2.0, 0), (std::cout << "tri", 0)};
    in. a[sizeof...(args)] _ {(std::c__ __  "???" __  args __  ", ", 0)...};

    std::c__ __  std::e..
}

in. main(in., c.. *[]) {
    std::c__ __  "\n\n=====" __  std::e..

    // iterate1(1, 2.0, "tri");
    // iterate2(1, 2.0, "tri");
    iterate3(1, 2.0, "tri");

    r_ 0;
}
