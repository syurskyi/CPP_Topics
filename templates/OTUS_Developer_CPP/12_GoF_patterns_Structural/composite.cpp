// Компоновщик (Composite)

? |i..
? <vector>

struct FileSystemObject
{
    virtual ~FileSystemObject() _ default;

    virtual in. size() _ 0;
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
        in. total _ 0;
        ___(auto fo : c) {
            total +_ fo->size();
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
    Directory *d _ new Directory;
    d->add_object(new File);
    d->add_object(new File);
    r_ d;
}

in. main(in., c.. *[])
{
    Directory* root _ new Directory;
    root->add_object(subdir());

    std::c__ __  root->size() __  std::e..
}
