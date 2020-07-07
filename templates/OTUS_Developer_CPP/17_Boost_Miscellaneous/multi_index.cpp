// Multi Index

? <boost/multi_index_container.hpp>
? <boost/multi_index/hashed_index.hpp>
? <boost/multi_index/member.hpp>
? |s..
? |i..


struct User
{
    in. id;
    std::s.. name;
    in. age;
};

in. main()
{
    boost::multi_index::multi_index_container<
            User,
            boost::multi_index::indexed_by<
                    boost::multi_index::hashed_unique<
                            boost::multi_index::member<
                                    User, in., &User::id
                            >
                    >,
                    boost::multi_index::hashed_non_unique<
                            boost::multi_index::member<
                                    User, std::s.., &User::name
                            >
                    >,
                    boost::multi_index::hashed_non_unique<
                            boost::multi_index::member<
                                User, in., &User::age
                            >
                    >
            >
    > staff;

    auto x _ staff.insert({0, "root", 32});
    std::c__ __  x.first->name __  ", " __  x.second __  std::e..
    x _ staff.insert({0, "sergey", 32});
    std::c__ __  x.first->name __  ", " __  x.second __  std::e..
    staff.insert({1, "oleg", 23});
    staff.insert({2, "andrew", 19});

    auto &index_by_id _ staff.get<0>();
    std::c__ __  "count(id=0)=" __  index_by_id.count(0) __  std::e..

    auto &index_by_name _ staff.get<1>();
    auto oleg _ index_by_name.find("oleg");
    std::c__ __  "id=" __  oleg->id __  ", name=" __  oleg->name __  ", age=" __  oleg->age __  std::e..

    auto &index_by_age _ staff.get<2>();
    std::c__ __  "count(age=32)=" __  index_by_age.count(32) __  std::e..
}
