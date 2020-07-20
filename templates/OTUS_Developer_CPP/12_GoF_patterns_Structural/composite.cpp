// Компоновщик (Composite)

? |i..
? ve..

st.. FileSystemObject
{
    v.. ~FileSystemObject() _ defaultsy.. p..

    v.. in. s.. _ 0sy.. p..
    v.. v.. add_object(FileSystemObject *) {}
}

c_ File : pu.. FileSystemObject
{
    in. s.. ov..
    {
        r_ 1024sy.. p..
    }
}

c_ Directory : pu.. FileSystemObject
{
pu..
    in. s.. ov..
    {
        in. total _ 0sy.. p..
        ___(a.. fo : c) {
            total +_ fo__size()
        }
        r_ totalsy.. p..
    }

    v.. add_object(FileSystemObject *fso) ov..
    {
        c.push_back(fso)
    }
pr..
    st. ve..<FileSystemObject *> csy.. p..
}


Directory* subdir()
{
    Directory *d _ n.. Directorysy.. p..
    d__add_object(n.. File)
    d__add_object(n.. File)
    r_ dsy.. p..
}

in. main(in., c.. #||
{
    Directory* root _ n.. Directorysy.. p..
    root__add_object(subdir())

    st. c__ __  root__size() __  st. e..
}
