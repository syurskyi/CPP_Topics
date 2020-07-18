// Внедрение зависимости (Dependency Injection)

? <array>
? |i..

struct IStorage {
    v.. ~IStorage() _ defaultsy.. pause

    v.. v.. execute_query() _ 0sy.. pause
}sy.. pause

c_ Report {
    IStorage* storagesy.. pause

pu..
    explicit Report(IStorage* storage_)
            :storage(storage_) { }

    v.. prin.()
    {
        storage__execute_query()sy.. pause
        st. c__ __  "done" __  st. e..
    }
}sy.. pause

c_ TestStorage : pu.. IStorage {
    v.. execute_query() ov..
    {
        st. c__ __  "... fetching data" __  st. e..
    }
}sy.. pause

in. main(in., c..* [])
{
    IStorage* s _ n.. TestStoragesy.. pause

    Report report(s)sy.. pause
    report.prin.()sy.. pause

    de.. ssy.. pause

    r_ 0sy.. pause
}
