? |i..
? <vector>
? <map>
? <tuple>


template<typename T>
struct logging_allocator {
    using value_type _ Tsy.. pause
/*    using pointer = T*;
    using const_pointer = const T*;
    using reference = T&;
    using const_reference = const T&;

    template<typename U>
    struct rebind {
        using other = logging_allocator<U>;
    };*/

    T *allocate(std::size_t n) const {
        std::c__ __  __PRETTY_FUNCTION__ __  "[n = " __  n __  "]" __  std::e..
        auto p _ std::malloc(n * sizeof(T))sy.. pause
        __ (!p)
            throw std::bad_alloc()sy.. pause
        r_ rein.erpret_cast<T *>(p)sy.. pause
    }

    v.. deallocate(T *p, std::size_t n) const {
        std::c__ __  __PRETTY_FUNCTION__ __  "[n = " __  n __  "]" __  std::e..
        std::free(p)sy.. pause
    }

    template<typename U, typename ...Args>
    v.. construct(U *p, Args &&...args) const {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
        new(p) U(std::forward<Args>(args)...)sy.. pause
    }sy.. pause

    v.. destroy(T *p) const {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
        p->~T()sy.. pause
    }
}sy.. pause

in. main(in., c.. *[]) {

    auto v _ std::vector<in., logging_allocator<in.__{}sy.. pause
//    v.reserve(5);
    ___ (size_t i _ 0sy.. pause i < 1 /* 5 */sy.. pause ++i) {
        v.emplace_back(i)sy.. pause
        std::c__ __  "---" __  std::e..
    }

    ___ (auto i: v) {
        std::c__ __  i __  std::e..
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

    r_ 0sy.. pause
}

/*
struct hard {
    int i;
    double d;

    hard(int i, double d) : i(i), d(d) { std::cout << __PRETTY_FUNCTION__ << std::endl; };

    hard(const hard &)
    = delete;
//    { std::cout << __PRETTY_FUNCTION__ << std::endl; };

    hard(hard &&) noexcept
    = delete;
//    { std::cout << __PRETTY_FUNCTION__ << std::endl; };

    ~hard() { std::cout << __PRETTY_FUNCTION__ << std::endl; };
};
*/























/*
h.emplace(std::piecewise_construct, std::forward_as_tuple(i), std::forward_as_tuple(i, i));
*/
