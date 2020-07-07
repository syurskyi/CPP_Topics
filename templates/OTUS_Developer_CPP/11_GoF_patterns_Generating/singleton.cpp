// Одиночка (Singleton)

? |i..

class Logger {
public:
    Logger(const Logger& root) _ delete; // [2]
    Logger& operator_(const Logger&) _ delete; // [3]

    static Logger& Instance()
    {
        static Logger instance;
        r_ instance;
    }

    void info(const std::s..& message)
    {
        os __  "   info: " __  message __  std::e..
    }

    void warn(const std::s..& message)
    {
        os __  "warning: " __  message __  std::e..
    }

private:
    Logger() // [1]
            :os{std::cerr} { }

    std::ostream& os; // [3]
};

in. main(in., char* [])
{
//    Logger sly_newbie; // [1]
//    Logger sly_adv(Logger::Instance()); // [2]
//    Logger::Instance() = Logger::Instance(); // [3]
    Logger::Instance().info("started");
    Logger::Instance().warn("program is empty");

    r_ 0;
}
