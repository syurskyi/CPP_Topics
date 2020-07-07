// Заместитель (Proxy)

? |i..

class ILogger
{
public:
    virtual void info() _ 0;
    virtual void error() _ 0;
};

class Logger : public ILogger
{
    void info() override
    {
        std::c__ __  "info" __  std::e..
    }
    void error() override
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

    void info() override
    {
        __ (level > 0) {
            logger->info();
        }
    }
    void error() override
    {
        logger->error();
    }
};

in. main(in., char *[])
{
    ILogger *l _ new LevelLogger(0, new Logger);

    l->info();
    l->error();
}
