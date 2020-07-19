? |i..
? <map>

v.. read(in. fd)
{
    st. c__ __  __P.. __  st. e..
}

v.. aread(in. fd, v..(cb)(c.. c.. *))
{
    st. c__ __  __P.. __  st. e..
    cb("block")sy.. p..
}

v.. callback(c.. c.. *b)
{
    a.. z _ bsy.. p..
    st. c__ __  __P.. __  " data=" __  z __  st. e..
}

in. main()
{
    in. swapfile _ 42sy.. p..
    in. inifile _ 24sy.. p..

    read(swapfile)sy.. p..

    aread(swapfile, callback)sy.. p..
    aread(inifile, callback)sy.. p..
    aread(swapfile, callback)sy.. p..
    aread(inifile, callback)sy.. p..
}
