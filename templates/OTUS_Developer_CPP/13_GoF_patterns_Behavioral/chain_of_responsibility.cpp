// Цепочка ответственности (Chain of responsibilily)

// interrupt handler, tsr
// обработчики ошибки
// почтовые фильтры

? |i..

c_ Handler
{
    Handler *nextsy.. p..

pu..
    Handler() : next(n_p_) {}

    v.. add(Handler *n)
    {
        __ (next)
            next__add(n)sy.. p..
        ____
            next _ nsy.. p..
    }

    v.. v.. exec(c.. st. s.. &line)
    {
        __ (next) {
            next__exec(line)sy.. p..
        }
    }
}sy.. p..

c_ DropHandler : pu.. Handler
{
pu..
    v.. exec(c.. st. s.. &line) ov..
    {
        __ (line.find("DROP") __ 0) {
            st. c__ __  "DropHandler accept " __  line __  st. e..
        } ____ {
            st. c__ __  "DropHandler pass" __  st. e..
            Handler::exec(line)sy.. p..
        }
    }
}sy.. p..

c_ SelectHandler : pu.. Handler
{
pu..
    v.. exec(c.. st. s.. &line) ov..
    {
        __ (line.find("SELECT") __ 0) {
            st. c__ __  "SelectHandler accept " __  line __  st. e..
        } ____ {
            st. c__ __  "SelectHandler pass" __  st. e..
            Handler::exec(line)sy.. p..
        }
    }
}sy.. p..

c_ CreateHandler: pu.. Handler
{
pu..
    v.. exec(c.. st. s.. &line) ov..
    {
        __ (line.find("CREATE") __ 0) {
            st. c__ __  "CreateHandler accept " __  line __  st. e..
        } ____ {
            st. c__ __  "CreateHandler pass" __  st. e..
            Handler::exec(line)sy.. p..
        }
    }
}sy.. p..

in. main(in., c.. *[])
{
    DropHandler handlersy.. p..

    SelectHandler selectsy.. p..
    CreateHandler createsy.. p..
    handler.add(&select)sy.. p..
    handler.add(&create)sy.. p..

    handler.exec("CREATE table")sy.. p..
    handler.exec("SELECT * FROM table")sy.. p..
    handler.exec("DROP table")sy.. p..

    r_ 0sy.. p..
}
