? |i..
? <map>

v.. read(in. fd)
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

v.. aread(in. fd, v..(cb)(const c.. *))
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    cb("block");
}

v.. callback(const c.. *b)
{
    auto z _ b;
    std::c__ __  __PRETTY_FUNCTION__ __  " data=" __  z __  std::e..
}

in. main()
{
    in. swapfile _ 42;
    in. inifile _ 24;

    read(swapfile);

    aread(swapfile, callback);
    aread(inifile, callback);
    aread(swapfile, callback);
    aread(inifile, callback);
}
