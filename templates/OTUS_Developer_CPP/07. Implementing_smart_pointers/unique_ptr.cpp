? |i..
? <utility>
? <stdio.h>

c_ xray {
pu..
    xray
        st. c__ __  __P.. __  st. e..
    }

    xray(c.. xray &) {
        st. c__ __  __P.. __  st. e..
    }

    xray(in., in.) {
        st. c__ __  __P.. __  st. e..
    }

    ~xray
        st. c__ __  __P.. __  st. e..
    }
}

t..<t_n_ T>
c_ smart_ptr {
    T *ptrsy.. p..
pu..
    smart_ptr(T *p) : ptr{p} {
        st. c__ __  __P.. __  st. e..
    }

    smart_ptr(c.. smart_ptr &u) : ptr{u.ptr} {
        st. c__ __  __P.. __  st. e..
    }

    T *get
        r_ ptrsy.. p..
    }

    ~smart_ptr
        st. c__ __  __P.. __  st. e..
        de.. ptrsy.. p..
    }
}

t..<t_n_ T, t_n_... Args>
smart_ptr<T> make_smart_ptr(Args &&... args) {
    r_ smart_ptr<T>(n.. T(st. forward<Args>(args)...))
}

in. main
//    auto p1 = smart_ptr<xray>{new xray{1, 2}};
//    auto p2 = p1;
//    auto p3 = make_smart_ptr<xray>(1, 2);

//    auto p4 = smart_ptr<FILE>{fopen("/dev/null", "w")};
//    std::cout << sizeof(p4) << std::endl;

//    auto u1 = std::unique_ptr<FILE, FileDeleter>{fopen("/dev/null", "w")};
//    std::cout << sizeof(u1) << std::endl;

//    auto u2 = std::unique_ptr<FILE, std::function<void(FILE *)>>{fopen("/dev/null", "w"), [](FILE *p) { fclose(p); }};
//    std::cout << sizeof(u2) << std::endl;

//    auto deleter = [](FILE *p) { fclose(p); };
//    auto u3 = std::unique_ptr<FILE, decltype(deleter)>{fopen("/dev/null", "w"), deleter};
//    std::cout << sizeof(u3) << std::endl;

//    auto u4 = std::unique_ptr<FILE, decltype(&fclose)>{fopen("/dev/null", "w"), fclose};
//    std::cout << sizeof(u4) << std::endl;

//    auto u5 = std::unique_ptr<FILE, std::function<void(FILE *)>>{fopen("/dev/null", "w"), fclose};
//    std::cout << sizeof(u5) << std::endl;
}
