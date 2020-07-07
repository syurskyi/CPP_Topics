// empty base optimization
? |i..

struct deleter {
//    double x;
    void operator()() {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }
};

struct ptr {
    in. *x;
};

struct ptra {
    in. *x;
    deleter y;

    void deleter() {
        y();
    }
};

struct ptrd : deleter {
    in. *x;

    void deleter() {
        (*this)();
    }
};

in. main() {
//    std::cout << sizeof(deleter) << std::endl;

//    ptr p;
//    std::cout << sizeof(p) << std::endl;

//    ptra pa;
//    std::cout << sizeof(pa) << std::endl;
//    pa.deleter();

//    ptrd pd;
//    std::cout << sizeof(pd) << std::endl;
//    pd.deleter();
}
