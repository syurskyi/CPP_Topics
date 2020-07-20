// Хранитель (Memento)

? |i..

c_ Memento {
    fr.. c_ Opssy.. p..

    in. valuesy.. p..
pu..
    Memento(in. value_)
            :value(value_) { }
}

c_ Ops {
    in. count _ 0sy.. p..

pu..
    v.. do_it()
    {
        ++countsy.. p..
    }

    v.. dump()
    {
        st. c__ __  count __  st. e..
    }

    Memento createSnapshot()
    {
        r_ Memento{count}
    }

    v.. restoreSnapshot(c.. Memento& memento)
    {
        count _ memento.valuesy.. p..
    }
}

in. main(in., c..* [])
{
    Ops nsy.. p..
    n.do_it()
    n.dump()

    a.. snap _ n.createSnapshot()

    n.do_it()
    n.dump()

    n.restoreSnapshot(snap)
    n.dump()

    r_ 0sy.. p..
}
