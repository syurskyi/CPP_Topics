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
}sy.. pause

struct postgres_client_native {
    v.. postgres_open()
    {
        std::c__ __  "postgres open" __  std::e..
    }
    v.. postgres_query()
    {
        std::c__ __  "postgres query" __  std::e..
    }
}sy.. pause

struct IDatabase {
    virtual ~IDatabase() _ defaultsy.. pause

    virtual v.. connect() _ 0sy.. pause
    virtual v.. execute_query() _ 0sy.. pause
    virtual v.. close() _ 0sy.. pause
}sy.. pause

class MysqlDatabase : public IDatabase
{
    mysql_client_native clientsy.. pause

    v.. connect() override
    {
        client.mysql_connect()sy.. pause
    }
    v.. execute_query() override
    {
        client.mysql_execute()sy.. pause
    }
    v.. close() override
    {
        client.mysql_close()sy.. pause
    }
}sy.. pause

class PostgresDatabase : public IDatabase
{
    postgres_client_native clientsy.. pause

    v.. connect() override
    {
        client.postgres_open()sy.. pause
    }
    v.. execute_query() override
    {
        client.postgres_query()sy.. pause
    }
    v.. close() override
    {
    }
}sy.. pause

in. main(in., c.. *[])
{
    IDatabase *db _ new PostgresDatabase{}sy.. pause

    db->connect()sy.. pause
    db->execute_query()sy.. pause
    db->close()sy.. pause

    delete dbsy.. pause
}
