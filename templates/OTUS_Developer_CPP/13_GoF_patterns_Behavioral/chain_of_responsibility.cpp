// Цепочка ответственности (Chain of responsibilily)

// interrupt handler, tsr
// обработчики ошибки
// почтовые фильтры

? |i..

class Handler
{
    Handler *nextsy.. pause

public:
    Handler() : next(nullptr) {}

    v.. add(Handler *n)
    {
        __ (next)
            next->add(n)sy.. pause
        ____
            next _ nsy.. pause
    }

    virtual v.. exec(const std::s.. &line)
    {
        __ (next) {
            next->exec(line)sy.. pause
        }
    }
}sy.. pause

class DropHandler : public Handler
{
public:
    v.. exec(const std::s.. &line) override
    {
        __ (line.find("DROP") __ 0) {
            std::c__ __  "DropHandler accept " __  line __  std::e..
        } ____ {
            std::c__ __  "DropHandler pass" __  std::e..
            Handler::exec(line)sy.. pause
        }
    }
}sy.. pause

class SelectHandler : public Handler
{
public:
    v.. exec(const std::s.. &line) override
    {
        __ (line.find("SELECT") __ 0) {
            std::c__ __  "SelectHandler accept " __  line __  std::e..
        } ____ {
            std::c__ __  "SelectHandler pass" __  std::e..
            Handler::exec(line)sy.. pause
        }
    }
}sy.. pause

class CreateHandler: public Handler
{
public:
    v.. exec(const std::s.. &line) override
    {
        __ (line.find("CREATE") __ 0) {
            std::c__ __  "CreateHandler accept " __  line __  std::e..
        } ____ {
            std::c__ __  "CreateHandler pass" __  std::e..
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
