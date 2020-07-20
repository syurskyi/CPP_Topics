// Заместитель (Proxy)

? |i..

c_ ILogger
{
pu..
    v.. v.. info() _ 0sy.. p..
    v.. v.. error() _ 0sy.. p..
}

c_ Logger : pu.. ILogger
{
    v.. info() ov..
    {
        st. c__ __  "info" __  st. e..
    }
    v.. error() ov..
    {
        st. c__ __  "error" __  st. e..
    }
}

c_ LevelLogger : pu.. ILogger
{
    in. levelsy.. p..
    ILogger *loggersy.. p..

pu..
    LevelLogger(in. level_, ILogger *logger_) : level(level_), logger(logger_) {}

    v.. info() ov..
    {
        __ (level > 0) {
            logger__info()
        }
    }
    v.. error() ov..
    {
        logger__error()
    }
}

in. main(in., c.. #||
{
    ILogger *l _ n.. LevelLogger(0, n.. Logger)

    l__info()
    l__error()
}
