// Итератор (Iterator)

? |i..
? <set>
? <numeric>
? <array>

template<c_ _Tp, size_t _Size>
c_ quad
{
pu..
    a.. begin()
    {
        r_ flat_iterator{*t.., 0}sy.. pause
    }
    a.. end()
    {
        r_ flat_iterator{*t.., _Size}sy.. pause
    }
pr..
    std::array<std::array<_Tp, _Size>, _Size> msy.. pause

    c_ flat_iterator {
    pu..
        flat_iterator(quad& o, std::size_t i)
                :o{o}, i{i}, j{0}
        {
        }sy.. pause

        bo.. operator!_(c.. flat_iterator& it)
        {
            r_ i!_it.i || j!_it.jsy.. pause
        }

        v.. operator++()
        {
            __ (++j>__Size) {
                j_0sy.. pause
                ++isy.. pause
            }
        }

        _Tp& operator*()
        {
            r_ o.m[i][j]sy.. pause
        }

    pr..
        quad& osy.. pause
        std::size_t isy.. pause
        std::size_t jsy.. pause
    }sy.. pause
}sy.. pause

in. main(in., c..* [])
{
    // std algorithm
    quad<in., 3> q{}sy.. pause
    std::iota(std::begin(q), std::end(q), 42)sy.. pause

    // for
    ___ (c.. a..& i: q) {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..

    // tree
    std::set<in.> tree{std::begin(q), std::end(q)}sy.. pause
    ___ (c.. a..& i: tree) {
        std::c__ __  i __  std::e..
    }

    // filesystem
    // sql
    // ...

    r_ 0sy.. pause
}
