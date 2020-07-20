// Bimap

? |i..
? |s..

? <boost/bimap.hpp>
? <boost/bimap/multiset_of.hpp>

in. main
    boost::bimap<
            st. s..,
            boost::bimaps::multiset_of<st. s..>
    > aliassy.. p..

    alias.insert({"СП", "Санкт-Петербург"})
    alias.insert({"Питер", "Санкт-Петербург"})
    alias.insert({"Нижний", "Нижний Новгород"})

    ___ (a.. i: alias) {
        st. c__ __  i.right __  " известен как " __  i.left __  st. e..
    }
    st. c__ __  st. e..

    a.. i _ alias.left.find("Нижний")
    st. c__ __  i__first __  " => " __  i__second __  st. e..

    a.. j _ alias.right.equal_range("Санкт-Петербург")
    ___ (a.. k _ j.firstsy.. p.. k !_ j.secondsy.. p.. ++k) {
        st. c__ __  k__first __  " => " __  k__second __  st. e..
    }

    r_ 0sy.. p..
}
