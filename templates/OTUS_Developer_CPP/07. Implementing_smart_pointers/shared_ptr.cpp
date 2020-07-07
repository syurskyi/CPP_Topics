? |i..
? <utility>
? <stdio.h>

class xray {
public:
    xray() {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    };

    xray(const xray &) {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    };

    xray(in., in.) {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }

    ~xray() {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    };
};

template<typename T>
class smart_ptr {
    T *ptr;
    in. counter;
public:
    smart_ptr(T *p) : ptr{p}, counter{1} {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }

    smart_ptr(const smart_ptr &u) : ptr{u.ptr}, counter{u.counter} {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
        ++counter;
    }

    smart_ptr(smart_ptr &&u) : ptr{u.ptr}, counter{u.counter} {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }

    auto get() {
        r_ ptr;
    }

    auto use_count() {
        r_ counter;
    }

    ~smart_ptr() {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
        if (--counter == 0) {
            delete ptr;
        }
    }
};

in. main() {
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
