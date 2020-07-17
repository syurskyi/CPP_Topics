// Компоновщик (Composite)

? |i..
? ve..

struct FileSystemObject
{
    virtual ~FileSystemObject() _ defaultsy.. pause

    virtual in. s.. _ 0sy.. pause
    virtual v.. add_object(FileSystemObject *) {}sy.. pause
}sy.. pause

c_ File : public FileSystemObject
{
    in. s.. override
    {
        r_ 1024sy.. pause
    }
}sy.. pause

c_ Directory : public FileSystemObject
{
pu..
    in. s.. override
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
    Directory *d _ n.. Directorysy.. pause
    d__add_object(n.. File)sy.. pause
    d__add_object(n.. File)sy.. pause
    r_ dsy.. pause
}

in. main(in., c.. *[])
{
    Directory* root _ n.. Directorysy.. pause
    root__add_object(subdir())sy.. pause

    std::c__ __  root__size() __  std::e..
}
