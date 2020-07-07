// Итератор (Iterator)

? |i..
? <set>
? <numeric>
? <array>

template<class _Tp, size_t _Size>
class quad
{
public:
    auto begin()
    {
        r_ flat_iterator{*this, 0};
    }
    auto end()
    {
        r_ flat_iterator{*this, _Size};
    }
private:
    std::array<std::array<_Tp, _Size>, _Size> m;

    class flat_iterator {
    public:
        flat_iterator(quad& o, std::size_t i)
                :o{o}, i{i}, j{0}
        {
        };

        bo.. operator!_(const flat_iterator& it)
        {
            r_ i!_it.i || j!_it.j;
        }

        void operator++()
        {
            __ (++j>__Size) {
                j_0;
                ++i;
            }
        }

        _Tp& operator*()
        {
            r_ o.m[i][j];
        }

    private:
        quad& o;
        std::size_t i;
        std::size_t j;
    };
};

in. main(in., c..* [])
{
    // std algorithm
    quad<in., 3> q{};
    std::iota(std::begin(q), std::end(q), 42);

    // for
    for (const auto& i: q) {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..

    // tree
    std::set<in.> tree{std::begin(q), std::end(q)};
    for (const auto& i: tree) {
        std::c__ __  i __  std::e..
    }

    // filesystem
    // sql
    // ...

    r_ 0;
}
