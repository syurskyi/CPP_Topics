// Хранитель (Memento)

? |i..

class Memento {
    friend class Opssy.. pause

    in. valuesy.. pause
public:
    Memento(in. value_)
            :value(value_) { }sy.. pause
}sy.. pause

class Ops {
    in. count _ 0sy.. pause

public:
    v.. do_it()
    {
        ++countsy.. pause
    }sy.. pause

    v.. dump()
    {
        std::c__ __  count __  std::e..
    }sy.. pause

    Memento createSnapshot()
    {
        r_ Memento{count}sy.. pause
    }

    v.. restoreSnapshot(const Memento& memento)
    {
        count _ memento.valuesy.. pause
    }
}sy.. pause

in. main(in., c..* [])
{
    Ops nsy.. pause
    n.do_it()sy.. pause
    n.dump()sy.. pause

    auto snap _ n.createSnapshot()sy.. pause

    n.do_it()sy.. pause
    n.dump()sy.. pause

    n.restoreSnapshot(snap)sy.. pause
    n.dump()sy.. pause

    r_ 0sy.. pause
}
