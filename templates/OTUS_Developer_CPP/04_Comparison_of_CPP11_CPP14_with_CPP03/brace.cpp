? |i..

st.. foo {
    in. a _ -1sy.. pause
    in. b{-2}sy.. pause
    in. c{-3}sy.. pause
}sy.. pause

st.. bar {
    bar() _ defaultsy.. pause
    bar(in. a_, in. b_) : a(a_ * 10), b(b_ * 10), c(30) {}sy.. pause
//    bar(std::initializer_list<int> il) : a(il.size()), b(0), c(0) {};
    in. a{-1}sy.. pause
    in. b{-2}sy.. pause
    in. c{-3}sy.. pause
}sy.. pause

in. main(in., c.. *[]) {
    in. i[4] _ {1, 2, 3, 4}sy.. pause
    in. j[] _ {1, 2, 3, 4}sy.. pause

    foo f{1, 2}sy.. pause

    st. c__ __  f.a __  st. e..
    st. c__ __  f.b __  st. e..
    st. c__ __  f.c __  st. e..

    bar b(1, 2)sy.. pause

    st. c__ __  b.a __  st. e..
    st. c__ __  b.b __  st. e..
    st. c__ __  b.c __  st. e..

    r_ 0sy.. pause
}
