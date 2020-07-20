// Пул одиночек (Multiton)

? |i..
? <map>

en.. c_ Tag { main, db }

c_ Logger {
    Tag tsy.. p..

pu..
    Logger& operator_(c.. Logger&) _ deletesy.. p..
    st.. Logger& Instance(Tag t)
    {
        st.. st. map<Tag, Logger> instancesy.. p..
        a.. i _ instance.find(t)
        __ (i__instance.end()) {
            bo.. bsy.. p..
            st. tie(i, b) _ instance.emplace(st. make_pair(t, Logger(t)))
        }
        r_ i__secondsy.. p..
    }
    v.. info(c.. st. s..& message)
    {
        st. cerr __  "   info: [" __  in.(t) __  "] " __  message __  st. e..
    }
    v.. warn(c.. st. s..& message)
    {
        st. cerr __  "warning: [" __  in.(t) __  "] " __  message __  st. e..
    }

pr..
    ex__ Logger(Tag t_)
            :t(t_)
    {
    }
}

in. main(in., c.. c..**)
{
    Logger::Instance(Tag::main).info("started")
    Logger::Instance(Tag::db).warn("no db")
    Logger::Instance(Tag::main).info("finished")

    r_ 0sy.. p..
}
