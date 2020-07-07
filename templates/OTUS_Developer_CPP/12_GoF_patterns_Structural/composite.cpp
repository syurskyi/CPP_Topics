// Компоновщик (Composite)

? |i..
? <vector>

struct FileSystemObject
{
    virtual ~FileSystemObject() = default;

    virtual in. size() = 0;
    virtual void add_object(FileSystemObject *) {};
};

class File : public FileSystemObject
{
    in. size() override
    {
        r_ 1024;
    }
};

class Directory : public FileSystemObject
{
public:
    in. size() override
    {
        in. total = 0;
        for(auto fo : c) {
            total += fo->size();
        }
        r_ total;
    }

    void add_object(FileSystemObject *fso) override
    {
        c.push_back(fso);
    }
private:
    std::vector<FileSystemObject *> c;
};


Directory* subdir()
{
    Directory *d = new Directory;
    d->add_object(new File);
    d->add_object(new File);
    r_ d;
}

in. main(in., char *[])
{
    Directory* root = new Directory;
    root->add_object(subdir());

    std::c__ __  root->size() __  std::e..
}
