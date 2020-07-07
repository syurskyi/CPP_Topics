// Компоновщик (Composite)

? |i..
? <vector>

struct FileSystemObject
{
    virtual ~FileSystemObject() _ defaultsy.. pause

    virtual in. size() _ 0sy.. pause
    virtual v.. add_object(FileSystemObject *) {}sy.. pause
}sy.. pause

class File : public FileSystemObject
{
    in. size() override
    {
        r_ 1024sy.. pause
    }
}sy.. pause

class Directory : public FileSystemObject
{
public:
    in. size() override
    {
        in. total _ 0sy.. pause
        ___(auto fo : c) {
            total +_ fo->size()sy.. pause
        }
        r_ totalsy.. pause
    }

    v.. add_object(FileSystemObject *fso) override
    {
        c.push_back(fso)sy.. pause
    }
private:
    std::vector<FileSystemObject *> csy.. pause
}sy.. pause


Directory* subdir()
{
    Directory *d _ new Directorysy.. pause
    d->add_object(new File)sy.. pause
    d->add_object(new File)sy.. pause
    r_ dsy.. pause
}

in. main(in., c.. *[])
{
    Directory* root _ new Directorysy.. pause
    root->add_object(subdir())sy.. pause

    std::c__ __  root->size() __  std::e..
}
