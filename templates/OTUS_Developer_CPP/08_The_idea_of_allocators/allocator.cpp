? |i..
? ve..
? <map>
? |tu..


t..<t_n_ T>
st.. logging_allocator {
    u.. value_type _ Tsy.. p..
/*    using pointer = T*;
    using const_pointer = const T*;
    using reference = T&;
    using const_reference = const T&;

    template<typename U>
    struct rebind {
        using other = logging_allocator<U>;
    };*/

    T *allocate(st. size_t n) c.. {
        st. c__ __  __P.. __  "[n = " __  n __  "]" __  st. e..
        a.. p _ st. malloc(n * s_o_(T))
        __ (!p)
            throw st. bad_alloc()
        r_ rein.erpret_cast<T *>(p)
    }

    v.. deallocate(T *p, st. size_t n) c.. {
        st. c__ __  __P.. __  "[n = " __  n __  "]" __  st. e..
        st. free(p)
    }

    t..<t_n_ U, t_n_ ...Args>
    v.. construct(U *p, Args &&...args) c.. {
        st. c__ __  __P.. __  st. e..
        n..(p) U(st. forward<Args>(args)...)
    }

    v.. destroy(T *p) c.. {
        st. c__ __  __P.. __  st. e..
        p__~T()
    }
}

in. main(in., c.. #|| {

    a.. v _ st. ve..<in., logging_allocator<in.__{}
//    v.reserve(5);
    ___ (size_t i _ 0sy.. p.. i < 1 /* 5 */ ++i) {
        v.emplace_back(i)
        st. c__ __  "---" __  st. e..
    }

    ___ (a.. i: v) {
        st. c__ __  i __  st. e..
    }

//    auto m = std::map<int, int, std::less<int>, logging_allocator<std::pair<const int, int>>>{};
//    for (size_t i = 0; i < 5; ++i) {
//        m.emplace(i, i);
//        std::cout << "---" << std::endl;
//    }

//    auto h = std::map<int, hard, std::less<int>, logging_allocator<std::pair<const int, hard>>>{};
//    for (size_t i = 0; i < 5; ++i) {
//        h.emplace(i, hard(i, i));
//        std::cout << std::endl;
//    }

    r_ 0sy.. p..
}

/*
struct hard {
    int i;
    double d;

    hard(int i, double d) : i(i), d(d) { std::cout << __P.. << std::endl; };

    hard(const hard &)
    = delete;
//    { std::cout << __P.. << std::endl; };

    hard(hard &&) noexcept
    = delete;
//    { std::cout << __P.. << std::endl; };

    ~hard() { std::cout << __P.. << std::endl; };
};
*/























/*
h.emplace(std::piecewise_construct, std::forward_as_tuple(i), std::forward_as_tuple(i, i));
*/
