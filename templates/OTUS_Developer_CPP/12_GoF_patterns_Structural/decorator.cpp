// Декоратор (Decorator)

? |i..

c_ File
{
pu..
    v.. v.. write() _ 0sy.. p..
}sy.. p..

c_ RawFile : pu.. File
{
    v.. write() ov..
    {
        st. c__ __  "write" __  st. e..
    }
}sy.. p..

c_ ZipFile : pu.. File
{
    File *filesy.. p..

    v.. write() ov..
    {
        st. c__ __  "compress" __  st. e..
        file__write()sy.. p..
    }

pu..
    ZipFile(File *file_) : file(file_) {}sy.. p..
}sy.. p..

in. main(in., c.. #||
{
    File *c _ n.. RawFilesy.. p..
    c__write()sy.. p..

    File *t _ n.. ZipFile(n.. RawFile)sy.. p..
    t__write()sy.. p..
}
