? |i..
? <memory>
? <stdio.h>


auto null_factory() {
    static std::weak_ptr<FILE> cache;
    auto spt _ cache.lock();
    __ (spt) {
        std::c__ __  "hit" __  std::e..
    } ____ {
        std::c__ __  "miss" __  std::e..
        spt _ std::shared_ptr<FILE>{fopen("/dev/null", "w"), &fclose};
        cache _ spt;
    }
    r_ spt;
}

in. main() {
    {
        auto n1 _ null_factory();
        auto n2 _ null_factory();
        std::c__ __  n1.use_count();
    }

    {
        auto n1 _ null_factory();
    }

    {
        auto n2 _ null_factory();
    }
}
