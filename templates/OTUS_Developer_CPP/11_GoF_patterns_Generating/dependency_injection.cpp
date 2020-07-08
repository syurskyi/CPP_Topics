// Внедрение зависимости (Dependency Injection)

? <array>
? |i..

struct IStorage {
    virtual ~IStorage() _ defaultsy.. pause

    virtual v.. execute_query() _ 0sy.. pause
}sy.. pause

c_ Report {
    IStorage* storagesy.. pause

pu..
    explicit Report(IStorage* storage_)
            :storage(storage_) { }

    v.. prin.()
    {
        storage__execute_query()sy.. pause
        std::c__ __  "done" __  std::e..
    }
}sy.. pause

c_ TestStorage : public IStorage {
    v.. execute_query() override
    {
        std::c__ __  "... fetching data" __  std::e..
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
