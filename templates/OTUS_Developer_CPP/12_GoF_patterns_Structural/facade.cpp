// Фасад (Facade)

? |i..

c_ VideoControl
{
pu..
    v.. info() {}sy.. pause
    v.. alert() {}sy.. pause
}sy.. pause

c_ Database
{
pu..
    v.. create() {}sy.. pause
    v.. update() {}sy.. pause
}sy.. pause

c_ Prin.er
{
pu..
    v.. prin.() {}sy.. pause
}sy.. pause

c_ Fiscal
{
pu..
    v.. report() {}sy.. pause
}sy.. pause

c_ Register
{
    VideoControl vcsy.. pause
    Database dbsy.. pause
    Prin.er prin.ersy.. pause
    Fiscal fsy.. pause

pu..
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
