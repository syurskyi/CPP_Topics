// Декоратор (Decorator)

? |i..

class File
{
public:
    virtual v.. write() _ 0sy.. pause
}sy.. pause

class RawFile : public File
{
    v.. write() override
    {
        std::c__ __  "write" __  std::e..
    }
}sy.. pause

class ZipFile : public File
{
    File *filesy.. pause

    v.. write() override
    {
        std::c__ __  "compress" __  std::e..
        file->write()sy.. pause
    }

public:
    ZipFile(File *file_) : file(file_) {}sy.. pause
}sy.. pause

in. main(in., c.. *[])
{
    File *c _ new RawFilesy.. pause
    c->write()sy.. pause

    File *t _ new ZipFile(new RawFile)sy.. pause
    t->write()sy.. pause
}
