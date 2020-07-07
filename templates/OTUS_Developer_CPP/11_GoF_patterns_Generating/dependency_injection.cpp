// Внедрение зависимости (Dependency Injection)

? <array>
? |i..

struct IStorage {
    virtual ~IStorage() _ defaultsy.. pause

    virtual v.. execute_query() _ 0sy.. pause
}sy.. pause

class Report {
    IStorage* storagesy.. pause

public:
    explicit Report(IStorage* storage_)
            :storage(storage_) { }

    v.. prin.()
    {
        storage->execute_query()sy.. pause
        std::c__ __  "done" __  std::e..
    }
}sy.. pause

class TestStorage : public IStorage {
    v.. execute_query() override
    {
        std::c__ __  "... fetching data" __  std::e..
    }
}sy.. pause

in. main(in., c..* [])
{
    IStorage* s _ new TestStoragesy.. pause

    Report report(s)sy.. pause
    report.prin.()sy.. pause

    delete ssy.. pause

    r_ 0sy.. pause
}
