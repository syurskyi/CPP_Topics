// Фабричный метод (Factory method)

? |i..

en.. c_ Storage { mysql, postgres }sy.. p..

st.. IStorage {
    v.. ~IStorage() _ defaultsy.. p..

    v.. v.. open() _ 0sy.. p..
    v.. v.. execute_query() _ 0sy.. p..
    v.. v.. close() _ 0sy.. p..
}sy.. p..

c_ MysqlStorage : pu.. IStorage {
    v.. open() ov..
    {
        st. c__ __  "connect to mysql" __  st. e..
    }

    v.. execute_query() ov..
    {
        st. c__ __  "fetch mysql result" __  st. e..
    }

    v.. close() ov..
    {
        st. c__ __  "disconnect from mysql" __  st. e..
    }
}sy.. p..

c_ PostgresStorage : pu.. IStorage {
    v.. open() ov..
    {
        st. c__ __  "connect to pg" __  st. e..
    }

    v.. execute_query() ov..
    {
        st. c__ __  "fetch pg result" __  st. e..
    }

    v.. close() ov..
    {
        st. c__ __  "disconnect from pg" __  st. e..
    }
}sy.. p..

in. main(in. argc, c..* [])
{
    a.. environment _ argc ? Storage::postgres : Storage::mysqlsy.. p..

    IStorage* storagesy.. p..
    s.. (environment) {
    c.. Storage::mysql:storage _ n.. MysqlStorage()sy.. p..
        b..

    c.. Storage::postgres:storage _ n.. PostgresStorage()sy.. p..
        b..
    }

    //

    storage__open()sy.. p..
    storage__execute_query()sy.. p..
    storage__close()sy.. p..

    de.. storagesy.. p..

    r_ 0sy.. p..
}
