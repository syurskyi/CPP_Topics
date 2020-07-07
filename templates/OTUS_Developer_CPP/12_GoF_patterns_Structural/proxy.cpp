// Заместитель (Proxy)

#include <iostream>

class ILogger
{
public:
    virtual void info() = 0;
    virtual void error() = 0;
};

class Logger : public ILogger
{
    void info() override
    {
        std::cout << "info" << std::endl;
    }
    void error() override
    {
        std::cout << "error" << std::endl;
    }
};

class LevelLogger : public ILogger
{
    int level;
    ILogger *logger;

public:
    LevelLogger(int level_, ILogger *logger_) : level(level_), logger(logger_) {};

    void info() override
    {
        if (level > 0) {
            logger->info();
        }
    }
    void error() override
    {
        logger->error();
    }
};

int main(int, char *[])
{
    ILogger *l = new LevelLogger(0, new Logger);

    l->info();
    l->error();
}
