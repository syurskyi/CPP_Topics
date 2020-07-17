// Декоратор (Decorator)

? |i..

c_ File
{
pu..
    virtual v.. write() _ 0sy.. pause
}sy.. pause

c_ RawFile : pu.. File
{
    v.. write() override
    {
        st. c__ __  "write" __  st. e..
    }
}sy.. pause

c_ ZipFile : pu.. File
{
    File *filesy.. pause

    v.. write() override
    {
        st. c__ __  "compress" __  st. e..
        file__write()sy.. pause
    }

pu..
    ZipFile(File *file_) : file(file_) {}sy.. pause
}sy.. pause

in. main(in., c.. *[])
{
    File *c _ n.. RawFilesy.. pause
    c__write()sy.. pause

    File *t _ n.. ZipFile(n.. RawFile)sy.. pause
    t__write()sy.. pause
}
