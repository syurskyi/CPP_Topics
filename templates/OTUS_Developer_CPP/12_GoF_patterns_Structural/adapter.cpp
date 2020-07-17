// Адаптер (Adapter)

? |i..

struct mysql_client_native {
    v.. mysql_connect()
    {
        st. c__ __  "mysql connect" __  st. e..
    }
    v.. mysql_execute()
    {
        st. c__ __  "mysql execute" __  st. e..
    }
    v.. mysql_close()
    {
        st. c__ __  "mysql close" __  st. e..
    }
}sy.. pause

struct postgres_client_native {
    v.. postgres_open()
    {
        st. c__ __  "postgres open" __  st. e..
    }
    v.. postgres_query()
    {
        st. c__ __  "postgres query" __  st. e..
    }
}sy.. pause

struct IDatabase {
    virtual ~IDatabase() _ defaultsy.. pause

    virtual v.. connect() _ 0sy.. pause
    virtual v.. execute_query() _ 0sy.. pause
    virtual v.. close() _ 0sy.. pause
}sy.. pause

c_ MysqlDatabase : pu.. IDatabase
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

c_ PostgresDatabase : pu.. IDatabase
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
    IDatabase *db _ n.. PostgresDatabase{}sy.. pause

    db__connect()sy.. pause
    db__execute_query()sy.. pause
    db__close()sy.. pause

    de.. dbsy.. pause
}
