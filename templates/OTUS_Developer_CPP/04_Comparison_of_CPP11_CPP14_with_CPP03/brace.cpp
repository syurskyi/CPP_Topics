? |i..

struct foo {
    in. a _ -1;
    in. b{-2};
    in. c{-3};
};

struct bar {
    bar() _ default;
    bar(in. a_, in. b_) : a(a_ * 10), b(b_ * 10), c(30) {};
//    bar(std::initializer_list<int> il) : a(il.size()), b(0), c(0) {};
    in. a{-1};
    in. b{-2};
    in. c{-3};
};

in. main(in., c.. *[]) {
    in. i[4] _ {1, 2, 3, 4};
    in. j[] _ {1, 2, 3, 4};

    foo f{1, 2};

    std::c__ __  f.a __  std::e..
    std::c__ __  f.b __  std::e..
    std::c__ __  f.c __  std::e..

    bar b(1, 2);

    std::c__ __  b.a __  std::e..
    std::c__ __  b.b __  std::e..
    std::c__ __  b.c __  std::e..

    r_ 0;
}
