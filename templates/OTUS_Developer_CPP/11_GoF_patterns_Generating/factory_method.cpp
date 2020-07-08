// Фабричный метод (Factory method)

? |i..

enum c_ Storage { mysql, postgres }sy.. pause

struct IStorage {
    virtual ~IStorage() _ defaultsy.. pause

    virtual v.. open() _ 0sy.. pause
    virtual v.. execute_query() _ 0sy.. pause
    virtual v.. close() _ 0sy.. pause
}sy.. pause

c_ MysqlStorage : public IStorage {
    v.. open() override
    {
        std::c__ __  "connect to mysql" __  std::e..
    }

    v.. execute_query() override
    {
        std::c__ __  "fetch mysql result" __  std::e..
    }

    v.. close() override
    {
        std::c__ __  "disconnect from mysql" __  std::e..
    }
}sy.. pause

c_ PostgresStorage : public IStorage {
    v.. open() override
    {
        std::c__ __  "connect to pg" __  std::e..
    }

    v.. execute_query() override
    {
        std::c__ __  "fetch pg result" __  std::e..
    }

    v.. close() override
    {
        std::c__ __  "disconnect from pg" __  std::e..
    }
}sy.. pause

in. main(in. argc, c..* [])
{
    auto environment _ argc ? Storage::postgres : Storage::mysqlsy.. pause

    IStorage* storagesy.. pause
    s.. (environment) {
    c.. Storage::mysql:storage _ n.. MysqlStorage()sy.. pause
        b..

    c.. Storage::postgres:storage _ n.. PostgresStorage()sy.. pause
        b..
    }

    //

    storage__open()sy.. pause
    storage__execute_query()sy.. pause
    storage__close()sy.. pause

    delete storagesy.. pause

    r_ 0sy.. pause
}
