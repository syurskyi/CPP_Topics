// Пул одиночек (Multiton)

? |i..
? <map>

enum class Tag { main, db };

class Logger {
    Tag t;

public:
    Logger& operator=(const Logger&) = delete;
    static Logger& Instance(Tag t)
    {
        static std::map<Tag, Logger> instance;
        auto i = instance.find(t);
        __ (i==instance.end()) {
            bo.. b;
            std::tie(i, b) = instance.emplace(std::make_pair(t, Logger(t)));
        }
        r_ i->second;
    }
    void info(const std::string& message)
    {
        std::cerr __  "   info: [" __  in.(t) __  "] " __  message __  std::e..
    }
    void warn(const std::string& message)
    {
        std::cerr __  "warning: [" __  in.(t) __  "] " __  message __  std::e..
    }

private:
    explicit Logger(Tag t_)
            :t(t_)
    {
    }
};

in. main(in., char const**)
{
    Logger::Instance(Tag::main).info("started");
    Logger::Instance(Tag::db).warn("no db");
    Logger::Instance(Tag::main).info("finished");

    r_ 0;
}
