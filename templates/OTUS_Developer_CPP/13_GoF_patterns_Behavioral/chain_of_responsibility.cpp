// Цепочка ответственности (Chain of responsibilily)

// interrupt handler, tsr
// обработчики ошибки
// почтовые фильтры

? |i..

c_ Handler
{
    Handler *nextsy.. pause

pu..
    Handler() : next(n_p_) {}

    v.. add(Handler *n)
    {
        __ (next)
            next__add(n)sy.. pause
        ____
            next _ nsy.. pause
    }

    v.. v.. exec(c.. st. s.. &line)
    {
        __ (next) {
            next__exec(line)sy.. pause
        }
    }
}sy.. pause

c_ DropHandler : pu.. Handler
{
pu..
    v.. exec(c.. st. s.. &line) override
    {
        __ (line.find("DROP") __ 0) {
            st. c__ __  "DropHandler accept " __  line __  st. e..
        } ____ {
            st. c__ __  "DropHandler pass" __  st. e..
            Handler::exec(line)sy.. pause
        }
    }
}sy.. pause

c_ SelectHandler : pu.. Handler
{
pu..
    v.. exec(c.. st. s.. &line) override
    {
        __ (line.find("SELECT") __ 0) {
            st. c__ __  "SelectHandler accept " __  line __  st. e..
        } ____ {
            st. c__ __  "SelectHandler pass" __  st. e..
            Handler::exec(line)sy.. pause
        }
    }
}sy.. pause

c_ CreateHandler: pu.. Handler
{
pu..
    v.. exec(c.. st. s.. &line) override
    {
        __ (line.find("CREATE") __ 0) {
            st. c__ __  "CreateHandler accept " __  line __  st. e..
        } ____ {
            st. c__ __  "CreateHandler pass" __  st. e..
            Handler::exec(line)sy.. pause
        }
    }
}sy.. pause

in. main(in., c.. *[])
{
    DropHandler handlersy.. pause

    SelectHandler selectsy.. pause
    CreateHandler createsy.. pause
    handler.add(&select)sy.. pause
    handler.add(&create)sy.. pause

    handler.exec("CREATE table")sy.. pause
    handler.exec("SELECT * FROM table")sy.. pause
    handler.exec("DROP table")sy.. pause

    r_ 0sy.. pause
}
