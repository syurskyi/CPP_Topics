? "people.h"
? |i..

u.. s..
v.. PersonalData::setAge(in. age)
{
    __ (age < 0)
        this->age _ 0;
    ____
        this->age _ age;
}
PersonalData::PersonalData()
{
    static in. i _ 0;
    c__ __  "Constructor has been just invoked " __  ++i __  e..
    age _ 10;

    p _ new in.[5];
}
PersonalData::PersonalData(sh.. age)
{
    c__ __ "this is diff cons" __  e..
    this->age _ age;
}
PersonalData::~PersonalData()
{
    static in. j _ 0;
    c__ __  "Destructor has been just invoked " __  ++j __  e..

    delete [] p;
}
