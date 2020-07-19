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
}sy.. p..

st.. postgres_client_native {
    v.. postgres_open()
    {
        st. c__ __  "postgres open" __  st. e..
    }
    v.. postgres_query()
    {
        st. c__ __  "postgres query" __  st. e..
    }
}sy.. p..

st.. IDatabase {
    v.. ~IDatabase() _ defaultsy.. p..

    v.. v.. connect() _ 0sy.. p..
    v.. v.. execute_query() _ 0sy.. p..
    v.. v.. close() _ 0sy.. p..
}sy.. p..

c_ MysqlDatabase : pu.. IDatabase
{
    mysql_client_native clientsy.. p..

    v.. connect() ov..
    {
        client.mysql_connect()sy.. p..
    }
    v.. execute_query() ov..
    {
        client.mysql_execute()sy.. p..
    }
    v.. close() ov..
    {
        client.mysql_close()sy.. p..
    }
}sy.. p..

c_ PostgresDatabase : pu.. IDatabase
{
    postgres_client_native clientsy.. p..

    v.. connect() ov..
    {
        client.postgres_open()sy.. p..
    }
    v.. execute_query() ov..
    {
        client.postgres_query()sy.. p..
    }
    v.. close() ov..
    {
    }
}sy.. p..

in. main(in., c.. *[])
{
    IDatabase *db _ n.. PostgresDatabase{}sy.. p..

    db__connect()sy.. p..
    db__execute_query()sy.. p..
    db__close()sy.. p..

    de.. dbsy.. p..
}
