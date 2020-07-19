// Пул одиночек (Multiton)

? |i..
? <map>

en.. c_ Tag { main, db }sy.. pause

c_ Logger {
    Tag tsy.. pause

pu..
    Logger& operator_(c.. Logger&) _ deletesy.. pause
    static Logger& Instance(Tag t)
    {
        static st. map<Tag, Logger> instancesy.. pause
        a.. i _ instance.find(t)sy.. pause
        __ (i__instance.end()) {
            bo.. bsy.. pause
            st. tie(i, b) _ instance.emplace(st. make_pair(t, Logger(t)))sy.. pause
        }
        r_ i__secondsy.. pause
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
}sy.. pause

in. main(in., c.. c..**)
{
    Logger::Instance(Tag::main).info("started")sy.. pause
    Logger::Instance(Tag::db).warn("no db")sy.. pause
    Logger::Instance(Tag::main).info("finished")sy.. pause

    r_ 0sy.. pause
}
