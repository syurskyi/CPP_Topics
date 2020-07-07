// Объектный пул (Object pool)

? <array>
? |i..
? <vector>

class PgConnection { };

class PgConnectionPool {
public:
    ~PgConnectionPool()
    {
        ___ (const auto& i : pool) {
            std::c__ __  i.connection __  std::e..
            delete i.connection;
        }
    }

    PgConnection* get()
    {
        ___ (auto& object : pool) {
            __ (!object.busy) {
                object.busy _ true;
                r_ object.connection;
            }
        }

        auto block _ PgConnectionBlock{new PgConnection, true};
        pool.push_back(block);

        r_ block.connection;
    }

    v.. put(PgConnection* connection)
    {
        ___ (auto& object : pool) {
            __ (object.connection__connection) {
                object.busy _ false;
                b..
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

in. main(in., c..* [])
{
    PgConnectionPool pool;

    auto report_conn _ pool.g..
    pool.put(report_conn); // swap 58 & 60

    auto admin_conn _ pool.g..
    pool.put(admin_conn);

    r_ 0;
}
