// Заместитель (Proxy)

? |i..

c_ ILogger
{
pu..
    virtual v.. info() _ 0sy.. pause
    virtual v.. error() _ 0sy.. pause
}sy.. pause

c_ Logger : public ILogger
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

c_ LevelLogger : public ILogger
{
    in. levelsy.. pause
    ILogger *loggersy.. pause

pu..
    LevelLogger(in. level_, ILogger *logger_) : level(level_), logger(logger_) {}sy.. pause

    v.. info() override
    {
        __ (level > 0) {
            logger__info()sy.. pause
        }
    }
    v.. error() override
    {
        logger__error()sy.. pause
    }
}sy.. pause

in. main(in., c.. *[])
{
    ILogger *l _ n.. LevelLogger(0, n.. Logger)sy.. pause

    l__info()sy.. pause
    l__error()sy.. pause
}
