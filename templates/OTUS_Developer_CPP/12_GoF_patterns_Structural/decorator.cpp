// Декоратор (Decorator)

? |i..

class File
{
public:
    virtual void write() _ 0;
};

class RawFile : public File
{
    void write() override
    {
        std::c__ __  "write" __  std::e..
    }
};

class ZipFile : public File
{
    File *file;

    void write() override
    {
        std::c__ __  "compress" __  std::e..
        file->write();
    }

public:
    ZipFile(File *file_) : file(file_) {};
};

in. main(in., c.. *[])
{
    File *c _ new RawFile;
    c->write();

    File *t _ new ZipFile(new RawFile);
    t->write();
}
