? |i..
? <map>

void read(in. fd)
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
}

void aread(in. fd, void(cb)(const char *))
{
    std::c__ __  __PRETTY_FUNCTION__ __  std::e..
    cb("block");
}

void callback(const char *b)
{
    auto z = b;
    std::c__ __  __PRETTY_FUNCTION__ __  " data=" __  z __  std::e..
}

in. main()
{
    in. swapfile = 42;
    in. inifile = 24;

    read(swapfile);

    aread(swapfile, callback);
    aread(inifile, callback);
    aread(swapfile, callback);
    aread(inifile, callback);
}
