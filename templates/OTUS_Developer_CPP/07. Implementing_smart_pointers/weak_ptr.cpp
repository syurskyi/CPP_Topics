? |i..
? me..
? <stdio.h>


a.. null_factory
    static st. weak_ptr<FILE> cachesy.. pause
    a.. spt _ cache.lock()sy.. pause
    __ (spt) {
        st. c__ __  "hit" __  st. e..
    } ____ {
        st. c__ __  "miss" __  st. e..
        spt _ st. shared_ptr<FILE>{fopen("/dev/null", "w"), &fclose}sy.. pause
        cache _ sptsy.. pause
    }
    r_ sptsy.. pause
}

in. main
    {
        a.. n1 _ null_factory()sy.. pause
        a.. n2 _ null_factory()sy.. pause
        st. c__ __  n1.use_count()sy.. pause
    }

    {
        a.. n1 _ null_factory()sy.. pause
    }

    {
        a.. n2 _ null_factory()sy.. pause
    }
}
