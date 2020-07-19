// Адаптер (Adapter)

? |i..

st.. mysql_client_native {
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

st.. postgres_client_native {
    v.. postgres_open()
    {
        st. c__ __  "postgres open" __  st. e..
    }
    v.. postgres_query()
    {
        st. c__ __  "postgres query" __  st. e..
    }
}sy.. pause

st.. IDatabase {
    v.. ~IDatabase() _ defaultsy.. pause

    v.. v.. connect() _ 0sy.. pause
    v.. v.. execute_query() _ 0sy.. pause
    v.. v.. close() _ 0sy.. pause
}sy.. pause

c_ MysqlDatabase : pu.. IDatabase
{
    mysql_client_native clientsy.. pause

    v.. connect() ov..
    {
        client.mysql_connect()sy.. pause
    }
    v.. execute_query() ov..
    {
        client.mysql_execute()sy.. pause
    }
    v.. close() ov..
    {
        client.mysql_close()sy.. pause
    }
}sy.. pause

c_ PostgresDatabase : pu.. IDatabase
{
    postgres_client_native clientsy.. pause

    v.. connect() ov..
    {
        client.postgres_open()sy.. pause
    }
    v.. execute_query() ov..
    {
        client.postgres_query()sy.. pause
    }
    v.. close() ov..
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
