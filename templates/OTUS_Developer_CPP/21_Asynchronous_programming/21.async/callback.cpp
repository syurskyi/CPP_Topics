? |i..
? <map>

v.. read(in. fd)
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

v.. aread(in. fd, v..(cb)(c.. c.. *))
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    cb("block")sy.. pause
}

v.. callback(c.. c.. *b)
{
    auto z _ bsy.. pause
    std::c__ __  __PRETTY_FUNCTION__ __  " data=" __  z __  std::e..
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
