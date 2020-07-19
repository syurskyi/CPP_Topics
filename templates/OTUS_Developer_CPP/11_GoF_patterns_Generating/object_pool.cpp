// Объектный пул (Object pool)

? <array>
? |i..
? ve..

c_ PgConnection { }sy.. p..

c_ PgConnectionPool {
pu..
    ~PgConnectionPool()
    {
        ___ (c.. a..& i : pool) {
            st. c__ __  i.connection __  st. e..
            de.. i.connectionsy.. p..
        }
    }

    PgConnection* get()
    {
        ___ (a..& object : pool) {
            __ (!object.busy) {
                object.busy _ truesy.. p..
                r_ object.connectionsy.. p..
            }
        }

        a.. block _ PgConnectionBlock{n.. PgConnection, t..}sy.. p..
        pool.push_back(block)sy.. p..

        r_ block.connectionsy.. p..
    }

    v.. put(PgConnection* connection)
    {
        ___ (a..& object : pool) {
            __ (object.connection__connection) {
                object.busy _ falsesy.. p..
                b..
            }
        }
    }

pr..
    st.. PgConnectionBlock {
        PgConnection* connectionsy.. p..
        bo.. busysy.. p..
    }sy.. p..

    st. ve..<PgConnectionBlock> poolsy.. p..
}sy.. p..

in. main(in., c..* [])
{
    PgConnectionPool poolsy.. p..

    a.. report_conn _ pool.g..
    pool.put(report_conn)sy.. p.. // swap 58 & 60

    a.. admin_conn _ pool.g..
    pool.put(admin_conn)sy.. p..

    r_ 0sy.. p..
}
