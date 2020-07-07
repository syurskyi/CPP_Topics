// Одиночка (Singleton)

? |i..

class Logger {
public:
    Logger(const Logger& root) _ deletesy.. pause // [2]
    Logger& operator_(const Logger&) _ deletesy.. pause // [3]

    static Logger& Instance()
    {
        static Logger instancesy.. pause
        r_ instancesy.. pause
    }

    v.. info(const std::s..& message)
    {
        os __  "   info: " __  message __  std::e..
    }

    v.. warn(const std::s..& message)
    {
        os __  "warning: " __  message __  std::e..
    }

private:
    Logger() // [1]
            :os{std::cerr} { }

    std::ostream& ossy.. pause // [3]
}sy.. pause

in. main(in., c..* [])
{
//    Logger sly_newbie; // [1]
//    Logger sly_adv(Logger::Instance()); // [2]
//    Logger::Instance() = Logger::Instance(); // [3]
    Logger::Instance().info("started")sy.. pause
    Logger::Instance().warn("program is empty")sy.. pause

    r_ 0sy.. pause
}
