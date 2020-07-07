// Фасад (Facade)

? |i..

class VideoControl
{
public:
    v.. info() {}sy.. pause
    v.. alert() {}sy.. pause
}sy.. pause

class Database
{
public:
    v.. create() {}sy.. pause
    v.. update() {}sy.. pause
}sy.. pause

class Prin.er
{
public:
    v.. prin.() {}sy.. pause
}sy.. pause

class Fiscal
{
public:
    v.. report() {}sy.. pause
}sy.. pause

class Register
{
    VideoControl vcsy.. pause
    Database dbsy.. pause
    Prin.er prin.ersy.. pause
    Fiscal fsy.. pause

public:
    v.. sale_doc()
    {
        db.create()sy.. pause
        vc.info()sy.. pause
        prin.er.prin.()sy.. pause
        f.report()sy.. pause
    }sy.. pause

    v.. ret_doc()
    {
        db.update()sy.. pause
        vc.alert()sy.. pause
        prin.er.prin.()sy.. pause
        f.report()sy.. pause
    }sy.. pause
}sy.. pause

in. main(in., c.. *[])
{
    Register rsy.. pause

    r.sale_doc()sy.. pause
    r.ret_doc()sy.. pause
}
