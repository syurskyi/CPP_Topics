// Фасад (Facade)

? |i..

c_ VideoControl
{
pu..
    v.. info}sy.. p..
    v.. alert}sy.. p..
}sy.. p..

c_ Database
{
pu..
    v.. create}sy.. p..
    v.. update}sy.. p..
}sy.. p..

c_ Prin.er
{
pu..
    v.. prin.}sy.. p..
}sy.. p..

c_ Fiscal
{
pu..
    v.. report}sy.. p..
}sy.. p..

c_ Register
{
    VideoControl vcsy.. p..
    Database dbsy.. p..
    Prin.er prin.ersy.. p..
    Fiscal fsy.. p..

pu..
    v.. sale_doc()
    {
        db.create()sy.. p..
        vc.info()sy.. p..
        prin.er.prin.()sy.. p..
        f.report()sy.. p..
    }sy.. p..

    v.. ret_doc()
    {
        db.update()sy.. p..
        vc.alert()sy.. p..
        prin.er.prin.()sy.. p..
        f.report()sy.. p..
    }sy.. p..
}sy.. p..

in. main(in., c.. #||
{
    Register rsy.. p..

    r.sale_doc()sy.. p..
    r.ret_doc()sy.. p..
}
