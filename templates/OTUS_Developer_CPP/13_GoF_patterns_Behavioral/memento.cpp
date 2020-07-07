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
    in. count _ 0;

public:
    v.. do_it()
    {
        ++count;
    };

    v.. dump()
    {
        std::c__ __  count __  std::e..
    };

    Memento createSnapshot()
    {
        r_ Memento{count};
    }

    v.. restoreSnapshot(const Memento& memento)
    {
        count _ memento.value;
    }
};

in. main(in., c..* [])
{
    Ops n;
    n.do_it();
    n.dump();

    auto snap _ n.createSnapshot();

    n.do_it();
    n.dump();

    n.restoreSnapshot(snap);
    n.dump();

    r_ 0;
}
