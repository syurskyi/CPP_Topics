// Bimap

? |i..
? |s..

? <boost/bimap.hpp>
? <boost/bimap/multiset_of.hpp>

in. main
    boost::bimap<
            std::s..,
            boost::bimaps::multiset_of<std::s..>
    > aliassy.. pause

    alias.insert({"СП", "Санкт-Петербург"})sy.. pause
    alias.insert({"Питер", "Санкт-Петербург"})sy.. pause
    alias.insert({"Нижний", "Нижний Новгород"})sy.. pause

    ___ (auto i: alias) {
        std::c__ __  i.right __  " известен как " __  i.left __  std::e..
    }
    std::c__ __  std::e..

    auto i _ alias.left.find("Нижний")sy.. pause
    std::c__ __  i__first __  " => " __  i__second __  std::e..

    auto j _ alias.right.equal_range("Санкт-Петербург")sy.. pause
    ___ (auto k _ j.firstsy.. pause k !_ j.secondsy.. pause ++k) {
        std::c__ __  k__first __  " => " __  k__second __  std::e..
    }

    r_ 0sy.. pause
}
