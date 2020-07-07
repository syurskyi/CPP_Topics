// Цепочка ответственности (Chain of responsibilily)

// interrupt handler, tsr
// обработчики ошибки
// почтовые фильтры

? |i..

class Handler
{
    Handler *next;

public:
    Handler() : next(nullptr) {}

    void add(Handler *n)
    {
        __ (next)
            next->add(n);
        ____
            next _ n;
    }

    virtual void exec(const std::s.. &line)
    {
        __ (next) {
            next->exec(line);
        }
    }
};

class DropHandler : public Handler
{
public:
    void exec(const std::s.. &line) override
    {
        __ (line.find("DROP") __ 0) {
            std::c__ __  "DropHandler accept " __  line __  std::e..
        } ____ {
            std::c__ __  "DropHandler pass" __  std::e..
            Handler::exec(line);
        }
    }
};

class SelectHandler : public Handler
{
public:
    void exec(const std::s.. &line) override
    {
        __ (line.find("SELECT") __ 0) {
            std::c__ __  "SelectHandler accept " __  line __  std::e..
        } ____ {
            std::c__ __  "SelectHandler pass" __  std::e..
            Handler::exec(line);
        }
    }
};

class CreateHandler: public Handler
{
public:
    void exec(const std::s.. &line) override
    {
        __ (line.find("CREATE") __ 0) {
            std::c__ __  "CreateHandler accept " __  line __  std::e..
        } ____ {
            std::c__ __  "CreateHandler pass" __  std::e..
            Handler::exec(line);
        }
    }
};

in. main(in., c.. *[])
{
    DropHandler handler;

    SelectHandler select;
    CreateHandler create;
    handler.add(&select);
    handler.add(&create);

    handler.exec("CREATE table");
    handler.exec("SELECT * FROM table");
    handler.exec("DROP table");

    r_ 0;
}
