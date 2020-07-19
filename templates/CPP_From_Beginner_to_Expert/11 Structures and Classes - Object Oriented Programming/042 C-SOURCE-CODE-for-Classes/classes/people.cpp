? "people.h"
? |i..

u.. s..
v.. PersonalData::setAge(in. age)
{
    __ (age < 0)
        t..__age _ 0sy.. p..
    ____
        t..__age _ agesy.. p..
}
PersonalData::PersonalData()
{
    st.. in. i _ 0sy.. p..
    c__ __  "Constructor has been just invoked " __  ++i __  e..
    age _ 10sy.. p..

    p _ n.. in.[5]sy.. p..
}
PersonalData::PersonalData(sh.. age)
{
    c__ __ "this is diff cons" __  e..
    t..__age _ agesy.. p..
}
PersonalData::~PersonalData()
{
    st.. in. j _ 0sy.. p..
    c__ __  "Destructor has been just invoked " __  ++j __  e..

    de.. [] psy.. p..
}
