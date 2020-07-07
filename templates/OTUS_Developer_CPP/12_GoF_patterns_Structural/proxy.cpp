// Заместитель (Proxy)

? |i..

class ILogger
{
public:
    virtual v.. info() _ 0;
    virtual v.. error() _ 0;
};

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
};

class LevelLogger : public ILogger
{
    in. level;
    ILogger *logger;

public:
    LevelLogger(in. level_, ILogger *logger_) : level(level_), logger(logger_) {};

    v.. info() override
    {
        __ (level > 0) {
            logger->info();
        }
    }
    v.. error() override
    {
        logger->error();
    }
};

in. main(in., c.. *[])
{
    ILogger *l _ new LevelLogger(0, new Logger);

    l->info();
    l->error();
}
