// Компоновщик (Composite)

? |i..
? ve..

st.. FileSystemObject
{
    v.. ~FileSystemObject() _ defaultsy.. pause

    v.. in. s.. _ 0sy.. pause
    v.. v.. add_object(FileSystemObject *) {}sy.. pause
}sy.. pause

c_ File : pu.. FileSystemObject
{
    in. s.. ov..
    {
        r_ 1024sy.. pause
    }
}sy.. pause

c_ Directory : pu.. FileSystemObject
{
pu..
    in. s.. ov..
    {
        in. total _ 0sy.. pause
        ___(a.. fo : c) {
            total +_ fo__size()sy.. pause
        }
        r_ totalsy.. pause
    }

    v.. add_object(FileSystemObject *fso) ov..
    {
        c.push_back(fso)sy.. pause
    }
pr..
    st. ve..<FileSystemObject *> csy.. pause
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

    st. c__ __  root__size() __  st. e..
}
