// Хранитель (Memento)

? |i..

c_ Memento {
    friend c_ Opssy.. pause

    in. valuesy.. pause
pu..
    Memento(in. value_)
            :value(value_) { }sy.. pause
}sy.. pause

c_ Ops {
    in. count _ 0sy.. pause

pu..
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

    v.. restoreSnapshot(c.. Memento& memento)
    {
        count _ memento.valuesy.. pause
    }
}sy.. pause

in. main(in., c..* [])
{
    Ops nsy.. pause
    n.do_it()sy.. pause
    n.dump()sy.. pause

    a.. snap _ n.createSnapshot()sy.. pause

    n.do_it()sy.. pause
    n.dump()sy.. pause

    n.restoreSnapshot(snap)sy.. pause
    n.dump()sy.. pause

    r_ 0sy.. pause
}
