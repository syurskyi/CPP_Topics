? |i..
? <memory>
? <stdio.h>


auto null_factory() {
    static std::weak_ptr<FILE> cache;
    auto spt = cache.lock();
    __ (spt) {
        std::c__ __  "hit" __  std::e..
    } else {
        std::c__ __  "miss" __  std::e..
        spt = std::shared_ptr<FILE>{fopen("/dev/null", "w"), &fclose};
        cache = spt;
    }
    r_ spt;
}

in. main() {
    {
        auto n1 = null_factory();
        auto n2 = null_factory();
        std::c__ __  n1.use_count();
    }

    {
        auto n1 = null_factory();
    }

    {
        auto n2 = null_factory();
    }
}
