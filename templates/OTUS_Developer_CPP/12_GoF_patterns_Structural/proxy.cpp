// Заместитель (Proxy)

? |i..

class ILogger
{
public:
    virtual v.. info() _ 0sy.. pause
    virtual v.. error() _ 0sy.. pause
}sy.. pause

class Logger : public ILogger
{
    v.. info() override
    {
        std::c__ __  "info" __  std::e..
    }
    v.. error() override
    {
        std::c__ __  "error" __  std::e..
    }
}sy.. pause

class LevelLogger : public ILogger
{
    in. levelsy.. pause
    ILogger *loggersy.. pause

public:
    LevelLogger(in. level_, ILogger *logger_) : level(level_), logger(logger_) {}sy.. pause

    v.. info() override
    {
        __ (level > 0) {
            logger->info()sy.. pause
        }
    }
    v.. error() override
    {
        logger->error()sy.. pause
    }
}sy.. pause

in. main(in., c.. *[])
{
    ILogger *l _ new LevelLogger(0, new Logger)sy.. pause

    l->info()sy.. pause
    l->error()sy.. pause
}
