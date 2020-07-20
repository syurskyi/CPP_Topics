// Внедрение зависимости (Dependency Injection)

? <array>
? |i..

st.. IStorage {
    v.. ~IStorage() _ defaultsy.. p..

    v.. v.. execute_query() _ 0sy.. p..
}

c_ Report {
    IStorage* storagesy.. p..

pu..
    ex__ Report(IStorage* storage_)
            :storage(storage_) { }

    v.. prin.()
    {
        storage__execute_query()
        st. c__ __  "done" __  st. e..
    }
}

c_ TestStorage : pu.. IStorage {
    v.. execute_query() ov..
    {
        st. c__ __  "... fetching data" __  st. e..
    }
}

in. main(in., c..* [])
{
    IStorage* s _ n.. TestStoragesy.. p..

    Report report(s)
    report.prin.()

    de.. ssy.. p..

    r_ 0sy.. p..
}
