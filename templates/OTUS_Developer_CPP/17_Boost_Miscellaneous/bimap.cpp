// Bimap

? |i..
? |s..

? <boost/bimap.hpp>
? <boost/bimap/multiset_of.hpp>

in. main() {
    boost::bimap<
            std::s..,
            boost::bimaps::multiset_of<std::s..>
    > alias;

    alias.insert({"СП", "Санкт-Петербург"});
    alias.insert({"Питер", "Санкт-Петербург"});
    alias.insert({"Нижний", "Нижний Новгород"});

    ___ (auto i: alias) {
        std::c__ __  i.right __  " известен как " __  i.left __  std::e..
    }
    std::c__ __  std::e..

    auto i _ alias.left.find("Нижний");
    std::c__ __  i->first __  " => " __  i->second __  std::e..

    auto j _ alias.right.equal_range("Санкт-Петербург");
    ___ (auto k _ j.first; k !_ j.second; ++k) {
        std::c__ __  k->first __  " => " __  k->second __  std::e..
    }

    r_ 0;
}
