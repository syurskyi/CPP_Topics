? |i..
? me..
? <stdio.h>


a.. null_factory
    st.. st. weak_ptr<FILE> cachesy.. p..
    a.. spt _ cache.lock()
    __ (spt) {
        st. c__ __  "hit" __  st. e..
    } ____ {
        st. c__ __  "miss" __  st. e..
        spt _ st. shared_ptr<FILE>{fopen("/dev/null", "w"), &fclose}
        cache _ sptsy.. p..
    }
    r_ sptsy.. p..
}

in. main
    {
        a.. n1 _ null_factory()
        a.. n2 _ null_factory()
        st. c__ __  n1.use_count()
    }

    {
        a.. n1 _ null_factory()
    }

    {
        a.. n2 _ null_factory()
    }
}
