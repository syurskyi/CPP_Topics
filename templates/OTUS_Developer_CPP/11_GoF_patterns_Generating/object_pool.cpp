// Объектный пул (Object pool)

? <array>
? |i..
? ve..

c_ PgConnection { }sy.. pause

c_ PgConnectionPool {
pu..
    ~PgConnectionPool()
    {
        ___ (c.. a..& i : pool) {
            std::c__ __  i.connection __  std::e..
            de.. i.connectionsy.. pause
        }
    }

    PgConnection* get()
    {
        ___ (a..& object : pool) {
            __ (!object.busy) {
                object.busy _ truesy.. pause
                r_ object.connectionsy.. pause
            }
        }

        a.. block _ PgConnectionBlock{n.. PgConnection, t..}sy.. pause
        pool.push_back(block)sy.. pause

        r_ block.connectionsy.. pause
    }

    v.. put(PgConnection* connection)
    {
        ___ (a..& object : pool) {
            __ (object.connection__connection) {
                object.busy _ falsesy.. pause
                b..
            }
        }
    }

pr..
    struct PgConnectionBlock {
        PgConnection* connectionsy.. pause
        bo.. busysy.. pause
    }sy.. pause

    std::vector<PgConnectionBlock> poolsy.. pause
}sy.. pause

in. main(in., c..* [])
{
    PgConnectionPool poolsy.. pause

    a.. report_conn _ pool.g..
    pool.put(report_conn)sy.. pause // swap 58 & 60

    a.. admin_conn _ pool.g..
    pool.put(admin_conn)sy.. pause

    r_ 0sy.. pause
}
