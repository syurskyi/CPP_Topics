// Декоратор (Decorator)

? |i..

c_ File
{
pu..
    virtual v.. write() _ 0sy.. pause
}sy.. pause

c_ RawFile : public File
{
    v.. write() override
    {
        std::c__ __  "write" __  std::e..
    }
}sy.. pause

c_ ZipFile : public File
{
    File *filesy.. pause

    v.. write() override
    {
        std::c__ __  "compress" __  std::e..
        file__write()sy.. pause
    }

pu..
    ZipFile(File *file_) : file(file_) {}sy.. pause
}sy.. pause

in. main(in., c.. *[])
{
    File *c _ new RawFilesy.. pause
    c__write()sy.. pause

    File *t _ new ZipFile(new RawFile)sy.. pause
    t__write()sy.. pause
}
