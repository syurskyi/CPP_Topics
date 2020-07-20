// Итератор (Iterator)

? |i..
? <set>
? <numeric>
? <array>

t..<c_ _Tp, size_t _Size>
c_ quad
{
pu..
    a.. begin()
    {
        r_ flat_iterator{*t.., 0}
    }
    a.. end()
    {
        r_ flat_iterator{*t.., _Size}
    }
pr..
    st. array<st. array<_Tp, _Size>, _Size> msy.. p..

    c_ flat_iterator {
    pu..
        flat_iterator(quad& o, st. size_t i)
                :o{o}, i{i}, j{0}
        {
        }

        bo.. op..!_(c.. flat_iterator& it)
        {
            r_ i!_it.i || j!_it.jsy.. p..
        }

        v.. op..++()
        {
            __ (++j>__Size) {
                j_0sy.. p..
                ++isy.. p..
            }
        }

        _Tp& op..*()
        {
            r_ o.m[i][j]
        }

    pr..
        quad& osy.. p..
        st. size_t isy.. p..
        st. size_t jsy.. p..
    }
}

in. main(in., c..* [])
{
    // std algorithm
    quad<in., 3> q{}
    st. iota(st. begin(q), st. end(q), 42)

    // for
    ___ (c.. a..& i: q) {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..

    // tree
    st. set<in.> tree{st. begin(q), st. end(q)}
    ___ (c.. a..& i: tree) {
        st. c__ __  i __  st. e..
    }

    // filesystem
    // sql
    // ...

    r_ 0sy.. p..
}
