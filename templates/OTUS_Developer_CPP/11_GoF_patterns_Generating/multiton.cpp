// Пул одиночек (Multiton)

? |i..
? <map>

enum c_ Tag { main, db }sy.. pause

c_ Logger {
    Tag tsy.. pause

pu..
    Logger& operator_(c.. Logger&) _ deletesy.. pause
    static Logger& Instance(Tag t)
    {
        static std::map<Tag, Logger> instancesy.. pause
        auto i _ instance.find(t)sy.. pause
        __ (i__instance.end()) {
            bo.. bsy.. pause
            std::tie(i, b) _ instance.emplace(std::make_pair(t, Logger(t)))sy.. pause
        }
        r_ i__secondsy.. pause
    }
    v.. info(c.. std::s..& message)
    {
        std::cerr __  "   info: [" __  in.(t) __  "] " __  message __  std::e..
    }
    v.. warn(c.. std::s..& message)
    {
        std::cerr __  "warning: [" __  in.(t) __  "] " __  message __  std::e..
    }

pr..
    explicit Logger(Tag t_)
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
