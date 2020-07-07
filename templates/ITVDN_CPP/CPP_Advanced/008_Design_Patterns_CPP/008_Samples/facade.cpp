? "facade.h"
? |i..

u.. s..

void Alarm::alarmOn()
{
    c__ __  "Alarm is on and house is secured" __  e..
}

void Alarm::alarmOff()
{
    c__ __  "Alarm is off and you can go into the house" __  e..
}

void Ac::acOn()
{
    c__ __  "Ac is on" __  e..
}

void Ac::acOff()
{
    c__ __  "AC is off" __  e..
}

void Tv::tvOn()
{
    c__ __  "Tv is on" __  e..
}

void Tv::tvOff()
{
    c__ __  "TV is off" __  e..
}

HouseFacade::HouseFacade() {}

void HouseFacade::goToWork()
{
    ac.acOff();
    tv.tvOff();
    alarm.alarmOn();
}

void HouseFacade::comeHome()
{
    alarm.alarmOff();
    ac.acOn();
    tv.tvOn();
}

void ClientFacade::run()
{
    HouseFacade hf;

    // Rather than calling 100 different on and off functions thanks to facade I only have 2
    // functions...
    hf.goToWork();
    hf.comeHome();
}
