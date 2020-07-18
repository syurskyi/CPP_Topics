// Фабричный метод (Factory method)

? |i..

en.. c_ Storage { mysql, postgres }sy.. pause

struct IStorage {
    v.. ~IStorage() _ defaultsy.. pause

    v.. v.. open() _ 0sy.. pause
    v.. v.. execute_query() _ 0sy.. pause
    v.. v.. close() _ 0sy.. pause
}sy.. pause

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
}sy.. pause

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
}sy.. pause

in. main(in. argc, c..* [])
{
    a.. environment _ argc ? Storage::postgres : Storage::mysqlsy.. pause

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

    de.. storagesy.. pause

    r_ 0sy.. pause
}
