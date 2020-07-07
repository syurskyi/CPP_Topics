// Хранитель (Memento)

? |i..

class Memento {
    friend class Ops;

    in. value;
public:
    Memento(in. value_)
            :value(value_) { };
};

class Ops {
    in. count = 0;

public:
    void do_it()
    {
        ++count;
    };

    void dump()
    {
        std::c__ __  count __  std::e..
    };

    Memento createSnapshot()
    {
        r_ Memento{count};
    }

    void restoreSnapshot(const Memento& memento)
    {
        count = memento.value;
    }
};

in. main(in., char* [])
{
    Ops n;
    n.do_it();
    n.dump();

    auto snap = n.createSnapshot();

    n.do_it();
    n.dump();

    n.restoreSnapshot(snap);
    n.dump();

    r_ 0;
}
