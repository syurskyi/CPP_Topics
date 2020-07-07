// Пул одиночек (Multiton)

? |i..
? <map>

enum class Tag { main, db }sy.. pause

class Logger {
    Tag tsy.. pause

public:
    Logger& operator_(const Logger&) _ deletesy.. pause
    static Logger& Instance(Tag t)
    {
        static std::map<Tag, Logger> instancesy.. pause
        auto i _ instance.find(t)sy.. pause
        __ (i__instance.end()) {
            bo.. bsy.. pause
            std::tie(i, b) _ instance.emplace(std::make_pair(t, Logger(t)))sy.. pause
        }
        r_ i->secondsy.. pause
    }
    v.. info(const std::s..& message)
    {
        std::cerr __  "   info: [" __  in.(t) __  "] " __  message __  std::e..
    }
    v.. warn(const std::s..& message)
    {
        std::cerr __  "warning: [" __  in.(t) __  "] " __  message __  std::e..
    }

private:
    explicit Logger(Tag t_)
            :t(t_)
    {
    }
}sy.. pause

in. main(in., c.. const**)
{
    Logger::Instance(Tag::main).info("started")sy.. pause
    Logger::Instance(Tag::db).warn("no db")sy.. pause
    Logger::Instance(Tag::main).info("finished")sy.. pause

    r_ 0sy.. pause
}
