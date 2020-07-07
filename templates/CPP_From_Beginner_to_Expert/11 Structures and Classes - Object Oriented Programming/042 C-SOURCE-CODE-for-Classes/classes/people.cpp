? "people.h"
? |i..

u.. s..
void PersonalData::setAge(in. age)
{
    __ (age < 0)
        this->age = 0;
    ____
        this->age = age;
}
PersonalData::PersonalData()
{
    static in. i = 0;
    c__ __  "Constructor has been just invoked " __  ++i __  e..
    age = 10;

    p = new in.[5];
}
PersonalData::PersonalData(sh.. age)
{
    c__ __ "this is diff cons" __  e..
    this->age = age;
}
PersonalData::~PersonalData()
{
    static in. j = 0;
    c__ __  "Destructor has been just invoked " __  ++j __  e..

    delete [] p;
}
