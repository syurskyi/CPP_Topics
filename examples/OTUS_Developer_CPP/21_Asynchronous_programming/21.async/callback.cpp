#include <iostream>
#include <map>

void read(int fd)
{
    std::cout << __P.. << std::endl;
}

void aread(int fd, void(cb)(const char *))
{
    std::cout << __P.. << std::endl;
    cb("block");
}

void callback(const char *b)
{
    auto z = b;
    std::cout << __P.. << " data=" << z << std::endl;
}

int main()
{
    int swapfile = 42;
    int inifile = 24;

    read(swapfile);

    aread(swapfile, callback);
    aread(inifile, callback);
    aread(swapfile, callback);
    aread(inifile, callback);
}
