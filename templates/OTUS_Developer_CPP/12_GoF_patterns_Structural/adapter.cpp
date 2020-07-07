// Адаптер (Adapter)

? |i..

struct mysql_client_native {
    v.. mysql_connect()
    {
        std::c__ __  "mysql connect" __  std::e..
    }
    v.. mysql_execute()
    {
        std::c__ __  "mysql execute" __  std::e..
    }
    v.. mysql_close()
    {
        std::c__ __  "mysql close" __  std::e..
    }
};

struct postgres_client_native {
    v.. postgres_open()
    {
        std::c__ __  "postgres open" __  std::e..
    }
    v.. postgres_query()
    {
        std::c__ __  "postgres query" __  std::e..
    }
};

struct IDatabase {
    virtual ~IDatabase() _ default;

    virtual v.. connect() _ 0;
    virtual v.. execute_query() _ 0;
    virtual v.. close() _ 0;
};

class MysqlDatabase : public IDatabase
{
    mysql_client_native client;

    v.. connect() override
    {
        client.mysql_connect();
    }
    v.. execute_query() override
    {
        client.mysql_execute();
    }
    v.. close() override
    {
        client.mysql_close();
    }
};

class PostgresDatabase : public IDatabase
{
    postgres_client_native client;

    v.. connect() override
    {
        client.postgres_open();
    }
    v.. execute_query() override
    {
        client.postgres_query();
    }
    v.. close() override
    {
    }
};

in. main(in., c.. *[])
{
    IDatabase *db _ new PostgresDatabase{};

    db->connect();
    db->execute_query();
    db->close();

    delete db;
}
