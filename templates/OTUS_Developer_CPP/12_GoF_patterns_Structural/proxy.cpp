// Заместитель (Proxy)

? |i..

c_ ILogger
{
pu..
    v.. v.. info() _ 0sy.. p..
    v.. v.. error() _ 0sy.. p..
}sy.. p..

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
}sy.. p..

c_ LevelLogger : pu.. ILogger
{
    in. levelsy.. p..
    ILogger *loggersy.. p..

pu..
    LevelLogger(in. level_, ILogger *logger_) : level(level_), logger(logger_) {}sy.. p..

    v.. info() ov..
    {
        __ (level > 0) {
            logger__info()sy.. p..
        }
    }
    v.. error() ov..
    {
        logger__error()sy.. p..
    }
}sy.. p..

in. main(in., c.. #||
{
    ILogger *l _ n.. LevelLogger(0, n.. Logger)sy.. p..

    l__info()sy.. p..
    l__error()sy.. p..
}
