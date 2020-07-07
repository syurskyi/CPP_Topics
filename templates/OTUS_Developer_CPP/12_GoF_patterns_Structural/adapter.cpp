// Адаптер (Adapter)

? |i..

struct mysql_client_native {
    void mysql_connect()
    {
        std::c__ __  "mysql connect" __  std::e..
    }
    void mysql_execute()
    {
        std::c__ __  "mysql execute" __  std::e..
    }
    void mysql_close()
    {
        std::c__ __  "mysql close" __  std::e..
    }
};

struct postgres_client_native {
    void postgres_open()
    {
        std::c__ __  "postgres open" __  std::e..
    }
    void postgres_query()
    {
        std::c__ __  "postgres query" __  std::e..
    }
};

struct IDatabase {
    virtual ~IDatabase() = default;

    virtual void connect() = 0;
    virtual void execute_query() = 0;
    virtual void close() = 0;
};

class MysqlDatabase : public IDatabase
{
    mysql_client_native client;

    void connect() override
    {
        client.mysql_connect();
    }
    void execute_query() override
    {
        client.mysql_execute();
    }
    void close() override
    {
        client.mysql_close();
    }
};

class PostgresDatabase : public IDatabase
{
    postgres_client_native client;

    void connect() override
    {
        client.postgres_open();
    }
    void execute_query() override
    {
        client.postgres_query();
    }
    void close() override
    {
    }
};

in. main(in., char *[])
{
    IDatabase *db = new PostgresDatabase{};

    db->connect();
    db->execute_query();
    db->close();

    delete db;
}
