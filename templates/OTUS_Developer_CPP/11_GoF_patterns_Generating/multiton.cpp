// Пул одиночек (Multiton)

? |i..
? <map>

enum class Tag { main, db };

class Logger {
    Tag t;

public:
    Logger& operator_(const Logger&) _ delete;
    static Logger& Instance(Tag t)
    {
        static std::map<Tag, Logger> instance;
        auto i _ instance.find(t);
        __ (i__instance.end()) {
            bo.. b;
            std::tie(i, b) _ instance.emplace(std::make_pair(t, Logger(t)));
        }
        r_ i->second;
    }
    void info(const std::s..& message)
    {
        std::cerr __  "   info: [" __  in.(t) __  "] " __  message __  std::e..
    }
    void warn(const std::s..& message)
    {
        std::cerr __  "warning: [" __  in.(t) __  "] " __  message __  std::e..
    }

private:
    explicit Logger(Tag t_)
            :t(t_)
    {
    }
};

in. main(in., c.. const**)
{
    Logger::Instance(Tag::main).info("started");
    Logger::Instance(Tag::db).warn("no db");
    Logger::Instance(Tag::main).info("finished");

    r_ 0;
}
