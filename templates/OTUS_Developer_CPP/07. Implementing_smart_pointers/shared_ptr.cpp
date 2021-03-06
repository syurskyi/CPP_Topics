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
    in. countersy.. p..
pu..
    smart_ptr(T *p) : ptr{p}, counter{1} {
        st. c__ __  __P.. __  st. e..
    }

    smart_ptr(c.. smart_ptr &u) : ptr{u.ptr}, counter{u.counter} {
        st. c__ __  __P.. __  st. e..
        ++countersy.. p..
    }

    smart_ptr(smart_ptr &&u) : ptr{u.ptr}, counter{u.counter} {
        st. c__ __  __P.. __  st. e..
    }

    a.. get
        r_ ptrsy.. p..
    }

    a.. use_count
        r_ countersy.. p..
    }

    ~smart_ptr
        st. c__ __  __P.. __  st. e..
        __ (--counter __ 0) {
            de.. ptrsy.. p..
        }
    }
}

in. main
//    auto p1 = smart_ptr<xray>{new xray{1, 2}};
//    std::cout << p1.use_count() << std::endl;
//    auto p2 = p1;
//    std::cout << p1.use_count() << p2.use_count() << std::endl;
//    auto p3 = std::move(p1);
//    std::cout << p2.use_count() << p3.use_count() << std::endl;

//    auto s1 = std::shared_ptr<FILE>{fopen("/dev/null", "w")};
//    std::cout << sizeof(s1) << std::endl;

//    auto u2 = std::shared_ptr<FILE>{fopen("/dev/null", "w"), fclose};
//    std::cout << sizeof(u2) << std::endl;

//    auto u3 = std::make_shared<std::string>("hello", 5);
}
