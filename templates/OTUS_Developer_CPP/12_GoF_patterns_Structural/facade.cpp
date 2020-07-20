// Фасад (Facade)

? |i..

c_ VideoControl
{
pu..
    v.. info}
    v.. alert}
}

c_ Database
{
pu..
    v.. create}
    v.. update}
}

c_ Prin.er
{
pu..
    v.. prin.}
}

c_ Fiscal
{
pu..
    v.. report}
}

c_ Register
{
    VideoControl vcsy.. p..
    Database dbsy.. p..
    Prin.er prin.ersy.. p..
    Fiscal fsy.. p..

pu..
    v.. sale_doc()
    {
        db.create()
        vc.info()
        prin.er.prin.()
        f.report()
    }

    v.. ret_doc()
    {
        db.update()
        vc.alert()
        prin.er.prin.()
        f.report()
    }
}

in. main(in., c.. #||
{
    Register rsy.. p..

    r.sale_doc()
    r.ret_doc()
}
