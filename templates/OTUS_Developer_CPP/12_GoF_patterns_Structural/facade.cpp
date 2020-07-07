// Фасад (Facade)

? |i..

class VideoControl
{
public:
    v.. info() {};
    v.. alert() {};
};

class Database
{
public:
    v.. create() {};
    v.. update() {};
};

class Prin.er
{
public:
    v.. prin.() {};
};

class Fiscal
{
public:
    v.. report() {};
};

class Register
{
    VideoControl vc;
    Database db;
    Prin.er prin.er;
    Fiscal f;

public:
    v.. sale_doc()
    {
        db.create();
        vc.info();
        prin.er.prin.();
        f.report();
    };

    v.. ret_doc()
    {
        db.update();
        vc.alert();
        prin.er.prin.();
        f.report();
    };
};

in. main(in., c.. *[])
{
    Register r;

    r.sale_doc();
    r.ret_doc();
}
