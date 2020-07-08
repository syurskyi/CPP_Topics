// Компоновщик (Composite)

? |i..
? <vector>

struct FileSystemObject
{
    virtual ~FileSystemObject() _ defaultsy.. pause

    virtual in. size() _ 0sy.. pause
    virtual v.. add_object(FileSystemObject *) {}sy.. pause
}sy.. pause

c_ File : public FileSystemObject
{
    in. size() override
    {
        r_ 1024sy.. pause
    }
}sy.. pause

c_ Directory : public FileSystemObject
{
pu..
    in. size() override
    {
        in. total _ 0sy.. pause
        ___(auto fo : c) {
            total +_ fo__size()sy.. pause
        }
        r_ totalsy.. pause
    }

    v.. add_object(FileSystemObject *fso) override
    {
        c.push_back(fso)sy.. pause
    }
pr..
    std::vector<FileSystemObject *> csy.. pause
}sy.. pause


Directory* subdir()
{
    Directory *d _ new Directorysy.. pause
    d__add_object(new File)sy.. pause
    d__add_object(new File)sy.. pause
    r_ dsy.. pause
}

in. main(in., c.. *[])
{
    Directory* root _ new Directorysy.. pause
    root__add_object(subdir())sy.. pause

    std::c__ __  root__size() __  std::e..
}
