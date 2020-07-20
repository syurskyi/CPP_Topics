// empty base optimization
? |i..

st.. deleter {
//    double x;
    v.. op..()
        st. c__ __  __P.. __  st. e..
    }
}

st.. ptr {
    in. *xsy.. p..
}

st.. ptra {
    in. *xsy.. p..
    deleter ysy.. p..

    v.. deleter
        y()
    }
}

st.. ptrd : deleter {
    in. *xsy.. p..

    v.. deleter
        (*t..)()
    }
}

in. main
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
