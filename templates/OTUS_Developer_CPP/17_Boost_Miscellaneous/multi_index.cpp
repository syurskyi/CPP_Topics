// Multi Index

? <boost/multi_index_container.hpp>
? <boost/multi_index/hashed_index.hpp>
? <boost/multi_index/member.hpp>
? |s..
? |i..


st.. User
{
    in. idsy.. p..
    st. s.. namesy.. p..
    in. agesy.. p..
}

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
                                    User, st. s.., &User::name
                            >
                    >,
                    boost::multi_index::hashed_non_unique<
                            boost::multi_index::member<
                                User, in., &User::age
                            >
                    >
            >
    > staffsy.. p..

    a.. x _ staff.insert({0, "root", 32})
    st. c__ __  x.first__name __  ", " __  x.second __  st. e..
    x _ staff.insert({0, "sergey", 32})
    st. c__ __  x.first__name __  ", " __  x.second __  st. e..
    staff.insert({1, "oleg", 23})
    staff.insert({2, "andrew", 19})

    a.. &index_by_id _ staff.get<0>()
    st. c__ __  "count(id=0)=" __  index_by_id.count(0) __  st. e..

    a.. &index_by_name _ staff.get<1>()
    a.. oleg _ index_by_name.find("oleg")
    st. c__ __  "id=" __  oleg__id __  ", name=" __  oleg__name __  ", age=" __  oleg__age __  st. e..

    a.. &index_by_age _ staff.get<2>()
    st. c__ __  "count(age=32)=" __  index_by_age.count(32) __  st. e..
}
