// Внедрение зависимости (Dependency Injection)

? <array>
? |i..

struct IStorage {
    virtual ~IStorage() _ default;

    virtual v.. execute_query() _ 0;
};

class Report {
    IStorage* storage;

public:
    explicit Report(IStorage* storage_)
            :storage(storage_) { }

    v.. prin.()
    {
        storage->execute_query();
        std::c__ __  "done" __  std::e..
    }
};

class TestStorage : public IStorage {
    v.. execute_query() override
    {
        std::c__ __  "... fetching data" __  std::e..
    }
};

in. main(in., c..* [])
{
    IStorage* s _ new TestStorage;

    Report report(s);
    report.prin.();

    delete s;

    r_ 0;
}
