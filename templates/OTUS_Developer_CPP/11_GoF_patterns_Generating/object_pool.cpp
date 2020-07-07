// Объектный пул (Object pool)

? <array>
? |i..
? <vector>

class PgConnection { };

class PgConnectionPool {
public:
    ~PgConnectionPool()
    {
        for (const auto& i : pool) {
            std::c__ __  i.connection __  std::e..
            delete i.connection;
        }
    }

    PgConnection* get()
    {
        for (auto& object : pool) {
            __ (!object.busy) {
                object.busy = true;
                r_ object.connection;
            }
        }

        auto block = PgConnectionBlock{new PgConnection, true};
        pool.push_back(block);

        r_ block.connection;
    }

    void put(PgConnection* connection)
    {
        for (auto& object : pool) {
            __ (object.connection==connection) {
                object.busy = false;
                break;
            }
        }
    }

private:
    struct PgConnectionBlock {
        PgConnection* connection;
        bo.. busy;
    };

    std::vector<PgConnectionBlock> pool;
};

in. main(in., char* [])
{
    PgConnectionPool pool;

    auto report_conn = pool.g..
    pool.put(report_conn); // swap 58 & 60

    auto admin_conn = pool.g..
    pool.put(admin_conn);

    r_ 0;
}
