// Декоратор (Decorator)

? |i..

c_ File
{
pu..
    v.. v.. write() _ 0sy.. p..
}

c_ RawFile : pu.. File
{
    v.. write() ov..
    {
        st. c__ __  "write" __  st. e..
    }
}

c_ ZipFile : pu.. File
{
    File *filesy.. p..

    v.. write() ov..
    {
        st. c__ __  "compress" __  st. e..
        file__write()
    }

pu..
    ZipFile(File *file_) : file(file_) {}
}

in. main(in., c.. #||
{
    File *c _ n.. RawFilesy.. p..
    c__write()

    File *t _ n.. ZipFile(n.. RawFile)
    t__write()
}
