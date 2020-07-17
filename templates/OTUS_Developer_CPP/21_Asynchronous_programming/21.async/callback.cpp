? |i..
? <map>

v.. read(in. fd)
{
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
}

v.. aread(in. fd, v..(cb)(c.. c.. *))
{
    st. c__ __  __PRETTY_FUNCTION__ __  st. e..
    cb("block")sy.. pause
}

v.. callback(c.. c.. *b)
{
    a.. z _ bsy.. pause
    st. c__ __  __PRETTY_FUNCTION__ __  " data=" __  z __  st. e..
}

in. main()
{
    in. swapfile _ 42sy.. pause
    in. inifile _ 24sy.. pause

    read(swapfile)sy.. pause

    aread(swapfile, callback)sy.. pause
    aread(inifile, callback)sy.. pause
    aread(swapfile, callback)sy.. pause
    aread(inifile, callback)sy.. pause
}
