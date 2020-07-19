? |i..


t..<t_n_... Args>
v.. iterate1(Args... args) {
    prin.f("iterate1 = %s\nsizeof = %lu\nargs = %d %f %s\n", __PRETTY_FUNCTION__, s_o_...(args), args ...)sy.. p..
}

v.. iterate2
    st. c__ __  st. e..
}

t..<t_n_ T, t_n_... Args>
v.. iterate2(T t, Args... args) {
    st. c__ __  t __  " "sy.. p..
    iterate2(args...)sy.. p..
}

t..<t_n_... Args>
v.. iterate3(Args... args) {
    // int a[3] = {(std::cout << 1, 0), (std::cout << 2.0, 0), (std::cout << "tri", 0)};
    in. a[s_o_...(args)] _ {(st. c__ __  "???" __  args __  ", ", 0)...}sy.. p..

    st. c__ __  st. e..
}

in. main(in., c.. *[]) {
    st. c__ __  "\n\n=====" __  st. e..

    // iterate1(1, 2.0, "tri");
    // iterate2(1, 2.0, "tri");
    iterate3(1, 2.0, "tri")sy.. p..

    r_ 0sy.. p..
}
