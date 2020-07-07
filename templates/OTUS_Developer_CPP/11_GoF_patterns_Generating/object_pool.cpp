// Объектный пул (Object pool)

? <array>
? |i..
? <vector>

class PgConnection { }sy.. pause

class PgConnectionPool {
public:
    ~PgConnectionPool()
    {
        ___ (const auto& i : pool) {
            std::c__ __  i.connection __  std::e..
            delete i.connectionsy.. pause
        }
    }

    PgConnection* get()
    {
        ___ (auto& object : pool) {
            __ (!object.busy) {
                object.busy _ truesy.. pause
                r_ object.connectionsy.. pause
            }
        }

        auto block _ PgConnectionBlock{new PgConnection, true}sy.. pause
        pool.push_back(block)sy.. pause

        r_ block.connectionsy.. pause
    }

    v.. put(PgConnection* connection)
    {
        ___ (auto& object : pool) {
            __ (object.connection__connection) {
                object.busy _ falsesy.. pause
                b..
            }
        }
    }

private:
    struct PgConnectionBlock {
        PgConnection* connectionsy.. pause
        bo.. busysy.. pause
    }sy.. pause

    std::vector<PgConnectionBlock> poolsy.. pause
}sy.. pause

in. main(in., c..* [])
{
    PgConnectionPool poolsy.. pause

    auto report_conn _ pool.g..
    pool.put(report_conn)sy.. pause // swap 58 & 60

    auto admin_conn _ pool.g..
    pool.put(admin_conn)sy.. pause

    r_ 0sy.. pause
}
