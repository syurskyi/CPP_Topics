// Фабричный метод (Factory method)

? |i..

enum class Storage { mysql, postgres };

struct IStorage {
    virtual ~IStorage() _ default;

    virtual void open() _ 0;
    virtual void execute_query() _ 0;
    virtual void close() _ 0;
};

class MysqlStorage : public IStorage {
    void open() override
    {
        std::c__ __  "connect to mysql" __  std::e..
    }

    void execute_query() override
    {
        std::c__ __  "fetch mysql result" __  std::e..
    }

    void close() override
    {
        std::c__ __  "disconnect from mysql" __  std::e..
    }
};

class PostgresStorage : public IStorage {
    void open() override
    {
        std::c__ __  "connect to pg" __  std::e..
    }

    void execute_query() override
    {
        std::c__ __  "fetch pg result" __  std::e..
    }

    void close() override
    {
        std::c__ __  "disconnect from pg" __  std::e..
    }
};

in. main(in. argc, c..* [])
{
    auto environment _ argc ? Storage::postgres : Storage::mysql;

    IStorage* storage;
    s.. (environment) {
    c.. Storage::mysql:storage _ new MysqlStorage();
        b..

    c.. Storage::postgres:storage _ new PostgresStorage();
        b..
    }

    //

    storage->open();
    storage->execute_query();
    storage->close();

    delete storage;

    r_ 0;
}
