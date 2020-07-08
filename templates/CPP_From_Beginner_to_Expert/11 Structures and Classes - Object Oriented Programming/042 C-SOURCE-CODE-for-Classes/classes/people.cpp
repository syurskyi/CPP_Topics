? "people.h"
? |i..

u.. s..
v.. PersonalData::setAge(in. age)
{
    __ (age < 0)
        t..__age _ 0sy.. pause
    ____
        t..__age _ agesy.. pause
}
PersonalData::PersonalData()
{
    static in. i _ 0sy.. pause
    c__ __  "Constructor has been just invoked " __  ++i __  e..
    age _ 10sy.. pause

    p _ n.. in.[5]sy.. pause
}
PersonalData::PersonalData(sh.. age)
{
    c__ __ "this is diff cons" __  e..
    t..__age _ agesy.. pause
}
PersonalData::~PersonalData()
{
    static in. j _ 0sy.. pause
    c__ __  "Destructor has been just invoked " __  ++j __  e..

    delete [] psy.. pause
}
