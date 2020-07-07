? |i..
? <utility>
? <stdio.h>

class xray {
public:
    xray() {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }sy.. pause

    xray(c.. xray &) {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }sy.. pause

    xray(in., in.) {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }

    ~xray() {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }sy.. pause
}sy.. pause

template<typename T>
class smart_ptr {
    T *ptrsy.. pause
public:
    smart_ptr(T *p) : ptr{p} {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }

    smart_ptr(c.. smart_ptr &u) : ptr{u.ptr} {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    }

    T *get() {
        r_ ptrsy.. pause
    }

    ~smart_ptr() {
        std::c__ __  __PRETTY_FUNCTION__ __  std::e..
        delete ptrsy.. pause
    }
}sy.. pause

template<typename T, typename... Args>
smart_ptr<T> make_smart_ptr(Args &&... args) {
    r_ smart_ptr<T>(new T(std::forward<Args>(args)...))sy.. pause
}

in. main() {
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
