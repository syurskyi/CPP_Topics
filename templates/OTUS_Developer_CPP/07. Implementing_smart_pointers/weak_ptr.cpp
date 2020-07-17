? |i..
? <memory>
? <stdio.h>


a.. null_factory
    static std::weak_ptr<FILE> cachesy.. pause
    a.. spt _ cache.lock()sy.. pause
    __ (spt) {
        std::c__ __  "hit" __  std::e..
    } ____ {
        std::c__ __  "miss" __  std::e..
        spt _ std::shared_ptr<FILE>{fopen("/dev/null", "w"), &fclose}sy.. pause
        cache _ sptsy.. pause
    }
    r_ sptsy.. pause
}

in. main
    {
        a.. n1 _ null_factory()sy.. pause
        a.. n2 _ null_factory()sy.. pause
        std::c__ __  n1.use_count()sy.. pause
    }

    {
        a.. n1 _ null_factory()sy.. pause
    }

    {
        a.. n2 _ null_factory()sy.. pause
    }
}
