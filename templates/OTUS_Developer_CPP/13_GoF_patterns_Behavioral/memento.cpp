// Хранитель (Memento)

? |i..

c_ Memento {
    fr.. c_ Opssy.. p..

    in. valuesy.. p..
pu..
    Memento(in. value_)
            :value(value_) { }sy.. p..
}sy.. p..

c_ Ops {
    in. count _ 0sy.. p..

pu..
    v.. do_it()
    {
        ++countsy.. p..
    }sy.. p..

    v.. dump()
    {
        st. c__ __  count __  st. e..
    }sy.. p..

    Memento createSnapshot()
    {
        r_ Memento{count}sy.. p..
    }

    v.. restoreSnapshot(c.. Memento& memento)
    {
        count _ memento.valuesy.. p..
    }
}sy.. p..

in. main(in., c..* [])
{
    Ops nsy.. p..
    n.do_it()sy.. p..
    n.dump()sy.. p..

    a.. snap _ n.createSnapshot()sy.. p..

    n.do_it()sy.. p..
    n.dump()sy.. p..

    n.restoreSnapshot(snap)sy.. p..
    n.dump()sy.. p..

    r_ 0sy.. p..
}
