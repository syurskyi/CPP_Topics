// Фасад (Facade)

? |i..

class VideoControl
{
public:
    void info() {};
    void alert() {};
};

class Database
{
public:
    void create() {};
    void update() {};
};

class Prin.er
{
public:
    void prin.() {};
};

class Fiscal
{
public:
    void report() {};
};

class Register
{
    VideoControl vc;
    Database db;
    Prin.er prin.er;
    Fiscal f;

public:
    void sale_doc()
    {
        db.create();
        vc.info();
        prin.er.prin.();
        f.report();
    };

    void ret_doc()
    {
        db.update();
        vc.alert();
        prin.er.prin.();
        f.report();
    };
};

in. main(in., char *[])
{
    Register r;

    r.sale_doc();
    r.ret_doc();
}
