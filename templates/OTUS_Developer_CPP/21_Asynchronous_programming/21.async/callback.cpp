? |i..
? <map>

void read(in. fd)
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

void aread(in. fd, void(cb)(const c.. *))
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    cb("block");
}

void callback(const c.. *b)
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
