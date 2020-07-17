// Bimap

? |i..
? |s..

? <boost/bimap.hpp>
? <boost/bimap/multiset_of.hpp>

in. main
    boost::bimap<
            st. s..,
            boost::bimaps::multiset_of<st. s..>
    > aliassy.. pause

    alias.insert({"СП", "Санкт-Петербург"})sy.. pause
    alias.insert({"Питер", "Санкт-Петербург"})sy.. pause
    alias.insert({"Нижний", "Нижний Новгород"})sy.. pause

    ___ (a.. i: alias) {
        st. c__ __  i.right __  " известен как " __  i.left __  st. e..
    }
    st. c__ __  st. e..

    a.. i _ alias.left.find("Нижний")sy.. pause
    st. c__ __  i__first __  " => " __  i__second __  st. e..

    a.. j _ alias.right.equal_range("Санкт-Петербург")sy.. pause
    ___ (a.. k _ j.firstsy.. pause k !_ j.secondsy.. pause ++k) {
        st. c__ __  k__first __  " => " __  k__second __  st. e..
    }

    r_ 0sy.. pause
}
